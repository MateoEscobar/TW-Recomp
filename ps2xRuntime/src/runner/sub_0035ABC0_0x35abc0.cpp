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

// Function: sub_0035ABC0
// Address: 0x35abc0 - 0x35ac20
void sub_0035ABC0_0x35abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ABC0_0x35abc0");
#endif

    switch (ctx->pc) {
        case 0x35abe0u: goto label_35abe0;
        case 0x35abe8u: goto label_35abe8;
        case 0x35abfcu: goto label_35abfc;
        case 0x35ac08u: goto label_35ac08;
        default: break;
    }

    ctx->pc = 0x35abc0u;

    // 0x35abc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35abc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35abc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35abc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35abcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35abccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35abd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35abd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35ABD8u;
    SET_GPR_U32(ctx, 31, 0x35ABE0u);
    ctx->pc = 0x35ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ABD8u;
    // 0x35abdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35ABD8u, 0x35ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABE0u;
label_35abe0:
    // 0x35abe0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35ABE0u;
    SET_GPR_U32(ctx, 31, 0x35ABE8u);
    ctx->pc = 0x35ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ABE0u;
    // 0x35abe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35ABE0u, 0x35ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABE8u;
label_35abe8:
    // 0x35abe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35abe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35abf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abf4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35ABF4u;
    SET_GPR_U32(ctx, 31, 0x35ABFCu);
    ctx->pc = 0x35ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ABF4u;
    // 0x35abf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35ABF4u, 0x35ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABFCu;
label_35abfc:
    // 0x35abfc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35abfcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ac00: 0xc08d3be  jal         func_234EF8
    ctx->pc = 0x35AC00u;
    SET_GPR_U32(ctx, 31, 0x35AC08u);
    ctx->pc = 0x35AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC00u;
    // 0x35ac04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x35AC00u, 0x35AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC08u;
label_35ac08:
    // 0x35ac08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ac0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ac0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ac10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ac14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac18: 0x3e00008  jr          $ra
    ctx->pc = 0x35AC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC18u;
        // 0x35ac1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AC20u;
}

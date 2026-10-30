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

// Function: sub_00323748
// Address: 0x323748 - 0x3237b0
void sub_00323748_0x323748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323748_0x323748");
#endif

    switch (ctx->pc) {
        case 0x323760u: goto label_323760;
        case 0x323780u: goto label_323780;
        default: break;
    }

    ctx->pc = 0x323748u;

    // 0x323748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32374c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323758: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323758u;
    SET_GPR_U32(ctx, 31, 0x323760u);
    ctx->pc = 0x32375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323758u;
    // 0x32375c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323758u, 0x323760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323760u;
label_323760:
    // 0x323760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x323760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323764: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x323764u;
    {
        const bool branch_taken_0x323764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323764u;
        // 0x323768: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323764) {
            ctx->pc = 0x323794u;
            goto label_323794;
        }
    }
    ctx->pc = 0x32376Cu;
    // 0x32376c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323770: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323770u;
    {
        const bool branch_taken_0x323770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x323774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323770u;
        // 0x323774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323770) {
            ctx->pc = 0x323788u;
            goto label_323788;
        }
    }
    ctx->pc = 0x323778u;
    // 0x323778: 0xc0ccdb8  jal         func_3336E0
    ctx->pc = 0x323778u;
    SET_GPR_U32(ctx, 31, 0x323780u);
    ctx->pc = 0x32377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323778u;
    // 0x32377c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3336E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3336E0u, 0x323778u, 0x323780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323780u;
label_323780:
    // 0x323780: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x323780u;
    {
        const bool branch_taken_0x323780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323780) {
            ctx->pc = 0x323784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323780u;
            // 0x323784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323798u;
            goto label_323798;
        }
    }
    ctx->pc = 0x323788u;
label_323788:
    // 0x323788: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32378c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32378Cu;
    {
        const bool branch_taken_0x32378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32378Cu;
        // 0x323790: 0x94420008  lhu         $v0, 0x8($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32378c) {
            ctx->pc = 0x323798u;
            goto label_323798;
        }
    }
    ctx->pc = 0x323794u;
label_323794:
    // 0x323794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x323794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323798:
    // 0x323798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32379c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32379cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3237a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3237a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3237a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3237A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3237A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237A4u;
        // 0x3237a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3237A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3237ACu;
    // 0x3237ac: 0x0  nop
    ctx->pc = 0x3237acu;
    // NOP
    ctx->pc = 0x3237b0u;
}

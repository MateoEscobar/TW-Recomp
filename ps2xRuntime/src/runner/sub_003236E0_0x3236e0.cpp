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

// Function: sub_003236E0
// Address: 0x3236e0 - 0x323748
void sub_003236E0_0x3236e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003236E0_0x3236e0");
#endif

    switch (ctx->pc) {
        case 0x3236f8u: goto label_3236f8;
        case 0x323718u: goto label_323718;
        default: break;
    }

    ctx->pc = 0x3236e0u;

    // 0x3236e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3236e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3236e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3236e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3236e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3236e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3236ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3236ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3236f0: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x3236F0u;
    SET_GPR_U32(ctx, 31, 0x3236F8u);
    ctx->pc = 0x3236F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236F0u;
    // 0x3236f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x3236F0u, 0x3236F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236F8u;
label_3236f8:
    // 0x3236f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3236f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236fc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3236FCu;
    {
        const bool branch_taken_0x3236fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236FCu;
        // 0x323700: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236fc) {
            ctx->pc = 0x32372Cu;
            goto label_32372c;
        }
    }
    ctx->pc = 0x323704u;
    // 0x323704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323708: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323708u;
    {
        const bool branch_taken_0x323708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323708u;
        // 0x32370c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323708) {
            ctx->pc = 0x323720u;
            goto label_323720;
        }
    }
    ctx->pc = 0x323710u;
    // 0x323710: 0xc0ccdb8  jal         func_3336E0
    ctx->pc = 0x323710u;
    SET_GPR_U32(ctx, 31, 0x323718u);
    ctx->pc = 0x323714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323710u;
    // 0x323714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3336E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3336E0u, 0x323710u, 0x323718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323718u;
label_323718:
    // 0x323718: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x323718u;
    {
        const bool branch_taken_0x323718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323718) {
            ctx->pc = 0x32371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323718u;
            // 0x32371c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323730u;
            goto label_323730;
        }
    }
    ctx->pc = 0x323720u;
label_323720:
    // 0x323720: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x323724u;
    {
        const bool branch_taken_0x323724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323724u;
        // 0x323728: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323724) {
            ctx->pc = 0x323730u;
            goto label_323730;
        }
    }
    ctx->pc = 0x32372Cu;
label_32372c:
    // 0x32372c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323730:
    // 0x323730: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32373c: 0x3e00008  jr          $ra
    ctx->pc = 0x32373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32373Cu;
        // 0x323740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323744u;
    // 0x323744: 0x0  nop
    ctx->pc = 0x323744u;
    // NOP
    ctx->pc = 0x323748u;
}

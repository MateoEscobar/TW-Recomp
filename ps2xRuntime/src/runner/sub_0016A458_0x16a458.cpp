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

// Function: sub_0016A458
// Address: 0x16a458 - 0x16a4a8
void sub_0016A458_0x16a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A458_0x16a458");
#endif

    switch (ctx->pc) {
        case 0x16a480u: goto label_16a480;
        case 0x16a48cu: goto label_16a48c;
        default: break;
    }

    ctx->pc = 0x16a458u;

    // 0x16a458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a45c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a464: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a464u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a46c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a470: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A470u;
    {
        const bool branch_taken_0x16a470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A470u;
        // 0x16a474: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a470) {
            ctx->pc = 0x16A494u;
            goto label_16a494;
        }
    }
    ctx->pc = 0x16A478u;
    // 0x16a478: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A478u;
    SET_GPR_U32(ctx, 31, 0x16A480u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A478u, 0x16A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A480u;
label_16a480:
    // 0x16a480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a484: 0xc059856  jal         func_166158
    ctx->pc = 0x16A484u;
    SET_GPR_U32(ctx, 31, 0x16A48Cu);
    ctx->pc = 0x16A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A484u;
    // 0x16a488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16A484u, 0x16A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A48Cu;
label_16a48c:
    // 0x16a48c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A48Cu;
    {
        const bool branch_taken_0x16a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A48Cu;
        // 0x16a490: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a48c) {
            ctx->pc = 0x16A49Cu;
            goto label_16a49c;
        }
    }
    ctx->pc = 0x16A494u;
label_16a494:
    // 0x16a494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a498: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a49c:
    // 0x16a49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4A0u;
        // 0x16a4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A4A8u;
}

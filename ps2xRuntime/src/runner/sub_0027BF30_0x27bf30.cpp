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

// Function: sub_0027BF30
// Address: 0x27bf30 - 0x27bf98
void sub_0027BF30_0x27bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BF30_0x27bf30");
#endif

    switch (ctx->pc) {
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf70u: goto label_27bf70;
        default: break;
    }

    ctx->pc = 0x27bf30u;

    // 0x27bf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bf34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27bf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27bf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27bf3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bf40: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BF40u;
    SET_GPR_U32(ctx, 31, 0x27BF48u);
    ctx->pc = 0x27BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF40u;
    // 0x27bf44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BF40u, 0x27BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF48u;
label_27bf48:
    // 0x27bf48: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x27bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27bf4c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27BF4Cu;
    {
        const bool branch_taken_0x27bf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF4Cu;
        // 0x27bf50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf4c) {
            ctx->pc = 0x27BF7Cu;
            goto label_27bf7c;
        }
    }
    ctx->pc = 0x27BF54u;
    // 0x27bf54: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BF54u;
    SET_GPR_U32(ctx, 31, 0x27BF5Cu);
    ctx->pc = 0x27BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF54u;
    // 0x27bf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BF54u, 0x27BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF5Cu;
label_27bf5c:
    // 0x27bf5c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x27bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27bf60: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BF60u;
    {
        const bool branch_taken_0x27bf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27bf60) {
            ctx->pc = 0x27BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BF60u;
            // 0x27bf64: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BF80u;
            goto label_27bf80;
        }
    }
    ctx->pc = 0x27BF68u;
    // 0x27bf68: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BF68u;
    SET_GPR_U32(ctx, 31, 0x27BF70u);
    ctx->pc = 0x27BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF68u;
    // 0x27bf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BF68u, 0x27BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF70u;
label_27bf70:
    // 0x27bf70: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x27bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27bf74: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BF74u;
    {
        const bool branch_taken_0x27bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF74u;
        // 0x27bf78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf74) {
            ctx->pc = 0x27BF84u;
            goto label_27bf84;
        }
    }
    ctx->pc = 0x27BF7Cu;
label_27bf7c:
    // 0x27bf7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27bf7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bf80:
    // 0x27bf80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27bf80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bf84:
    // 0x27bf84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27bf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bf88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bf88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF90u;
        // 0x27bf94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BF98u;
}

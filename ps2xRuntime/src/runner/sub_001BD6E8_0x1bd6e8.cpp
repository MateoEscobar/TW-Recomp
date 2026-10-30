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

// Function: sub_001BD6E8
// Address: 0x1bd6e8 - 0x1bd740
void sub_001BD6E8_0x1bd6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD6E8_0x1bd6e8");
#endif

    switch (ctx->pc) {
        case 0x1bd710u: goto label_1bd710;
        case 0x1bd720u: goto label_1bd720;
        default: break;
    }

    ctx->pc = 0x1bd6e8u;

    // 0x1bd6e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bd6ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bd6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bd6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd6f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd6fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1bd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bd700: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD700u;
    {
        const bool branch_taken_0x1bd700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD700u;
        // 0x1bd704: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd700) {
            ctx->pc = 0x1BD724u;
            goto label_1bd724;
        }
    }
    ctx->pc = 0x1BD708u;
    // 0x1bd708: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1BD708u;
    SET_GPR_U32(ctx, 31, 0x1BD710u);
    ctx->pc = 0x1BD70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD708u;
    // 0x1bd70c: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1BD708u, 0x1BD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD710u;
label_1bd710:
    // 0x1bd710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD710u;
    {
        const bool branch_taken_0x1bd710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD710u;
        // 0x1bd714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd710) {
            ctx->pc = 0x1BD724u;
            goto label_1bd724;
        }
    }
    ctx->pc = 0x1BD718u;
    // 0x1bd718: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1BD718u;
    SET_GPR_U32(ctx, 31, 0x1BD720u);
    ctx->pc = 0x1BD71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD718u;
    // 0x1bd71c: 0x8c850094  lw          $a1, 0x94($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1BD718u, 0x1BD720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD720u;
label_1bd720:
    // 0x1bd720: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1bd720u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bd724:
    // 0x1bd724: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bd724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd728: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bd728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd72c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd734: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD734u;
        // 0x1bd738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD73Cu;
    // 0x1bd73c: 0x0  nop
    ctx->pc = 0x1bd73cu;
    // NOP
    ctx->pc = 0x1bd740u;
}

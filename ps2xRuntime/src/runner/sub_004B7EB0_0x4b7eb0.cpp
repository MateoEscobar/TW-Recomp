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

// Function: sub_004B7EB0
// Address: 0x4b7eb0 - 0x4b7f00
void sub_004B7EB0_0x4b7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7EB0_0x4b7eb0");
#endif

    switch (ctx->pc) {
        case 0x4b7eccu: goto label_4b7ecc;
        case 0x4b7ee8u: goto label_4b7ee8;
        default: break;
    }

    ctx->pc = 0x4b7eb0u;

    // 0x4b7eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b7eb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b7eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b7ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7ec0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b7ec4: 0xc12cda0  jal         func_4B3680
    ctx->pc = 0x4B7EC4u;
    SET_GPR_U32(ctx, 31, 0x4B7ECCu);
    ctx->pc = 0x4B7EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7EC4u;
    // 0x4b7ec8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3680u, 0x4B7EC4u, 0x4B7ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7ECCu;
label_4b7ecc:
    // 0x4b7ecc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b7ed0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7ED0u;
    {
        const bool branch_taken_0x4b7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7ED0u;
        // 0x4b7ed4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7ed0) {
            ctx->pc = 0x4B7EE8u;
            goto label_4b7ee8;
        }
    }
    ctx->pc = 0x4B7ED8u;
    // 0x4b7ed8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7ED8u;
    {
        const bool branch_taken_0x4b7ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7ED8u;
        // 0x4b7edc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7ed8) {
            ctx->pc = 0x4B7EE8u;
            goto label_4b7ee8;
        }
    }
    ctx->pc = 0x4B7EE0u;
    // 0x4b7ee0: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x4B7EE0u;
    SET_GPR_U32(ctx, 31, 0x4B7EE8u);
    ctx->pc = 0x4B7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7EE0u;
    // 0x4b7ee4: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x4B7EE0u, 0x4B7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7EE8u;
label_4b7ee8:
    // 0x4b7ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b7ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7eec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7EF4u;
        // 0x4b7ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7EFCu;
    // 0x4b7efc: 0x0  nop
    ctx->pc = 0x4b7efcu;
    // NOP
    ctx->pc = 0x4b7f00u;
}

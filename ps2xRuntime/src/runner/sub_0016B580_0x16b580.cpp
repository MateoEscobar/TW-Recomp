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

// Function: sub_0016B580
// Address: 0x16b580 - 0x16b5e0
void sub_0016B580_0x16b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B580_0x16b580");
#endif

    switch (ctx->pc) {
        case 0x16b5a8u: goto label_16b5a8;
        default: break;
    }

    ctx->pc = 0x16b580u;

    // 0x16b580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b584: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b588: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b58c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b58cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b598: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B598u;
    {
        const bool branch_taken_0x16b598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B598u;
        // 0x16b59c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b598) {
            ctx->pc = 0x16B5B8u;
            goto label_16b5b8;
        }
    }
    ctx->pc = 0x16B5A0u;
    // 0x16b5a0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B5A0u;
    SET_GPR_U32(ctx, 31, 0x16B5A8u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B5A0u, 0x16B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5A8u;
label_16b5a8:
    // 0x16b5a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16b5a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5ac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16b5b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B5B0u;
    {
        const bool branch_taken_0x16b5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5B0u;
        // 0x16b5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5b0) {
            ctx->pc = 0x16B5C0u;
            goto label_16b5c0;
        }
    }
    ctx->pc = 0x16B5B8u;
label_16b5b8:
    // 0x16b5b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16B5B8u;
    {
        const bool branch_taken_0x16b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5B8u;
        // 0x16b5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5b8) {
            ctx->pc = 0x16B5D0u;
            goto label_16b5d0;
        }
    }
    ctx->pc = 0x16B5C0u;
label_16b5c0:
    // 0x16b5c0: 0x52020002  beql        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B5C0u;
    {
        const bool branch_taken_0x16b5c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b5c0) {
            ctx->pc = 0x16B5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B5C0u;
            // 0x16b5c4: 0x8c6205e8  lw          $v0, 0x5E8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B5CCu;
            goto label_16b5cc;
        }
    }
    ctx->pc = 0x16B5C8u;
    // 0x16b5c8: 0x8c6205f0  lw          $v0, 0x5F0($v1)
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1520)));
label_16b5cc:
    // 0x16b5cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16b5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16b5d0:
    // 0x16b5d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5D8u;
        // 0x16b5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B5E0u;
}

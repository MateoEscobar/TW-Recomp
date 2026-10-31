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

// Function: sub_0021D080
// Address: 0x21d080 - 0x21d0e0
void sub_0021D080_0x21d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D080_0x21d080");
#endif

    switch (ctx->pc) {
        case 0x21d09cu: goto label_21d09c;
        case 0x21d0acu: goto label_21d0ac;
        default: break;
    }

    ctx->pc = 0x21d080u;

    // 0x21d080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d084: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21d088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d08c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d094: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x21D094u;
    SET_GPR_U32(ctx, 31, 0x21D09Cu);
    ctx->pc = 0x21D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D094u;
    // 0x21d098: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x21D094u, 0x21D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D09Cu;
label_21d09c:
    // 0x21d09c: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21D09Cu;
    {
        const bool branch_taken_0x21d09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x21D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D09Cu;
        // 0x21d0a0: 0x260202c0  addiu       $v0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d09c) {
            ctx->pc = 0x21D0CCu;
            goto label_21d0cc;
        }
    }
    ctx->pc = 0x21D0A4u;
    // 0x21d0a4: 0xc088f04  jal         func_223C10
    ctx->pc = 0x21D0A4u;
    SET_GPR_U32(ctx, 31, 0x21D0ACu);
    ctx->pc = 0x21D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0A4u;
    // 0x21d0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x21D0A4u, 0x21D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0ACu;
label_21d0ac:
    // 0x21d0ac: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D0ACu;
    {
        const bool branch_taken_0x21d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x21d0ac) {
            ctx->pc = 0x21D0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D0ACu;
            // 0x21d0b0: 0x86030092  lh          $v1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D0BCu;
            goto label_21d0bc;
        }
    }
    ctx->pc = 0x21D0B4u;
    // 0x21d0b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21D0B4u;
    {
        const bool branch_taken_0x21d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0B4u;
        // 0x21d0b8: 0x260202c0  addiu       $v0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0b4) {
            ctx->pc = 0x21D0CCu;
            goto label_21d0cc;
        }
    }
    ctx->pc = 0x21D0BCu;
label_21d0bc:
    // 0x21d0bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21d0c0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21d0c4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21d0c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21d0cc:
    // 0x21d0cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21d0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0D8u;
        // 0x21d0dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D0E0u;
}

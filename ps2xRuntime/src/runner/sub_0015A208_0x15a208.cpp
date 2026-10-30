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

// Function: sub_0015A208
// Address: 0x15a208 - 0x15a250
void sub_0015A208_0x15a208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A208_0x15a208");
#endif

    switch (ctx->pc) {
        case 0x15a230u: goto label_15a230;
        default: break;
    }

    ctx->pc = 0x15a208u;

    // 0x15a208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a20c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15a214: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A214u;
    {
        const bool branch_taken_0x15a214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A214u;
        // 0x15a218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a214) {
            ctx->pc = 0x15A23Cu;
            goto label_15a23c;
        }
    }
    ctx->pc = 0x15A21Cu;
    // 0x15a21c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A21Cu;
    {
        const bool branch_taken_0x15a21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A21Cu;
        // 0x15a220: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a21c) {
            ctx->pc = 0x15A23Cu;
            goto label_15a23c;
        }
    }
    ctx->pc = 0x15A224u;
    // 0x15a224: 0x261057e0  addiu       $s0, $s0, 0x57E0
    ctx->pc = 0x15a224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22496));
    // 0x15a228: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15A228u;
    SET_GPR_U32(ctx, 31, 0x15A230u);
    ctx->pc = 0x15A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A228u;
    // 0x15a22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15A228u, 0x15A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A230u;
label_15a230:
    // 0x15a230: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15a230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15a234: 0x24638538  addiu       $v1, $v1, -0x7AC8
    ctx->pc = 0x15a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935864));
    // 0x15a238: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15a238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_15a23c:
    // 0x15a23c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15a23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a244: 0x3e00008  jr          $ra
    ctx->pc = 0x15A244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A244u;
        // 0x15a248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A24Cu;
    // 0x15a24c: 0x0  nop
    ctx->pc = 0x15a24cu;
    // NOP
    ctx->pc = 0x15a250u;
}

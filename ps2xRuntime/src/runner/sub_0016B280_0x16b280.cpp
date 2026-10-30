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

// Function: sub_0016B280
// Address: 0x16b280 - 0x16b2c8
void sub_0016B280_0x16b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B280_0x16b280");
#endif

    switch (ctx->pc) {
        case 0x16b2a8u: goto label_16b2a8;
        case 0x16b2b4u: goto label_16b2b4;
        default: break;
    }

    ctx->pc = 0x16b280u;

    // 0x16b280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b284: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b288: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b28c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b28cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b298: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B298u;
    {
        const bool branch_taken_0x16b298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B298u;
        // 0x16b29c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b298) {
            ctx->pc = 0x16B2B4u;
            goto label_16b2b4;
        }
    }
    ctx->pc = 0x16B2A0u;
    // 0x16b2a0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B2A0u;
    SET_GPR_U32(ctx, 31, 0x16B2A8u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B2A0u, 0x16B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2A8u;
label_16b2a8:
    // 0x16b2a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2ac: 0xc05973e  jal         func_165CF8
    ctx->pc = 0x16B2ACu;
    SET_GPR_U32(ctx, 31, 0x16B2B4u);
    ctx->pc = 0x16B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2ACu;
    // 0x16b2b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CF8u, 0x16B2ACu, 0x16B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2B4u;
label_16b2b4:
    // 0x16b2b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2BCu;
        // 0x16b2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B2C4u;
    // 0x16b2c4: 0x0  nop
    ctx->pc = 0x16b2c4u;
    // NOP
    ctx->pc = 0x16b2c8u;
}

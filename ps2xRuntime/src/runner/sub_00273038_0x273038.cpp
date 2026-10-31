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

// Function: sub_00273038
// Address: 0x273038 - 0x273090
void sub_00273038_0x273038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273038_0x273038");
#endif

    switch (ctx->pc) {
        case 0x273054u: goto label_273054;
        case 0x27306cu: goto label_27306c;
        case 0x273078u: goto label_273078;
        default: break;
    }

    ctx->pc = 0x273038u;

    // 0x273038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27303c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x273040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273044: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x273044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x273048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27304c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27304Cu;
    SET_GPR_U32(ctx, 31, 0x273054u);
    ctx->pc = 0x273050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27304Cu;
    // 0x273050: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27304Cu, 0x273054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273054u;
label_273054:
    // 0x273054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273058: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273058u;
    {
        const bool branch_taken_0x273058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273058u;
        // 0x27305c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273058) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x273060u;
    // 0x273060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273064: 0xc08b3ae  jal         func_22CEB8
    ctx->pc = 0x273064u;
    SET_GPR_U32(ctx, 31, 0x27306Cu);
    ctx->pc = 0x273068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273064u;
    // 0x273068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x273064u, 0x27306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27306Cu;
label_27306c:
    // 0x27306c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273070: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x273070u;
    SET_GPR_U32(ctx, 31, 0x273078u);
    ctx->pc = 0x273074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273070u;
    // 0x273074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x273070u, 0x273078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273078u;
label_273078:
    // 0x273078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x273078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27307c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27307cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273084: 0x3e00008  jr          $ra
    ctx->pc = 0x273084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273084u;
        // 0x273088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27308Cu;
    // 0x27308c: 0x0  nop
    ctx->pc = 0x27308cu;
    // NOP
    ctx->pc = 0x273090u;
}

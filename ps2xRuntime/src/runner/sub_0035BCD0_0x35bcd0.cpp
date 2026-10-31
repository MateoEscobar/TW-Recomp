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

// Function: sub_0035BCD0
// Address: 0x35bcd0 - 0x35bd30
void sub_0035BCD0_0x35bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BCD0_0x35bcd0");
#endif

    switch (ctx->pc) {
        case 0x35bcf0u: goto label_35bcf0;
        case 0x35bcf8u: goto label_35bcf8;
        case 0x35bd0cu: goto label_35bd0c;
        case 0x35bd18u: goto label_35bd18;
        default: break;
    }

    ctx->pc = 0x35bcd0u;

    // 0x35bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35bcd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bcd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35bcdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35bce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bce8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BCE8u;
    SET_GPR_U32(ctx, 31, 0x35BCF0u);
    ctx->pc = 0x35BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BCE8u;
    // 0x35bcec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BCE8u, 0x35BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BCF0u;
label_35bcf0:
    // 0x35bcf0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BCF0u;
    SET_GPR_U32(ctx, 31, 0x35BCF8u);
    ctx->pc = 0x35BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BCF0u;
    // 0x35bcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BCF0u, 0x35BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BCF8u;
label_35bcf8:
    // 0x35bcf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35bcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bcfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd04: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35BD04u;
    SET_GPR_U32(ctx, 31, 0x35BD0Cu);
    ctx->pc = 0x35BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD04u;
    // 0x35bd08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35BD04u, 0x35BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD0Cu;
label_35bd0c:
    // 0x35bd0c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35bd0cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35bd10: 0xc08d568  jal         func_2355A0
    ctx->pc = 0x35BD10u;
    SET_GPR_U32(ctx, 31, 0x35BD18u);
    ctx->pc = 0x35BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD10u;
    // 0x35bd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2355A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2355A0u, 0x35BD10u, 0x35BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD18u;
label_35bd18:
    // 0x35bd18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35bd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bd1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bd28: 0x3e00008  jr          $ra
    ctx->pc = 0x35BD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD28u;
        // 0x35bd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BD30u;
}

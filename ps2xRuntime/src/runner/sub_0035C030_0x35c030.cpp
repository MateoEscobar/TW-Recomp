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

// Function: sub_0035C030
// Address: 0x35c030 - 0x35c090
void sub_0035C030_0x35c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C030_0x35c030");
#endif

    switch (ctx->pc) {
        case 0x35c050u: goto label_35c050;
        case 0x35c058u: goto label_35c058;
        case 0x35c06cu: goto label_35c06c;
        case 0x35c078u: goto label_35c078;
        default: break;
    }

    ctx->pc = 0x35c030u;

    // 0x35c030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35c03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c048: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C048u;
    SET_GPR_U32(ctx, 31, 0x35C050u);
    ctx->pc = 0x35C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C048u;
    // 0x35c04c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C048u, 0x35C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C050u;
label_35c050:
    // 0x35c050: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C050u;
    SET_GPR_U32(ctx, 31, 0x35C058u);
    ctx->pc = 0x35C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C050u;
    // 0x35c054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C050u, 0x35C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C058u;
label_35c058:
    // 0x35c058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c064: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35C064u;
    SET_GPR_U32(ctx, 31, 0x35C06Cu);
    ctx->pc = 0x35C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C064u;
    // 0x35c068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35C064u, 0x35C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C06Cu;
label_35c06c:
    // 0x35c06c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35c06cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35c070: 0xc08e86c  jal         func_23A1B0
    ctx->pc = 0x35C070u;
    SET_GPR_U32(ctx, 31, 0x35C078u);
    ctx->pc = 0x35C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C070u;
    // 0x35c074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x35C070u, 0x35C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C078u;
label_35c078:
    // 0x35c078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35c078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c07c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c088: 0x3e00008  jr          $ra
    ctx->pc = 0x35C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C088u;
        // 0x35c08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C090u;
}

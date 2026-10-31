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

// Function: sub_00359960
// Address: 0x359960 - 0x3599c0
void sub_00359960_0x359960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359960_0x359960");
#endif

    switch (ctx->pc) {
        case 0x359980u: goto label_359980;
        case 0x359988u: goto label_359988;
        case 0x35999cu: goto label_35999c;
        case 0x3599a8u: goto label_3599a8;
        default: break;
    }

    ctx->pc = 0x359960u;

    // 0x359960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359968: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35996c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35996cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359978: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359978u;
    SET_GPR_U32(ctx, 31, 0x359980u);
    ctx->pc = 0x35997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359978u;
    // 0x35997c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359978u, 0x359980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359980u;
label_359980:
    // 0x359980: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359980u;
    SET_GPR_U32(ctx, 31, 0x359988u);
    ctx->pc = 0x359984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359980u;
    // 0x359984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359980u, 0x359988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359988u;
label_359988:
    // 0x359988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35998c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359994: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359994u;
    SET_GPR_U32(ctx, 31, 0x35999Cu);
    ctx->pc = 0x359998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359994u;
    // 0x359998: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359994u, 0x35999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35999Cu;
label_35999c:
    // 0x35999c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35999cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3599a0: 0xc08d722  jal         func_235C88
    ctx->pc = 0x3599A0u;
    SET_GPR_U32(ctx, 31, 0x3599A8u);
    ctx->pc = 0x3599A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599A0u;
    // 0x3599a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C88u, 0x3599A0u, 0x3599A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599A8u;
label_3599a8:
    // 0x3599a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3599a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3599ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3599acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3599b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3599b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3599b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3599b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3599B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3599BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599B8u;
        // 0x3599bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3599B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3599C0u;
}

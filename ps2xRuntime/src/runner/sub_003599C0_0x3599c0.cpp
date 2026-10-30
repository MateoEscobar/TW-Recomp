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

// Function: sub_003599C0
// Address: 0x3599c0 - 0x359a20
void sub_003599C0_0x3599c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003599C0_0x3599c0");
#endif

    switch (ctx->pc) {
        case 0x3599e0u: goto label_3599e0;
        case 0x3599e8u: goto label_3599e8;
        case 0x3599fcu: goto label_3599fc;
        case 0x359a08u: goto label_359a08;
        default: break;
    }

    ctx->pc = 0x3599c0u;

    // 0x3599c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3599c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3599c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3599c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3599c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3599c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3599cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3599ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3599d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3599d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3599d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3599d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3599D8u;
    SET_GPR_U32(ctx, 31, 0x3599E0u);
    ctx->pc = 0x3599DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599D8u;
    // 0x3599dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3599D8u, 0x3599E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599E0u;
label_3599e0:
    // 0x3599e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3599E0u;
    SET_GPR_U32(ctx, 31, 0x3599E8u);
    ctx->pc = 0x3599E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599E0u;
    // 0x3599e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3599E0u, 0x3599E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599E8u;
label_3599e8:
    // 0x3599e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3599e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3599ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3599f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3599f4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3599F4u;
    SET_GPR_U32(ctx, 31, 0x3599FCu);
    ctx->pc = 0x3599F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3599F4u;
    // 0x3599f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3599F4u, 0x3599FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3599FCu;
label_3599fc:
    // 0x3599fc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3599fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359a00: 0xc08d73a  jal         func_235CE8
    ctx->pc = 0x359A00u;
    SET_GPR_U32(ctx, 31, 0x359A08u);
    ctx->pc = 0x359A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A00u;
    // 0x359a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CE8u, 0x359A00u, 0x359A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A08u;
label_359a08:
    // 0x359a08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a18: 0x3e00008  jr          $ra
    ctx->pc = 0x359A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A18u;
        // 0x359a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359A20u;
}

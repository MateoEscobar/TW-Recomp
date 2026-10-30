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

// Function: sub_00326548
// Address: 0x326548 - 0x3265a0
void sub_00326548_0x326548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326548_0x326548");
#endif

    switch (ctx->pc) {
        case 0x326568u: goto label_326568;
        case 0x326578u: goto label_326578;
        case 0x326588u: goto label_326588;
        case 0x326590u: goto label_326590;
        default: break;
    }

    ctx->pc = 0x326548u;

    // 0x326548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32654c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32654cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x326550: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x326550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x326554: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x326554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x326558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32655c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326560: 0xc0c920a  jal         func_324828
    ctx->pc = 0x326560u;
    SET_GPR_U32(ctx, 31, 0x326568u);
    ctx->pc = 0x326564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326560u;
    // 0x326564: 0x24a54d78  addiu       $a1, $a1, 0x4D78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324828u, 0x326560u, 0x326568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326568u;
label_326568:
    // 0x326568: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x326568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32656c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326570: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x326570u;
    SET_GPR_U32(ctx, 31, 0x326578u);
    ctx->pc = 0x326574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326570u;
    // 0x326574: 0x24a54bb8  addiu       $a1, $a1, 0x4BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x326570u, 0x326578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326578u;
label_326578:
    // 0x326578: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x326578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32657c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326580: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x326580u;
    SET_GPR_U32(ctx, 31, 0x326588u);
    ctx->pc = 0x326584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326580u;
    // 0x326584: 0x24a54bc8  addiu       $a1, $a1, 0x4BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x326580u, 0x326588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326588u;
label_326588:
    // 0x326588: 0xc0c9932  jal         func_3264C8
    ctx->pc = 0x326588u;
    SET_GPR_U32(ctx, 31, 0x326590u);
    ctx->pc = 0x32658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326588u;
    // 0x32658c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3264C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C8u, 0x326588u, 0x326590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326590u;
label_326590:
    // 0x326590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x326590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326598: 0x3e00008  jr          $ra
    ctx->pc = 0x326598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326598u;
        // 0x32659c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265A0u;
}

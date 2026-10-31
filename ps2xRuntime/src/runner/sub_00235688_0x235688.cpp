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

// Function: sub_00235688
// Address: 0x235688 - 0x2356c8
void sub_00235688_0x235688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235688_0x235688");
#endif

    switch (ctx->pc) {
        case 0x23569cu: goto label_23569c;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356bcu: goto label_2356bc;
        default: break;
    }

    ctx->pc = 0x235688u;

    // 0x235688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23568c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23568cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235694: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235694u;
    SET_GPR_U32(ctx, 31, 0x23569Cu);
    ctx->pc = 0x235698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235694u;
    // 0x235698: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235694u, 0x23569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23569Cu;
label_23569c:
    // 0x23569c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23569Cu;
    SET_GPR_U32(ctx, 31, 0x2356A4u);
    ctx->pc = 0x2356A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23569Cu;
    // 0x2356a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23569Cu, 0x2356A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356A4u;
label_2356a4:
    // 0x2356a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2356A4u;
    {
        const bool branch_taken_0x2356a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2356a4) {
            ctx->pc = 0x2356B4u;
            goto label_2356b4;
        }
    }
    ctx->pc = 0x2356ACu;
    // 0x2356ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2356ACu;
    {
        const bool branch_taken_0x2356ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356ACu;
        // 0x2356b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356ac) {
            ctx->pc = 0x2356BCu;
            goto label_2356bc;
        }
    }
    ctx->pc = 0x2356B4u;
label_2356b4:
    // 0x2356b4: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x2356B4u;
    SET_GPR_U32(ctx, 31, 0x2356BCu);
    ctx->pc = 0x2356B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356B4u;
    // 0x2356b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2356B4u, 0x2356BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356BCu;
label_2356bc:
    // 0x2356bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2356bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2356c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2356C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2356C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356C0u;
        // 0x2356c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2356C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2356C8u;
}

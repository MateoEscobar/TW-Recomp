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

// Function: sub_002355E0
// Address: 0x2355e0 - 0x235628
void sub_002355E0_0x2355e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002355E0_0x2355e0");
#endif

    switch (ctx->pc) {
        case 0x2355f4u: goto label_2355f4;
        case 0x2355fcu: goto label_2355fc;
        case 0x23560cu: goto label_23560c;
        default: break;
    }

    ctx->pc = 0x2355e0u;

    // 0x2355e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2355e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2355e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2355e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2355e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2355e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2355ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2355ECu;
    SET_GPR_U32(ctx, 31, 0x2355F4u);
    ctx->pc = 0x2355F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355ECu;
    // 0x2355f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2355ECu, 0x2355F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355F4u;
label_2355f4:
    // 0x2355f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2355F4u;
    SET_GPR_U32(ctx, 31, 0x2355FCu);
    ctx->pc = 0x2355F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355F4u;
    // 0x2355f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2355F4u, 0x2355FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355FCu;
label_2355fc:
    // 0x2355fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2355FCu;
    {
        const bool branch_taken_0x2355fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355fc) {
            ctx->pc = 0x235618u;
            goto label_235618;
        }
    }
    ctx->pc = 0x235604u;
    // 0x235604: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x235604u;
    SET_GPR_U32(ctx, 31, 0x23560Cu);
    ctx->pc = 0x235608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235604u;
    // 0x235608: 0x24050830  addiu       $a1, $zero, 0x830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x235604u, 0x23560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23560Cu;
label_23560c:
    // 0x23560c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23560cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235610: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x235610u;
    {
        const bool branch_taken_0x235610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235610u;
        // 0x235614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235610) {
            ctx->pc = 0x23561Cu;
            goto label_23561c;
        }
    }
    ctx->pc = 0x235618u;
label_235618:
    // 0x235618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23561c:
    // 0x23561c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235620: 0x3e00008  jr          $ra
    ctx->pc = 0x235620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235620u;
        // 0x235624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235628u;
}

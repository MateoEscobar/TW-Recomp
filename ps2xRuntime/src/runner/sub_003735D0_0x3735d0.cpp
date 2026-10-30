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

// Function: sub_003735D0
// Address: 0x3735d0 - 0x373648
void sub_003735D0_0x3735d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003735D0_0x3735d0");
#endif

    switch (ctx->pc) {
        case 0x3735f0u: goto label_3735f0;
        case 0x3735f8u: goto label_3735f8;
        case 0x373610u: goto label_373610;
        case 0x37361cu: goto label_37361c;
        case 0x373624u: goto label_373624;
        case 0x373630u: goto label_373630;
        default: break;
    }

    ctx->pc = 0x3735d0u;

    // 0x3735d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3735d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3735d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3735d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3735d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3735d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3735dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3735dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3735e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3735e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3735e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3735e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3735E8u;
    SET_GPR_U32(ctx, 31, 0x3735F0u);
    ctx->pc = 0x3735ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735E8u;
    // 0x3735ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3735E8u, 0x3735F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735F0u;
label_3735f0:
    // 0x3735f0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3735F0u;
    SET_GPR_U32(ctx, 31, 0x3735F8u);
    ctx->pc = 0x3735F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735F0u;
    // 0x3735f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3735F0u, 0x3735F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735F8u;
label_3735f8:
    // 0x3735f8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3735f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3735fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3735fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373600: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373600u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373608: 0xc1024c6  jal         func_409318
    ctx->pc = 0x373608u;
    SET_GPR_U32(ctx, 31, 0x373610u);
    ctx->pc = 0x37360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373608u;
    // 0x37360c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x373608u, 0x373610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373610u;
label_373610:
    // 0x373610: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x373610u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x373614: 0xc05a916  jal         func_16A458
    ctx->pc = 0x373614u;
    SET_GPR_U32(ctx, 31, 0x37361Cu);
    ctx->pc = 0x373618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373614u;
    // 0x373618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x373614u, 0x37361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37361Cu;
label_37361c:
    // 0x37361c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37361Cu;
    SET_GPR_U32(ctx, 31, 0x373624u);
    ctx->pc = 0x373620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37361Cu;
    // 0x373620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37361Cu, 0x373624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373624u;
label_373624:
    // 0x373624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373628: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x373628u;
    SET_GPR_U32(ctx, 31, 0x373630u);
    ctx->pc = 0x37362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373628u;
    // 0x37362c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x373628u, 0x373630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373630u;
label_373630:
    // 0x373630: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37363c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37363cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373640: 0x3e00008  jr          $ra
    ctx->pc = 0x373640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373640u;
        // 0x373644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373648u;
}

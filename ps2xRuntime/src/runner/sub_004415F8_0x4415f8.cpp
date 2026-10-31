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

// Function: sub_004415F8
// Address: 0x4415f8 - 0x441640
void sub_004415F8_0x4415f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004415F8_0x4415f8");
#endif

    switch (ctx->pc) {
        case 0x4415f8u: goto label_4415f8;
        case 0x4415fcu: goto label_4415fc;
        case 0x441600u: goto label_441600;
        case 0x441604u: goto label_441604;
        case 0x441608u: goto label_441608;
        case 0x44160cu: goto label_44160c;
        case 0x441610u: goto label_441610;
        case 0x441614u: goto label_441614;
        case 0x441618u: goto label_441618;
        case 0x44161cu: goto label_44161c;
        case 0x441620u: goto label_441620;
        case 0x441624u: goto label_441624;
        case 0x441628u: goto label_441628;
        case 0x44162cu: goto label_44162c;
        case 0x441630u: goto label_441630;
        case 0x441634u: goto label_441634;
        case 0x441638u: goto label_441638;
        case 0x44163cu: goto label_44163c;
        default: break;
    }

    ctx->pc = 0x4415f8u;

label_4415f8:
    // 0x4415f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4415f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4415fc:
    // 0x4415fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4415fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_441600:
    // 0x441600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x441600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_441604:
    // 0x441604: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_441608:
    if (ctx->pc == 0x441608u) {
        ctx->pc = 0x441608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441604u;
        // 0x441608: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44160Cu;
        goto label_44160c;
    }
    ctx->pc = 0x441604u;
    {
        const bool branch_taken_0x441604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x441608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441604u;
        // 0x441608: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441604) {
            ctx->pc = 0x441624u;
            goto label_441624;
        }
    }
    ctx->pc = 0x44160Cu;
label_44160c:
    // 0x44160c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x44160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_441610:
    // 0x441610: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x441610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_441614:
    // 0x441614: 0x8c5c36c0  lw          $gp, 0x36C0($v0)
    ctx->pc = 0x441614u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14016)));
label_441618:
    // 0x441618: 0x60f809  jalr        $v1
label_44161c:
    if (ctx->pc == 0x44161Cu) {
        ctx->pc = 0x44161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441618u;
        // 0x44161c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x441620u;
        goto label_441620;
    }
    ctx->pc = 0x441618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x441620u);
        ctx->pc = 0x44161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441618u;
        // 0x44161c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441618u, 0x441620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x441620u;
label_441620:
    // 0x441620: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x441620u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_441624:
    // 0x441624: 0xf  sync
    ctx->pc = 0x441624u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_441628:
    // 0x441628: 0x42000038  ei
    ctx->pc = 0x441628u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_44162c:
    // 0x44162c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_441630:
    // 0x441630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x441630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_441634:
    // 0x441634: 0x3e00008  jr          $ra
label_441638:
    if (ctx->pc == 0x441638u) {
        ctx->pc = 0x441638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441634u;
        // 0x441638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44163Cu;
        goto label_44163c;
    }
    ctx->pc = 0x441634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441634u;
        // 0x441638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44163Cu;
label_44163c:
    // 0x44163c: 0x0  nop
    ctx->pc = 0x44163cu;
    // NOP
    ctx->pc = 0x441640u;
}

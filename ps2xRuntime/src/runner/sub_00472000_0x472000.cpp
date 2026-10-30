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

// Function: sub_00472000
// Address: 0x472000 - 0x472070
void sub_00472000_0x472000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472000_0x472000");
#endif

    switch (ctx->pc) {
        case 0x472038u: goto label_472038;
        case 0x47204cu: goto label_47204c;
        default: break;
    }

    ctx->pc = 0x472000u;

    // 0x472000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x472000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x472004: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x472004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
    // 0x472008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x472008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47200c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x472010: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x472010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x472014: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x472014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x472018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47201c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47201cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472020: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x472020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x472024: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x472024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x472028: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x472028u;
    {
        const bool branch_taken_0x472028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x472028) {
            ctx->pc = 0x472044u;
            goto label_472044;
        }
    }
    ctx->pc = 0x472030u;
    // 0x472030: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x472030u;
    SET_GPR_U32(ctx, 31, 0x472038u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x472030u, 0x472038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472038u;
label_472038:
    // 0x472038: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x472038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
    // 0x47203c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x472040: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x472040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_472044:
    // 0x472044: 0xc11cf8e  jal         func_473E38
    ctx->pc = 0x472044u;
    SET_GPR_U32(ctx, 31, 0x47204Cu);
    ctx->pc = 0x473E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473E38u, 0x472044u, 0x47204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47204Cu;
label_47204c:
    // 0x47204c: 0x8f8388fc  lw          $v1, -0x7704($gp)
    ctx->pc = 0x47204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936828)));
    // 0x472050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x472050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472054: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x472054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x472058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x47205c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47205cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472064: 0xaf8388fc  sw          $v1, -0x7704($gp)
    ctx->pc = 0x472064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936828), GPR_U32(ctx, 3));
    // 0x472068: 0x3e00008  jr          $ra
    ctx->pc = 0x472068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472068u;
        // 0x47206c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472070u;
}

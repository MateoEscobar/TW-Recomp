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

// Function: sub_003296E8
// Address: 0x3296e8 - 0x329748
void sub_003296E8_0x3296e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003296E8_0x3296e8");
#endif

    switch (ctx->pc) {
        case 0x329710u: goto label_329710;
        case 0x329718u: goto label_329718;
        default: break;
    }

    ctx->pc = 0x3296e8u;

    // 0x3296e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3296e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3296ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3296ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3296f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3296f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3296f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3296f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3296f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3296fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3296fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329704: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329704u;
    {
        const bool branch_taken_0x329704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329704u;
        // 0x329708: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329704) {
            ctx->pc = 0x32971Cu;
            goto label_32971c;
        }
    }
    ctx->pc = 0x32970Cu;
    // 0x32970c: 0x0  nop
    ctx->pc = 0x32970cu;
    // NOP
label_329710:
    // 0x329710: 0xc0ca634  jal         func_3298D0
    ctx->pc = 0x329710u;
    SET_GPR_U32(ctx, 31, 0x329718u);
    ctx->pc = 0x329714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329710u;
    // 0x329714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298D0u, 0x329710u, 0x329718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329718u;
label_329718:
    // 0x329718: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x329718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32971c:
    // 0x32971c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329720: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x329720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x329724: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x329724u;
    {
        const bool branch_taken_0x329724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329724u;
        // 0x329728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329724) {
            ctx->pc = 0x329710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329710;
        }
    }
    ctx->pc = 0x32972Cu;
    // 0x32972c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32972cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x329730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329734: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x329734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32973c: 0x3e00008  jr          $ra
    ctx->pc = 0x32973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32973Cu;
        // 0x329740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329744u;
    // 0x329744: 0x0  nop
    ctx->pc = 0x329744u;
    // NOP
    ctx->pc = 0x329748u;
}

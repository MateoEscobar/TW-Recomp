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

// Function: sub_0042A6C0
// Address: 0x42a6c0 - 0x42a718
void sub_0042A6C0_0x42a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A6C0_0x42a6c0");
#endif

    switch (ctx->pc) {
        case 0x42a6ecu: goto label_42a6ec;
        case 0x42a700u: goto label_42a700;
        default: break;
    }

    ctx->pc = 0x42a6c0u;

    // 0x42a6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42a6c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x42a6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42a6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42a6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42a6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a6d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42a6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42a6d4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x42a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x42a6d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42A6D8u;
    {
        const bool branch_taken_0x42a6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6D8u;
        // 0x42a6dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6d8) {
            ctx->pc = 0x42A6ECu;
            goto label_42a6ec;
        }
    }
    ctx->pc = 0x42A6E0u;
    // 0x42a6e0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x42a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x42a6e4: 0xc05479a  jal         func_151E68
    ctx->pc = 0x42A6E4u;
    SET_GPR_U32(ctx, 31, 0x42A6ECu);
    ctx->pc = 0x42A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A6E4u;
    // 0x42a6e8: 0x24849e20  addiu       $a0, $a0, -0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151E68u, 0x42A6E4u, 0x42A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A6ECu;
label_42a6ec:
    // 0x42a6ec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x42a6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x42a6f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42A6F0u;
    {
        const bool branch_taken_0x42a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a6f0) {
            ctx->pc = 0x42A6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A6F0u;
            // 0x42a6f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42A704u;
            goto label_42a704;
        }
    }
    ctx->pc = 0x42A6F8u;
    // 0x42a6f8: 0xc10b208  jal         func_42C820
    ctx->pc = 0x42A6F8u;
    SET_GPR_U32(ctx, 31, 0x42A700u);
    ctx->pc = 0x42A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A6F8u;
    // 0x42a6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x42A6F8u, 0x42A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A700u;
label_42a700:
    // 0x42a700: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42a700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42a704:
    // 0x42a704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42a704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42a708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42a70c: 0x3e00008  jr          $ra
    ctx->pc = 0x42A70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A70Cu;
        // 0x42a710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A714u;
    // 0x42a714: 0x0  nop
    ctx->pc = 0x42a714u;
    // NOP
    ctx->pc = 0x42a718u;
}

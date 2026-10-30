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

// Function: sub_0043AB30
// Address: 0x43ab30 - 0x43ab90
void sub_0043AB30_0x43ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AB30_0x43ab30");
#endif

    switch (ctx->pc) {
        case 0x43ab5cu: goto label_43ab5c;
        default: break;
    }

    ctx->pc = 0x43ab30u;

    // 0x43ab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43ab34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43ab38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43ab38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ab3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43ab40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x43ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ab44: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x43ab44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x43ab48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43ab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ab4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43ab50: 0xae2071d8  sw          $zero, 0x71D8($s1)
    ctx->pc = 0x43ab50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5971D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5971D8u, _value); } while (0);
    // 0x43ab54: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x43AB54u;
    SET_GPR_U32(ctx, 31, 0x43AB5Cu);
    ctx->pc = 0x43AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AB54u;
    // 0x43ab58: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x43AB54u, 0x43AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AB5Cu;
label_43ab5c:
    // 0x43ab5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43ab5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ab60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43ab64: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43AB64u;
    {
        const bool branch_taken_0x43ab64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43ab64) {
            ctx->pc = 0x43AB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AB64u;
            // 0x43ab68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AB7Cu;
            goto label_43ab7c;
        }
    }
    ctx->pc = 0x43AB6Cu;
    // 0x43ab6c: 0x8e2271d8  lw          $v0, 0x71D8($s1)
    ctx->pc = 0x43ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29144)));
    // 0x43ab70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43AB70u;
    {
        const bool branch_taken_0x43ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43ab70) {
            ctx->pc = 0x43AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AB70u;
            // 0x43ab74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AB78u;
            goto label_43ab78;
        }
    }
    ctx->pc = 0x43AB78u;
label_43ab78:
    // 0x43ab78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43ab78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43ab7c:
    // 0x43ab7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43ab7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ab80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43ab80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43ab84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43ab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43ab88: 0x3e00008  jr          $ra
    ctx->pc = 0x43AB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AB88u;
        // 0x43ab8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AB90u;
}

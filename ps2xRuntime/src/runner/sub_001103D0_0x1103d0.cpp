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

// Function: sub_001103D0
// Address: 0x1103d0 - 0x110430
void sub_001103D0_0x1103d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001103D0_0x1103d0");
#endif

    switch (ctx->pc) {
        case 0x1103ecu: goto label_1103ec;
        case 0x110404u: goto label_110404;
        default: break;
    }

    ctx->pc = 0x1103d0u;

    // 0x1103d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1103d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1103d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1103d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1103d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1103d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1103dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1103e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1103e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103e4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1103E4u;
    SET_GPR_U32(ctx, 31, 0x1103ECu);
    ctx->pc = 0x1103E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103E4u;
    // 0x1103e8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1103E4u, 0x1103ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103ECu;
label_1103ec:
    // 0x1103ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1103ECu;
    {
        const bool branch_taken_0x1103ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1103F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103ECu;
        // 0x1103f0: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103ec) {
            ctx->pc = 0x1103FCu;
            goto label_1103fc;
        }
    }
    ctx->pc = 0x1103F4u;
    // 0x1103f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1103F4u;
    {
        const bool branch_taken_0x1103f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F4u;
        // 0x1103f8: 0x906283b8  lbu         $v0, -0x7C48($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103f4) {
            ctx->pc = 0x110420u;
            goto label_110420;
        }
    }
    ctx->pc = 0x1103FCu;
label_1103fc:
    // 0x1103fc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1103FCu;
    SET_GPR_U32(ctx, 31, 0x110404u);
    ctx->pc = 0x110400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103FCu;
    // 0x110400: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1103FCu, 0x110404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110404u;
label_110404:
    // 0x110404: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x110404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11040c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x11040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x110410: 0x7ca300c0  sq          $v1, 0xC0($a1)
    ctx->pc = 0x110410u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 3));
    // 0x110414: 0x908283b9  lbu         $v0, -0x7C47($a0)
    ctx->pc = 0x110414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5483B9u));
    // 0x110418: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x110418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11041c: 0x7ca300d0  sq          $v1, 0xD0($a1)
    ctx->pc = 0x11041cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 3));
label_110420:
    // 0x110420: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x110420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110428: 0x3e00008  jr          $ra
    ctx->pc = 0x110428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110428u;
        // 0x11042c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110430u;
}

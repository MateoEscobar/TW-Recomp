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

// Function: sub_00269AC0
// Address: 0x269ac0 - 0x269b18
void sub_00269AC0_0x269ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269AC0_0x269ac0");
#endif

    switch (ctx->pc) {
        case 0x269ae0u: goto label_269ae0;
        case 0x269af8u: goto label_269af8;
        case 0x269b04u: goto label_269b04;
        default: break;
    }

    ctx->pc = 0x269ac0u;

    // 0x269ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x269ac4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x269ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x269ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269ad4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x269ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ad8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x269AD8u;
    SET_GPR_U32(ctx, 31, 0x269AE0u);
    ctx->pc = 0x269ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AD8u;
    // 0x269adc: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x269AD8u, 0x269AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AE0u;
label_269ae0:
    // 0x269ae0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x269ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x269ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x269ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269af0: 0xc08b47e  jal         func_22D1F8
    ctx->pc = 0x269AF0u;
    SET_GPR_U32(ctx, 31, 0x269AF8u);
    ctx->pc = 0x269AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AF0u;
    // 0x269af4: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x269AF0u, 0x269AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AF8u;
label_269af8:
    // 0x269af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269afc: 0xc09a59c  jal         func_269670
    ctx->pc = 0x269AFCu;
    SET_GPR_U32(ctx, 31, 0x269B04u);
    ctx->pc = 0x269B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AFCu;
    // 0x269b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269670u, 0x269AFCu, 0x269B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B04u;
label_269b04:
    // 0x269b04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x269b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b10: 0x3e00008  jr          $ra
    ctx->pc = 0x269B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B10u;
        // 0x269b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B18u;
}

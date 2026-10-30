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

// Function: sub_001C3978
// Address: 0x1c3978 - 0x1c3a00
void sub_001C3978_0x1c3978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3978_0x1c3978");
#endif

    switch (ctx->pc) {
        case 0x1c39a0u: goto label_1c39a0;
        case 0x1c39b0u: goto label_1c39b0;
        case 0x1c39b8u: goto label_1c39b8;
        case 0x1c39c0u: goto label_1c39c0;
        case 0x1c39d0u: goto label_1c39d0;
        default: break;
    }

    ctx->pc = 0x1c3978u;

    // 0x1c3978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c397c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c3980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c3980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3984: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c3984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c3988: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c3988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c398c: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1c398cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c3990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3998: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1C3998u;
    SET_GPR_U32(ctx, 31, 0x1C39A0u);
    ctx->pc = 0x1C399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3998u;
    // 0x1c399c: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1C3998u, 0x1C39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39A0u;
label_1c39a0:
    // 0x1c39a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C39A0u;
    {
        const bool branch_taken_0x1c39a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39A0u;
        // 0x1c39a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39a0) {
            ctx->pc = 0x1C39B4u;
            goto label_1c39b4;
        }
    }
    ctx->pc = 0x1C39A8u;
    // 0x1c39a8: 0xc06d81e  jal         func_1B6078
    ctx->pc = 0x1C39A8u;
    SET_GPR_U32(ctx, 31, 0x1C39B0u);
    ctx->pc = 0x1C39ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39A8u;
    // 0x1c39ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6078u, 0x1C39A8u, 0x1C39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39B0u;
label_1c39b0:
    // 0x1c39b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c39b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c39b4:
    // 0x1c39b4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1c39b8:
    // 0x1c39b8: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1C39B8u;
    SET_GPR_U32(ctx, 31, 0x1C39C0u);
    ctx->pc = 0x1C39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39B8u;
    // 0x1c39bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1C39B8u, 0x1C39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C0u;
label_1c39c0:
    // 0x1c39c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C39C0u;
    {
        const bool branch_taken_0x1c39c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39c0) {
            ctx->pc = 0x1C39C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C39C0u;
            // 0x1c39c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C39D4u;
            goto label_1c39d4;
        }
    }
    ctx->pc = 0x1C39C8u;
    // 0x1c39c8: 0xc06d81e  jal         func_1B6078
    ctx->pc = 0x1C39C8u;
    SET_GPR_U32(ctx, 31, 0x1C39D0u);
    ctx->pc = 0x1C39CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39C8u;
    // 0x1c39cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6078u, 0x1C39C8u, 0x1C39D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39D0u;
label_1c39d0:
    // 0x1c39d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c39d4:
    // 0x1c39d4: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1c39d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c39d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C39D8u;
    {
        const bool branch_taken_0x1c39d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39D8u;
        // 0x1c39dc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39d8) {
            ctx->pc = 0x1C39B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c39b8;
        }
    }
    ctx->pc = 0x1C39E0u;
    // 0x1c39e0: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x1c39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x1c39e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c39e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c39e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c39e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c39ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c39ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c39f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c39f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c39f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C39F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F4u;
        // 0x1c39f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C39F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C39FCu;
    // 0x1c39fc: 0x0  nop
    ctx->pc = 0x1c39fcu;
    // NOP
    ctx->pc = 0x1c3a00u;
}

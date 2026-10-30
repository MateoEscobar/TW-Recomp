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

// Function: sub_001DB4B0
// Address: 0x1db4b0 - 0x1db550
void sub_001DB4B0_0x1db4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB4B0_0x1db4b0");
#endif

    switch (ctx->pc) {
        case 0x1db4d0u: goto label_1db4d0;
        case 0x1db520u: goto label_1db520;
        default: break;
    }

    ctx->pc = 0x1db4b0u;

    // 0x1db4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db4bc: 0x24061130  addiu       $a2, $zero, 0x1130
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4400));
    // 0x1db4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db4c8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1DB4C8u;
    SET_GPR_U32(ctx, 31, 0x1DB4D0u);
    ctx->pc = 0x1DB4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4C8u;
    // 0x1db4cc: 0x26040a40  addiu       $a0, $s0, 0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1DB4C8u, 0x1DB4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB4D0u;
label_1db4d0:
    // 0x1db4d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1db4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db4d4: 0xae0020a0  sw          $zero, 0x20A0($s0)
    ctx->pc = 0x1db4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8352), GPR_U32(ctx, 0));
    // 0x1db4d8: 0xae033a74  sw          $v1, 0x3A74($s0)
    ctx->pc = 0x1db4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14964), GPR_U32(ctx, 3));
    // 0x1db4dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1db4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4e0: 0xae0020a4  sw          $zero, 0x20A4($s0)
    ctx->pc = 0x1db4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8356), GPR_U32(ctx, 0));
    // 0x1db4e4: 0x26032af0  addiu       $v1, $s0, 0x2AF0
    ctx->pc = 0x1db4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10992));
    // 0x1db4e8: 0xae0020a8  sw          $zero, 0x20A8($s0)
    ctx->pc = 0x1db4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8360), GPR_U32(ctx, 0));
    // 0x1db4ec: 0xae0020ac  sw          $zero, 0x20AC($s0)
    ctx->pc = 0x1db4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 0));
    // 0x1db4f0: 0xae0020b4  sw          $zero, 0x20B4($s0)
    ctx->pc = 0x1db4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8372), GPR_U32(ctx, 0));
    // 0x1db4f4: 0xae0020b8  sw          $zero, 0x20B8($s0)
    ctx->pc = 0x1db4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8376), GPR_U32(ctx, 0));
    // 0x1db4f8: 0xae0020bc  sw          $zero, 0x20BC($s0)
    ctx->pc = 0x1db4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8380), GPR_U32(ctx, 0));
    // 0x1db4fc: 0xae0020c0  sw          $zero, 0x20C0($s0)
    ctx->pc = 0x1db4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8384), GPR_U32(ctx, 0));
    // 0x1db500: 0xae0020c4  sw          $zero, 0x20C4($s0)
    ctx->pc = 0x1db500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8388), GPR_U32(ctx, 0));
    // 0x1db504: 0xae0020c8  sw          $zero, 0x20C8($s0)
    ctx->pc = 0x1db504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8392), GPR_U32(ctx, 0));
    // 0x1db508: 0xae0020cc  sw          $zero, 0x20CC($s0)
    ctx->pc = 0x1db508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8396), GPR_U32(ctx, 0));
    // 0x1db50c: 0xae001b70  sw          $zero, 0x1B70($s0)
    ctx->pc = 0x1db50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7024), GPR_U32(ctx, 0));
    // 0x1db510: 0xae001b74  sw          $zero, 0x1B74($s0)
    ctx->pc = 0x1db510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7028), GPR_U32(ctx, 0));
    // 0x1db514: 0xae001b78  sw          $zero, 0x1B78($s0)
    ctx->pc = 0x1db514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7032), GPR_U32(ctx, 0));
    // 0x1db518: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1db518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1db51c: 0xae003a70  sw          $zero, 0x3A70($s0)
    ctx->pc = 0x1db51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14960), GPR_U32(ctx, 0));
label_1db520:
    // 0x1db520: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db524: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1db528: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x1db528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1db52c: 0x0  nop
    ctx->pc = 0x1db52cu;
    // NOP
    // 0x1db530: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DB530u;
    {
        const bool branch_taken_0x1db530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB530u;
        // 0x1db534: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db530) {
            ctx->pc = 0x1DB520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db520;
        }
    }
    ctx->pc = 0x1DB538u;
    // 0x1db538: 0xae003a78  sw          $zero, 0x3A78($s0)
    ctx->pc = 0x1db538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14968), GPR_U32(ctx, 0));
    // 0x1db53c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db544: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB544u;
        // 0x1db548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB54Cu;
    // 0x1db54c: 0x0  nop
    ctx->pc = 0x1db54cu;
    // NOP
    ctx->pc = 0x1db550u;
}

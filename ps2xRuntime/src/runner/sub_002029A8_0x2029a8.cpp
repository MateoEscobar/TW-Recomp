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

// Function: sub_002029A8
// Address: 0x2029a8 - 0x202a30
void sub_002029A8_0x2029a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002029A8_0x2029a8");
#endif

    switch (ctx->pc) {
        case 0x2029c0u: goto label_2029c0;
        case 0x2029e0u: goto label_2029e0;
        case 0x202a0cu: goto label_202a0c;
        default: break;
    }

    ctx->pc = 0x2029a8u;

    // 0x2029a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2029a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2029ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2029acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2029b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2029b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2029b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2029b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029bc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2029bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2029c0:
    // 0x2029c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2029c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2029c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2029c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2029c8: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x2029c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2029cc: 0x0  nop
    ctx->pc = 0x2029ccu;
    // NOP
    // 0x2029d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2029D0u;
    {
        const bool branch_taken_0x2029d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2029D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029D0u;
        // 0x2029d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029d0) {
            ctx->pc = 0x2029C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2029c0;
        }
    }
    ctx->pc = 0x2029D8u;
    // 0x2029d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2029d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029dc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2029dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2029e0:
    // 0x2029e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2029e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2029e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2029e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2029e8: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x2029e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2029ec: 0x0  nop
    ctx->pc = 0x2029ecu;
    // NOP
    // 0x2029f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2029F0u;
    {
        const bool branch_taken_0x2029f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2029F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029F0u;
        // 0x2029f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029f0) {
            ctx->pc = 0x2029E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2029e0;
        }
    }
    ctx->pc = 0x2029F8u;
    // 0x2029f8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2029f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2029fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2029fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a00: 0x2484ef80  addiu       $a0, $a0, -0x1080
    ctx->pc = 0x202a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    // 0x202a04: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x202A04u;
    SET_GPR_U32(ctx, 31, 0x202A0Cu);
    ctx->pc = 0x202A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A04u;
    // 0x202a08: 0x24060254  addiu       $a2, $zero, 0x254 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x202A04u, 0x202A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A0Cu;
label_202a0c:
    // 0x202a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a10: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x202a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x202a14: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x202a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x202a18: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x202a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x202a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a24: 0x3e00008  jr          $ra
    ctx->pc = 0x202A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A24u;
        // 0x202a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202A2Cu;
    // 0x202a2c: 0x0  nop
    ctx->pc = 0x202a2cu;
    // NOP
    ctx->pc = 0x202a30u;
}

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

// Function: sub_00123EA0
// Address: 0x123ea0 - 0x123f08
void sub_00123EA0_0x123ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123EA0_0x123ea0");
#endif

    switch (ctx->pc) {
        case 0x123eb4u: goto label_123eb4;
        case 0x123ee0u: goto label_123ee0;
        default: break;
    }

    ctx->pc = 0x123ea0u;

    // 0x123ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123ea4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x123ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x123ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123eac: 0xc04821a  jal         func_120868
    ctx->pc = 0x123EACu;
    SET_GPR_U32(ctx, 31, 0x123EB4u);
    ctx->pc = 0x123EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EACu;
    // 0x123eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x123EACu, 0x123EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EB4u;
label_123eb4:
    // 0x123eb4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x123eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x123eb8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x123eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x123ebc: 0x24635a90  addiu       $v1, $v1, 0x5A90
    ctx->pc = 0x123ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23184));
    // 0x123ec0: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x123ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x123ec4: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x123ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ec8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x123ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x123ecc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x123eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x123ed0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x123ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x123ed4: 0x24a58998  addiu       $a1, $a1, -0x7668
    ctx->pc = 0x123ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936984));
    // 0x123ed8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x123ED8u;
    SET_GPR_U32(ctx, 31, 0x123EE0u);
    ctx->pc = 0x123EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123ED8u;
    // 0x123edc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x123ED8u, 0x123EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EE0u;
label_123ee0:
    // 0x123ee0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x123ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x123ee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x123ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ee8: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x123eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123ef0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x123ef0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x123ef4: 0x7e0301f0  sq          $v1, 0x1F0($s0)
    ctx->pc = 0x123ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 3));
    // 0x123ef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x123ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123efc: 0x3e00008  jr          $ra
    ctx->pc = 0x123EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EFCu;
        // 0x123f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123F04u;
    // 0x123f04: 0x0  nop
    ctx->pc = 0x123f04u;
    // NOP
    ctx->pc = 0x123f08u;
}

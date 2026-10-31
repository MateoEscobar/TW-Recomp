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

// Function: sub_00123FB8
// Address: 0x123fb8 - 0x124000
void sub_00123FB8_0x123fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123FB8_0x123fb8");
#endif

    switch (ctx->pc) {
        case 0x123fb8u: goto label_123fb8;
        case 0x123fbcu: goto label_123fbc;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fc4u: goto label_123fc4;
        case 0x123fc8u: goto label_123fc8;
        case 0x123fccu: goto label_123fcc;
        case 0x123fd0u: goto label_123fd0;
        case 0x123fd4u: goto label_123fd4;
        case 0x123fd8u: goto label_123fd8;
        case 0x123fdcu: goto label_123fdc;
        case 0x123fe0u: goto label_123fe0;
        case 0x123fe4u: goto label_123fe4;
        case 0x123fe8u: goto label_123fe8;
        case 0x123fecu: goto label_123fec;
        case 0x123ff0u: goto label_123ff0;
        case 0x123ff4u: goto label_123ff4;
        case 0x123ff8u: goto label_123ff8;
        case 0x123ffcu: goto label_123ffc;
        default: break;
    }

    ctx->pc = 0x123fb8u;

label_123fb8:
    // 0x123fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_123fbc:
    // 0x123fbc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x123fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_123fc0:
    // 0x123fc0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x123fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_123fc4:
    // 0x123fc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x123fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123fc8:
    // 0x123fc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x123fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_123fcc:
    // 0x123fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123fd0:
    // 0x123fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123fd4:
    // 0x123fd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x123fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_123fd8:
    // 0x123fd8: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x123fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_123fdc:
    // 0x123fdc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x123fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_123fe0:
    // 0x123fe0: 0x60f809  jalr        $v1
label_123fe4:
    if (ctx->pc == 0x123FE4u) {
        ctx->pc = 0x123FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FE0u;
        // 0x123fe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FE8u;
        goto label_123fe8;
    }
    ctx->pc = 0x123FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123FE8u);
        ctx->pc = 0x123FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FE0u;
        // 0x123fe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123FE0u, 0x123FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123FE8u;
label_123fe8:
    // 0x123fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123fec:
    // 0x123fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123ff0:
    // 0x123ff0: 0xae020204  sw          $v0, 0x204($s0)
    ctx->pc = 0x123ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
label_123ff4:
    // 0x123ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x123ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123ff8:
    // 0x123ff8: 0x3e00008  jr          $ra
label_123ffc:
    if (ctx->pc == 0x123FFCu) {
        ctx->pc = 0x123FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FF8u;
        // 0x123ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124000u;
        goto label_fallthrough_0x123ff8;
    }
    ctx->pc = 0x123FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FF8u;
        // 0x123ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123ff8:
    ctx->pc = 0x124000u;
}

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

// Function: sub_00478FB0
// Address: 0x478fb0 - 0x479020
void sub_00478FB0_0x478fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478FB0_0x478fb0");
#endif

    switch (ctx->pc) {
        case 0x478fe0u: goto label_478fe0;
        default: break;
    }

    ctx->pc = 0x478fb0u;

    // 0x478fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x478fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x478fb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x478fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x478fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x478fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478fc0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x478fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x478fc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x478fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x478fc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x478FC8u;
    {
        const bool branch_taken_0x478fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478FC8u;
        // 0x478fcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478fc8) {
            ctx->pc = 0x478FE4u;
            goto label_478fe4;
        }
    }
    ctx->pc = 0x478FD0u;
    // 0x478fd0: 0xc4ad0054  lwc1        $f13, 0x54($a1)
    ctx->pc = 0x478fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x478fd4: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x478fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x478fd8: 0xc11db32  jal         func_476CC8
    ctx->pc = 0x478FD8u;
    SET_GPR_U32(ctx, 31, 0x478FE0u);
    ctx->pc = 0x478FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x478FD8u;
    // 0x478fdc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476CC8u, 0x478FD8u, 0x478FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478FE0u;
label_478fe0:
    // 0x478fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x478fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_478fe4:
    // 0x478fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478fe8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x478fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478fec: 0x3e00008  jr          $ra
    ctx->pc = 0x478FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478FECu;
        // 0x478ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478FF4u;
    // 0x478ff4: 0x0  nop
    ctx->pc = 0x478ff4u;
    // NOP
    // 0x478ff8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x478ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x478ffc: 0x0  nop
    ctx->pc = 0x478ffcu;
    // NOP
    // 0x479000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x479000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x479004: 0x0  nop
    ctx->pc = 0x479004u;
    // NOP
    // 0x479008: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x479008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x47900c: 0x0  nop
    ctx->pc = 0x47900cu;
    // NOP
    // 0x479010: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x479010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x479014: 0x0  nop
    ctx->pc = 0x479014u;
    // NOP
    // 0x479018: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x479018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47901c: 0x0  nop
    ctx->pc = 0x47901cu;
    // NOP
    ctx->pc = 0x479020u;
}

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

// Function: sub_00358028
// Address: 0x358028 - 0x358090
void sub_00358028_0x358028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358028_0x358028");
#endif

    switch (ctx->pc) {
        case 0x358048u: goto label_358048;
        case 0x358060u: goto label_358060;
        case 0x358068u: goto label_358068;
        case 0x358074u: goto label_358074;
        default: break;
    }

    ctx->pc = 0x358028u;

    // 0x358028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35802c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358030: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35803c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358040: 0xc1024a0  jal         func_409280
    ctx->pc = 0x358040u;
    SET_GPR_U32(ctx, 31, 0x358048u);
    ctx->pc = 0x358044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358040u;
    // 0x358044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x358040u, 0x358048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358048u;
label_358048:
    // 0x358048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35804c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35804Cu;
    {
        const bool branch_taken_0x35804c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x358050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35804Cu;
        // 0x358050: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35804c) {
            ctx->pc = 0x358060u;
            goto label_358060;
        }
    }
    ctx->pc = 0x358054u;
    // 0x358054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358058: 0xc10241a  jal         func_409068
    ctx->pc = 0x358058u;
    SET_GPR_U32(ctx, 31, 0x358060u);
    ctx->pc = 0x35805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358058u;
    // 0x35805c: 0x24a591d0  addiu       $a1, $a1, -0x6E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x358058u, 0x358060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358060u;
label_358060:
    // 0x358060: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x358060u;
    SET_GPR_U32(ctx, 31, 0x358068u);
    ctx->pc = 0x358064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358060u;
    // 0x358064: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x358060u, 0x358068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358068u;
label_358068:
    // 0x358068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35806c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35806Cu;
    SET_GPR_U32(ctx, 31, 0x358074u);
    ctx->pc = 0x358070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35806Cu;
    // 0x358070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35806Cu, 0x358074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358074u;
label_358074:
    // 0x358074: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35807c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35807cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358084: 0x3e00008  jr          $ra
    ctx->pc = 0x358084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358084u;
        // 0x358088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35808Cu;
    // 0x35808c: 0x0  nop
    ctx->pc = 0x35808cu;
    // NOP
    ctx->pc = 0x358090u;
}

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

// Function: sub_00358228
// Address: 0x358228 - 0x358290
void sub_00358228_0x358228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358228_0x358228");
#endif

    switch (ctx->pc) {
        case 0x358248u: goto label_358248;
        case 0x358260u: goto label_358260;
        case 0x358268u: goto label_358268;
        case 0x358274u: goto label_358274;
        default: break;
    }

    ctx->pc = 0x358228u;

    // 0x358228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35822c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35823c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358240: 0xc1024a0  jal         func_409280
    ctx->pc = 0x358240u;
    SET_GPR_U32(ctx, 31, 0x358248u);
    ctx->pc = 0x358244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358240u;
    // 0x358244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x358240u, 0x358248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358248u;
label_358248:
    // 0x358248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35824c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35824Cu;
    {
        const bool branch_taken_0x35824c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x358250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35824Cu;
        // 0x358250: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35824c) {
            ctx->pc = 0x358260u;
            goto label_358260;
        }
    }
    ctx->pc = 0x358254u;
    // 0x358254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358258: 0xc10241a  jal         func_409068
    ctx->pc = 0x358258u;
    SET_GPR_U32(ctx, 31, 0x358260u);
    ctx->pc = 0x35825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358258u;
    // 0x35825c: 0x24a59230  addiu       $a1, $a1, -0x6DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x358258u, 0x358260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358260u;
label_358260:
    // 0x358260: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x358260u;
    SET_GPR_U32(ctx, 31, 0x358268u);
    ctx->pc = 0x358264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358260u;
    // 0x358264: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x358260u, 0x358268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358268u;
label_358268:
    // 0x358268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35826c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35826Cu;
    SET_GPR_U32(ctx, 31, 0x358274u);
    ctx->pc = 0x358270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35826Cu;
    // 0x358270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35826Cu, 0x358274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358274u;
label_358274:
    // 0x358274: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35827c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35827cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358284: 0x3e00008  jr          $ra
    ctx->pc = 0x358284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358284u;
        // 0x358288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35828Cu;
    // 0x35828c: 0x0  nop
    ctx->pc = 0x35828cu;
    // NOP
    ctx->pc = 0x358290u;
}

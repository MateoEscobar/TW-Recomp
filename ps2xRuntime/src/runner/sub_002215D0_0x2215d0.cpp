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

// Function: sub_002215D0
// Address: 0x2215d0 - 0x221620
void sub_002215D0_0x2215d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002215D0_0x2215d0");
#endif

    switch (ctx->pc) {
        case 0x221608u: goto label_221608;
        case 0x221610u: goto label_221610;
        default: break;
    }

    ctx->pc = 0x2215d0u;

    // 0x2215d0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2215d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2215d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2215d8: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2215d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5101E0u));
    // 0x2215dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2215DCu;
    {
        const bool branch_taken_0x2215dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215DCu;
        // 0x2215e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215dc) {
            ctx->pc = 0x221600u;
            goto label_221600;
        }
    }
    ctx->pc = 0x2215E4u;
    // 0x2215e4: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2215e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2215e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2215E8u;
    {
        const bool branch_taken_0x2215e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215e8) {
            ctx->pc = 0x221600u;
            goto label_221600;
        }
    }
    ctx->pc = 0x2215F0u;
    // 0x2215f0: 0xc48103a4  lwc1        $f1, 0x3A4($a0)
    ctx->pc = 0x2215f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2215f4: 0xc4400170  lwc1        $f0, 0x170($v0)
    ctx->pc = 0x2215f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2215f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2215F8u;
    {
        const bool branch_taken_0x2215f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215F8u;
        // 0x2215fc: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215f8) {
            ctx->pc = 0x221614u;
            goto label_221614;
        }
    }
    ctx->pc = 0x221600u;
label_221600:
    // 0x221600: 0xc08a200  jal         func_228800
    ctx->pc = 0x221600u;
    SET_GPR_U32(ctx, 31, 0x221608u);
    ctx->pc = 0x221604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221600u;
    // 0x221604: 0x8c8400cc  lw          $a0, 0xCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x221600u, 0x221608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221608u;
label_221608:
    // 0x221608: 0xc08a206  jal         func_228818
    ctx->pc = 0x221608u;
    SET_GPR_U32(ctx, 31, 0x221610u);
    ctx->pc = 0x22160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221608u;
    // 0x22160c: 0x9044011c  lbu         $a0, 0x11C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x221608u, 0x221610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221610u;
label_221610:
    // 0x221610: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x221610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221614:
    // 0x221614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221618: 0x3e00008  jr          $ra
    ctx->pc = 0x221618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221618u;
        // 0x22161c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221620u;
}

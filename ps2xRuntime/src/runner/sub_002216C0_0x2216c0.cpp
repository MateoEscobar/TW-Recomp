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

// Function: sub_002216C0
// Address: 0x2216c0 - 0x221710
void sub_002216C0_0x2216c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002216C0_0x2216c0");
#endif

    switch (ctx->pc) {
        case 0x2216f8u: goto label_2216f8;
        case 0x221700u: goto label_221700;
        default: break;
    }

    ctx->pc = 0x2216c0u;

    // 0x2216c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2216c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2216c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2216c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2216c8: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2216c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5101E0u));
    // 0x2216cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2216CCu;
    {
        const bool branch_taken_0x2216cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216CCu;
        // 0x2216d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216cc) {
            ctx->pc = 0x2216F0u;
            goto label_2216f0;
        }
    }
    ctx->pc = 0x2216D4u;
    // 0x2216d4: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2216d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2216d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2216D8u;
    {
        const bool branch_taken_0x2216d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2216d8) {
            ctx->pc = 0x2216F0u;
            goto label_2216f0;
        }
    }
    ctx->pc = 0x2216E0u;
    // 0x2216e0: 0xc48103a4  lwc1        $f1, 0x3A4($a0)
    ctx->pc = 0x2216e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2216e4: 0xc440017c  lwc1        $f0, 0x17C($v0)
    ctx->pc = 0x2216e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2216e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2216E8u;
    {
        const bool branch_taken_0x2216e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216E8u;
        // 0x2216ec: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216e8) {
            ctx->pc = 0x221704u;
            goto label_221704;
        }
    }
    ctx->pc = 0x2216F0u;
label_2216f0:
    // 0x2216f0: 0xc08a200  jal         func_228800
    ctx->pc = 0x2216F0u;
    SET_GPR_U32(ctx, 31, 0x2216F8u);
    ctx->pc = 0x2216F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216F0u;
    // 0x2216f4: 0x8c8400cc  lw          $a0, 0xCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2216F0u, 0x2216F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216F8u;
label_2216f8:
    // 0x2216f8: 0xc08a206  jal         func_228818
    ctx->pc = 0x2216F8u;
    SET_GPR_U32(ctx, 31, 0x221700u);
    ctx->pc = 0x2216FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216F8u;
    // 0x2216fc: 0x9044011c  lbu         $a0, 0x11C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x2216F8u, 0x221700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221700u;
label_221700:
    // 0x221700: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x221700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221704:
    // 0x221704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221708: 0x3e00008  jr          $ra
    ctx->pc = 0x221708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221708u;
        // 0x22170c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221710u;
}

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

// Function: sub_00498598
// Address: 0x498598 - 0x49860c
void sub_00498598_0x498598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498598_0x498598");
#endif

    switch (ctx->pc) {
        case 0x4985b4u: goto label_4985b4;
        case 0x4985bcu: goto label_4985bc;
        case 0x4985e8u: goto label_4985e8;
        case 0x4985f0u: goto label_4985f0;
        default: break;
    }

    ctx->pc = 0x498598u;

    // 0x498598: 0x8f8286c0  lw          $v0, -0x7940($gp)
    ctx->pc = 0x498598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x49859c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x49859cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4985a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4985a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4985a4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4985A4u;
    {
        const bool branch_taken_0x4985a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4985A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985A4u;
        // 0x4985a8: 0x8f828a48  lw          $v0, -0x75B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4985a4) {
            ctx->pc = 0x4985B4u;
            goto label_4985b4;
        }
    }
    ctx->pc = 0x4985ACu;
    // 0x4985ac: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4985ACu;
    {
        const bool branch_taken_0x4985ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4985B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985ACu;
        // 0x4985b0: 0x8f828a4c  lw          $v0, -0x75B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4985ac) {
            ctx->pc = 0x498610u;
            return;
        }
    }
    ctx->pc = 0x4985B4u;
label_4985b4:
    // 0x4985b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4985B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4985B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985B4u;
        // 0x4985b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4985B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4985BCu;
label_4985bc:
    // 0x4985bc: 0xdf828720  ld          $v0, -0x78E0($gp)
    ctx->pc = 0x4985bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936352)));
    // 0x4985c0: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x4985c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x4985c4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4985c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4985c8: 0x21a3b  dsra        $v1, $v0, 8
    ctx->pc = 0x4985c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 8);
    // 0x4985cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4985ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4985d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4985d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4985d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4985d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4985d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4985d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4985dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4985dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4985e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4985E0u;
    {
        const bool branch_taken_0x4985e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4985E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985E0u;
        // 0x4985e4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4985e0) {
            ctx->pc = 0x498614u;
            return;
        }
    }
    ctx->pc = 0x4985E8u;
label_4985e8:
    // 0x4985e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4985E8u;
    {
        const bool branch_taken_0x4985e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985E8u;
        // 0x4985ec: 0x8f8286f8  lw          $v0, -0x7908($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4985e8) {
            ctx->pc = 0x498610u;
            return;
        }
    }
    ctx->pc = 0x4985F0u;
label_4985f0:
    // 0x4985f0: 0x8f828a78  lw          $v0, -0x7588($gp)
    ctx->pc = 0x4985f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937208)));
    // 0x4985f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4985F4u;
    {
        const bool branch_taken_0x4985f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4985F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985F4u;
        // 0x4985f8: 0xc7808a7c  lwc1        $f0, -0x7584($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4985f4) {
            ctx->pc = 0x498604u;
            goto label_498604;
        }
    }
    ctx->pc = 0x4985FCu;
    // 0x4985fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4985FCu;
    {
        const bool branch_taken_0x4985fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4985FCu;
        // 0x498600: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4985fc) {
            ctx->pc = 0x498614u;
            return;
        }
    }
    ctx->pc = 0x498604u;
label_498604:
    // 0x498604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x498604u;
    {
        const bool branch_taken_0x498604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498604u;
        // 0x498608: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x498604) {
            ctx->pc = 0x498614u;
            return;
        }
    }
    ctx->pc = 0x49860Cu;
}

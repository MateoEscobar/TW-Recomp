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

// Function: sub_0041FDC8
// Address: 0x41fdc8 - 0x41fe20
void sub_0041FDC8_0x41fdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FDC8_0x41fdc8");
#endif

    switch (ctx->pc) {
        case 0x41fdf4u: goto label_41fdf4;
        default: break;
    }

    ctx->pc = 0x41fdc8u;

    // 0x41fdc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41fdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41fdcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41fdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fdd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41fdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fdd8: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x41fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x41fddc: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x41fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x41fde0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41FDE0u;
    {
        const bool branch_taken_0x41fde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FDE0u;
        // 0x41fde4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fde0) {
            ctx->pc = 0x41FE0Cu;
            goto label_41fe0c;
        }
    }
    ctx->pc = 0x41FDE8u;
    // 0x41fde8: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x41fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x41fdec: 0xc052e3a  jal         func_14B8E8
    ctx->pc = 0x41FDECu;
    SET_GPR_U32(ctx, 31, 0x41FDF4u);
    ctx->pc = 0x41FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FDECu;
    // 0x41fdf0: 0x24a5b4c8  addiu       $a1, $a1, -0x4B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B8E8u, 0x41FDECu, 0x41FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FDF4u;
label_41fdf4:
    // 0x41fdf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41FDF4u;
    {
        const bool branch_taken_0x41fdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FDF4u;
        // 0x41fdf8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fdf4) {
            ctx->pc = 0x41FE0Cu;
            goto label_41fe0c;
        }
    }
    ctx->pc = 0x41FDFCu;
    // 0x41fdfc: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x41fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x41fe00: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x41fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x41fe04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41FE04u;
    {
        const bool branch_taken_0x41fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE04u;
        // 0x41fe08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe04) {
            ctx->pc = 0x41FE10u;
            goto label_41fe10;
        }
    }
    ctx->pc = 0x41FE0Cu;
label_41fe0c:
    // 0x41fe0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41fe0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fe10:
    // 0x41fe10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fe10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fe14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fe18: 0x3e00008  jr          $ra
    ctx->pc = 0x41FE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FE18u;
        // 0x41fe1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FE20u;
}

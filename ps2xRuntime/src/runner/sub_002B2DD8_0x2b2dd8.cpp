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

// Function: sub_002B2DD8
// Address: 0x2b2dd8 - 0x2b2e28
void sub_002B2DD8_0x2b2dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2DD8_0x2b2dd8");
#endif

    switch (ctx->pc) {
        case 0x2b2dd8u: goto label_2b2dd8;
        case 0x2b2ddcu: goto label_2b2ddc;
        case 0x2b2de0u: goto label_2b2de0;
        case 0x2b2de4u: goto label_2b2de4;
        case 0x2b2de8u: goto label_2b2de8;
        case 0x2b2decu: goto label_2b2dec;
        case 0x2b2df0u: goto label_2b2df0;
        case 0x2b2df4u: goto label_2b2df4;
        case 0x2b2df8u: goto label_2b2df8;
        case 0x2b2dfcu: goto label_2b2dfc;
        case 0x2b2e00u: goto label_2b2e00;
        case 0x2b2e04u: goto label_2b2e04;
        case 0x2b2e08u: goto label_2b2e08;
        case 0x2b2e0cu: goto label_2b2e0c;
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e14u: goto label_2b2e14;
        case 0x2b2e18u: goto label_2b2e18;
        case 0x2b2e1cu: goto label_2b2e1c;
        case 0x2b2e20u: goto label_2b2e20;
        case 0x2b2e24u: goto label_2b2e24;
        default: break;
    }

    ctx->pc = 0x2b2dd8u;

label_2b2dd8:
    // 0x2b2dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b2ddc:
    // 0x2b2ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b2de0:
    // 0x2b2de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b2de4:
    // 0x2b2de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2de8:
    // 0x2b2de8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b2dec:
    // 0x2b2dec: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2b2decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2df0:
    // 0x2b2df0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2b2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2b2df4:
    // 0x2b2df4: 0x60f809  jalr        $v1
label_2b2df8:
    if (ctx->pc == 0x2B2DF8u) {
        ctx->pc = 0x2B2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DF4u;
        // 0x2b2df8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2DFCu;
        goto label_2b2dfc;
    }
    ctx->pc = 0x2B2DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B2DFCu);
        ctx->pc = 0x2B2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DF4u;
        // 0x2b2df8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2DF4u, 0x2B2DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2DFCu;
label_2b2dfc:
    // 0x2b2dfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2e00:
    // 0x2b2e00: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b2e00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b2e04:
    // 0x2b2e04: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2b2e08:
    if (ctx->pc == 0x2B2E08u) {
        ctx->pc = 0x2B2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E04u;
        // 0x2b2e08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E0Cu;
        goto label_2b2e0c;
    }
    ctx->pc = 0x2B2E04u;
    {
        const bool branch_taken_0x2b2e04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E04u;
        // 0x2b2e08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e04) {
            ctx->pc = 0x2B2E18u;
            goto label_2b2e18;
        }
    }
    ctx->pc = 0x2B2E0Cu;
label_2b2e0c:
    // 0x2b2e0c: 0xc0a36c8  jal         func_28DB20
label_2b2e10:
    if (ctx->pc == 0x2B2E10u) {
        ctx->pc = 0x2B2E14u;
        goto label_2b2e14;
    }
    ctx->pc = 0x2B2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B2E14u);
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B2E0Cu, 0x2B2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E14u;
label_2b2e14:
    // 0x2b2e14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2e18:
    // 0x2b2e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2e1c:
    // 0x2b2e1c: 0x3e00008  jr          $ra
label_2b2e20:
    if (ctx->pc == 0x2B2E20u) {
        ctx->pc = 0x2B2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E1Cu;
        // 0x2b2e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E24u;
        goto label_2b2e24;
    }
    ctx->pc = 0x2B2E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E1Cu;
        // 0x2b2e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2E24u;
label_2b2e24:
    // 0x2b2e24: 0x0  nop
    ctx->pc = 0x2b2e24u;
    // NOP
    ctx->pc = 0x2b2e28u;
}

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

// Function: sub_00421DD0
// Address: 0x421dd0 - 0x421e68
void sub_00421DD0_0x421dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421DD0_0x421dd0");
#endif

    switch (ctx->pc) {
        case 0x421dd0u: goto label_421dd0;
        case 0x421dd4u: goto label_421dd4;
        case 0x421dd8u: goto label_421dd8;
        case 0x421ddcu: goto label_421ddc;
        case 0x421de0u: goto label_421de0;
        case 0x421de4u: goto label_421de4;
        case 0x421de8u: goto label_421de8;
        case 0x421decu: goto label_421dec;
        case 0x421df0u: goto label_421df0;
        case 0x421df4u: goto label_421df4;
        case 0x421df8u: goto label_421df8;
        case 0x421dfcu: goto label_421dfc;
        case 0x421e00u: goto label_421e00;
        case 0x421e04u: goto label_421e04;
        case 0x421e08u: goto label_421e08;
        case 0x421e0cu: goto label_421e0c;
        case 0x421e10u: goto label_421e10;
        case 0x421e14u: goto label_421e14;
        case 0x421e18u: goto label_421e18;
        case 0x421e1cu: goto label_421e1c;
        case 0x421e20u: goto label_421e20;
        case 0x421e24u: goto label_421e24;
        case 0x421e28u: goto label_421e28;
        case 0x421e2cu: goto label_421e2c;
        case 0x421e30u: goto label_421e30;
        case 0x421e34u: goto label_421e34;
        case 0x421e38u: goto label_421e38;
        case 0x421e3cu: goto label_421e3c;
        case 0x421e40u: goto label_421e40;
        case 0x421e44u: goto label_421e44;
        case 0x421e48u: goto label_421e48;
        case 0x421e4cu: goto label_421e4c;
        case 0x421e50u: goto label_421e50;
        case 0x421e54u: goto label_421e54;
        case 0x421e58u: goto label_421e58;
        case 0x421e5cu: goto label_421e5c;
        case 0x421e60u: goto label_421e60;
        case 0x421e64u: goto label_421e64;
        default: break;
    }

    ctx->pc = 0x421dd0u;

label_421dd0:
    // 0x421dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x421dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_421dd4:
    // 0x421dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421dd8:
    // 0x421dd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x421dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_421ddc:
    // 0x421ddc: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x421ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_421de0:
    // 0x421de0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x421de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_421de4:
    // 0x421de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x421de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421de8:
    // 0x421de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x421de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_421dec:
    // 0x421dec: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x421decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_421df0:
    // 0x421df0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x421df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421df4:
    // 0x421df4: 0xc10c1fa  jal         func_4307E8
label_421df8:
    if (ctx->pc == 0x421DF8u) {
        ctx->pc = 0x421DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421DF4u;
        // 0x421df8: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421DFCu;
        goto label_421dfc;
    }
    ctx->pc = 0x421DF4u;
    SET_GPR_U32(ctx, 31, 0x421DFCu);
    ctx->pc = 0x421DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421DF4u;
    // 0x421df8: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x421DF4u, 0x421DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421DFCu;
label_421dfc:
    // 0x421dfc: 0x8e060110  lw          $a2, 0x110($s0)
    ctx->pc = 0x421dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_421e00:
    // 0x421e00: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x421e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_421e04:
    // 0x421e04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x421e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_421e08:
    // 0x421e08: 0xb10018  mult        $zero, $a1, $s1
    ctx->pc = 0x421e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_421e0c:
    // 0x421e0c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x421e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_421e10:
    // 0x421e10: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x421e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_421e14:
    // 0x421e14: 0x2812  mflo        $a1
    ctx->pc = 0x421e14u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_421e18:
    // 0x421e18: 0x60f809  jalr        $v1
label_421e1c:
    if (ctx->pc == 0x421E1Cu) {
        ctx->pc = 0x421E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E18u;
        // 0x421e1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421E20u;
        goto label_421e20;
    }
    ctx->pc = 0x421E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421E20u);
        ctx->pc = 0x421E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E18u;
        // 0x421e1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421E18u, 0x421E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421E20u;
label_421e20:
    // 0x421e20: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x421e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_421e24:
    // 0x421e24: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x421e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_421e28:
    // 0x421e28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x421e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_421e2c:
    // 0x421e2c: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x421e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_421e30:
    // 0x421e30: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x421e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_421e34:
    // 0x421e34: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x421e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_421e38:
    // 0x421e38: 0x60f809  jalr        $v1
label_421e3c:
    if (ctx->pc == 0x421E3Cu) {
        ctx->pc = 0x421E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E38u;
        // 0x421e3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421E40u;
        goto label_421e40;
    }
    ctx->pc = 0x421E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421E40u);
        ctx->pc = 0x421E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E38u;
        // 0x421e3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421E38u, 0x421E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421E40u;
label_421e40:
    // 0x421e40: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x421e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_421e44:
    // 0x421e44: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x421e44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_421e48:
    // 0x421e48: 0x2e230006  sltiu       $v1, $s1, 0x6
    ctx->pc = 0x421e48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_421e4c:
    // 0x421e4c: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
label_421e50:
    if (ctx->pc == 0x421E50u) {
        ctx->pc = 0x421E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E4Cu;
        // 0x421e50: 0x8e060110  lw          $a2, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421E54u;
        goto label_421e54;
    }
    ctx->pc = 0x421E4Cu;
    {
        const bool branch_taken_0x421e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x421e4c) {
            ctx->pc = 0x421E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421E4Cu;
            // 0x421e50: 0x8e060110  lw          $a2, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421e00;
        }
    }
    ctx->pc = 0x421E54u;
label_421e54:
    // 0x421e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x421e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421e58:
    // 0x421e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x421e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_421e5c:
    // 0x421e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_421e60:
    // 0x421e60: 0x3e00008  jr          $ra
label_421e64:
    if (ctx->pc == 0x421E64u) {
        ctx->pc = 0x421E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E60u;
        // 0x421e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421E68u;
        goto label_fallthrough_0x421e60;
    }
    ctx->pc = 0x421E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421E60u;
        // 0x421e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x421e60:
    ctx->pc = 0x421E68u;
}

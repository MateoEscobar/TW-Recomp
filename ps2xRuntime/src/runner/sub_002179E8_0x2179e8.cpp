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

// Function: sub_002179E8
// Address: 0x2179e8 - 0x217a70
void sub_002179E8_0x2179e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179E8_0x2179e8");
#endif

    switch (ctx->pc) {
        case 0x2179e8u: goto label_2179e8;
        case 0x2179ecu: goto label_2179ec;
        case 0x2179f0u: goto label_2179f0;
        case 0x2179f4u: goto label_2179f4;
        case 0x2179f8u: goto label_2179f8;
        case 0x2179fcu: goto label_2179fc;
        case 0x217a00u: goto label_217a00;
        case 0x217a04u: goto label_217a04;
        case 0x217a08u: goto label_217a08;
        case 0x217a0cu: goto label_217a0c;
        case 0x217a10u: goto label_217a10;
        case 0x217a14u: goto label_217a14;
        case 0x217a18u: goto label_217a18;
        case 0x217a1cu: goto label_217a1c;
        case 0x217a20u: goto label_217a20;
        case 0x217a24u: goto label_217a24;
        case 0x217a28u: goto label_217a28;
        case 0x217a2cu: goto label_217a2c;
        case 0x217a30u: goto label_217a30;
        case 0x217a34u: goto label_217a34;
        case 0x217a38u: goto label_217a38;
        case 0x217a3cu: goto label_217a3c;
        case 0x217a40u: goto label_217a40;
        case 0x217a44u: goto label_217a44;
        case 0x217a48u: goto label_217a48;
        case 0x217a4cu: goto label_217a4c;
        case 0x217a50u: goto label_217a50;
        case 0x217a54u: goto label_217a54;
        case 0x217a58u: goto label_217a58;
        case 0x217a5cu: goto label_217a5c;
        case 0x217a60u: goto label_217a60;
        case 0x217a64u: goto label_217a64;
        case 0x217a68u: goto label_217a68;
        case 0x217a6cu: goto label_217a6c;
        default: break;
    }

    ctx->pc = 0x2179e8u;

label_2179e8:
    // 0x2179e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2179e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2179ec:
    // 0x2179ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2179ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2179f0:
    // 0x2179f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2179f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2179f4:
    // 0x2179f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2179f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2179f8:
    // 0x2179f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2179f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2179fc:
    // 0x2179fc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2179fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_217a00:
    // 0x217a00: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x217a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_217a04:
    // 0x217a04: 0x40f809  jalr        $v0
label_217a08:
    if (ctx->pc == 0x217A08u) {
        ctx->pc = 0x217A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A04u;
        // 0x217a08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A0Cu;
        goto label_217a0c;
    }
    ctx->pc = 0x217A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217A0Cu);
        ctx->pc = 0x217A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A04u;
        // 0x217a08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A04u, 0x217A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217A0Cu;
label_217a0c:
    // 0x217a0c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_217a10:
    if (ctx->pc == 0x217A10u) {
        ctx->pc = 0x217A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A0Cu;
        // 0x217a10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A14u;
        goto label_217a14;
    }
    ctx->pc = 0x217A0Cu;
    {
        const bool branch_taken_0x217a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a0c) {
            ctx->pc = 0x217A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A0Cu;
            // 0x217a10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A60u;
            goto label_217a60;
        }
    }
    ctx->pc = 0x217A14u;
label_217a14:
    // 0x217a14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x217a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_217a18:
    // 0x217a18: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_217a1c:
    if (ctx->pc == 0x217A1Cu) {
        ctx->pc = 0x217A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A18u;
        // 0x217a1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A20u;
        goto label_217a20;
    }
    ctx->pc = 0x217A18u;
    {
        const bool branch_taken_0x217a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a18) {
            ctx->pc = 0x217A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A18u;
            // 0x217a1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A60u;
            goto label_217a60;
        }
    }
    ctx->pc = 0x217A20u;
label_217a20:
    // 0x217a20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x217a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_217a24:
    // 0x217a24: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_217a28:
    if (ctx->pc == 0x217A28u) {
        ctx->pc = 0x217A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A24u;
        // 0x217a28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A2Cu;
        goto label_217a2c;
    }
    ctx->pc = 0x217A24u;
    {
        const bool branch_taken_0x217a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a24) {
            ctx->pc = 0x217A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A24u;
            // 0x217a28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A60u;
            goto label_217a60;
        }
    }
    ctx->pc = 0x217A2Cu;
label_217a2c:
    // 0x217a2c: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x217a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_217a30:
    // 0x217a30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x217a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217a34:
    // 0x217a34: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x217a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_217a38:
    // 0x217a38: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x217a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_217a3c:
    // 0x217a3c: 0x60f809  jalr        $v1
label_217a40:
    if (ctx->pc == 0x217A40u) {
        ctx->pc = 0x217A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A3Cu;
        // 0x217a40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A44u;
        goto label_217a44;
    }
    ctx->pc = 0x217A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217A44u);
        ctx->pc = 0x217A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A3Cu;
        // 0x217a40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A3Cu, 0x217A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217A44u;
label_217a44:
    // 0x217a44: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x217a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_217a48:
    // 0x217a48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x217a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_217a4c:
    // 0x217a4c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x217a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_217a50:
    // 0x217a50: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x217a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_217a54:
    // 0x217a54: 0x60f809  jalr        $v1
label_217a58:
    if (ctx->pc == 0x217A58u) {
        ctx->pc = 0x217A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A54u;
        // 0x217a58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A5Cu;
        goto label_217a5c;
    }
    ctx->pc = 0x217A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217A5Cu);
        ctx->pc = 0x217A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A54u;
        // 0x217a58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A54u, 0x217A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217A5Cu;
label_217a5c:
    // 0x217a5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217a60:
    // 0x217a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217a64:
    // 0x217a64: 0x3e00008  jr          $ra
label_217a68:
    if (ctx->pc == 0x217A68u) {
        ctx->pc = 0x217A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A64u;
        // 0x217a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A6Cu;
        goto label_217a6c;
    }
    ctx->pc = 0x217A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A64u;
        // 0x217a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A6Cu;
label_217a6c:
    // 0x217a6c: 0x0  nop
    ctx->pc = 0x217a6cu;
    // NOP
    ctx->pc = 0x217a70u;
}

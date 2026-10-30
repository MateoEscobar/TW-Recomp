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

// Function: sub_001E8DD0
// Address: 0x1e8dd0 - 0x1e8ee0
void sub_001E8DD0_0x1e8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8DD0_0x1e8dd0");
#endif

    switch (ctx->pc) {
        case 0x1e8dd0u: goto label_1e8dd0;
        case 0x1e8dd4u: goto label_1e8dd4;
        case 0x1e8dd8u: goto label_1e8dd8;
        case 0x1e8ddcu: goto label_1e8ddc;
        case 0x1e8de0u: goto label_1e8de0;
        case 0x1e8de4u: goto label_1e8de4;
        case 0x1e8de8u: goto label_1e8de8;
        case 0x1e8decu: goto label_1e8dec;
        case 0x1e8df0u: goto label_1e8df0;
        case 0x1e8df4u: goto label_1e8df4;
        case 0x1e8df8u: goto label_1e8df8;
        case 0x1e8dfcu: goto label_1e8dfc;
        case 0x1e8e00u: goto label_1e8e00;
        case 0x1e8e04u: goto label_1e8e04;
        case 0x1e8e08u: goto label_1e8e08;
        case 0x1e8e0cu: goto label_1e8e0c;
        case 0x1e8e10u: goto label_1e8e10;
        case 0x1e8e14u: goto label_1e8e14;
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e1cu: goto label_1e8e1c;
        case 0x1e8e20u: goto label_1e8e20;
        case 0x1e8e24u: goto label_1e8e24;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e2cu: goto label_1e8e2c;
        case 0x1e8e30u: goto label_1e8e30;
        case 0x1e8e34u: goto label_1e8e34;
        case 0x1e8e38u: goto label_1e8e38;
        case 0x1e8e3cu: goto label_1e8e3c;
        case 0x1e8e40u: goto label_1e8e40;
        case 0x1e8e44u: goto label_1e8e44;
        case 0x1e8e48u: goto label_1e8e48;
        case 0x1e8e4cu: goto label_1e8e4c;
        case 0x1e8e50u: goto label_1e8e50;
        case 0x1e8e54u: goto label_1e8e54;
        case 0x1e8e58u: goto label_1e8e58;
        case 0x1e8e5cu: goto label_1e8e5c;
        case 0x1e8e60u: goto label_1e8e60;
        case 0x1e8e64u: goto label_1e8e64;
        case 0x1e8e68u: goto label_1e8e68;
        case 0x1e8e6cu: goto label_1e8e6c;
        case 0x1e8e70u: goto label_1e8e70;
        case 0x1e8e74u: goto label_1e8e74;
        case 0x1e8e78u: goto label_1e8e78;
        case 0x1e8e7cu: goto label_1e8e7c;
        case 0x1e8e80u: goto label_1e8e80;
        case 0x1e8e84u: goto label_1e8e84;
        case 0x1e8e88u: goto label_1e8e88;
        case 0x1e8e8cu: goto label_1e8e8c;
        case 0x1e8e90u: goto label_1e8e90;
        case 0x1e8e94u: goto label_1e8e94;
        case 0x1e8e98u: goto label_1e8e98;
        case 0x1e8e9cu: goto label_1e8e9c;
        case 0x1e8ea0u: goto label_1e8ea0;
        case 0x1e8ea4u: goto label_1e8ea4;
        case 0x1e8ea8u: goto label_1e8ea8;
        case 0x1e8eacu: goto label_1e8eac;
        case 0x1e8eb0u: goto label_1e8eb0;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8eb8u: goto label_1e8eb8;
        case 0x1e8ebcu: goto label_1e8ebc;
        case 0x1e8ec0u: goto label_1e8ec0;
        case 0x1e8ec4u: goto label_1e8ec4;
        case 0x1e8ec8u: goto label_1e8ec8;
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ed0u: goto label_1e8ed0;
        case 0x1e8ed4u: goto label_1e8ed4;
        case 0x1e8ed8u: goto label_1e8ed8;
        case 0x1e8edcu: goto label_1e8edc;
        default: break;
    }

    ctx->pc = 0x1e8dd0u;

label_1e8dd0:
    // 0x1e8dd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e8dd4:
    // 0x1e8dd4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e8dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1e8dd8:
    // 0x1e8dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ddc:
    // 0x1e8ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8de0:
    // 0x1e8de0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e8de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1e8de4:
    // 0x1e8de4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e8de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e8de8:
    // 0x1e8de8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e8de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8dec:
    // 0x1e8dec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e8decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1e8df0:
    // 0x1e8df0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e8df4:
    // 0x1e8df4: 0xc079f7c  jal         func_1E7DF0
label_1e8df8:
    if (ctx->pc == 0x1E8DF8u) {
        ctx->pc = 0x1E8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DF4u;
        // 0x1e8df8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DFCu;
        goto label_1e8dfc;
    }
    ctx->pc = 0x1E8DF4u;
    SET_GPR_U32(ctx, 31, 0x1E8DFCu);
    ctx->pc = 0x1E8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DF4u;
    // 0x1e8df8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7DF0u, 0x1E8DF4u, 0x1E8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DFCu;
label_1e8dfc:
    // 0x1e8dfc: 0x8e220ba0  lw          $v0, 0xBA0($s1)
    ctx->pc = 0x1e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2976)));
label_1e8e00:
    // 0x1e8e00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1e8e04:
    if (ctx->pc == 0x1E8E04u) {
        ctx->pc = 0x1E8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E00u;
        // 0x1e8e04: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E08u;
        goto label_1e8e08;
    }
    ctx->pc = 0x1E8E00u;
    {
        const bool branch_taken_0x1e8e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E00u;
        // 0x1e8e04: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e00) {
            ctx->pc = 0x1E8E6Cu;
            goto label_1e8e6c;
        }
    }
    ctx->pc = 0x1E8E08u;
label_1e8e08:
    // 0x1e8e08: 0x26300790  addiu       $s0, $s1, 0x790
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
label_1e8e0c:
    // 0x1e8e0c: 0x26320490  addiu       $s2, $s1, 0x490
    ctx->pc = 0x1e8e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_1e8e10:
    // 0x1e8e10: 0x92850003  lbu         $a1, 0x3($s4)
    ctx->pc = 0x1e8e10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_1e8e14:
    // 0x1e8e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e18:
    // 0x1e8e18: 0xc06898e  jal         func_1A2638
label_1e8e1c:
    if (ctx->pc == 0x1E8E1Cu) {
        ctx->pc = 0x1E8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E18u;
        // 0x1e8e1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E20u;
        goto label_1e8e20;
    }
    ctx->pc = 0x1E8E18u;
    SET_GPR_U32(ctx, 31, 0x1E8E20u);
    ctx->pc = 0x1E8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E18u;
    // 0x1e8e1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E8E18u, 0x1E8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E20u;
label_1e8e20:
    // 0x1e8e20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e8e24:
    // 0x1e8e24: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e8e28:
    // 0x1e8e28: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e8e2c:
    // 0x1e8e2c: 0x60f809  jalr        $v1
label_1e8e30:
    if (ctx->pc == 0x1E8E30u) {
        ctx->pc = 0x1E8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E2Cu;
        // 0x1e8e30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E34u;
        goto label_1e8e34;
    }
    ctx->pc = 0x1E8E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8E34u);
        ctx->pc = 0x1E8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E2Cu;
        // 0x1e8e30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E2Cu, 0x1E8E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8E34u;
label_1e8e34:
    // 0x1e8e34: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1e8e38:
    // 0x1e8e38: 0x92850003  lbu         $a1, 0x3($s4)
    ctx->pc = 0x1e8e38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_1e8e3c:
    // 0x1e8e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e40:
    // 0x1e8e40: 0xc073476  jal         func_1CD1D8
label_1e8e44:
    if (ctx->pc == 0x1E8E44u) {
        ctx->pc = 0x1E8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E40u;
        // 0x1e8e44: 0xa20000c4  sb          $zero, 0xC4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E48u;
        goto label_1e8e48;
    }
    ctx->pc = 0x1E8E40u;
    SET_GPR_U32(ctx, 31, 0x1E8E48u);
    ctx->pc = 0x1E8E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E40u;
    // 0x1e8e44: 0xa20000c4  sb          $zero, 0xC4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1E8E40u, 0x1E8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E48u;
label_1e8e48:
    // 0x1e8e48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8e4c:
    // 0x1e8e4c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e8e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e8e50:
    // 0x1e8e50: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e8e54:
    // 0x1e8e54: 0x60f809  jalr        $v1
label_1e8e58:
    if (ctx->pc == 0x1E8E58u) {
        ctx->pc = 0x1E8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E54u;
        // 0x1e8e58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E5Cu;
        goto label_1e8e5c;
    }
    ctx->pc = 0x1E8E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8E5Cu);
        ctx->pc = 0x1E8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E54u;
        // 0x1e8e58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E54u, 0x1E8E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8E5Cu;
label_1e8e5c:
    // 0x1e8e5c: 0x8e220ba0  lw          $v0, 0xBA0($s1)
    ctx->pc = 0x1e8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2976)));
label_1e8e60:
    // 0x1e8e60: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e8e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8e64:
    // 0x1e8e64: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1e8e68:
    if (ctx->pc == 0x1E8E68u) {
        ctx->pc = 0x1E8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E64u;
        // 0x1e8e68: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E6Cu;
        goto label_1e8e6c;
    }
    ctx->pc = 0x1E8E64u;
    {
        const bool branch_taken_0x1e8e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E64u;
        // 0x1e8e68: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e64) {
            ctx->pc = 0x1E8E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8e10;
        }
    }
    ctx->pc = 0x1E8E6Cu;
label_1e8e6c:
    // 0x1e8e6c: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x1e8e6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_1e8e70:
    // 0x1e8e70: 0x26320390  addiu       $s2, $s1, 0x390
    ctx->pc = 0x1e8e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
label_1e8e74:
    // 0x1e8e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e78:
    // 0x1e8e78: 0xc06898e  jal         func_1A2638
label_1e8e7c:
    if (ctx->pc == 0x1E8E7Cu) {
        ctx->pc = 0x1E8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E78u;
        // 0x1e8e7c: 0x26300a00  addiu       $s0, $s1, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E80u;
        goto label_1e8e80;
    }
    ctx->pc = 0x1E8E78u;
    SET_GPR_U32(ctx, 31, 0x1E8E80u);
    ctx->pc = 0x1E8E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E78u;
    // 0x1e8e7c: 0x26300a00  addiu       $s0, $s1, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E8E78u, 0x1E8E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E80u;
label_1e8e80:
    // 0x1e8e80: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1e8e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e8e84:
    // 0x1e8e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e88:
    // 0x1e8e88: 0xc068998  jal         func_1A2660
label_1e8e8c:
    if (ctx->pc == 0x1E8E8Cu) {
        ctx->pc = 0x1E8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E88u;
        // 0x1e8e8c: 0x26310ad0  addiu       $s1, $s1, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E90u;
        goto label_1e8e90;
    }
    ctx->pc = 0x1E8E88u;
    SET_GPR_U32(ctx, 31, 0x1E8E90u);
    ctx->pc = 0x1E8E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E88u;
    // 0x1e8e8c: 0x26310ad0  addiu       $s1, $s1, 0xAD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E8E88u, 0x1E8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E90u;
label_1e8e90:
    // 0x1e8e90: 0xa21300c4  sb          $s3, 0xC4($s0)
    ctx->pc = 0x1e8e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 19));
label_1e8e94:
    // 0x1e8e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e98:
    // 0x1e8e98: 0xc073476  jal         func_1CD1D8
label_1e8e9c:
    if (ctx->pc == 0x1E8E9Cu) {
        ctx->pc = 0x1E8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E98u;
        // 0x1e8e9c: 0x93a50003  lbu         $a1, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EA0u;
        goto label_1e8ea0;
    }
    ctx->pc = 0x1E8E98u;
    SET_GPR_U32(ctx, 31, 0x1E8EA0u);
    ctx->pc = 0x1E8E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E98u;
    // 0x1e8e9c: 0x93a50003  lbu         $a1, 0x3($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1E8E98u, 0x1E8EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EA0u;
label_1e8ea0:
    // 0x1e8ea0: 0xc0734a2  jal         func_1CD288
label_1e8ea4:
    if (ctx->pc == 0x1E8EA4u) {
        ctx->pc = 0x1E8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA0u;
        // 0x1e8ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EA8u;
        goto label_1e8ea8;
    }
    ctx->pc = 0x1E8EA0u;
    SET_GPR_U32(ctx, 31, 0x1E8EA8u);
    ctx->pc = 0x1E8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EA0u;
    // 0x1e8ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1E8EA0u, 0x1E8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EA8u;
label_1e8ea8:
    // 0x1e8ea8: 0xa23300c4  sb          $s3, 0xC4($s1)
    ctx->pc = 0x1e8ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 19));
label_1e8eac:
    // 0x1e8eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8eb0:
    // 0x1e8eb0: 0xc073476  jal         func_1CD1D8
label_1e8eb4:
    if (ctx->pc == 0x1E8EB4u) {
        ctx->pc = 0x1E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EB0u;
        // 0x1e8eb4: 0x93a50003  lbu         $a1, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EB8u;
        goto label_1e8eb8;
    }
    ctx->pc = 0x1E8EB0u;
    SET_GPR_U32(ctx, 31, 0x1E8EB8u);
    ctx->pc = 0x1E8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EB0u;
    // 0x1e8eb4: 0x93a50003  lbu         $a1, 0x3($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1E8EB0u, 0x1E8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EB8u;
label_1e8eb8:
    // 0x1e8eb8: 0xc0734a2  jal         func_1CD288
label_1e8ebc:
    if (ctx->pc == 0x1E8EBCu) {
        ctx->pc = 0x1E8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EB8u;
        // 0x1e8ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EC0u;
        goto label_1e8ec0;
    }
    ctx->pc = 0x1E8EB8u;
    SET_GPR_U32(ctx, 31, 0x1E8EC0u);
    ctx->pc = 0x1E8EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EB8u;
    // 0x1e8ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1E8EB8u, 0x1E8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EC0u;
label_1e8ec0:
    // 0x1e8ec0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e8ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8ec4:
    // 0x1e8ec4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e8ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8ec8:
    // 0x1e8ec8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e8ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8ecc:
    // 0x1e8ecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8ed0:
    // 0x1e8ed0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e8ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8ed4:
    // 0x1e8ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8ed8:
    // 0x1e8ed8: 0x3e00008  jr          $ra
label_1e8edc:
    if (ctx->pc == 0x1E8EDCu) {
        ctx->pc = 0x1E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8ED8u;
        // 0x1e8edc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EE0u;
        goto label_fallthrough_0x1e8ed8;
    }
    ctx->pc = 0x1E8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8ED8u;
        // 0x1e8edc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8ed8:
    ctx->pc = 0x1E8EE0u;
}

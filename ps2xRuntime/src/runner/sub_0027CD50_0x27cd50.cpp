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

// Function: sub_0027CD50
// Address: 0x27cd50 - 0x27ce90
void sub_0027CD50_0x27cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CD50_0x27cd50");
#endif

    switch (ctx->pc) {
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce78u: goto label_27ce78;
        default: break;
    }

    ctx->pc = 0x27cd50u;

    // 0x27cd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27cd54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27cd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27cd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27cd60: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27CD60u;
    SET_GPR_U32(ctx, 31, 0x27CD68u);
    ctx->pc = 0x27CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD60u;
    // 0x27cd64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27CD60u, 0x27CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD68u;
label_27cd68:
    // 0x27cd68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27cd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd6c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27CD6Cu;
    SET_GPR_U32(ctx, 31, 0x27CD74u);
    ctx->pc = 0x27CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD6Cu;
    // 0x27cd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27CD6Cu, 0x27CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD74u;
label_27cd74:
    // 0x27cd74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd78: 0xc089988  jal         func_226620
    ctx->pc = 0x27CD78u;
    SET_GPR_U32(ctx, 31, 0x27CD80u);
    ctx->pc = 0x27CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD78u;
    // 0x27cd7c: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27CD78u, 0x27CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD80u;
label_27cd80:
    // 0x27cd80: 0xc09ee7a  jal         func_27B9E8
    ctx->pc = 0x27CD80u;
    SET_GPR_U32(ctx, 31, 0x27CD88u);
    ctx->pc = 0x27CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD80u;
    // 0x27cd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B9E8u, 0x27CD80u, 0x27CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD88u;
label_27cd88:
    // 0x27cd88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27CD88u;
    {
        const bool branch_taken_0x27cd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD88u;
        // 0x27cd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd88) {
            ctx->pc = 0x27CDC8u;
            goto label_27cdc8;
        }
    }
    ctx->pc = 0x27CD90u;
    // 0x27cd90: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27cd94: 0x8443014a  lh          $v1, 0x14A($v0)
    ctx->pc = 0x27cd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 330)));
    // 0x27cd98: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27CD98u;
    {
        const bool branch_taken_0x27cd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd98) {
            ctx->pc = 0x27CDC8u;
            goto label_27cdc8;
        }
    }
    ctx->pc = 0x27CDA0u;
    // 0x27cda0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x27CDA0u;
    SET_GPR_U32(ctx, 31, 0x27CDA8u);
    ctx->pc = 0x27CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDA0u;
    // 0x27cda4: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27CDA0u, 0x27CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDA8u;
label_27cda8:
    // 0x27cda8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27cdac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x27cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27cdb0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x27cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27cdb4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CDB4u;
    {
        const bool branch_taken_0x27cdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDB4u;
        // 0x27cdb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdb4) {
            ctx->pc = 0x27CDC8u;
            goto label_27cdc8;
        }
    }
    ctx->pc = 0x27CDBCu;
    // 0x27cdbc: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x27CDBCu;
    SET_GPR_U32(ctx, 31, 0x27CDC4u);
    ctx->pc = 0x27CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDBCu;
    // 0x27cdc0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x27CDBCu, 0x27CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDC4u;
label_27cdc4:
    // 0x27cdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cdc8:
    // 0x27cdc8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27CDC8u;
    SET_GPR_U32(ctx, 31, 0x27CDD0u);
    ctx->pc = 0x27CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDC8u;
    // 0x27cdcc: 0x3c05000f  lui         $a1, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27CDC8u, 0x27CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDD0u;
label_27cdd0:
    // 0x27cdd0: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x27CDD0u;
    {
        const bool branch_taken_0x27cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cdd0) {
            ctx->pc = 0x27CDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CDD0u;
            // 0x27cdd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CE7Cu;
            goto label_27ce7c;
        }
    }
    ctx->pc = 0x27CDD8u;
    // 0x27cdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cddc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27CDDCu;
    SET_GPR_U32(ctx, 31, 0x27CDE4u);
    ctx->pc = 0x27CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDDCu;
    // 0x27cde0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27CDDCu, 0x27CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDE4u;
label_27cde4:
    // 0x27cde4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27CDE4u;
    {
        const bool branch_taken_0x27cde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDE4u;
        // 0x27cde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cde4) {
            ctx->pc = 0x27CE60u;
            goto label_27ce60;
        }
    }
    ctx->pc = 0x27CDECu;
    // 0x27cdec: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27CDECu;
    SET_GPR_U32(ctx, 31, 0x27CDF4u);
    ctx->pc = 0x27CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDECu;
    // 0x27cdf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27CDECu, 0x27CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDF4u;
label_27cdf4:
    // 0x27cdf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27CDF4u;
    {
        const bool branch_taken_0x27cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDF4u;
        // 0x27cdf8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdf4) {
            ctx->pc = 0x27CE4Cu;
            goto label_27ce4c;
        }
    }
    ctx->pc = 0x27CDFCu;
    // 0x27cdfc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x27cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27ce00: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x27ce00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x27ce04: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x27ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x27ce08: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x27ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x27ce0c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x27ce0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27ce10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27CE10u;
    {
        const bool branch_taken_0x27ce10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE10u;
        // 0x27ce14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce10) {
            ctx->pc = 0x27CE50u;
            goto label_27ce50;
        }
    }
    ctx->pc = 0x27CE18u;
    // 0x27ce18: 0xc09ee38  jal         func_27B8E0
    ctx->pc = 0x27CE18u;
    SET_GPR_U32(ctx, 31, 0x27CE20u);
    ctx->pc = 0x27CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE18u;
    // 0x27ce1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8E0u, 0x27CE18u, 0x27CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE20u;
label_27ce20:
    // 0x27ce20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27CE20u;
    {
        const bool branch_taken_0x27ce20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE20u;
        // 0x27ce24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce20) {
            ctx->pc = 0x27CE50u;
            goto label_27ce50;
        }
    }
    ctx->pc = 0x27CE28u;
    // 0x27ce28: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x27ce2c: 0xc089998  jal         func_226660
    ctx->pc = 0x27CE2Cu;
    SET_GPR_U32(ctx, 31, 0x27CE34u);
    ctx->pc = 0x27CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE2Cu;
    // 0x27ce30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27CE2Cu, 0x27CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE34u;
label_27ce34:
    // 0x27ce34: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x27CE34u;
    {
        const bool branch_taken_0x27ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ce34) {
            ctx->pc = 0x27CE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CE34u;
            // 0x27ce38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CE7Cu;
            goto label_27ce7c;
        }
    }
    ctx->pc = 0x27CE3Cu;
    // 0x27ce3c: 0xc0a0046  jal         func_280118
    ctx->pc = 0x27CE3Cu;
    SET_GPR_U32(ctx, 31, 0x27CE44u);
    ctx->pc = 0x27CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE3Cu;
    // 0x27ce40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280118u, 0x27CE3Cu, 0x27CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE44u;
label_27ce44:
    // 0x27ce44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27CE44u;
    {
        const bool branch_taken_0x27ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE44u;
        // 0x27ce48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce44) {
            ctx->pc = 0x27CE7Cu;
            goto label_27ce7c;
        }
    }
    ctx->pc = 0x27CE4Cu;
label_27ce4c:
    // 0x27ce4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ce50:
    // 0x27ce50: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27CE50u;
    SET_GPR_U32(ctx, 31, 0x27CE58u);
    ctx->pc = 0x27CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE50u;
    // 0x27ce54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27CE50u, 0x27CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE58u;
label_27ce58:
    // 0x27ce58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CE58u;
    {
        const bool branch_taken_0x27ce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ce58) {
            ctx->pc = 0x27CE70u;
            goto label_27ce70;
        }
    }
    ctx->pc = 0x27CE60u;
label_27ce60:
    // 0x27ce60: 0xc0a001a  jal         func_280068
    ctx->pc = 0x27CE60u;
    SET_GPR_U32(ctx, 31, 0x27CE68u);
    ctx->pc = 0x27CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE60u;
    // 0x27ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x27CE60u, 0x27CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE68u;
label_27ce68:
    // 0x27ce68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27CE68u;
    {
        const bool branch_taken_0x27ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE68u;
        // 0x27ce6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce68) {
            ctx->pc = 0x27CE7Cu;
            goto label_27ce7c;
        }
    }
    ctx->pc = 0x27CE70u;
label_27ce70:
    // 0x27ce70: 0xc0a0046  jal         func_280118
    ctx->pc = 0x27CE70u;
    SET_GPR_U32(ctx, 31, 0x27CE78u);
    ctx->pc = 0x27CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE70u;
    // 0x27ce74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280118u, 0x27CE70u, 0x27CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE78u;
label_27ce78:
    // 0x27ce78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27ce78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ce7c:
    // 0x27ce7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ce7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ce80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ce80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ce84: 0x3e00008  jr          $ra
    ctx->pc = 0x27CE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE84u;
        // 0x27ce88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CE8Cu;
    // 0x27ce8c: 0x0  nop
    ctx->pc = 0x27ce8cu;
    // NOP
    ctx->pc = 0x27ce90u;
}

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

// Function: sub_0042DA90
// Address: 0x42da90 - 0x42db58
void sub_0042DA90_0x42da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DA90_0x42da90");
#endif

    switch (ctx->pc) {
        case 0x42da90u: goto label_42da90;
        case 0x42da94u: goto label_42da94;
        case 0x42da98u: goto label_42da98;
        case 0x42da9cu: goto label_42da9c;
        case 0x42daa0u: goto label_42daa0;
        case 0x42daa4u: goto label_42daa4;
        case 0x42daa8u: goto label_42daa8;
        case 0x42daacu: goto label_42daac;
        case 0x42dab0u: goto label_42dab0;
        case 0x42dab4u: goto label_42dab4;
        case 0x42dab8u: goto label_42dab8;
        case 0x42dabcu: goto label_42dabc;
        case 0x42dac0u: goto label_42dac0;
        case 0x42dac4u: goto label_42dac4;
        case 0x42dac8u: goto label_42dac8;
        case 0x42daccu: goto label_42dacc;
        case 0x42dad0u: goto label_42dad0;
        case 0x42dad4u: goto label_42dad4;
        case 0x42dad8u: goto label_42dad8;
        case 0x42dadcu: goto label_42dadc;
        case 0x42dae0u: goto label_42dae0;
        case 0x42dae4u: goto label_42dae4;
        case 0x42dae8u: goto label_42dae8;
        case 0x42daecu: goto label_42daec;
        case 0x42daf0u: goto label_42daf0;
        case 0x42daf4u: goto label_42daf4;
        case 0x42daf8u: goto label_42daf8;
        case 0x42dafcu: goto label_42dafc;
        case 0x42db00u: goto label_42db00;
        case 0x42db04u: goto label_42db04;
        case 0x42db08u: goto label_42db08;
        case 0x42db0cu: goto label_42db0c;
        case 0x42db10u: goto label_42db10;
        case 0x42db14u: goto label_42db14;
        case 0x42db18u: goto label_42db18;
        case 0x42db1cu: goto label_42db1c;
        case 0x42db20u: goto label_42db20;
        case 0x42db24u: goto label_42db24;
        case 0x42db28u: goto label_42db28;
        case 0x42db2cu: goto label_42db2c;
        case 0x42db30u: goto label_42db30;
        case 0x42db34u: goto label_42db34;
        case 0x42db38u: goto label_42db38;
        case 0x42db3cu: goto label_42db3c;
        case 0x42db40u: goto label_42db40;
        case 0x42db44u: goto label_42db44;
        case 0x42db48u: goto label_42db48;
        case 0x42db4cu: goto label_42db4c;
        case 0x42db50u: goto label_42db50;
        case 0x42db54u: goto label_42db54;
        default: break;
    }

    ctx->pc = 0x42da90u;

label_42da90:
    // 0x42da90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42da94:
    // 0x42da94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_42da98:
    // 0x42da98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42da9c:
    // 0x42da9c: 0xc10b262  jal         func_42C988
label_42daa0:
    if (ctx->pc == 0x42DAA0u) {
        ctx->pc = 0x42DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DA9Cu;
        // 0x42daa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DAA4u;
        goto label_42daa4;
    }
    ctx->pc = 0x42DA9Cu;
    SET_GPR_U32(ctx, 31, 0x42DAA4u);
    ctx->pc = 0x42DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DA9Cu;
    // 0x42daa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42DA9Cu, 0x42DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DAA4u;
label_42daa4:
    // 0x42daa4: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x42daa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_42daa8:
    // 0x42daa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42daac:
    // 0x42daac: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x42daacu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_42dab0:
    // 0x42dab0: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_42dab4:
    if (ctx->pc == 0x42DAB4u) {
        ctx->pc = 0x42DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAB0u;
        // 0x42dab4: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DAB8u;
        goto label_42dab8;
    }
    ctx->pc = 0x42DAB0u;
    {
        const bool branch_taken_0x42dab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAB0u;
        // 0x42dab4: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dab0) {
            ctx->pc = 0x42DB44u;
            goto label_42db44;
        }
    }
    ctx->pc = 0x42DAB8u;
label_42dab8:
    // 0x42dab8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42dabc:
    // 0x42dabc: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_42dac0:
    if (ctx->pc == 0x42DAC0u) {
        ctx->pc = 0x42DAC4u;
        goto label_42dac4;
    }
    ctx->pc = 0x42DABCu;
    {
        const bool branch_taken_0x42dabc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x42dabc) {
            ctx->pc = 0x42DAD0u;
            goto label_42dad0;
        }
    }
    ctx->pc = 0x42DAC4u;
label_42dac4:
    // 0x42dac4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x42dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_42dac8:
    // 0x42dac8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_42dacc:
    if (ctx->pc == 0x42DACCu) {
        ctx->pc = 0x42DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAC8u;
        // 0x42dacc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DAD0u;
        goto label_42dad0;
    }
    ctx->pc = 0x42DAC8u;
    {
        const bool branch_taken_0x42dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAC8u;
        // 0x42dacc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dac8) {
            ctx->pc = 0x42DB48u;
            goto label_42db48;
        }
    }
    ctx->pc = 0x42DAD0u;
label_42dad0:
    // 0x42dad0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_42dad4:
    if (ctx->pc == 0x42DAD4u) {
        ctx->pc = 0x42DAD8u;
        goto label_42dad8;
    }
    ctx->pc = 0x42DAD0u;
    {
        const bool branch_taken_0x42dad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dad0) {
            ctx->pc = 0x42DB04u;
            goto label_42db04;
        }
    }
    ctx->pc = 0x42DAD8u;
label_42dad8:
    // 0x42dad8: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_42dadc:
    if (ctx->pc == 0x42DADCu) {
        ctx->pc = 0x42DAE0u;
        goto label_42dae0;
    }
    ctx->pc = 0x42DAD8u;
    {
        const bool branch_taken_0x42dad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x42dad8) {
            ctx->pc = 0x42DAFCu;
            goto label_42dafc;
        }
    }
    ctx->pc = 0x42DAE0u;
label_42dae0:
    // 0x42dae0: 0x10000002  b           . + 4 + (0x2 << 2)
label_42dae4:
    if (ctx->pc == 0x42DAE4u) {
        ctx->pc = 0x42DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAE0u;
        // 0x42dae4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DAE8u;
        goto label_42dae8;
    }
    ctx->pc = 0x42DAE0u;
    {
        const bool branch_taken_0x42dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAE0u;
        // 0x42dae4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dae0) {
            ctx->pc = 0x42DAECu;
            goto label_42daec;
        }
    }
    ctx->pc = 0x42DAE8u;
label_42dae8:
    // 0x42dae8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x42dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_42daec:
    // 0x42daec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42daf0:
    if (ctx->pc == 0x42DAF0u) {
        ctx->pc = 0x42DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAECu;
        // 0x42daf0: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DAF4u;
        goto label_42daf4;
    }
    ctx->pc = 0x42DAECu;
    {
        const bool branch_taken_0x42daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAECu;
        // 0x42daf0: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42daec) {
            ctx->pc = 0x42DB04u;
            goto label_42db04;
        }
    }
    ctx->pc = 0x42DAF4u;
label_42daf4:
    // 0x42daf4: 0x1450fffc  bne         $v0, $s0, . + 4 + (-0x4 << 2)
label_42daf8:
    if (ctx->pc == 0x42DAF8u) {
        ctx->pc = 0x42DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAF4u;
        // 0x42daf8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DAFCu;
        goto label_42dafc;
    }
    ctx->pc = 0x42DAF4u;
    {
        const bool branch_taken_0x42daf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x42DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAF4u;
        // 0x42daf8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42daf4) {
            ctx->pc = 0x42DAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dae8;
        }
    }
    ctx->pc = 0x42DAFCu;
label_42dafc:
    // 0x42dafc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_42db00:
    if (ctx->pc == 0x42DB00u) {
        ctx->pc = 0x42DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DAFCu;
        // 0x42db00: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB04u;
        goto label_42db04;
    }
    ctx->pc = 0x42DAFCu;
    {
        const bool branch_taken_0x42dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42dafc) {
            ctx->pc = 0x42DB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42DAFCu;
            // 0x42db00: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42DB0Cu;
            goto label_42db0c;
        }
    }
    ctx->pc = 0x42DB04u;
label_42db04:
    // 0x42db04: 0xc10b61a  jal         func_42D868
label_42db08:
    if (ctx->pc == 0x42DB08u) {
        ctx->pc = 0x42DB0Cu;
        goto label_42db0c;
    }
    ctx->pc = 0x42DB04u;
    SET_GPR_U32(ctx, 31, 0x42DB0Cu);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42DB04u, 0x42DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DB0Cu;
label_42db0c:
    // 0x42db0c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x42db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_42db10:
    // 0x42db10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_42db14:
    if (ctx->pc == 0x42DB14u) {
        ctx->pc = 0x42DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB10u;
        // 0x42db14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB18u;
        goto label_42db18;
    }
    ctx->pc = 0x42DB10u;
    {
        const bool branch_taken_0x42db10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB10u;
        // 0x42db14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42db10) {
            ctx->pc = 0x42DB24u;
            goto label_42db24;
        }
    }
    ctx->pc = 0x42DB18u;
label_42db18:
    // 0x42db18: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x42db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42db1c:
    // 0x42db1c: 0x60f809  jalr        $v1
label_42db20:
    if (ctx->pc == 0x42DB20u) {
        ctx->pc = 0x42DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB1Cu;
        // 0x42db20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB24u;
        goto label_42db24;
    }
    ctx->pc = 0x42DB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42DB24u);
        ctx->pc = 0x42DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB1Cu;
        // 0x42db20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DB1Cu, 0x42DB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42DB24u;
label_42db24:
    // 0x42db24: 0xc10bec2  jal         func_42FB08
label_42db28:
    if (ctx->pc == 0x42DB28u) {
        ctx->pc = 0x42DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB24u;
        // 0x42db28: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB2Cu;
        goto label_42db2c;
    }
    ctx->pc = 0x42DB24u;
    SET_GPR_U32(ctx, 31, 0x42DB2Cu);
    ctx->pc = 0x42DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DB24u;
    // 0x42db28: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FB08u, 0x42DB24u, 0x42DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DB2Cu;
label_42db2c:
    // 0x42db2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_42db30:
    if (ctx->pc == 0x42DB30u) {
        ctx->pc = 0x42DB34u;
        goto label_42db34;
    }
    ctx->pc = 0x42DB2Cu;
    {
        const bool branch_taken_0x42db2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42db2c) {
            ctx->pc = 0x42DB3Cu;
            goto label_42db3c;
        }
    }
    ctx->pc = 0x42DB34u;
label_42db34:
    // 0x42db34: 0xc10b65c  jal         func_42D970
label_42db38:
    if (ctx->pc == 0x42DB38u) {
        ctx->pc = 0x42DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB34u;
        // 0x42db38: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB3Cu;
        goto label_42db3c;
    }
    ctx->pc = 0x42DB34u;
    SET_GPR_U32(ctx, 31, 0x42DB3Cu);
    ctx->pc = 0x42DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DB34u;
    // 0x42db38: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D970u, 0x42DB34u, 0x42DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DB3Cu;
label_42db3c:
    // 0x42db3c: 0xc10b65c  jal         func_42D970
label_42db40:
    if (ctx->pc == 0x42DB40u) {
        ctx->pc = 0x42DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB3Cu;
        // 0x42db40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB44u;
        goto label_42db44;
    }
    ctx->pc = 0x42DB3Cu;
    SET_GPR_U32(ctx, 31, 0x42DB44u);
    ctx->pc = 0x42DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DB3Cu;
    // 0x42db40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D970u, 0x42DB3Cu, 0x42DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DB44u;
label_42db44:
    // 0x42db44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42db44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42db48:
    // 0x42db48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42db48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42db4c:
    // 0x42db4c: 0x3e00008  jr          $ra
label_42db50:
    if (ctx->pc == 0x42DB50u) {
        ctx->pc = 0x42DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB4Cu;
        // 0x42db50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DB54u;
        goto label_42db54;
    }
    ctx->pc = 0x42DB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB4Cu;
        // 0x42db50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DB54u;
label_42db54:
    // 0x42db54: 0x0  nop
    ctx->pc = 0x42db54u;
    // NOP
    ctx->pc = 0x42db58u;
}

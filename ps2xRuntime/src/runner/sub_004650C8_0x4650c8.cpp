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

// Function: sub_004650C8
// Address: 0x4650c8 - 0x465300
void sub_004650C8_0x4650c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004650C8_0x4650c8");
#endif

    switch (ctx->pc) {
        case 0x465108u: goto label_465108;
        case 0x465144u: goto label_465144;
        case 0x46515cu: goto label_46515c;
        case 0x4651bcu: goto label_4651bc;
        case 0x4651f0u: goto label_4651f0;
        case 0x4651f8u: goto label_4651f8;
        case 0x465258u: goto label_465258;
        case 0x465270u: goto label_465270;
        case 0x46528cu: goto label_46528c;
        case 0x4652acu: goto label_4652ac;
        default: break;
    }

    ctx->pc = 0x4650c8u;

    // 0x4650c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4650c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4650cc: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4650ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4650d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4650d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4650d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4650d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4650d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4650d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4650dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4650dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4650e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4650e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4650e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4650e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4650e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4650e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4650ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4650ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4650f0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4650f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4650f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4650f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4650f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4650f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4650fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4650fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465100: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x465100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x465104: 0x0  nop
    ctx->pc = 0x465104u;
    // NOP
label_465108:
    // 0x465108: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x465108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x46510c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x46510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465110: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x465110u;
    {
        const bool branch_taken_0x465110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x465114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465110u;
        // 0x465114: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465110) {
            ctx->pc = 0x465130u;
            goto label_465130;
        }
    }
    ctx->pc = 0x465118u;
    // 0x465118: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x465118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x46511c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x46511cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465120: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x465120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465124: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x465124u;
    {
        const bool branch_taken_0x465124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465124u;
        // 0x465128: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465124) {
            ctx->pc = 0x465108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465108;
        }
    }
    ctx->pc = 0x46512Cu;
    // 0x46512c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46512cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465130:
    // 0x465130: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x465130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x465134: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x465134u;
    {
        const bool branch_taken_0x465134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x465134) {
            ctx->pc = 0x465138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465134u;
            // 0x465138: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46514Cu;
            goto label_46514c;
        }
    }
    ctx->pc = 0x46513Cu;
    // 0x46513c: 0xc122364  jal         func_488D90
    ctx->pc = 0x46513Cu;
    SET_GPR_U32(ctx, 31, 0x465144u);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x46513Cu, 0x465144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465144u;
label_465144:
    // 0x465144: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x465144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x465148: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x465148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46514c:
    // 0x46514c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46514Cu;
    {
        const bool branch_taken_0x46514c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46514c) {
            ctx->pc = 0x465164u;
            goto label_465164;
        }
    }
    ctx->pc = 0x465154u;
    // 0x465154: 0xc122364  jal         func_488D90
    ctx->pc = 0x465154u;
    SET_GPR_U32(ctx, 31, 0x46515Cu);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x465154u, 0x46515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46515Cu;
label_46515c:
    // 0x46515c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x46515cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x465160: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x465160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_465164:
    // 0x465164: 0x52200056  beql        $s1, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x465164u;
    {
        const bool branch_taken_0x465164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x465164) {
            ctx->pc = 0x465168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465164u;
            // 0x465168: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4652C0u;
            goto label_4652c0;
        }
    }
    ctx->pc = 0x46516Cu;
    // 0x46516c: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x46516cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x465170: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x465170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x465174: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x465174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x465178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x465178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46517c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x46517cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x465180: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x465180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x465184: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x465184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x465188: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x465188u;
    {
        const bool branch_taken_0x465188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465188u;
        // 0x46518c: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465188) {
            ctx->pc = 0x4652DCu;
            goto label_4652dc;
        }
    }
    ctx->pc = 0x465190u;
    // 0x465190: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x465190u;
    {
        const bool branch_taken_0x465190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x465190) {
            ctx->pc = 0x4651A4u;
            goto label_4651a4;
        }
    }
    ctx->pc = 0x465198u;
    // 0x465198: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x465198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x46519c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x46519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4651a0: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x4651a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4651a4:
    // 0x4651a4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x4651A4u;
    {
        const bool branch_taken_0x4651a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4651A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4651A4u;
        // 0x4651a8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4651a4) {
            ctx->pc = 0x4652E0u;
            goto label_4652e0;
        }
    }
    ctx->pc = 0x4651ACu;
    // 0x4651ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4651acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4651b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4651b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4651b4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4651B4u;
    SET_GPR_U32(ctx, 31, 0x4651BCu);
    ctx->pc = 0x4651B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4651B4u;
    // 0x4651b8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4651B4u, 0x4651BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4651BCu;
label_4651bc:
    // 0x4651bc: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x4651bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4651c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4651c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4651c4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4651C4u;
    {
        const bool branch_taken_0x4651c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4651C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4651C4u;
        // 0x4651c8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4651c4) {
            ctx->pc = 0x4651E0u;
            goto label_4651e0;
        }
    }
    ctx->pc = 0x4651CCu;
    // 0x4651cc: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x4651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4651d0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x4651d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4651d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4651d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4651d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4651D8u;
    {
        const bool branch_taken_0x4651d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4651DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4651D8u;
        // 0x4651dc: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4651d8) {
            ctx->pc = 0x465228u;
            goto label_465228;
        }
    }
    ctx->pc = 0x4651E0u;
label_4651e0:
    // 0x4651e0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4651e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4651e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4651e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4651e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4651E8u;
    {
        const bool branch_taken_0x4651e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4651E8u;
        // 0x4651ec: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4651e8) {
            ctx->pc = 0x465228u;
            goto label_465228;
        }
    }
    ctx->pc = 0x4651F0u;
label_4651f0:
    // 0x4651f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4651f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4651f4: 0x0  nop
    ctx->pc = 0x4651f4u;
    // NOP
label_4651f8:
    // 0x4651f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4651f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4651fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4651fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x465200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x465200u;
    {
        const bool branch_taken_0x465200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x465204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465200u;
        // 0x465204: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465200) {
            ctx->pc = 0x46521Cu;
            goto label_46521c;
        }
    }
    ctx->pc = 0x465208u;
    // 0x465208: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x465208u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x46520c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x46520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x465210: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x465210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x465214: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x465214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x465218: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x465218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46521c:
    // 0x46521c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x46521cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x465220: 0x4c1fff5  bgez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x465220u;
    {
        const bool branch_taken_0x465220 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x465224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465220u;
        // 0x465224: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465220) {
            ctx->pc = 0x4651F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4651f8;
        }
    }
    ctx->pc = 0x465228u;
label_465228:
    // 0x465228: 0x2902001e  slti        $v0, $t0, 0x1E
    ctx->pc = 0x465228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x46522c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46522Cu;
    {
        const bool branch_taken_0x46522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x465230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46522Cu;
        // 0x465230: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46522c) {
            ctx->pc = 0x465250u;
            goto label_465250;
        }
    }
    ctx->pc = 0x465234u;
    // 0x465234: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x465234u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465238: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x465238u;
    {
        const bool branch_taken_0x465238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465238u;
        // 0x46523c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465238) {
            ctx->pc = 0x4651F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4651f0;
        }
    }
    ctx->pc = 0x465240u;
    // 0x465240: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x465240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x465244: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x465244u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465248: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x465248u;
    {
        const bool branch_taken_0x465248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465248u;
        // 0x46524c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465248) {
            ctx->pc = 0x4651F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4651f8;
        }
    }
    ctx->pc = 0x465250u;
label_465250:
    // 0x465250: 0xc1223de  jal         func_488F78
    ctx->pc = 0x465250u;
    SET_GPR_U32(ctx, 31, 0x465258u);
    ctx->pc = 0x465254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465250u;
    // 0x465254: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F78u, 0x465250u, 0x465258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465258u;
label_465258:
    // 0x465258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x465258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46525c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46525Cu;
    {
        const bool branch_taken_0x46525c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x465260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46525Cu;
        // 0x465260: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46525c) {
            ctx->pc = 0x465274u;
            goto label_465274;
        }
    }
    ctx->pc = 0x465264u;
    // 0x465264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465268: 0xc1223aa  jal         func_488EA8
    ctx->pc = 0x465268u;
    SET_GPR_U32(ctx, 31, 0x465270u);
    ctx->pc = 0x46526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465268u;
    // 0x46526c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488EA8u, 0x465268u, 0x465270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465270u;
label_465270:
    // 0x465270: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x465270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_465274:
    // 0x465274: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x465274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x465278: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x465278u;
    {
        const bool branch_taken_0x465278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x465278) {
            ctx->pc = 0x46527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465278u;
            // 0x46527c: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4652B4u;
            goto label_4652b4;
        }
    }
    ctx->pc = 0x465280u;
    // 0x465280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x465280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465284: 0xc119852  jal         func_466148
    ctx->pc = 0x465284u;
    SET_GPR_U32(ctx, 31, 0x46528Cu);
    ctx->pc = 0x465288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465284u;
    // 0x465288: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466148u, 0x465284u, 0x46528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46528Cu;
label_46528c:
    // 0x46528c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46528Cu;
    {
        const bool branch_taken_0x46528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46528Cu;
        // 0x465290: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46528c) {
            ctx->pc = 0x46529Cu;
            goto label_46529c;
        }
    }
    ctx->pc = 0x465294u;
    // 0x465294: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x465294u;
    {
        const bool branch_taken_0x465294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465294u;
        // 0x465298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465294) {
            ctx->pc = 0x4652E0u;
            goto label_4652e0;
        }
    }
    ctx->pc = 0x46529Cu;
label_46529c:
    // 0x46529c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46529Cu;
    {
        const bool branch_taken_0x46529c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4652A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46529Cu;
        // 0x4652a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46529c) {
            ctx->pc = 0x4652BCu;
            goto label_4652bc;
        }
    }
    ctx->pc = 0x4652A4u;
    // 0x4652a4: 0xc122392  jal         func_488E48
    ctx->pc = 0x4652A4u;
    SET_GPR_U32(ctx, 31, 0x4652ACu);
    ctx->pc = 0x4652A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4652A4u;
    // 0x4652a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488E48u, 0x4652A4u, 0x4652ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4652ACu;
label_4652ac:
    // 0x4652ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4652ACu;
    {
        const bool branch_taken_0x4652ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4652B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4652ACu;
        // 0x4652b0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4652ac) {
            ctx->pc = 0x4652C0u;
            goto label_4652c0;
        }
    }
    ctx->pc = 0x4652B4u;
label_4652b4:
    // 0x4652b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4652b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4652b8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x4652b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_4652bc:
    // 0x4652bc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4652bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4652c0:
    // 0x4652c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4652c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4652c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4652c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4652c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4652c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4652cc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x4652ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4652d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4652d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4652d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4652d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4652d8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x4652d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_4652dc:
    // 0x4652dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4652dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4652e0:
    // 0x4652e0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4652e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4652e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4652e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4652e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4652e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4652ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4652ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4652f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4652f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4652f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4652f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4652f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4652F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4652FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4652F8u;
        // 0x4652fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4652F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465300u;
}

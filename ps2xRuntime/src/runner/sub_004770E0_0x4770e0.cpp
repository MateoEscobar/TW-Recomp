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

// Function: sub_004770E0
// Address: 0x4770e0 - 0x477208
void sub_004770E0_0x4770e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004770E0_0x4770e0");
#endif

    ctx->pc = 0x4770e0u;

    // 0x4770e0: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4770e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4770e4: 0x8d6a0018  lw          $t2, 0x18($t3)
    ctx->pc = 0x4770e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x4770e8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4770e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x4770ec: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4770ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4770f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4770f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4770f4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x4770F4u;
    {
        const bool branch_taken_0x4770f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4770F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4770F4u;
        // 0x4770f8: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4770f4) {
            ctx->pc = 0x477200u;
            goto label_477200;
        }
    }
    ctx->pc = 0x4770FCu;
    // 0x4770fc: 0x91420008  lbu         $v0, 0x8($t2)
    ctx->pc = 0x4770fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x477100: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x477100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x477104: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x477104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x477108: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x477108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x47710c: 0x91440018  lbu         $a0, 0x18($t2)
    ctx->pc = 0x47710cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x477110: 0x3042009f  andi        $v0, $v0, 0x9F
    ctx->pc = 0x477110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)159);
    // 0x477114: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x477114u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x477118: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x477118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x47711c: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x47711cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x477120: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x477120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x477124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x477124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x477128: 0x8d270010  lw          $a3, 0x10($t1)
    ctx->pc = 0x477128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x47712c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x47712cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x477130: 0x644025  or          $t0, $v1, $a0
    ctx->pc = 0x477130u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x477134: 0xad280018  sw          $t0, 0x18($t1)
    ctx->pc = 0x477134u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 8));
    // 0x477138: 0xad260014  sw          $a2, 0x14($t1)
    ctx->pc = 0x477138u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 6));
    // 0x47713c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x47713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x477140: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x477140u;
    {
        const bool branch_taken_0x477140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477140u;
        // 0x477144: 0x24470018  addiu       $a3, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477140) {
            ctx->pc = 0x477200u;
            goto label_477200;
        }
    }
    ctx->pc = 0x477148u;
    // 0x477148: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x477148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x47714c: 0x1105000d  beq         $t0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x47714Cu;
    {
        const bool branch_taken_0x47714c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x477150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47714Cu;
        // 0x477150: 0x2564004c  addiu       $a0, $t3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47714c) {
            ctx->pc = 0x477184u;
            goto label_477184;
        }
    }
    ctx->pc = 0x477154u;
    // 0x477154: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x477154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x477158: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x477158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x47715c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x47715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x477160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x477160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x477164: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x477164u;
    {
        const bool branch_taken_0x477164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x477168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477164u;
        // 0x477168: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477164) {
            ctx->pc = 0x477180u;
            goto label_477180;
        }
    }
    ctx->pc = 0x47716Cu;
    // 0x47716c: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x47716cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x477170: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x477170u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x477174: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x477174u;
    {
        const bool branch_taken_0x477174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x477178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477174u;
        // 0x477178: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477174) {
            ctx->pc = 0x477180u;
            goto label_477180;
        }
    }
    ctx->pc = 0x47717Cu;
    // 0x47717c: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x47717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_477180:
    // 0x477180: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x477180u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_477184:
    // 0x477184: 0x9542000c  lhu         $v0, 0xC($t2)
    ctx->pc = 0x477184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x477188: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x477188u;
    {
        const bool branch_taken_0x477188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477188u;
        // 0x47718c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477188) {
            ctx->pc = 0x4771C0u;
            goto label_4771c0;
        }
    }
    ctx->pc = 0x477190u;
    // 0x477190: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x477190u;
    {
        const bool branch_taken_0x477190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477190) {
            ctx->pc = 0x477194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477190u;
            // 0x477194: 0x8d230014  lw          $v1, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4771A8u;
            goto label_4771a8;
        }
    }
    ctx->pc = 0x477198u;
    // 0x477198: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x477198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x47719c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x47719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4771a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4771A0u;
    {
        const bool branch_taken_0x4771a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4771A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4771A0u;
        // 0x4771a4: 0xad220014  sw          $v0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4771a0) {
            ctx->pc = 0x4771C0u;
            goto label_4771c0;
        }
    }
    ctx->pc = 0x4771A8u;
label_4771a8:
    // 0x4771a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4771a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4771ac: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x4771acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x4771b0: 0x9542000c  lhu         $v0, 0xC($t2)
    ctx->pc = 0x4771b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4771b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4771b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4771b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4771b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4771bc: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x4771bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
label_4771c0:
    // 0x4771c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4771c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4771c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4771c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4771c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4771C8u;
    {
        const bool branch_taken_0x4771c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4771c8) {
            ctx->pc = 0x477200u;
            goto label_477200;
        }
    }
    ctx->pc = 0x4771D0u;
    // 0x4771d0: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x4771d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x4771d4: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x4771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4771d8: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4771D8u;
    {
        const bool branch_taken_0x4771d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4771d8) {
            ctx->pc = 0x4771DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4771D8u;
            // 0x4771dc: 0x8d220014  lw          $v0, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4771F8u;
            goto label_4771f8;
        }
    }
    ctx->pc = 0x4771E0u;
    // 0x4771e0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x4771e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4771e4: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x4771e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4771e8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4771E8u;
    {
        const bool branch_taken_0x4771e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4771e8) {
            ctx->pc = 0x477200u;
            goto label_477200;
        }
    }
    ctx->pc = 0x4771F0u;
    // 0x4771f0: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4771f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4771f4: 0x0  nop
    ctx->pc = 0x4771f4u;
    // NOP
label_4771f8:
    // 0x4771f8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4771f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4771fc: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x4771fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_477200:
    // 0x477200: 0x3e00008  jr          $ra
    ctx->pc = 0x477200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477208u;
}

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

// Function: sub_004B4348
// Address: 0x4b4348 - 0x4b44c8
void sub_004B4348_0x4b4348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4348_0x4b4348");
#endif

    switch (ctx->pc) {
        case 0x4b4398u: goto label_4b4398;
        case 0x4b43d0u: goto label_4b43d0;
        case 0x4b4410u: goto label_4b4410;
        case 0x4b4458u: goto label_4b4458;
        case 0x4b4480u: goto label_4b4480;
        default: break;
    }

    ctx->pc = 0x4b4348u;

    // 0x4b4348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b434c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4b434cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b4354: 0x53143  sra         $a2, $a1, 5
    ctx->pc = 0x4b4354u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 5));
    // 0x4b4358: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b435c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b4360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b4360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b4364: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b4364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b4368: 0x8d440010  lw          $a0, 0x10($t2)
    ctx->pc = 0x4b4368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4b436c: 0x8d470004  lw          $a3, 0x4($t2)
    ctx->pc = 0x4b436cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4b4370: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x4b4370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4b4374: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x4B4374u;
    {
        const bool branch_taken_0x4b4374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4374u;
        // 0x4b4378: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4374) {
            ctx->pc = 0x4B44A4u;
            goto label_4b44a4;
        }
    }
    ctx->pc = 0x4B437Cu;
    // 0x4b437c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x4b437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4b4380: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x4b4380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4b4384: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B4384u;
    {
        const bool branch_taken_0x4b4384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4384u;
        // 0x4b4388: 0x49880  sll         $s3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4384) {
            ctx->pc = 0x4B43BCu;
            goto label_4b43bc;
        }
    }
    ctx->pc = 0x4B438Cu;
    // 0x4b438c: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x4b438cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4b4390: 0x30b1001f  andi        $s1, $a1, 0x1F
    ctx->pc = 0x4b4390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x4b4394: 0x0  nop
    ctx->pc = 0x4b4394u;
    // NOP
label_4b4398:
    // 0x4b4398: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4b4398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4b439c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4b439cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4b43a0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x4b43a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4b43a4: 0x0  nop
    ctx->pc = 0x4b43a4u;
    // NOP
    // 0x4b43a8: 0x0  nop
    ctx->pc = 0x4b43a8u;
    // NOP
    // 0x4b43ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B43ACu;
    {
        const bool branch_taken_0x4b43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b43ac) {
            ctx->pc = 0x4B4398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4398;
        }
    }
    ctx->pc = 0x4B43B4u;
    // 0x4b43b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B43B4u;
    {
        const bool branch_taken_0x4b43b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B43B4u;
        // 0x4b43b8: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b43b4) {
            ctx->pc = 0x4B43C8u;
            goto label_4b43c8;
        }
    }
    ctx->pc = 0x4B43BCu;
label_4b43bc:
    // 0x4b43bc: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x4b43bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4b43c0: 0x30b1001f  andi        $s1, $a1, 0x1F
    ctx->pc = 0x4b43c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x4b43c4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4b43c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b43c8:
    // 0x4b43c8: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B43C8u;
    SET_GPR_U32(ctx, 31, 0x4B43D0u);
    ctx->pc = 0x4B43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B43C8u;
    // 0x4b43cc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B43C8u, 0x4B43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B43D0u;
label_4b43d0:
    // 0x4b43d0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4b43d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b43d4: 0x25490014  addiu       $t1, $t2, 0x14
    ctx->pc = 0x4b43d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x4b43d8: 0x1333021  addu        $a2, $t1, $s3
    ctx->pc = 0x4b43d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x4b43dc: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B43DCu;
    {
        const bool branch_taken_0x4b43dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B43DCu;
        // 0x4b43e0: 0xd23821  addu        $a3, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b43dc) {
            ctx->pc = 0x4B4454u;
            goto label_4b4454;
        }
    }
    ctx->pc = 0x4B43E4u;
    // 0x4b43e4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4b43e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4b43e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b43ec: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4b43ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b43f0: 0x515823  subu        $t3, $v0, $s1
    ctx->pc = 0x4b43f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4b43f4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x4b43f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4b43f8: 0x126202b  sltu        $a0, $t1, $a2
    ctx->pc = 0x4b43f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4b43fc: 0x1681006  srlv        $v0, $t0, $t3
    ctx->pc = 0x4b43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 11) & 0x1F));
    // 0x4b4400: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x4b4400u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x4b4404: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B4404u;
    {
        const bool branch_taken_0x4b4404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4404u;
        // 0x4b4408: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4404) {
            ctx->pc = 0x4B4440u;
            goto label_4b4440;
        }
    }
    ctx->pc = 0x4B440Cu;
    // 0x4b440c: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x4b440cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4b4410:
    // 0x4b4410: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4b4410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4b4414: 0x2281804  sllv        $v1, $t0, $s1
    ctx->pc = 0x4b4414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
    // 0x4b4418: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4b4418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b441c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4b441cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4b4420: 0x126282b  sltu        $a1, $t1, $a2
    ctx->pc = 0x4b4420u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4b4424: 0x1641006  srlv        $v0, $a0, $t3
    ctx->pc = 0x4b4424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 11) & 0x1F));
    // 0x4b4428: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4b4428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b442c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b4430: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4B4430u;
    {
        const bool branch_taken_0x4b4430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4430u;
        // 0x4b4434: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4430) {
            ctx->pc = 0x4B4410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4410;
        }
    }
    ctx->pc = 0x4B4438u;
    // 0x4b4438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4438u;
    {
        const bool branch_taken_0x4b4438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4438u;
        // 0x4b443c: 0x2281004  sllv        $v0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4438) {
            ctx->pc = 0x4B4448u;
            goto label_4b4448;
        }
    }
    ctx->pc = 0x4B4440u;
label_4b4440:
    // 0x4b4440: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x4b4440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4b4444: 0x2281004  sllv        $v0, $t0, $s1
    ctx->pc = 0x4b4444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
label_4b4448:
    // 0x4b4448: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4b4448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4b444c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B444Cu;
    {
        const bool branch_taken_0x4b444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B444Cu;
        // 0x4b4450: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b444c) {
            ctx->pc = 0x4B4484u;
            goto label_4b4484;
        }
    }
    ctx->pc = 0x4B4454u;
label_4b4454:
    // 0x4b4454: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x4b4454u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4b4458:
    // 0x4b4458: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4b4458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x4b445c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4b445cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4b4460: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4464: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x4b4464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4b4468: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b4468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b446c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B446Cu;
    {
        const bool branch_taken_0x4b446c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b446c) {
            ctx->pc = 0x4B4458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4458;
        }
    }
    ctx->pc = 0x4B4474u;
    // 0x4b4474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4474u;
    {
        const bool branch_taken_0x4b4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4474u;
        // 0x4b4478: 0x127102b  sltu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4474) {
            ctx->pc = 0x4B4498u;
            goto label_4b4498;
        }
    }
    ctx->pc = 0x4B447Cu;
    // 0x4b447c: 0x0  nop
    ctx->pc = 0x4b447cu;
    // NOP
label_4b4480:
    // 0x4b4480: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4b4480u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4b4484:
    // 0x4b4484: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x4b4484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4b4488: 0x0  nop
    ctx->pc = 0x4b4488u;
    // NOP
    // 0x4b448c: 0x0  nop
    ctx->pc = 0x4b448cu;
    // NOP
    // 0x4b4490: 0x0  nop
    ctx->pc = 0x4b4490u;
    // NOP
    // 0x4b4494: 0x0  nop
    ctx->pc = 0x4b4494u;
    // NOP
label_4b4498:
    // 0x4b4498: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B4498u;
    {
        const bool branch_taken_0x4b4498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4498) {
            ctx->pc = 0x4B449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4498u;
            // 0x4b449c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4480;
        }
    }
    ctx->pc = 0x4B44A0u;
    // 0x4b44a0: 0xad4c0010  sw          $t4, 0x10($t2)
    ctx->pc = 0x4b44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 12));
label_4b44a4:
    // 0x4b44a4: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x4b44a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b44a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b44a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b44ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b44acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b44b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b44b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b44b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b44b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b44b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b44b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b44bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B44BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44BCu;
        // 0x4b44c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B44BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B44C4u;
    // 0x4b44c4: 0x0  nop
    ctx->pc = 0x4b44c4u;
    // NOP
    ctx->pc = 0x4b44c8u;
}

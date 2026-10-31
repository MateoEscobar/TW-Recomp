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

// Function: sub_00485690
// Address: 0x485690 - 0x485888
void sub_00485690_0x485690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485690_0x485690");
#endif

    switch (ctx->pc) {
        case 0x485720u: goto label_485720;
        case 0x4857a8u: goto label_4857a8;
        case 0x4857c8u: goto label_4857c8;
        case 0x485844u: goto label_485844;
        case 0x485850u: goto label_485850;
        default: break;
    }

    ctx->pc = 0x485690u;

    // 0x485690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x485694: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x485694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48569c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4856a0: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x4856a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4856a4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4856A4u;
    {
        const bool branch_taken_0x4856a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4856A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4856A4u;
        // 0x4856a8: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856a4) {
            ctx->pc = 0x4856D8u;
            goto label_4856d8;
        }
    }
    ctx->pc = 0x4856ACu;
    // 0x4856ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4856ACu;
    {
        const bool branch_taken_0x4856ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4856B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4856ACu;
        // 0x4856b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856ac) {
            ctx->pc = 0x4856C4u;
            goto label_4856c4;
        }
    }
    ctx->pc = 0x4856B4u;
    // 0x4856b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4856B4u;
    {
        const bool branch_taken_0x4856b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4856B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4856B4u;
        // 0x4856b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856b4) {
            ctx->pc = 0x4856D8u;
            goto label_4856d8;
        }
    }
    ctx->pc = 0x4856BCu;
    // 0x4856bc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x4856BCu;
    {
        const bool branch_taken_0x4856bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4856bc) {
            ctx->pc = 0x485830u;
            goto label_485830;
        }
    }
    ctx->pc = 0x4856C4u;
label_4856c4:
    // 0x4856c4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4856c8: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4856C8u;
    {
        const bool branch_taken_0x4856c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4856CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4856C8u;
        // 0x4856cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856c8) {
            ctx->pc = 0x485774u;
            goto label_485774;
        }
    }
    ctx->pc = 0x4856D0u;
    // 0x4856d0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x4856D0u;
    {
        const bool branch_taken_0x4856d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4856d0) {
            ctx->pc = 0x485830u;
            goto label_485830;
        }
    }
    ctx->pc = 0x4856D8u;
label_4856d8:
    // 0x4856d8: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x4856d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4856dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4856dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4856e0: 0x8d440018  lw          $a0, 0x18($t2)
    ctx->pc = 0x4856e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x4856e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4856E4u;
    {
        const bool branch_taken_0x4856e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4856E4u;
        // 0x4856e8: 0x434804  sllv        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856e4) {
            ctx->pc = 0x485700u;
            goto label_485700;
        }
    }
    ctx->pc = 0x4856ECu;
    // 0x4856ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4856ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4856f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4856f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4856f4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x4856F4u;
    {
        const bool branch_taken_0x4856f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4856F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4856F4u;
        // 0x4856f8: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4856f4) {
            ctx->pc = 0x48583Cu;
            goto label_48583c;
        }
    }
    ctx->pc = 0x4856FCu;
    // 0x4856fc: 0x0  nop
    ctx->pc = 0x4856fcu;
    // NOP
label_485700:
    // 0x485700: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x485700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x485704: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x485704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x485708: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x485708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48570c: 0x2442ad24  addiu       $v0, $v0, -0x52DC
    ctx->pc = 0x48570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946084));
    // 0x485710: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x485710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x485714: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x485714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485718: 0x1120004f  beqz        $t1, . + 4 + (0x4F << 2)
    ctx->pc = 0x485718u;
    {
        const bool branch_taken_0x485718 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485718u;
        // 0x48571c: 0x2527ffff  addiu       $a3, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485718) {
            ctx->pc = 0x485858u;
            goto label_485858;
        }
    }
    ctx->pc = 0x485720u;
label_485720:
    // 0x485720: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x485720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x485724: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x485724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485728: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x485728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x48572c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x48572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x485730: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x485730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485734: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x485734u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x485738: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x485738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x48573c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x48573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x485740: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x485740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485744: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x485744u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x485748: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x485748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x48574c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x48574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x485750: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x485750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485754: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x485754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x485758: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x485758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x48575c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x48575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x485760: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x485760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x485764: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x485764u;
    {
        const bool branch_taken_0x485764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x485768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485764u;
        // 0x485768: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485764) {
            ctx->pc = 0x485720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485720;
        }
    }
    ctx->pc = 0x48576Cu;
    // 0x48576c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x48576Cu;
    {
        const bool branch_taken_0x48576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48576Cu;
        // 0x485770: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48576c) {
            ctx->pc = 0x48585Cu;
            goto label_48585c;
        }
    }
    ctx->pc = 0x485774u;
label_485774:
    // 0x485774: 0x8d490014  lw          $t1, 0x14($t2)
    ctx->pc = 0x485774u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x485778: 0x8d4c0004  lw          $t4, 0x4($t2)
    ctx->pc = 0x485778u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x48577c: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48577Cu;
    {
        const bool branch_taken_0x48577c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x485780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48577Cu;
        // 0x485780: 0x8d4d0008  lw          $t5, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48577c) {
            ctx->pc = 0x485798u;
            goto label_485798;
        }
    }
    ctx->pc = 0x485784u;
    // 0x485784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485788: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x485788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x48578c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x485790: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x485790u;
    {
        const bool branch_taken_0x485790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485790u;
        // 0x485794: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x485790) {
            ctx->pc = 0x48583Cu;
            goto label_48583c;
        }
    }
    ctx->pc = 0x485798u;
label_485798:
    // 0x485798: 0x19a0002f  blez        $t5, . + 4 + (0x2F << 2)
    ctx->pc = 0x485798u;
    {
        const bool branch_taken_0x485798 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x48579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485798u;
        // 0x48579c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485798) {
            ctx->pc = 0x485858u;
            goto label_485858;
        }
    }
    ctx->pc = 0x4857A0u;
    // 0x4857a0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4857a4: 0x244ead24  addiu       $t6, $v0, -0x52DC
    ctx->pc = 0x4857a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946084));
label_4857a8:
    // 0x4857a8: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x4857a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x4857ac: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x4857acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4857b0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4857b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4857b4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4857b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4857b8: 0x4e4021  addu        $t0, $v0, $t6
    ctx->pc = 0x4857b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x4857bc: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x4857BCu;
    {
        const bool branch_taken_0x4857bc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x4857C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4857BCu;
        // 0x4857c0: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4857bc) {
            ctx->pc = 0x485814u;
            goto label_485814;
        }
    }
    ctx->pc = 0x4857C4u;
    // 0x4857c4: 0x0  nop
    ctx->pc = 0x4857c4u;
    // NOP
label_4857c8:
    // 0x4857c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4857c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4857cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4857ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4857d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4857d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4857d4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4857d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4857d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4857d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4857dc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x4857dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4857e0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x4857e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4857e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4857e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4857e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4857e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4857ec: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x4857ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4857f0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x4857f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4857f4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4857f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4857f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4857f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4857fc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x4857fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x485800: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x485800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x485804: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x485804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x485808: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x485808u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x48580c: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48580Cu;
    {
        const bool branch_taken_0x48580c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x485810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48580Cu;
        // 0x485810: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48580c) {
            ctx->pc = 0x4857C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4857c8;
        }
    }
    ctx->pc = 0x485814u;
label_485814:
    // 0x485814: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x485814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x485818: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x485818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48581c: 0x8d102a  slt         $v0, $a0, $t5
    ctx->pc = 0x48581cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x485820: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x485820u;
    {
        const bool branch_taken_0x485820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x485824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485820u;
        // 0x485824: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485820) {
            ctx->pc = 0x4857A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4857a8;
        }
    }
    ctx->pc = 0x485828u;
    // 0x485828: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x485828u;
    {
        const bool branch_taken_0x485828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485828u;
        // 0x48582c: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485828) {
            ctx->pc = 0x48585Cu;
            goto label_48585c;
        }
    }
    ctx->pc = 0x485830u;
label_485830:
    // 0x485830: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x485830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x485834: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x485834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x485838: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x485838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_48583c:
    // 0x48583c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x48583Cu;
    SET_GPR_U32(ctx, 31, 0x485844u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x48583Cu, 0x485844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485844u;
label_485844:
    // 0x485844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x485844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485848: 0xc11f024  jal         func_47C090
    ctx->pc = 0x485848u;
    SET_GPR_U32(ctx, 31, 0x485850u);
    ctx->pc = 0x48584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485848u;
    // 0x48584c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x485848u, 0x485850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485850u;
label_485850:
    // 0x485850: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x485850u;
    {
        const bool branch_taken_0x485850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485850u;
        // 0x485854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485850) {
            ctx->pc = 0x485868u;
            goto label_485868;
        }
    }
    ctx->pc = 0x485858u;
label_485858:
    // 0x485858: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x485858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_48585c:
    // 0x48585c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x48585cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485860: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x485860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x485864: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x485864u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_485868:
    // 0x485868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48586c: 0x3e00008  jr          $ra
    ctx->pc = 0x48586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48586Cu;
        // 0x485870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48586Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485874u;
    // 0x485874: 0x0  nop
    ctx->pc = 0x485874u;
    // NOP
    // 0x485878: 0xaf85c004  sw          $a1, -0x3FFC($gp)
    ctx->pc = 0x485878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950916), GPR_U32(ctx, 5));
    // 0x48587c: 0x0  nop
    ctx->pc = 0x48587cu;
    // NOP
    // 0x485880: 0xaf85c00c  sw          $a1, -0x3FF4($gp)
    ctx->pc = 0x485880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 5));
    // 0x485884: 0x0  nop
    ctx->pc = 0x485884u;
    // NOP
    ctx->pc = 0x485888u;
}

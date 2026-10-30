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

// Function: sub_004AD3F8
// Address: 0x4ad3f8 - 0x4ad510
void sub_004AD3F8_0x4ad3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD3F8_0x4ad3f8");
#endif

    switch (ctx->pc) {
        case 0x4ad438u: goto label_4ad438;
        case 0x4ad4c8u: goto label_4ad4c8;
        case 0x4ad4f8u: goto label_4ad4f8;
        default: break;
    }

    ctx->pc = 0x4ad3f8u;

    // 0x4ad3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad3fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad40c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad410: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD414u;
    {
        const bool branch_taken_0x4ad414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD414u;
        // 0x4ad418: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad414) {
            ctx->pc = 0x4AD424u;
            goto label_4ad424;
        }
    }
    ctx->pc = 0x4AD41Cu;
    // 0x4ad41c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD41Cu;
    {
        const bool branch_taken_0x4ad41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD41Cu;
        // 0x4ad420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad41c) {
            ctx->pc = 0x4AD43Cu;
            goto label_4ad43c;
        }
    }
    ctx->pc = 0x4AD424u;
label_4ad424:
    // 0x4ad424: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad428: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD428u;
    {
        const bool branch_taken_0x4ad428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD428u;
        // 0x4ad42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad428) {
            ctx->pc = 0x4AD43Cu;
            goto label_4ad43c;
        }
    }
    ctx->pc = 0x4AD430u;
    // 0x4ad430: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD430u;
    SET_GPR_U32(ctx, 31, 0x4AD438u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD430u, 0x4AD438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD438u;
label_4ad438:
    // 0x4ad438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad43c:
    // 0x4ad43c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4AD43Cu;
    {
        const bool branch_taken_0x4ad43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD43Cu;
        // 0x4ad440: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad43c) {
            ctx->pc = 0x4AD4F8u;
            goto label_4ad4f8;
        }
    }
    ctx->pc = 0x4AD444u;
    // 0x4ad444: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x4ad444u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad448: 0xdd830010  ld          $v1, 0x10($t4)
    ctx->pc = 0x4ad448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x4ad44c: 0x30641800  andi        $a0, $v1, 0x1800
    ctx->pc = 0x4ad44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6144);
    // 0x4ad450: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD450u;
    {
        const bool branch_taken_0x4ad450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD450u;
        // 0x4ad454: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad450) {
            ctx->pc = 0x4AD460u;
            goto label_4ad460;
        }
    }
    ctx->pc = 0x4AD458u;
    // 0x4ad458: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4AD458u;
    {
        const bool branch_taken_0x4ad458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD458u;
        // 0x4ad45c: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad458) {
            ctx->pc = 0x4AD484u;
            goto label_4ad484;
        }
    }
    ctx->pc = 0x4AD460u;
label_4ad460:
    // 0x4ad460: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x4ad460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4ad464: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD464u;
    {
        const bool branch_taken_0x4ad464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD464u;
        // 0x4ad468: 0x30630200  andi        $v1, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad464) {
            ctx->pc = 0x4AD478u;
            goto label_4ad478;
        }
    }
    ctx->pc = 0x4AD46Cu;
    // 0x4ad46c: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x4ad46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x4ad470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD470u;
    {
        const bool branch_taken_0x4ad470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD470u;
        // 0x4ad474: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad470) {
            ctx->pc = 0x4AD480u;
            goto label_4ad480;
        }
    }
    ctx->pc = 0x4AD478u;
label_4ad478:
    // 0x4ad478: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x4ad478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x4ad47c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x4ad47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_4ad480:
    // 0x4ad480: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x4ad480u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_4ad484:
    // 0x4ad484: 0x8d08001c  lw          $t0, 0x1C($t0)
    ctx->pc = 0x4ad484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x4ad488: 0x1d000004  bgtz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD488u;
    {
        const bool branch_taken_0x4ad488 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x4AD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD488u;
        // 0x4ad48c: 0xdd890010  ld          $t1, 0x10($t4) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad488) {
            ctx->pc = 0x4AD49Cu;
            goto label_4ad49c;
        }
    }
    ctx->pc = 0x4AD490u;
    // 0x4ad490: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4ad490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ad494: 0x31221000  andi        $v0, $t1, 0x1000
    ctx->pc = 0x4ad494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x4ad498: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x4ad498u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_4ad49c:
    // 0x4ad49c: 0x31220400  andi        $v0, $t1, 0x400
    ctx->pc = 0x4ad49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1024);
    // 0x4ad4a0: 0x8d870008  lw          $a3, 0x8($t4)
    ctx->pc = 0x4ad4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x4ad4a4: 0x240a002b  addiu       $t2, $zero, 0x2B
    ctx->pc = 0x4ad4a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4ad4a8: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4ad4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ad4ac: 0x858b0018  lh          $t3, 0x18($t4)
    ctx->pc = 0x4ad4acu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x4ad4b0: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x4ad4b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x4ad4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ad4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad4b8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x4ad4b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x4ad4bc: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x4ad4bcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x4ad4c0: 0xc12caf4  jal         func_4B2BD0
    ctx->pc = 0x4AD4C0u;
    SET_GPR_U32(ctx, 31, 0x4AD4C8u);
    ctx->pc = 0x4AD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD4C0u;
    // 0x4ad4c4: 0xad800008  sw          $zero, 0x8($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2BD0u, 0x4AD4C0u, 0x4AD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD4C8u;
label_4ad4c8:
    // 0x4ad4c8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD4C8u;
    {
        const bool branch_taken_0x4ad4c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4C8u;
        // 0x4ad4cc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4c8) {
            ctx->pc = 0x4AD4E0u;
            goto label_4ad4e0;
        }
    }
    ctx->pc = 0x4AD4D0u;
    // 0x4ad4d0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ad4d4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x4ad4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x4ad4d8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ad4dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ad4e0:
    // 0x4ad4e0: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad4e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ad4e4: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4ad4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x4ad4e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD4E8u;
    {
        const bool branch_taken_0x4ad4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4E8u;
        // 0x4ad4ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad4e8) {
            ctx->pc = 0x4AD4FCu;
            goto label_4ad4fc;
        }
    }
    ctx->pc = 0x4AD4F0u;
    // 0x4ad4f0: 0xc12b70a  jal         func_4ADC28
    ctx->pc = 0x4AD4F0u;
    SET_GPR_U32(ctx, 31, 0x4AD4F8u);
    ctx->pc = 0x4AD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD4F0u;
    // 0x4ad4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4AD4F0u, 0x4AD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD4F8u;
label_4ad4f8:
    // 0x4ad4f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad4fc:
    // 0x4ad4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad500: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad508: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD508u;
        // 0x4ad50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD510u;
}

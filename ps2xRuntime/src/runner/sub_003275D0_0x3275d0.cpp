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

// Function: sub_003275D0
// Address: 0x3275d0 - 0x327ab8
void sub_003275D0_0x3275d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003275D0_0x3275d0");
#endif

    switch (ctx->pc) {
        case 0x32760cu: goto label_32760c;
        case 0x327958u: goto label_327958;
        case 0x327980u: goto label_327980;
        case 0x327a30u: goto label_327a30;
        case 0x327a5cu: goto label_327a5c;
        default: break;
    }

    ctx->pc = 0x3275d0u;

    // 0x3275d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3275d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3275d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3275d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3275d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3275d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3275dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3275dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3275e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3275e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3275e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3275e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3275ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3275ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3275f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3275f4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3275f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3275f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3275fc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3275fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x327600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327604: 0xc0c9970  jal         func_3265C0
    ctx->pc = 0x327604u;
    SET_GPR_U32(ctx, 31, 0x32760Cu);
    ctx->pc = 0x327608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327604u;
    // 0x327608: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265C0u, 0x327604u, 0x32760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32760Cu;
label_32760c:
    // 0x32760c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x32760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x327610: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x327610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x327614: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x327614u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327618: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x327618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x32761c: 0x24635000  addiu       $v1, $v1, 0x5000
    ctx->pc = 0x32761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20480));
    // 0x327620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327624: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x327624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327628: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32762c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32762cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327630: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x327630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x327634: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x327634u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x327638: 0x2ce30030  sltiu       $v1, $a3, 0x30
    ctx->pc = 0x327638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x32763c: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x32763Cu;
    {
        const bool branch_taken_0x32763c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32763Cu;
        // 0x327640: 0xc22823  subu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32763c) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327644u;
    // 0x327644: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x327644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x327648: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x327648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x32764c: 0x24424f40  addiu       $v0, $v0, 0x4F40
    ctx->pc = 0x32764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20288));
    // 0x327650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327654: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x327654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327658: 0x800008  jr          $a0
    ctx->pc = 0x327658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x327660u: goto label_327660;
            case 0x32766Cu: goto label_32766c;
            case 0x327674u: goto label_327674;
            case 0x32767Cu: goto label_32767c;
            case 0x327690u: goto label_327690;
            case 0x3276D8u: goto label_3276d8;
            case 0x327704u: goto label_327704;
            case 0x327740u: goto label_327740;
            case 0x32778Cu: goto label_32778c;
            case 0x3277B4u: goto label_3277b4;
            case 0x3277E0u: goto label_3277e0;
            case 0x32780Cu: goto label_32780c;
            case 0x327860u: goto label_327860;
            case 0x327874u: goto label_327874;
            case 0x327890u: goto label_327890;
            case 0x3278FCu: goto label_3278fc;
            case 0x327978u: goto label_327978;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327658u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x327660u;
label_327660:
    // 0x327660: 0x151023  negu        $v0, $s5
    ctx->pc = 0x327660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x327664: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x327664u;
    {
        const bool branch_taken_0x327664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327664u;
        // 0x327668: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327664) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32766Cu;
label_32766c:
    // 0x32766c: 0x12a00107  beqz        $s5, . + 4 + (0x107 << 2)
    ctx->pc = 0x32766Cu;
    {
        const bool branch_taken_0x32766c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x327670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32766Cu;
        // 0x327670: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32766c) {
            ctx->pc = 0x327A8Cu;
            goto label_327a8c;
        }
    }
    ctx->pc = 0x327674u;
label_327674:
    // 0x327674: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x327674u;
    {
        const bool branch_taken_0x327674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327674u;
        // 0x327678: 0x152823  negu        $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327674) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32767Cu;
label_32767c:
    // 0x32767c: 0x12600103  beqz        $s3, . + 4 + (0x103 << 2)
    ctx->pc = 0x32767Cu;
    {
        const bool branch_taken_0x32767c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x327680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32767Cu;
        // 0x327680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32767c) {
            ctx->pc = 0x327A8Cu;
            goto label_327a8c;
        }
    }
    ctx->pc = 0x327684u;
    // 0x327684: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x327684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x327688: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x327688u;
    {
        const bool branch_taken_0x327688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327688u;
        // 0x32768c: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327688) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327690u;
label_327690:
    // 0x327690: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x327690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x327694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x327694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327698: 0x146200b7  bne         $v1, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x327698u;
    {
        const bool branch_taken_0x327698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327698u;
        // 0x32769c: 0x101182  srl         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327698) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3276A0u;
    // 0x3276a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3276a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3276a4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3276a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3276a8: 0x144300b3  bne         $v0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3276A8u;
    {
        const bool branch_taken_0x3276a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276A8u;
        // 0x3276ac: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276a8) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3276B0u;
    // 0x3276b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3276b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3276b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3276b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3276b8: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x3276b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x3276bc: 0x3463803f  ori         $v1, $v1, 0x803F
    ctx->pc = 0x3276bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32831);
    // 0x3276c0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3276c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3276c4: 0x34500003  ori         $s0, $v0, 0x3
    ctx->pc = 0x3276c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3276c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3276c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3276cc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3276ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3276d0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3276D0u;
    {
        const bool branch_taken_0x3276d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276D0u;
        // 0x3276d4: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276d0) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3276D8u;
label_3276d8:
    // 0x3276d8: 0x1260009f  beqz        $s3, . + 4 + (0x9F << 2)
    ctx->pc = 0x3276D8u;
    {
        const bool branch_taken_0x3276d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276D8u;
        // 0x3276dc: 0x3203003f  andi        $v1, $s0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276d8) {
            ctx->pc = 0x327958u;
            goto label_327958;
        }
    }
    ctx->pc = 0x3276E0u;
    // 0x3276e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3276e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3276e4: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3276E4u;
    {
        const bool branch_taken_0x3276e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3276E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276E4u;
        // 0x3276e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276e4) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3276ECu;
    // 0x3276ec: 0x101182  srl         $v0, $s0, 6
    ctx->pc = 0x3276ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x3276f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3276f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3276f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3276f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3276f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3276fc: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3276FCu;
    {
        const bool branch_taken_0x3276fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276FCu;
        // 0x327700: 0x34500004  ori         $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276fc) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327704u;
label_327704:
    // 0x327704: 0x12600094  beqz        $s3, . + 4 + (0x94 << 2)
    ctx->pc = 0x327704u;
    {
        const bool branch_taken_0x327704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x327708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327704u;
        // 0x327708: 0x3203003f  andi        $v1, $s0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327704) {
            ctx->pc = 0x327958u;
            goto label_327958;
        }
    }
    ctx->pc = 0x32770Cu;
    // 0x32770c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327710: 0x14620099  bne         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x327710u;
    {
        const bool branch_taken_0x327710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x327714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327710u;
        // 0x327714: 0x132823  negu        $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327710) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327718u;
    // 0x327718: 0x101182  srl         $v0, $s0, 6
    ctx->pc = 0x327718u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x32771c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x32771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x327720: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x327720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x327724: 0x3463803f  ori         $v1, $v1, 0x803F
    ctx->pc = 0x327724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32831);
    // 0x327728: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x327728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x32772c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x32772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x327730: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x327730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x327734: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x327734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327738: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x327738u;
    {
        const bool branch_taken_0x327738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327738u;
        // 0x32773c: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327738) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327740u;
label_327740:
    // 0x327740: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x327740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x327744: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x327744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x327748: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327748u;
    {
        const bool branch_taken_0x327748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327748u;
        // 0x32774c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327748) {
            ctx->pc = 0x327760u;
            goto label_327760;
        }
    }
    ctx->pc = 0x327750u;
    // 0x327750: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x327750u;
    {
        const bool branch_taken_0x327750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327750) {
            ctx->pc = 0x327754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327750u;
            // 0x327754: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327758u;
    // 0x327758: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x327758u;
    {
        const bool branch_taken_0x327758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327758) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327760u;
label_327760:
    // 0x327760: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x327760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x327764: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x327764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327768: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x327768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x32776c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x32776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x327770: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x327770u;
    {
        const bool branch_taken_0x327770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327770u;
        // 0x327774: 0x3450000e  ori         $s0, $v0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327770) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327778u;
label_327778:
    // 0x327778: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x327778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32777c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x32777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x327780: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x327780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x327784: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x327784u;
    {
        const bool branch_taken_0x327784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327784u;
        // 0x327788: 0x3450000f  ori         $s0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327784) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32778Cu;
label_32778c:
    // 0x32778c: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x32778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x327790: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327794: 0x14620078  bne         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x327794u;
    {
        const bool branch_taken_0x327794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x327794) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32779Cu;
    // 0x32779c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3277a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3277a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3277a4: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x3277a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x3277a8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3277a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3277ac: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3277ACu;
    {
        const bool branch_taken_0x3277ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277ACu;
        // 0x3277b0: 0x34500018  ori         $s0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277ac) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3277B4u;
label_3277b4:
    // 0x3277b4: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x3277b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x3277b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3277b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3277bc: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x3277BCu;
    {
        const bool branch_taken_0x3277bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277BCu;
        // 0x3277c0: 0x3c0203ff  lui         $v0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277bc) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3277C4u;
    // 0x3277c4: 0x101982  srl         $v1, $s0, 6
    ctx->pc = 0x3277c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x3277c8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3277c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3277cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3277ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3277d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3277d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3277d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3277d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3277d8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3277D8u;
    {
        const bool branch_taken_0x3277d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277D8u;
        // 0x3277dc: 0x34500018  ori         $s0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277d8) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3277E0u;
label_3277e0:
    // 0x3277e0: 0x131023  negu        $v0, $s3
    ctx->pc = 0x3277e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x3277e4: 0x3204003f  andi        $a0, $s0, 0x3F
    ctx->pc = 0x3277e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x3277e8: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x3277e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3277ec: 0x14830062  bne         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x3277ECu;
    {
        const bool branch_taken_0x3277ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277ECu;
        // 0x3277f0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277ec) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3277F4u;
    // 0x3277f4: 0x101182  srl         $v0, $s0, 6
    ctx->pc = 0x3277f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x3277f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3277f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3277fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3277fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327800: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x327800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x327804: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x327804u;
    {
        const bool branch_taken_0x327804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327804u;
        // 0x327808: 0x3450001d  ori         $s0, $v0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327804) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32780Cu;
label_32780c:
    // 0x32780c: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x32780cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x327810: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327814: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327814u;
    {
        const bool branch_taken_0x327814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x327818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327814u;
        // 0x327818: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327814) {
            ctx->pc = 0x32782Cu;
            goto label_32782c;
        }
    }
    ctx->pc = 0x32781Cu;
    // 0x32781c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32781Cu;
    {
        const bool branch_taken_0x32781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32781c) {
            ctx->pc = 0x327820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32781Cu;
            // 0x327820: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32784Cu;
            goto label_32784c;
        }
    }
    ctx->pc = 0x327824u;
    // 0x327824: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x327824u;
    {
        const bool branch_taken_0x327824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327824) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32782Cu;
label_32782c:
    // 0x32782c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x32782cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x327830: 0x101982  srl         $v1, $s0, 6
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x327834: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x327834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x327838: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x327838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32783c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327840: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x327840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x327844: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x327844u;
    {
        const bool branch_taken_0x327844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327844u;
        // 0x327848: 0x34500006  ori         $s0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327844) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32784Cu;
label_32784c:
    // 0x32784c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x327850: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x327850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x327854: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x327854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x327858: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x327858u;
    {
        const bool branch_taken_0x327858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327858u;
        // 0x32785c: 0x34500009  ori         $s0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327858) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327860u;
label_327860:
    // 0x327860: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x327860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x327864: 0x16020044  bne         $s0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x327864u;
    {
        const bool branch_taken_0x327864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x327864) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32786Cu;
    // 0x32786c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x32786Cu;
    {
        const bool branch_taken_0x32786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32786Cu;
        // 0x327870: 0x3c107fff  lui         $s0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32786c) {
            ctx->pc = 0x327938u;
            goto label_327938;
        }
    }
    ctx->pc = 0x327874u;
label_327874:
    // 0x327874: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x327874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x327878: 0x1602003f  bne         $s0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x327878u;
    {
        const bool branch_taken_0x327878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x327878) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327880u;
    // 0x327880: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x327880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x327884: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x327884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327888: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x327888u;
    {
        const bool branch_taken_0x327888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327888u;
        // 0x32788c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327888) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327890u;
label_327890:
    // 0x327890: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x327890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x327894: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327898: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x327898u;
    {
        const bool branch_taken_0x327898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327898u;
        // 0x32789c: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327898) {
            ctx->pc = 0x3278D4u;
            goto label_3278d4;
        }
    }
    ctx->pc = 0x3278A0u;
    // 0x3278a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3278A0u;
    {
        const bool branch_taken_0x3278a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278A0u;
        // 0x3278a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278a0) {
            ctx->pc = 0x3278B8u;
            goto label_3278b8;
        }
    }
    ctx->pc = 0x3278A8u;
    // 0x3278a8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3278A8u;
    {
        const bool branch_taken_0x3278a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278A8u;
        // 0x3278ac: 0x101982  srl         $v1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278a8) {
            ctx->pc = 0x3278E8u;
            goto label_3278e8;
        }
    }
    ctx->pc = 0x3278B0u;
    // 0x3278b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3278B0u;
    {
        const bool branch_taken_0x3278b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278b0) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3278B8u;
label_3278b8:
    // 0x3278b8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3278b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3278bc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3278BCu;
    {
        const bool branch_taken_0x3278bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3278bc) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3278C4u;
    // 0x3278c4: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x3278c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
    // 0x3278c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3278c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3278cc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3278CCu;
    {
        const bool branch_taken_0x3278cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278CCu;
        // 0x3278d0: 0x3610ffa7  ori         $s0, $s0, 0xFFA7 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65447);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278cc) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3278D4u;
label_3278d4:
    // 0x3278d4: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x3278d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3278d8: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3278D8u;
    {
        const bool branch_taken_0x3278d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3278d8) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3278E0u;
    // 0x3278e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3278E0u;
    {
        const bool branch_taken_0x3278e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278E0u;
        // 0x3278e4: 0x3c107fff  lui         $s0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278e0) {
            ctx->pc = 0x327970u;
            goto label_327970;
        }
    }
    ctx->pc = 0x3278E8u;
label_3278e8:
    // 0x3278e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3278ec: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3278ECu;
    {
        const bool branch_taken_0x3278ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3278ec) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x3278F4u;
    // 0x3278f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3278F4u;
    {
        const bool branch_taken_0x3278f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278F4u;
        // 0x3278f8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278f4) {
            ctx->pc = 0x327944u;
            goto label_327944;
        }
    }
    ctx->pc = 0x3278FCu;
label_3278fc:
    // 0x3278fc: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x3278fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x327900: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327904: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x327904u;
    {
        const bool branch_taken_0x327904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327904) {
            ctx->pc = 0x327908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327904u;
            // 0x327908: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327944u;
            goto label_327944;
        }
    }
    ctx->pc = 0x32790Cu;
    // 0x32790c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x32790cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x327910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327910u;
    {
        const bool branch_taken_0x327910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327910u;
        // 0x327914: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327910) {
            ctx->pc = 0x327928u;
            goto label_327928;
        }
    }
    ctx->pc = 0x327918u;
    // 0x327918: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x327918u;
    {
        const bool branch_taken_0x327918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327918u;
        // 0x32791c: 0x101982  srl         $v1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327918) {
            ctx->pc = 0x327960u;
            goto label_327960;
        }
    }
    ctx->pc = 0x327920u;
    // 0x327920: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x327920u;
    {
        const bool branch_taken_0x327920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327920) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327928u;
label_327928:
    // 0x327928: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x327928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x32792c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32792Cu;
    {
        const bool branch_taken_0x32792c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32792c) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327934u;
    // 0x327934: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x327934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
label_327938:
    // 0x327938: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x327938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32793c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32793Cu;
    {
        const bool branch_taken_0x32793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32793Cu;
        // 0x327940: 0x3610ffa6  ori         $s0, $s0, 0xFFA6 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65446);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32793c) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x327944u;
label_327944:
    // 0x327944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327948: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x327948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32794c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327950: 0xc0c99e2  jal         func_326788
    ctx->pc = 0x327950u;
    SET_GPR_U32(ctx, 31, 0x327958u);
    ctx->pc = 0x327954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327950u;
    // 0x327954: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326788u, 0x327950u, 0x327958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327958u;
label_327958:
    // 0x327958: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x327958u;
    {
        const bool branch_taken_0x327958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327958u;
        // 0x32795c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327958) {
            ctx->pc = 0x327A8Cu;
            goto label_327a8c;
        }
    }
    ctx->pc = 0x327960u;
label_327960:
    // 0x327960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327964: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327964u;
    {
        const bool branch_taken_0x327964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x327964) {
            ctx->pc = 0x327978u;
            goto label_327978;
        }
    }
    ctx->pc = 0x32796Cu;
    // 0x32796c: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x32796cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
label_327970:
    // 0x327970: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327974: 0x3610ffaa  ori         $s0, $s0, 0xFFAA
    ctx->pc = 0x327974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65450);
label_327978:
    // 0x327978: 0xc0c99e2  jal         func_326788
    ctx->pc = 0x327978u;
    SET_GPR_U32(ctx, 31, 0x327980u);
    ctx->pc = 0x32797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327978u;
    // 0x32797c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326788u, 0x327978u, 0x327980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327980u;
label_327980:
    // 0x327980: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x327980u;
    {
        const bool branch_taken_0x327980 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x327980) {
            ctx->pc = 0x327984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327980u;
            // 0x327984: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3279ACu;
            goto label_3279ac;
        }
    }
    ctx->pc = 0x327988u;
    // 0x327988: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x327988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32798c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327990: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x327990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x327994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327998: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32799c: 0xac50fffc  sw          $s0, -0x4($v0)
    ctx->pc = 0x32799cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 16));
    // 0x3279a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3279a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3279a4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3279A4u;
    {
        const bool branch_taken_0x3279a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279A4u;
        // 0x3279a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279a4) {
            ctx->pc = 0x327A8Cu;
            goto label_327a8c;
        }
    }
    ctx->pc = 0x3279ACu;
label_3279ac:
    // 0x3279ac: 0x26c35000  addiu       $v1, $s6, 0x5000
    ctx->pc = 0x3279acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 20480));
    // 0x3279b0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3279b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3279b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3279b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3279b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3279bc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3279bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3279c0: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3279C0u;
    {
        const bool branch_taken_0x3279c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3279C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279C0u;
        // 0x3279c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279c0) {
            ctx->pc = 0x3279F8u;
            goto label_3279f8;
        }
    }
    ctx->pc = 0x3279C8u;
    // 0x3279c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3279C8u;
    {
        const bool branch_taken_0x3279c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279C8u;
        // 0x3279cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279c8) {
            ctx->pc = 0x3279E0u;
            goto label_3279e0;
        }
    }
    ctx->pc = 0x3279D0u;
    // 0x3279d0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3279D0u;
    {
        const bool branch_taken_0x3279d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3279d0) {
            ctx->pc = 0x3279D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3279D0u;
            // 0x3279d4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327A28u;
            goto label_327a28;
        }
    }
    ctx->pc = 0x3279D8u;
    // 0x3279d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3279D8u;
    {
        const bool branch_taken_0x3279d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3279d8) {
            ctx->pc = 0x327A28u;
            goto label_327a28;
        }
    }
    ctx->pc = 0x3279E0u;
label_3279e0:
    // 0x3279e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3279E0u;
    {
        const bool branch_taken_0x3279e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3279E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279E0u;
        // 0x3279e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279e0) {
            ctx->pc = 0x327A04u;
            goto label_327a04;
        }
    }
    ctx->pc = 0x3279E8u;
    // 0x3279e8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3279E8u;
    {
        const bool branch_taken_0x3279e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3279ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279E8u;
        // 0x3279ec: 0x1313c0  sll         $v0, $s3, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279e8) {
            ctx->pc = 0x327A1Cu;
            goto label_327a1c;
        }
    }
    ctx->pc = 0x3279F0u;
    // 0x3279f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3279F0u;
    {
        const bool branch_taken_0x3279f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3279f0) {
            ctx->pc = 0x327A28u;
            goto label_327a28;
        }
    }
    ctx->pc = 0x3279F8u;
label_3279f8:
    // 0x3279f8: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x3279f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x3279fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3279FCu;
    {
        const bool branch_taken_0x3279fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279FCu;
        // 0x327a00: 0x2828025  or          $s0, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279fc) {
            ctx->pc = 0x327A28u;
            goto label_327a28;
        }
    }
    ctx->pc = 0x327A04u;
label_327a04:
    // 0x327a04: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x327a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x327a08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x327a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x327a0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x327a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x327a10: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x327a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x327a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327A14u;
    {
        const bool branch_taken_0x327a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A14u;
        // 0x327a18: 0x2828025  or          $s0, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a14) {
            ctx->pc = 0x327A28u;
            goto label_327a28;
        }
    }
    ctx->pc = 0x327A1Cu;
label_327a1c:
    // 0x327a1c: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x327a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x327a20: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x327a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x327a24: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x327a24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_327a28:
    // 0x327a28: 0xc0c9d2a  jal         func_3274A8
    ctx->pc = 0x327A28u;
    SET_GPR_U32(ctx, 31, 0x327A30u);
    ctx->pc = 0x327A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A28u;
    // 0x327a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3274A8u, 0x327A28u, 0x327A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A30u;
label_327a30:
    // 0x327a30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x327a34: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x327a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x327a38: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x327a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x327a3c: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x327a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x327a40: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x327a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x327a44: 0x25294f20  addiu       $t1, $t1, 0x4F20
    ctx->pc = 0x327a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20256));
    // 0x327a48: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x327a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327a4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x327a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327a50: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x327a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x327a54: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x327A54u;
    SET_GPR_U32(ctx, 31, 0x327A5Cu);
    ctx->pc = 0x327A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A54u;
    // 0x327a58: 0x354afffd  ori         $t2, $t2, 0xFFFD (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x327A54u, 0x327A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A5Cu;
label_327a5c:
    // 0x327a5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x327a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x327a60: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x327a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x327a64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x327a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x327a68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x327a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327a6c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x327a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x327a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327a78: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x327a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x327a7c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x327a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327a80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x327a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327a88: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x327a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_327a8c:
    // 0x327a8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x327a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x327a90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x327a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x327a94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x327a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327a98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x327a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327a9c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x327a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327aa0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x327aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327aa4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x327aa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327aac: 0x3e00008  jr          $ra
    ctx->pc = 0x327AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AACu;
        // 0x327ab0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AB4u;
    // 0x327ab4: 0x0  nop
    ctx->pc = 0x327ab4u;
    // NOP
    ctx->pc = 0x327ab8u;
}

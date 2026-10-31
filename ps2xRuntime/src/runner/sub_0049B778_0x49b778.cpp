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

// Function: sub_0049B778
// Address: 0x49b778 - 0x49ce08
void sub_0049B778_0x49b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B778_0x49b778");
#endif

    switch (ctx->pc) {
        case 0x49b81cu: goto label_49b81c;
        case 0x49b83cu: goto label_49b83c;
        case 0x49b8b0u: goto label_49b8b0;
        case 0x49b8c0u: goto label_49b8c0;
        case 0x49b908u: goto label_49b908;
        case 0x49b928u: goto label_49b928;
        case 0x49b93cu: goto label_49b93c;
        case 0x49b954u: goto label_49b954;
        case 0x49b998u: goto label_49b998;
        case 0x49b9b4u: goto label_49b9b4;
        case 0x49b9bcu: goto label_49b9bc;
        case 0x49b9ccu: goto label_49b9cc;
        case 0x49b9e8u: goto label_49b9e8;
        case 0x49bb08u: goto label_49bb08;
        case 0x49bb38u: goto label_49bb38;
        case 0x49bc08u: goto label_49bc08;
        case 0x49bc58u: goto label_49bc58;
        case 0x49bca0u: goto label_49bca0;
        case 0x49bcc8u: goto label_49bcc8;
        case 0x49bd18u: goto label_49bd18;
        case 0x49bd68u: goto label_49bd68;
        case 0x49bdbcu: goto label_49bdbc;
        case 0x49bdf8u: goto label_49bdf8;
        case 0x49be20u: goto label_49be20;
        case 0x49be98u: goto label_49be98;
        case 0x49bee8u: goto label_49bee8;
        case 0x49bf30u: goto label_49bf30;
        case 0x49bf60u: goto label_49bf60;
        case 0x49c060u: goto label_49c060;
        case 0x49c0b0u: goto label_49c0b0;
        case 0x49c110u: goto label_49c110;
        case 0x49c138u: goto label_49c138;
        case 0x49c1b8u: goto label_49c1b8;
        case 0x49c208u: goto label_49c208;
        case 0x49c250u: goto label_49c250;
        case 0x49c280u: goto label_49c280;
        case 0x49c2d8u: goto label_49c2d8;
        case 0x49c3c0u: goto label_49c3c0;
        case 0x49c410u: goto label_49c410;
        case 0x49c458u: goto label_49c458;
        case 0x49c480u: goto label_49c480;
        case 0x49c588u: goto label_49c588;
        case 0x49c5d8u: goto label_49c5d8;
        case 0x49c620u: goto label_49c620;
        case 0x49c648u: goto label_49c648;
        case 0x49c670u: goto label_49c670;
        case 0x49c6c0u: goto label_49c6c0;
        case 0x49c714u: goto label_49c714;
        case 0x49c750u: goto label_49c750;
        case 0x49c778u: goto label_49c778;
        case 0x49c7c8u: goto label_49c7c8;
        case 0x49c818u: goto label_49c818;
        case 0x49c868u: goto label_49c868;
        case 0x49c890u: goto label_49c890;
        case 0x49c9c0u: goto label_49c9c0;
        case 0x49ca10u: goto label_49ca10;
        case 0x49ca70u: goto label_49ca70;
        case 0x49ca98u: goto label_49ca98;
        case 0x49caf8u: goto label_49caf8;
        case 0x49cb48u: goto label_49cb48;
        case 0x49cb98u: goto label_49cb98;
        case 0x49cbc0u: goto label_49cbc0;
        case 0x49cc28u: goto label_49cc28;
        case 0x49cd48u: goto label_49cd48;
        case 0x49cd98u: goto label_49cd98;
        case 0x49cdd4u: goto label_49cdd4;
        default: break;
    }

    ctx->pc = 0x49b778u;

    // 0x49b778: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x49b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x49b77c: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x49b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x49b780: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x49b780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x49b784: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x49b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x49b788: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x49b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x49b78c: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x49b78cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x49b790: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x49b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x49b794: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x49b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x49b798: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x49b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x49b79c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x49b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x49b7a0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x49b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x49b7a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x49b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x49b7a8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x49b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x49b7ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x49b7b0: 0x92c20036  lbu         $v0, 0x36($s6)
    ctx->pc = 0x49b7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 54)));
    // 0x49b7b4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x49b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x49b7b8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x49B7B8u;
    {
        const bool branch_taken_0x49b7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7B8u;
        // 0x49b7bc: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b7b8) {
            ctx->pc = 0x49B83Cu;
            goto label_49b83c;
        }
    }
    ctx->pc = 0x49B7C0u;
    // 0x49b7c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b7c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x49b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x49b7c8: 0x8f878a58  lw          $a3, -0x75A8($gp)
    ctx->pc = 0x49b7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49b7cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x49b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49b7d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x49b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x49b7d4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x49b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x49b7d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x49b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x49b7dc: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x49b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x49b7e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x49b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x49b7e4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x49b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x49b7e8: 0x84e3001c  lh          $v1, 0x1C($a3)
    ctx->pc = 0x49b7e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x49b7ec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x49b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49b7f0: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x49b7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49b7f4: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x49b7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x49b7f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49b7fc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x49b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x49b800: 0x84e2001e  lh          $v0, 0x1E($a3)
    ctx->pc = 0x49b800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x49b804: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x49b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x49b808: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x49b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49b80c: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x49b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x49b810: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x49b810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x49b814: 0xc126628  jal         func_4998A0
    ctx->pc = 0x49B814u;
    SET_GPR_U32(ctx, 31, 0x49B81Cu);
    ctx->pc = 0x49B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B814u;
    // 0x49b818: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4998A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4998A0u, 0x49B814u, 0x49B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B81Cu;
label_49b81c:
    // 0x49b81c: 0x1040056e  beqz        $v0, . + 4 + (0x56E << 2)
    ctx->pc = 0x49B81Cu;
    {
        const bool branch_taken_0x49b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B81Cu;
        // 0x49b820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b81c) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49B824u;
    // 0x49b824: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b828: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x49b828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x49b82c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b830: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x49b830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49b834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49B834u;
    {
        const bool branch_taken_0x49b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B834u;
        // 0x49b838: 0x8f828a58  lw          $v0, -0x75A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b834) {
            ctx->pc = 0x49B844u;
            goto label_49b844;
        }
    }
    ctx->pc = 0x49B83Cu;
label_49b83c:
    // 0x49b83c: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x49B83Cu;
    {
        const bool branch_taken_0x49b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B83Cu;
        // 0x49b840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b83c) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49B844u;
label_49b844:
    // 0x49b844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49b844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49b848: 0x90440020  lbu         $a0, 0x20($v0)
    ctx->pc = 0x49b848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x49b84c: 0x1083fffb  beq         $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49B84Cu;
    {
        const bool branch_taken_0x49b84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x49B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B84Cu;
        // 0x49b850: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b84c) {
            ctx->pc = 0x49B83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b83c;
        }
    }
    ctx->pc = 0x49B854u;
    // 0x49b854: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x49b854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49b858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49B858u;
    {
        const bool branch_taken_0x49b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B858u;
        // 0x49b85c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b858) {
            ctx->pc = 0x49B870u;
            goto label_49b870;
        }
    }
    ctx->pc = 0x49B860u;
    // 0x49b860: 0x10800063  beqz        $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x49B860u;
    {
        const bool branch_taken_0x49b860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B860u;
        // 0x49b864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b860) {
            ctx->pc = 0x49B9F0u;
            goto label_49b9f0;
        }
    }
    ctx->pc = 0x49B868u;
    // 0x49b868: 0x1000055c  b           . + 4 + (0x55C << 2)
    ctx->pc = 0x49B868u;
    {
        const bool branch_taken_0x49b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B868u;
        // 0x49b86c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b868) {
            ctx->pc = 0x49CDDCu;
            goto label_49cddc;
        }
    }
    ctx->pc = 0x49B870u;
label_49b870:
    // 0x49b870: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49B870u;
    {
        const bool branch_taken_0x49b870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B870u;
        // 0x49b874: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b870) {
            ctx->pc = 0x49B888u;
            goto label_49b888;
        }
    }
    ctx->pc = 0x49B878u;
    // 0x49b878: 0x1082005d  beq         $a0, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x49B878u;
    {
        const bool branch_taken_0x49b878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B878u;
        // 0x49b87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b878) {
            ctx->pc = 0x49B9F0u;
            goto label_49b9f0;
        }
    }
    ctx->pc = 0x49B880u;
    // 0x49b880: 0x10000556  b           . + 4 + (0x556 << 2)
    ctx->pc = 0x49B880u;
    {
        const bool branch_taken_0x49b880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B880u;
        // 0x49b884: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b880) {
            ctx->pc = 0x49CDDCu;
            goto label_49cddc;
        }
    }
    ctx->pc = 0x49B888u;
label_49b888:
    // 0x49b888: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x49b888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49b88c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49b890: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x49b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x49b894: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x49b894u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49b898: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x49b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49b89c: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x49b89cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x49b8a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x49b8a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b8a4: 0x39c00  sll         $s3, $v1, 16
    ctx->pc = 0x49b8a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49b8a8: 0xc12638e  jal         func_498E38
    ctx->pc = 0x49B8A8u;
    SET_GPR_U32(ctx, 31, 0x49B8B0u);
    ctx->pc = 0x49B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B8A8u;
    // 0x49b8ac: 0x8fbe001c  lw          $fp, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498E38u, 0x49B8A8u, 0x49B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B8B0u;
label_49b8b0:
    // 0x49b8b0: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x49b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x49b8b4: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x49B8B4u;
    {
        const bool branch_taken_0x49b8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b8b4) {
            ctx->pc = 0x49B9ACu;
            goto label_49b9ac;
        }
    }
    ctx->pc = 0x49B8BCu;
    // 0x49b8bc: 0x27928a60  addiu       $s2, $gp, -0x75A0
    ctx->pc = 0x49b8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_49b8c0:
    // 0x49b8c0: 0x2e4102b  sltu        $v0, $s7, $a0
    ctx->pc = 0x49b8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49b8c4: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x49b8c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b8c8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x49b8c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x49b8cc: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x49b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x49b8d0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x49b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x49b8d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49b8d8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49B8D8u;
    {
        const bool branch_taken_0x49b8d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b8d8) {
            ctx->pc = 0x49B8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B8D8u;
            // 0x49b8dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B8E0u;
            goto label_49b8e0;
        }
    }
    ctx->pc = 0x49B8E0u;
label_49b8e0:
    // 0x49b8e0: 0x38400  sll         $s0, $v1, 16
    ctx->pc = 0x49b8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49b8e4: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49b8e8: 0x21e8018  mult        $s0, $s0, $fp
    ctx->pc = 0x49b8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49b8ec: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x49b8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x49b8f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b8f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x49b8f8: 0x214001b  divu        $zero, $s0, $s4
    ctx->pc = 0x49b8f8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x49b8fc: 0x8012  mflo        $s0
    ctx->pc = 0x49b8fcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x49b900: 0xc128fd6  jal         func_4A3F58
    ctx->pc = 0x49B900u;
    SET_GPR_U32(ctx, 31, 0x49B908u);
    ctx->pc = 0x49B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B900u;
    // 0x49b904: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3F58u, 0x49B900u, 0x49B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B908u;
label_49b908:
    // 0x49b908: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x49b908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x49b90c: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49b910: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x49b910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x49b914: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49b914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b91c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x49b920: 0xc1218b8  jal         func_4862E0
    ctx->pc = 0x49B920u;
    SET_GPR_U32(ctx, 31, 0x49B928u);
    ctx->pc = 0x49B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B920u;
    // 0x49b924: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4862E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4862E0u, 0x49B920u, 0x49B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B928u;
label_49b928:
    // 0x49b928: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x49b928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49b92c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49b930: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x49b930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x49b934: 0xc1266a2  jal         func_499A88
    ctx->pc = 0x49B934u;
    SET_GPR_U32(ctx, 31, 0x49B93Cu);
    ctx->pc = 0x49B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B934u;
    // 0x49b938: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A88u, 0x49B934u, 0x49B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B93Cu;
label_49b93c:
    // 0x49b93c: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49b940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49b940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b948: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x49b94c: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x49B94Cu;
    SET_GPR_U32(ctx, 31, 0x49B954u);
    ctx->pc = 0x49B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B94Cu;
    // 0x49b950: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x49B94Cu, 0x49B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B954u;
label_49b954:
    // 0x49b954: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x49b954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49b958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49b95c: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x49b95cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x49b960: 0x132c02  srl         $a1, $s3, 16
    ctx->pc = 0x49b960u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x49b964: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x49b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b968: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x49b968u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x49b96c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x49b96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49b970: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x49b970u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x49b974: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x49b978: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x49b978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49b97c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x49b97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x49b980: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x49b980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x49b984: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x49b984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x49b988: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x49b988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49b98c: 0x103c02  srl         $a3, $s0, 16
    ctx->pc = 0x49b98cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x49b990: 0xc126424  jal         func_499090
    ctx->pc = 0x49B990u;
    SET_GPR_U32(ctx, 31, 0x49B998u);
    ctx->pc = 0x49B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B990u;
    // 0x49b994: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499090u, 0x49B990u, 0x49B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B998u;
label_49b998:
    // 0x49b998: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49b99c: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x49b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x49b9a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x49b9a4: 0x1480ffc6  bnez        $a0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x49B9A4u;
    {
        const bool branch_taken_0x49b9a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9A4u;
        // 0x49b9a8: 0xaf828a68  sw          $v0, -0x7598($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9a4) {
            ctx->pc = 0x49B8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b8c0;
        }
    }
    ctx->pc = 0x49B9ACu;
label_49b9ac:
    // 0x49b9ac: 0xc126482  jal         func_499208
    ctx->pc = 0x49B9ACu;
    SET_GPR_U32(ctx, 31, 0x49B9B4u);
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x49B9ACu, 0x49B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B9B4u;
label_49b9b4:
    // 0x49b9b4: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x49B9B4u;
    SET_GPR_U32(ctx, 31, 0x49B9BCu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x49B9B4u, 0x49B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B9BCu;
label_49b9bc:
    // 0x49b9bc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x49b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49b9c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49b9c4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x49B9C4u;
    SET_GPR_U32(ctx, 31, 0x49B9CCu);
    ctx->pc = 0x49B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B9C4u;
    // 0x49b9c8: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x49B9C4u, 0x49B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B9CCu;
label_49b9cc:
    // 0x49b9cc: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x49b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x49b9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49b9d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49b9d8: 0x146204ff  bne         $v1, $v0, . + 4 + (0x4FF << 2)
    ctx->pc = 0x49B9D8u;
    {
        const bool branch_taken_0x49b9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9D8u;
        // 0x49b9dc: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9d8) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49B9E0u;
    // 0x49b9e0: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x49B9E0u;
    SET_GPR_U32(ctx, 31, 0x49B9E8u);
    ctx->pc = 0x49B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B9E0u;
    // 0x49b9e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x49B9E0u, 0x49B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B9E8u;
label_49b9e8:
    // 0x49b9e8: 0x100004fb  b           . + 4 + (0x4FB << 2)
    ctx->pc = 0x49B9E8u;
    {
        const bool branch_taken_0x49b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9E8u;
        // 0x49b9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9e8) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49B9F0u;
label_49b9f0:
    // 0x49b9f0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x49b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x49b9f4: 0x1040ff91  beqz        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x49B9F4u;
    {
        const bool branch_taken_0x49b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9F4u;
        // 0x49b9f8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9f4) {
            ctx->pc = 0x49B83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b83c;
        }
    }
    ctx->pc = 0x49B9FCu;
    // 0x49b9fc: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x49b9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x49ba00: 0x1120ff8e  beqz        $t1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x49BA00u;
    {
        const bool branch_taken_0x49ba00 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA00u;
        // 0x49ba04: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba00) {
            ctx->pc = 0x49B83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b83c;
        }
    }
    ctx->pc = 0x49BA08u;
    // 0x49ba08: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x49ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x49ba0c: 0x8503001c  lh          $v1, 0x1C($t0)
    ctx->pc = 0x49ba0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x49ba10: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x49ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ba14: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x49ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x49ba18: 0x258c3  sra         $t3, $v0, 3
    ctx->pc = 0x49ba18u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 3));
    // 0x49ba1c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x49ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49ba20: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x49ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x49ba24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ba28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x49ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x49ba2c: 0x1652818  mult        $a1, $t3, $a1
    ctx->pc = 0x49ba2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49ba30: 0x8fb70018  lw          $s7, 0x18($sp)
    ctx->pc = 0x49ba30u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ba34: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x49ba34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x49ba38: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49ba3c: 0x8503001e  lh          $v1, 0x1E($t0)
    ctx->pc = 0x49ba3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
    // 0x49ba40: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x49ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x49ba44: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x49ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x49ba48: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x49ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x49ba4c: 0x250c3  sra         $t2, $v0, 3
    ctx->pc = 0x49ba4cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
    // 0x49ba50: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x49ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x49ba54: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x49ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x49ba58: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49ba5c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x49ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x49ba60: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x49ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x49ba64: 0x38023  negu        $s0, $v1
    ctx->pc = 0x49ba64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x49ba68: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x49ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x49ba6c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x49ba6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49ba70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x49ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49ba74: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x49ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x49ba78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49ba7c: 0x14c70007  bne         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x49BA7Cu;
    {
        const bool branch_taken_0x49ba7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x49BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA7Cu;
        // 0x49ba80: 0x65b021  addu        $s6, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba7c) {
            ctx->pc = 0x49BA9Cu;
            goto label_49ba9c;
        }
    }
    ctx->pc = 0x49BA84u;
    // 0x49ba84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ba88: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x49ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49ba8c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x49ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49ba90: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x49ba90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49ba94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x49BA94u;
    {
        const bool branch_taken_0x49ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA94u;
        // 0x49ba98: 0x89a821  addu        $s5, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba94) {
            ctx->pc = 0x49BABCu;
            goto label_49babc;
        }
    }
    ctx->pc = 0x49BA9Cu;
label_49ba9c:
    // 0x49ba9c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49baa0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x49baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49baa4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x49baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49baa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49baac: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x49baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49bab0: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x49bab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49bab4: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x49bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x49bab8: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x49bab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49babc:
    // 0x49babc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x49babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x49bac0: 0x1621818  mult        $v1, $t3, $v0
    ctx->pc = 0x49bac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49bac4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x49bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x49bac8: 0x2445ffeb  addiu       $a1, $v0, -0x15
    ctx->pc = 0x49bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x49bacc: 0x2ca30018  sltiu       $v1, $a1, 0x18
    ctx->pc = 0x49baccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x49bad0: 0x1060ff5a  beqz        $v1, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x49BAD0u;
    {
        const bool branch_taken_0x49bad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAD0u;
        // 0x49bad4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bad0) {
            ctx->pc = 0x49B83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b83c;
        }
    }
    ctx->pc = 0x49BAD8u;
    // 0x49bad8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x49bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x49badc: 0x2442fd20  addiu       $v0, $v0, -0x2E0
    ctx->pc = 0x49badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x49bae0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49bae4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49bae8: 0x800008  jr          $a0
    ctx->pc = 0x49BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49B83Cu: goto label_49b83c;
            case 0x49BAF0u: goto label_49baf0;
            case 0x49BC88u: goto label_49bc88;
            case 0x49BD98u: goto label_49bd98;
            case 0x49C440u: goto label_49c440;
            case 0x49C608u: goto label_49c608;
            case 0x49C6F0u: goto label_49c6f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49BAE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49BAF0u;
label_49baf0:
    // 0x49baf0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49baf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49baf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49baf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49bafc: 0x106004b5  beqz        $v1, . + 4 + (0x4B5 << 2)
    ctx->pc = 0x49BAFCu;
    {
        const bool branch_taken_0x49bafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BAFCu;
        // 0x49bb00: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bafc) {
            ctx->pc = 0x49CDD4u;
            goto label_49cdd4;
        }
    }
    ctx->pc = 0x49BB04u;
    // 0x49bb04: 0x0  nop
    ctx->pc = 0x49bb04u;
    // NOP
label_49bb08:
    // 0x49bb08: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49bb08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49bb0c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x49bb0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bb10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x49bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49bb14: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x49bb14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bb18: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49bb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bb1c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49bb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49bb20: 0x204f021  addu        $fp, $s0, $a0
    ctx->pc = 0x49bb20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x49bb24: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x49BB24u;
    {
        const bool branch_taken_0x49bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB24u;
        // 0x49bb28: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb24) {
            ctx->pc = 0x49BC30u;
            goto label_49bc30;
        }
    }
    ctx->pc = 0x49BB2Cu;
    // 0x49bb2c: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x49bb2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x49bb30: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x49bb30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49bb34: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x49bb34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_49bb38:
    // 0x49bb38: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x49bb38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bb3c: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x49bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x49bb40: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x49bb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49bb44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49BB44u;
    {
        const bool branch_taken_0x49bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bb44) {
            ctx->pc = 0x49BB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BB44u;
            // 0x49bb48: 0x8d2e0000  lw          $t6, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BB58u;
            goto label_49bb58;
        }
    }
    ctx->pc = 0x49BB4Cu;
    // 0x49bb4c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x49BB4Cu;
    {
        const bool branch_taken_0x49bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BB4Cu;
        // 0x49bb50: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb4c) {
            ctx->pc = 0x49BBF4u;
            goto label_49bbf4;
        }
    }
    ctx->pc = 0x49BB54u;
    // 0x49bb54: 0x0  nop
    ctx->pc = 0x49bb54u;
    // NOP
label_49bb58:
    // 0x49bb58: 0xf42824  and         $a1, $a3, $s4
    ctx->pc = 0x49bb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
    // 0x49bb5c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49bb60: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x49bb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x49bb64: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x49bb64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x49bb68: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x49bb68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x49bb6c: 0x3057823  subu        $t7, $t8, $a1
    ctx->pc = 0x49bb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x49bb70: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49bb70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49bb74: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49bb74u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49bb78: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49bb7c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49bb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49bb80: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x49bb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x49bb84: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49bb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49bb88: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49bb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49bb8c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49bb90: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49bb90u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49bb94: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49bb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49bb98: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49bb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49bb9c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x49bb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x49bba0: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49bba0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49bba4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49bba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49bba8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49bba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49bbac: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49bbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49bbb0: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49bbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49bbb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49bbb8: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49bbbc: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49bbc0: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49bbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49bbc4: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49bbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49bbc8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49bbcc: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49bbd0: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49bbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49bbd4: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49bbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49bbd8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49bbdc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49bbe0: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49bbe4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49bbe8: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49bbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49bbf0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_49bbf4:
    // 0x49bbf4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49bbf8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x49bbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x49bbfc: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49bbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49bc00: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x49BC00u;
    {
        const bool branch_taken_0x49bc00 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC00u;
        // 0x49bc04: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc00) {
            ctx->pc = 0x49BC24u;
            goto label_49bc24;
        }
    }
    ctx->pc = 0x49BC08u;
label_49bc08:
    // 0x49bc08: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49bc08u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49bc0c: 0x0  nop
    ctx->pc = 0x49bc0cu;
    // NOP
    // 0x49bc10: 0x0  nop
    ctx->pc = 0x49bc10u;
    // NOP
    // 0x49bc14: 0x0  nop
    ctx->pc = 0x49bc14u;
    // NOP
    // 0x49bc18: 0x0  nop
    ctx->pc = 0x49bc18u;
    // NOP
    // 0x49bc1c: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BC1Cu;
    {
        const bool branch_taken_0x49bc1c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC1Cu;
        // 0x49bc20: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc1c) {
            ctx->pc = 0x49BC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bc08;
        }
    }
    ctx->pc = 0x49BC24u;
label_49bc24:
    // 0x49bc24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49bc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bc28: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x49BC28u;
    {
        const bool branch_taken_0x49bc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC28u;
        // 0x49bc2c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc28) {
            ctx->pc = 0x49BB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bb38;
        }
    }
    ctx->pc = 0x49BC30u;
label_49bc30:
    // 0x49bc30: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49bc34: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49bc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bc38: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49bc3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49bc40: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49BC40u;
    {
        const bool branch_taken_0x49bc40 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC40u;
        // 0x49bc44: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc40) {
            ctx->pc = 0x49BC74u;
            goto label_49bc74;
        }
    }
    ctx->pc = 0x49BC48u;
    // 0x49bc48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49bc4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49bc50: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49bc54: 0x0  nop
    ctx->pc = 0x49bc54u;
    // NOP
label_49bc58:
    // 0x49bc58: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49bc58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49bc5c: 0x0  nop
    ctx->pc = 0x49bc5cu;
    // NOP
    // 0x49bc60: 0x0  nop
    ctx->pc = 0x49bc60u;
    // NOP
    // 0x49bc64: 0x0  nop
    ctx->pc = 0x49bc64u;
    // NOP
    // 0x49bc68: 0x0  nop
    ctx->pc = 0x49bc68u;
    // NOP
    // 0x49bc6c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BC6Cu;
    {
        const bool branch_taken_0x49bc6c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC6Cu;
        // 0x49bc70: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc6c) {
            ctx->pc = 0x49BC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bc58;
        }
    }
    ctx->pc = 0x49BC74u;
label_49bc74:
    // 0x49bc74: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49bc78: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x49BC78u;
    {
        const bool branch_taken_0x49bc78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC78u;
        // 0x49bc7c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc78) {
            ctx->pc = 0x49BB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bb08;
        }
    }
    ctx->pc = 0x49BC80u;
    // 0x49bc80: 0x10000455  b           . + 4 + (0x455 << 2)
    ctx->pc = 0x49BC80u;
    {
        const bool branch_taken_0x49bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC80u;
        // 0x49bc84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc80) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49BC88u;
label_49bc88:
    // 0x49bc88: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49bc8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49bc8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bc90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49bc94: 0x1060044f  beqz        $v1, . + 4 + (0x44F << 2)
    ctx->pc = 0x49BC94u;
    {
        const bool branch_taken_0x49bc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BC94u;
        // 0x49bc98: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc94) {
            ctx->pc = 0x49CDD4u;
            goto label_49cdd4;
        }
    }
    ctx->pc = 0x49BC9Cu;
    // 0x49bc9c: 0x0  nop
    ctx->pc = 0x49bc9cu;
    // NOP
label_49bca0:
    // 0x49bca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x49bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49bca4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x49bca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bca8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49bca8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49bcac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x49bcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bcb0: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x49bcb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x49bcb4: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49bcb4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49bcb8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49bcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bcbc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x49BCBCu;
    {
        const bool branch_taken_0x49bcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCBCu;
        // 0x49bcc0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcbc) {
            ctx->pc = 0x49BD40u;
            goto label_49bd40;
        }
    }
    ctx->pc = 0x49BCC4u;
    // 0x49bcc4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x49bcc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_49bcc8:
    // 0x49bcc8: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x49bcc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49bccc: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x49bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49bcd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49BCD0u;
    {
        const bool branch_taken_0x49bcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BCD0u;
        // 0x49bcd4: 0x30a403e0  andi        $a0, $a1, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bcd0) {
            ctx->pc = 0x49BD00u;
            goto label_49bd00;
        }
    }
    ctx->pc = 0x49BCD8u;
    // 0x49bcd8: 0x30a37c00  andi        $v1, $a1, 0x7C00
    ctx->pc = 0x49bcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x49bcdc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49bce0: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49bce4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x49bce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x49bce8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x49bce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x49bcec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49bcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49bcf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49bcf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49bcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49bcf8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49bcfc: 0x0  nop
    ctx->pc = 0x49bcfcu;
    // NOP
label_49bd00:
    // 0x49bd00: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x49bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49bd04: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49bd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49bd08: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49bd08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49bd0c: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49BD0Cu;
    {
        const bool branch_taken_0x49bd0c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD0Cu;
        // 0x49bd10: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd0c) {
            ctx->pc = 0x49BD34u;
            goto label_49bd34;
        }
    }
    ctx->pc = 0x49BD14u;
    // 0x49bd14: 0x0  nop
    ctx->pc = 0x49bd14u;
    // NOP
label_49bd18:
    // 0x49bd18: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49bd18u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49bd1c: 0x0  nop
    ctx->pc = 0x49bd1cu;
    // NOP
    // 0x49bd20: 0x0  nop
    ctx->pc = 0x49bd20u;
    // NOP
    // 0x49bd24: 0x0  nop
    ctx->pc = 0x49bd24u;
    // NOP
    // 0x49bd28: 0x0  nop
    ctx->pc = 0x49bd28u;
    // NOP
    // 0x49bd2c: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BD2Cu;
    {
        const bool branch_taken_0x49bd2c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD2Cu;
        // 0x49bd30: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd2c) {
            ctx->pc = 0x49BD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bd18;
        }
    }
    ctx->pc = 0x49BD34u;
label_49bd34:
    // 0x49bd34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49bd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bd38: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49BD38u;
    {
        const bool branch_taken_0x49bd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD38u;
        // 0x49bd3c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd38) {
            ctx->pc = 0x49BCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bcc8;
        }
    }
    ctx->pc = 0x49BD40u;
label_49bd40:
    // 0x49bd40: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49bd44: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49bd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bd48: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49bd4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49bd50: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49BD50u;
    {
        const bool branch_taken_0x49bd50 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD50u;
        // 0x49bd54: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd50) {
            ctx->pc = 0x49BD84u;
            goto label_49bd84;
        }
    }
    ctx->pc = 0x49BD58u;
    // 0x49bd58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49bd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49bd5c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x49bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49bd60: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49bd64: 0x0  nop
    ctx->pc = 0x49bd64u;
    // NOP
label_49bd68:
    // 0x49bd68: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49bd68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49bd6c: 0x0  nop
    ctx->pc = 0x49bd6cu;
    // NOP
    // 0x49bd70: 0x0  nop
    ctx->pc = 0x49bd70u;
    // NOP
    // 0x49bd74: 0x0  nop
    ctx->pc = 0x49bd74u;
    // NOP
    // 0x49bd78: 0x0  nop
    ctx->pc = 0x49bd78u;
    // NOP
    // 0x49bd7c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BD7Cu;
    {
        const bool branch_taken_0x49bd7c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD7Cu;
        // 0x49bd80: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd7c) {
            ctx->pc = 0x49BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bd68;
        }
    }
    ctx->pc = 0x49BD84u;
label_49bd84:
    // 0x49bd84: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49bd88: 0x1480ffc5  bnez        $a0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x49BD88u;
    {
        const bool branch_taken_0x49bd88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD88u;
        // 0x49bd8c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd88) {
            ctx->pc = 0x49BCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bca0;
        }
    }
    ctx->pc = 0x49BD90u;
    // 0x49bd90: 0x10000411  b           . + 4 + (0x411 << 2)
    ctx->pc = 0x49BD90u;
    {
        const bool branch_taken_0x49bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BD90u;
        // 0x49bd94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd90) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49BD98u;
label_49bd98:
    // 0x49bd98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49bd9c: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x49bd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x49bda0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x49bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49bda4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49bda8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49BDA8u;
    {
        const bool branch_taken_0x49bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDA8u;
        // 0x49bdac: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bda8) {
            ctx->pc = 0x49BDBCu;
            goto label_49bdbc;
        }
    }
    ctx->pc = 0x49BDB0u;
    // 0x49bdb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49bdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bdb4: 0xc121902  jal         func_486408
    ctx->pc = 0x49BDB4u;
    SET_GPR_U32(ctx, 31, 0x49BDBCu);
    ctx->pc = 0x49BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BDB4u;
    // 0x49bdb8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49BDB4u, 0x49BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BDBCu;
label_49bdbc:
    // 0x49bdbc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49bdc0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49bdc4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x49bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49bdc8: 0x146200c5  bne         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x49BDC8u;
    {
        const bool branch_taken_0x49bdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDC8u;
        // 0x49bdcc: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bdc8) {
            ctx->pc = 0x49C0E0u;
            goto label_49c0e0;
        }
    }
    ctx->pc = 0x49BDD0u;
    // 0x49bdd0: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x49bdd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x49bdd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49bdd8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49bddc: 0x1443004e  bne         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x49BDDCu;
    {
        const bool branch_taken_0x49bddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDDCu;
        // 0x49bde0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bddc) {
            ctx->pc = 0x49BF18u;
            goto label_49bf18;
        }
    }
    ctx->pc = 0x49BDE4u;
    // 0x49bde4: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x49bde4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x49bde8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49bde8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bdec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49bdf0: 0x10600191  beqz        $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x49BDF0u;
    {
        const bool branch_taken_0x49bdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BDF0u;
        // 0x49bdf4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bdf0) {
            ctx->pc = 0x49C438u;
            goto label_49c438;
        }
    }
    ctx->pc = 0x49BDF8u;
label_49bdf8:
    // 0x49bdf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x49bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49bdfc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x49bdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49be00: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49be00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49be04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x49be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49be08: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x49be08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x49be0c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49be0cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49be10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49be10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49be14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x49BE14u;
    {
        const bool branch_taken_0x49be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE14u;
        // 0x49be18: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be14) {
            ctx->pc = 0x49BEC0u;
            goto label_49bec0;
        }
    }
    ctx->pc = 0x49BE1Cu;
    // 0x49be1c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_49be20:
    // 0x49be20: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49be20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49be24: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49be24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49be28: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49be28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49be2c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49be30: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49be30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49be34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49be38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49be38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49be3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49be40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49be40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49be44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x49be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49be48: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49be48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49be4c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49be4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49be50: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x49BE50u;
    {
        const bool branch_taken_0x49be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE50u;
        // 0x49be54: 0x304403e0  andi        $a0, $v0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be50) {
            ctx->pc = 0x49BE80u;
            goto label_49be80;
        }
    }
    ctx->pc = 0x49BE58u;
    // 0x49be58: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x49be58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49be5c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49be60: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49be60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49be64: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x49be64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x49be68: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x49be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x49be6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49be6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49be70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49be70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49be74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49be78: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49be78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49be7c: 0x0  nop
    ctx->pc = 0x49be7cu;
    // NOP
label_49be80:
    // 0x49be80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x49be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49be84: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49be84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49be88: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49be88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49be8c: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49BE8Cu;
    {
        const bool branch_taken_0x49be8c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BE8Cu;
        // 0x49be90: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be8c) {
            ctx->pc = 0x49BEB4u;
            goto label_49beb4;
        }
    }
    ctx->pc = 0x49BE94u;
    // 0x49be94: 0x0  nop
    ctx->pc = 0x49be94u;
    // NOP
label_49be98:
    // 0x49be98: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49be98u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49be9c: 0x0  nop
    ctx->pc = 0x49be9cu;
    // NOP
    // 0x49bea0: 0x0  nop
    ctx->pc = 0x49bea0u;
    // NOP
    // 0x49bea4: 0x0  nop
    ctx->pc = 0x49bea4u;
    // NOP
    // 0x49bea8: 0x0  nop
    ctx->pc = 0x49bea8u;
    // NOP
    // 0x49beac: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BEACu;
    {
        const bool branch_taken_0x49beac = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEACu;
        // 0x49beb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49beac) {
            ctx->pc = 0x49BE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49be98;
        }
    }
    ctx->pc = 0x49BEB4u;
label_49beb4:
    // 0x49beb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49beb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49beb8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x49BEB8u;
    {
        const bool branch_taken_0x49beb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEB8u;
        // 0x49bebc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49beb8) {
            ctx->pc = 0x49BE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49be20;
        }
    }
    ctx->pc = 0x49BEC0u;
label_49bec0:
    // 0x49bec0: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49bec4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49bec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bec8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49becc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49bed0: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49BED0u;
    {
        const bool branch_taken_0x49bed0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BED0u;
        // 0x49bed4: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bed0) {
            ctx->pc = 0x49BF04u;
            goto label_49bf04;
        }
    }
    ctx->pc = 0x49BED8u;
    // 0x49bed8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49bedc: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x49bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49bee0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49bee4: 0x0  nop
    ctx->pc = 0x49bee4u;
    // NOP
label_49bee8:
    // 0x49bee8: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49bee8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49beec: 0x0  nop
    ctx->pc = 0x49beecu;
    // NOP
    // 0x49bef0: 0x0  nop
    ctx->pc = 0x49bef0u;
    // NOP
    // 0x49bef4: 0x0  nop
    ctx->pc = 0x49bef4u;
    // NOP
    // 0x49bef8: 0x0  nop
    ctx->pc = 0x49bef8u;
    // NOP
    // 0x49befc: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49BEFCu;
    {
        const bool branch_taken_0x49befc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BEFCu;
        // 0x49bf00: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49befc) {
            ctx->pc = 0x49BEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bee8;
        }
    }
    ctx->pc = 0x49BF04u;
label_49bf04:
    // 0x49bf04: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49bf08: 0x1480ffbb  bnez        $a0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x49BF08u;
    {
        const bool branch_taken_0x49bf08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF08u;
        // 0x49bf0c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf08) {
            ctx->pc = 0x49BDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bdf8;
        }
    }
    ctx->pc = 0x49BF10u;
    // 0x49bf10: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x49BF10u;
    {
        const bool branch_taken_0x49bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF10u;
        // 0x49bf14: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf10) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49BF18u;
label_49bf18:
    // 0x49bf18: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49bf1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49bf1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf20: 0x8c980008  lw          $t8, 0x8($a0)
    ctx->pc = 0x49bf20u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x49bf24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49bf28: 0x10600143  beqz        $v1, . + 4 + (0x143 << 2)
    ctx->pc = 0x49BF28u;
    {
        const bool branch_taken_0x49bf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF28u;
        // 0x49bf2c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf28) {
            ctx->pc = 0x49C438u;
            goto label_49c438;
        }
    }
    ctx->pc = 0x49BF30u;
label_49bf30:
    // 0x49bf30: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49bf30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49bf34: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x49bf34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf38: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x49bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49bf3c: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x49bf3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49bf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49bf44: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49bf44u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49bf48: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x49bf48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49bf4c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x49BF4Cu;
    {
        const bool branch_taken_0x49bf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF4Cu;
        // 0x49bf50: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf4c) {
            ctx->pc = 0x49C088u;
            goto label_49c088;
        }
    }
    ctx->pc = 0x49BF54u;
    // 0x49bf54: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x49bf54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x49bf58: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x49bf58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    // 0x49bf5c: 0x0  nop
    ctx->pc = 0x49bf5cu;
    // NOP
label_49bf60:
    // 0x49bf60: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x49bf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49bf64: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49bf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49bf68: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49bf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49bf6c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49bf70: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49bf74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49bf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49bf78: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49bf7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49bf80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49bf84: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x49bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x49bf88: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x49bf88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49bf8c: 0x3c027f00  lui         $v0, 0x7F00
    ctx->pc = 0x49bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32512 << 16));
    // 0x49bf90: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x49bf90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49bf94: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49BF94u;
    {
        const bool branch_taken_0x49bf94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bf94) {
            ctx->pc = 0x49BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49BF94u;
            // 0x49bf98: 0x8d2e0000  lw          $t6, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BFA8u;
            goto label_49bfa8;
        }
    }
    ctx->pc = 0x49BF9Cu;
    // 0x49bf9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49BF9Cu;
    {
        const bool branch_taken_0x49bf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BF9Cu;
        // 0x49bfa0: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bf9c) {
            ctx->pc = 0x49C048u;
            goto label_49c048;
        }
    }
    ctx->pc = 0x49BFA4u;
    // 0x49bfa4: 0x0  nop
    ctx->pc = 0x49bfa4u;
    // NOP
label_49bfa8:
    // 0x49bfa8: 0xf42824  and         $a1, $a3, $s4
    ctx->pc = 0x49bfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
    // 0x49bfac: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49bfb0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x49bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49bfb4: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x49bfb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x49bfb8: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x49bfb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x49bfbc: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x49bfbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x49bfc0: 0x657823  subu        $t7, $v1, $a1
    ctx->pc = 0x49bfc0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49bfc4: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49bfc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49bfc8: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49bfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49bfcc: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49bfccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49bfd0: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49bfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49bfd4: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x49bfd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x49bfd8: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49bfd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49bfdc: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49bfdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49bfe0: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49bfe4: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49bfe4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49bfe8: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49bfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49bfec: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49bfecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49bff0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x49bff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x49bff4: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49bff4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49bff8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49bff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49bffc: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49bffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49c000: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49c000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49c004: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49c004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49c008: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49c008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49c00c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49c010: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49c010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49c014: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49c014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49c018: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49c01c: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49c020: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49c020u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49c024: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49c024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49c028: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49c02c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49c030: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49c030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49c034: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49c038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49c03c: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49c040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49c044: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49c044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_49c048:
    // 0x49c048: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c04c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x49c04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x49c050: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49c050u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49c054: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C054u;
    {
        const bool branch_taken_0x49c054 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C054u;
        // 0x49c058: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c054) {
            ctx->pc = 0x49C07Cu;
            goto label_49c07c;
        }
    }
    ctx->pc = 0x49C05Cu;
    // 0x49c05c: 0x0  nop
    ctx->pc = 0x49c05cu;
    // NOP
label_49c060:
    // 0x49c060: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c060u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c064: 0x0  nop
    ctx->pc = 0x49c064u;
    // NOP
    // 0x49c068: 0x0  nop
    ctx->pc = 0x49c068u;
    // NOP
    // 0x49c06c: 0x0  nop
    ctx->pc = 0x49c06cu;
    // NOP
    // 0x49c070: 0x0  nop
    ctx->pc = 0x49c070u;
    // NOP
    // 0x49c074: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C074u;
    {
        const bool branch_taken_0x49c074 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C074u;
        // 0x49c078: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c074) {
            ctx->pc = 0x49C060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c060;
        }
    }
    ctx->pc = 0x49C07Cu;
label_49c07c:
    // 0x49c07c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c080: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x49C080u;
    {
        const bool branch_taken_0x49c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C080u;
        // 0x49c084: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c080) {
            ctx->pc = 0x49BF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bf60;
        }
    }
    ctx->pc = 0x49C088u;
label_49c088:
    // 0x49c088: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c08c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c090: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c094: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c098: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C098u;
    {
        const bool branch_taken_0x49c098 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C098u;
        // 0x49c09c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c098) {
            ctx->pc = 0x49C0CCu;
            goto label_49c0cc;
        }
    }
    ctx->pc = 0x49C0A0u;
    // 0x49c0a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c0a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c0a8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49c0ac: 0x0  nop
    ctx->pc = 0x49c0acu;
    // NOP
label_49c0b0:
    // 0x49c0b0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49c0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49c0b4: 0x0  nop
    ctx->pc = 0x49c0b4u;
    // NOP
    // 0x49c0b8: 0x0  nop
    ctx->pc = 0x49c0b8u;
    // NOP
    // 0x49c0bc: 0x0  nop
    ctx->pc = 0x49c0bcu;
    // NOP
    // 0x49c0c0: 0x0  nop
    ctx->pc = 0x49c0c0u;
    // NOP
    // 0x49c0c4: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C0C4u;
    {
        const bool branch_taken_0x49c0c4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0C4u;
        // 0x49c0c8: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0c4) {
            ctx->pc = 0x49C0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c0b0;
        }
    }
    ctx->pc = 0x49C0CCu;
label_49c0cc:
    // 0x49c0cc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c0d0: 0x1480ff97  bnez        $a0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x49C0D0u;
    {
        const bool branch_taken_0x49c0d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0D0u;
        // 0x49c0d4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0d0) {
            ctx->pc = 0x49BF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49bf30;
        }
    }
    ctx->pc = 0x49C0D8u;
    // 0x49c0d8: 0x1000033a  b           . + 4 + (0x33A << 2)
    ctx->pc = 0x49C0D8u;
    {
        const bool branch_taken_0x49c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0D8u;
        // 0x49c0dc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0d8) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49C0E0u;
label_49c0e0:
    // 0x49c0e0: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x49c0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x49c0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c0e8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49c0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49c0ec: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x49C0ECu;
    {
        const bool branch_taken_0x49c0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0ECu;
        // 0x49c0f0: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0ec) {
            ctx->pc = 0x49C238u;
            goto label_49c238;
        }
    }
    ctx->pc = 0x49C0F4u;
    // 0x49c0f4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c0f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c0fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c0fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c100: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x49c100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x49c104: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c108: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x49C108u;
    {
        const bool branch_taken_0x49c108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C108u;
        // 0x49c10c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c108) {
            ctx->pc = 0x49C438u;
            goto label_49c438;
        }
    }
    ctx->pc = 0x49C110u;
label_49c110:
    // 0x49c110: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49c110u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c114: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x49c114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c118: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x49c118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c11c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49c11cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49c120: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c124: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x49c124u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c128: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x49c128u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49c12c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x49C12Cu;
    {
        const bool branch_taken_0x49c12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C12Cu;
        // 0x49c130: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c12c) {
            ctx->pc = 0x49C1E0u;
            goto label_49c1e0;
        }
    }
    ctx->pc = 0x49C134u;
    // 0x49c134: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x49c134u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_49c138:
    // 0x49c138: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x49c138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x49c13c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49C13Cu;
    {
        const bool branch_taken_0x49c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C13Cu;
        // 0x49c140: 0xb1042  srl         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c13c) {
            ctx->pc = 0x49C158u;
            goto label_49c158;
        }
    }
    ctx->pc = 0x49C144u;
    // 0x49c144: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49c148: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49c148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49c14c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49C14Cu;
    {
        const bool branch_taken_0x49c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C14Cu;
        // 0x49c150: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c14c) {
            ctx->pc = 0x49C168u;
            goto label_49c168;
        }
    }
    ctx->pc = 0x49C154u;
    // 0x49c154: 0x0  nop
    ctx->pc = 0x49c154u;
    // NOP
label_49c158:
    // 0x49c158: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49c15c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49c15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49c160: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x49c160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x49c164: 0x0  nop
    ctx->pc = 0x49c164u;
    // NOP
label_49c168:
    // 0x49c168: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49c168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49c16c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49c170: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x49c170u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c174: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x49c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49c178: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49C178u;
    {
        const bool branch_taken_0x49c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C178u;
        // 0x49c17c: 0x30a403e0  andi        $a0, $a1, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c178) {
            ctx->pc = 0x49C1A4u;
            goto label_49c1a4;
        }
    }
    ctx->pc = 0x49C180u;
    // 0x49c180: 0x30a37c00  andi        $v1, $a1, 0x7C00
    ctx->pc = 0x49c180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x49c184: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49c184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49c188: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49c18c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x49c18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x49c190: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x49c190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x49c194: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49c198: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49c198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49c19c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49c19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49c1a0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_49c1a4:
    // 0x49c1a4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c1a8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49c1ac: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49c1acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49c1b0: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x49C1B0u;
    {
        const bool branch_taken_0x49c1b0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1B0u;
        // 0x49c1b4: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1b0) {
            ctx->pc = 0x49C1D4u;
            goto label_49c1d4;
        }
    }
    ctx->pc = 0x49C1B8u;
label_49c1b8:
    // 0x49c1b8: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c1b8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c1bc: 0x0  nop
    ctx->pc = 0x49c1bcu;
    // NOP
    // 0x49c1c0: 0x0  nop
    ctx->pc = 0x49c1c0u;
    // NOP
    // 0x49c1c4: 0x0  nop
    ctx->pc = 0x49c1c4u;
    // NOP
    // 0x49c1c8: 0x0  nop
    ctx->pc = 0x49c1c8u;
    // NOP
    // 0x49c1cc: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C1CCu;
    {
        const bool branch_taken_0x49c1cc = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1CCu;
        // 0x49c1d0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1cc) {
            ctx->pc = 0x49C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c1b8;
        }
    }
    ctx->pc = 0x49C1D4u;
label_49c1d4:
    // 0x49c1d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c1d8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x49C1D8u;
    {
        const bool branch_taken_0x49c1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1D8u;
        // 0x49c1dc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1d8) {
            ctx->pc = 0x49C138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c138;
        }
    }
    ctx->pc = 0x49C1E0u;
label_49c1e0:
    // 0x49c1e0: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c1e4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c1e8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c1ec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c1f0: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C1F0u;
    {
        const bool branch_taken_0x49c1f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1F0u;
        // 0x49c1f4: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1f0) {
            ctx->pc = 0x49C224u;
            goto label_49c224;
        }
    }
    ctx->pc = 0x49C1F8u;
    // 0x49c1f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c1fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c200: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49c204: 0x0  nop
    ctx->pc = 0x49c204u;
    // NOP
label_49c208:
    // 0x49c208: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49c208u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49c20c: 0x0  nop
    ctx->pc = 0x49c20cu;
    // NOP
    // 0x49c210: 0x0  nop
    ctx->pc = 0x49c210u;
    // NOP
    // 0x49c214: 0x0  nop
    ctx->pc = 0x49c214u;
    // NOP
    // 0x49c218: 0x0  nop
    ctx->pc = 0x49c218u;
    // NOP
    // 0x49c21c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C21Cu;
    {
        const bool branch_taken_0x49c21c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C21Cu;
        // 0x49c220: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c21c) {
            ctx->pc = 0x49C208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c208;
        }
    }
    ctx->pc = 0x49C224u;
label_49c224:
    // 0x49c224: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c228: 0x1480ffb9  bnez        $a0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x49C228u;
    {
        const bool branch_taken_0x49c228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C228u;
        // 0x49c22c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c228) {
            ctx->pc = 0x49C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c110;
        }
    }
    ctx->pc = 0x49C230u;
    // 0x49c230: 0x100002e4  b           . + 4 + (0x2E4 << 2)
    ctx->pc = 0x49C230u;
    {
        const bool branch_taken_0x49c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C230u;
        // 0x49c234: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c230) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49C238u;
label_49c238:
    // 0x49c238: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c23c: 0x8c780008  lw          $t8, 0x8($v1)
    ctx->pc = 0x49c23cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x49c240: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c244: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c248: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x49C248u;
    {
        const bool branch_taken_0x49c248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C248u;
        // 0x49c24c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c248) {
            ctx->pc = 0x49C438u;
            goto label_49c438;
        }
    }
    ctx->pc = 0x49C250u;
label_49c250:
    // 0x49c250: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49c250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c254: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x49c254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c258: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x49c258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c25c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49c25cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49c260: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c264: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x49c264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c268: 0x204f021  addu        $fp, $s0, $a0
    ctx->pc = 0x49c268u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x49c26c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x49C26Cu;
    {
        const bool branch_taken_0x49c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C26Cu;
        // 0x49c270: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c26c) {
            ctx->pc = 0x49C3E8u;
            goto label_49c3e8;
        }
    }
    ctx->pc = 0x49C274u;
    // 0x49c274: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x49c274u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x49c278: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x49c278u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    // 0x49c27c: 0x0  nop
    ctx->pc = 0x49c27cu;
    // NOP
label_49c280:
    // 0x49c280: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x49c280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x49c284: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x49C284u;
    {
        const bool branch_taken_0x49c284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C284u;
        // 0x49c288: 0xb1042  srl         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c284) {
            ctx->pc = 0x49C2E0u;
            goto label_49c2e0;
        }
    }
    ctx->pc = 0x49C28Cu;
    // 0x49c28c: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x49c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x49c290: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49c294: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49c294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49c298: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49c298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49c29c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49c2a0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x49c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x49c2a4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x49c2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c2a8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x49c2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49c2ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49C2ACu;
    {
        const bool branch_taken_0x49c2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2ACu;
        // 0x49c2b0: 0xf42824  and         $a1, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c2ac) {
            ctx->pc = 0x49C2D8u;
            goto label_49c2d8;
        }
    }
    ctx->pc = 0x49C2B4u;
    // 0x49c2b4: 0x8d2e0000  lw          $t6, 0x0($t1)
    ctx->pc = 0x49c2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49c2b8: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49c2bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x49c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49c2c0: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x49c2c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x49c2c4: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x49c2c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x49c2c8: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x49c2c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x49c2cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x49C2CCu;
    {
        const bool branch_taken_0x49c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2CCu;
        // 0x49c2d0: 0x457823  subu        $t7, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c2cc) {
            ctx->pc = 0x49C328u;
            goto label_49c328;
        }
    }
    ctx->pc = 0x49C2D4u;
    // 0x49c2d4: 0x0  nop
    ctx->pc = 0x49c2d4u;
    // NOP
label_49c2d8:
    // 0x49c2d8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x49C2D8u;
    {
        const bool branch_taken_0x49c2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2D8u;
        // 0x49c2dc: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c2d8) {
            ctx->pc = 0x49C3ACu;
            goto label_49c3ac;
        }
    }
    ctx->pc = 0x49C2E0u;
label_49c2e0:
    // 0x49c2e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49c2e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49c2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49c2e8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x49c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x49c2ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49c2f0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x49c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x49c2f4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x49c2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c2f8: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x49c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x49c2fc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x49c2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49c300: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x49C300u;
    {
        const bool branch_taken_0x49c300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C300u;
        // 0x49c304: 0xf42824  and         $a1, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c300) {
            ctx->pc = 0x49C2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c2d8;
        }
    }
    ctx->pc = 0x49C308u;
    // 0x49c308: 0x8d2e0000  lw          $t6, 0x0($t1)
    ctx->pc = 0x49c308u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49c30c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49c310: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x49c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49c314: 0x857823  subu        $t7, $a0, $a1
    ctx->pc = 0x49c314u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49c318: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x49c318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x49c31c: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x49c31cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x49c320: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x49c320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x49c324: 0x0  nop
    ctx->pc = 0x49c324u;
    // NOP
label_49c328:
    // 0x49c328: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49c328u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49c32c: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49c32cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49c330: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49c330u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49c334: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49c334u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49c338: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x49c338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x49c33c: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49c33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49c340: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49c340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49c344: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49c344u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49c348: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49c348u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49c34c: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49c34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49c350: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49c350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49c354: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x49c354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x49c358: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49c358u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49c35c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49c35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49c360: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49c360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49c364: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49c364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49c368: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49c368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49c36c: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49c36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49c370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49c374: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49c378: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49c378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49c37c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49c380: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49c380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49c384: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49c384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49c388: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49c388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49c38c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49c390: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49c394: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49c394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49c398: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49c39c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49c3a0: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49c3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49c3a8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_49c3ac:
    // 0x49c3ac: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c3b0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x49c3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x49c3b4: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49c3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49c3b8: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x49C3B8u;
    {
        const bool branch_taken_0x49c3b8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3B8u;
        // 0x49c3bc: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c3b8) {
            ctx->pc = 0x49C3DCu;
            goto label_49c3dc;
        }
    }
    ctx->pc = 0x49C3C0u;
label_49c3c0:
    // 0x49c3c0: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c3c0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c3c4: 0x0  nop
    ctx->pc = 0x49c3c4u;
    // NOP
    // 0x49c3c8: 0x0  nop
    ctx->pc = 0x49c3c8u;
    // NOP
    // 0x49c3cc: 0x0  nop
    ctx->pc = 0x49c3ccu;
    // NOP
    // 0x49c3d0: 0x0  nop
    ctx->pc = 0x49c3d0u;
    // NOP
    // 0x49c3d4: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C3D4u;
    {
        const bool branch_taken_0x49c3d4 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3D4u;
        // 0x49c3d8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c3d4) {
            ctx->pc = 0x49C3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c3c0;
        }
    }
    ctx->pc = 0x49C3DCu;
label_49c3dc:
    // 0x49c3dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c3e0: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x49C3E0u;
    {
        const bool branch_taken_0x49c3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3E0u;
        // 0x49c3e4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c3e0) {
            ctx->pc = 0x49C280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c280;
        }
    }
    ctx->pc = 0x49C3E8u;
label_49c3e8:
    // 0x49c3e8: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c3ec: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c3f0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c3f4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c3f8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C3F8u;
    {
        const bool branch_taken_0x49c3f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C3F8u;
        // 0x49c3fc: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c3f8) {
            ctx->pc = 0x49C42Cu;
            goto label_49c42c;
        }
    }
    ctx->pc = 0x49C400u;
    // 0x49c400: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c404: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c408: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49c408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49c40c: 0x0  nop
    ctx->pc = 0x49c40cu;
    // NOP
label_49c410:
    // 0x49c410: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49c410u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49c414: 0x0  nop
    ctx->pc = 0x49c414u;
    // NOP
    // 0x49c418: 0x0  nop
    ctx->pc = 0x49c418u;
    // NOP
    // 0x49c41c: 0x0  nop
    ctx->pc = 0x49c41cu;
    // NOP
    // 0x49c420: 0x0  nop
    ctx->pc = 0x49c420u;
    // NOP
    // 0x49c424: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C424u;
    {
        const bool branch_taken_0x49c424 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C424u;
        // 0x49c428: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c424) {
            ctx->pc = 0x49C410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c410;
        }
    }
    ctx->pc = 0x49C42Cu;
label_49c42c:
    // 0x49c42c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c430: 0x1480ff87  bnez        $a0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x49C430u;
    {
        const bool branch_taken_0x49c430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C430u;
        // 0x49c434: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c430) {
            ctx->pc = 0x49C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c250;
        }
    }
    ctx->pc = 0x49C438u;
label_49c438:
    // 0x49c438: 0x10000262  b           . + 4 + (0x262 << 2)
    ctx->pc = 0x49C438u;
    {
        const bool branch_taken_0x49c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C438u;
        // 0x49c43c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c438) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49C440u;
label_49c440:
    // 0x49c440: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c444: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c448: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c44c: 0x10600261  beqz        $v1, . + 4 + (0x261 << 2)
    ctx->pc = 0x49C44Cu;
    {
        const bool branch_taken_0x49c44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C44Cu;
        // 0x49c450: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c44c) {
            ctx->pc = 0x49CDD4u;
            goto label_49cdd4;
        }
    }
    ctx->pc = 0x49C454u;
    // 0x49c454: 0x0  nop
    ctx->pc = 0x49c454u;
    // NOP
label_49c458:
    // 0x49c458: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49c458u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c45c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x49c45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c460: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x49c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c464: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x49c464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c468: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c46c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49c46cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49c470: 0x203f021  addu        $fp, $s0, $v1
    ctx->pc = 0x49c470u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49c474: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x49C474u;
    {
        const bool branch_taken_0x49c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C474u;
        // 0x49c478: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c474) {
            ctx->pc = 0x49C5B0u;
            goto label_49c5b0;
        }
    }
    ctx->pc = 0x49C47Cu;
    // 0x49c47c: 0x0  nop
    ctx->pc = 0x49c47cu;
    // NOP
label_49c480:
    // 0x49c480: 0x8e980000  lw          $t8, 0x0($s4)
    ctx->pc = 0x49c480u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49c484: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x49c484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x49c488: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x49c488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x49c48c: 0x3047824  and         $t7, $t8, $a0
    ctx->pc = 0x49c48cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x49c490: 0xaf102b  sltu        $v0, $a1, $t7
    ctx->pc = 0x49c490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49c494: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C494u;
    {
        const bool branch_taken_0x49c494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C494u;
        // 0x49c498: 0x3c0200f8  lui         $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)248 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c494) {
            ctx->pc = 0x49C4C8u;
            goto label_49c4c8;
        }
    }
    ctx->pc = 0x49C49Cu;
    // 0x49c49c: 0x3304f800  andi        $a0, $t8, 0xF800
    ctx->pc = 0x49c49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x49c4a0: 0x3021824  and         $v1, $t8, $v0
    ctx->pc = 0x49c4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x49c4a4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49c4a8: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49c4ac: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x49c4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49c4b0: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x49c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49c4b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49c4b8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49c4bc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x49C4BCu;
    {
        const bool branch_taken_0x49c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C4BCu;
        // 0x49c4c0: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c4bc) {
            ctx->pc = 0x49C56Cu;
            goto label_49c56c;
        }
    }
    ctx->pc = 0x49C4C4u;
    // 0x49c4c4: 0x0  nop
    ctx->pc = 0x49c4c4u;
    // NOP
label_49c4c8:
    // 0x49c4c8: 0x966c0000  lhu         $t4, 0x0($s3)
    ctx->pc = 0x49c4c8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49c4cc: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49c4ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49c4d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x49c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49c4d4: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x49c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x49c4d8: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49c4d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49c4dc: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x49c4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x49c4e0: 0x3046824  and         $t5, $t8, $a0
    ctx->pc = 0x49c4e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x49c4e4: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49c4e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49c4e8: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49c4e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49c4ec: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49c4ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49c4f0: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49c4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49c4f4: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49c4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49c4f8: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49c4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49c4fc: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49c4fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49c500: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49c500u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49c504: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49c504u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49c508: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49c508u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49c50c: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49c50cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49c510: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49c510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49c514: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49c514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49c518: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49c51c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49c51cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49c520: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49c520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49c524: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49c524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49c528: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49c528u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49c52c: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49c52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49c530: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49c530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49c534: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49c538: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49c538u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49c53c: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49c540: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49c540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49c544: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49c544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49c548: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49c548u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49c54c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49c550: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49c550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49c554: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49c558: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49c558u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49c55c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49c560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49c564: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49c564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49c568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c56c:
    // 0x49c56c: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x49c56cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c570: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c574: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x49c574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x49c578: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49c578u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49c57c: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C57Cu;
    {
        const bool branch_taken_0x49c57c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C57Cu;
        // 0x49c580: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c57c) {
            ctx->pc = 0x49C5A4u;
            goto label_49c5a4;
        }
    }
    ctx->pc = 0x49C584u;
    // 0x49c584: 0x0  nop
    ctx->pc = 0x49c584u;
    // NOP
label_49c588:
    // 0x49c588: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c588u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c58c: 0x0  nop
    ctx->pc = 0x49c58cu;
    // NOP
    // 0x49c590: 0x0  nop
    ctx->pc = 0x49c590u;
    // NOP
    // 0x49c594: 0x0  nop
    ctx->pc = 0x49c594u;
    // NOP
    // 0x49c598: 0x0  nop
    ctx->pc = 0x49c598u;
    // NOP
    // 0x49c59c: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C59Cu;
    {
        const bool branch_taken_0x49c59c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C59Cu;
        // 0x49c5a0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c59c) {
            ctx->pc = 0x49C588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c588;
        }
    }
    ctx->pc = 0x49C5A4u;
label_49c5a4:
    // 0x49c5a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c5a8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x49C5A8u;
    {
        const bool branch_taken_0x49c5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5A8u;
        // 0x49c5ac: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c5a8) {
            ctx->pc = 0x49C480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c480;
        }
    }
    ctx->pc = 0x49C5B0u;
label_49c5b0:
    // 0x49c5b0: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c5b4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c5b8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c5bc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c5c0: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C5C0u;
    {
        const bool branch_taken_0x49c5c0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5C0u;
        // 0x49c5c4: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c5c0) {
            ctx->pc = 0x49C5F4u;
            goto label_49c5f4;
        }
    }
    ctx->pc = 0x49C5C8u;
    // 0x49c5c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c5cc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c5d0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49c5d4: 0x0  nop
    ctx->pc = 0x49c5d4u;
    // NOP
label_49c5d8:
    // 0x49c5d8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49c5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49c5dc: 0x0  nop
    ctx->pc = 0x49c5dcu;
    // NOP
    // 0x49c5e0: 0x0  nop
    ctx->pc = 0x49c5e0u;
    // NOP
    // 0x49c5e4: 0x0  nop
    ctx->pc = 0x49c5e4u;
    // NOP
    // 0x49c5e8: 0x0  nop
    ctx->pc = 0x49c5e8u;
    // NOP
    // 0x49c5ec: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C5ECu;
    {
        const bool branch_taken_0x49c5ec = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5ECu;
        // 0x49c5f0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c5ec) {
            ctx->pc = 0x49C5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c5d8;
        }
    }
    ctx->pc = 0x49C5F4u;
label_49c5f4:
    // 0x49c5f4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c5f8: 0x1480ff97  bnez        $a0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x49C5F8u;
    {
        const bool branch_taken_0x49c5f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C5F8u;
        // 0x49c5fc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c5f8) {
            ctx->pc = 0x49C458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c458;
        }
    }
    ctx->pc = 0x49C600u;
    // 0x49c600: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x49C600u;
    {
        const bool branch_taken_0x49c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C600u;
        // 0x49c604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c600) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49C608u;
label_49c608:
    // 0x49c608: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c60c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c60cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c614: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x49C614u;
    {
        const bool branch_taken_0x49c614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C614u;
        // 0x49c618: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c614) {
            ctx->pc = 0x49CDD4u;
            goto label_49cdd4;
        }
    }
    ctx->pc = 0x49C61Cu;
    // 0x49c61c: 0x0  nop
    ctx->pc = 0x49c61cu;
    // NOP
label_49c620:
    // 0x49c620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x49c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c624: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x49c624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c628: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49c628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c62c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49c62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c630: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x49c630u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x49c634: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49c634u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49c638: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c63c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x49C63Cu;
    {
        const bool branch_taken_0x49c63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C63Cu;
        // 0x49c640: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c63c) {
            ctx->pc = 0x49C698u;
            goto label_49c698;
        }
    }
    ctx->pc = 0x49C644u;
    // 0x49c644: 0x0  nop
    ctx->pc = 0x49c644u;
    // NOP
label_49c648:
    // 0x49c648: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49c648u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c64c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x49c64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x49c650: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49C650u;
    {
        const bool branch_taken_0x49c650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49c650) {
            ctx->pc = 0x49C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C650u;
            // 0x49c654: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C658u;
            goto label_49c658;
        }
    }
    ctx->pc = 0x49C658u;
label_49c658:
    // 0x49c658: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x49c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c65c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49c660: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49c660u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49c664: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C664u;
    {
        const bool branch_taken_0x49c664 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C664u;
        // 0x49c668: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c664) {
            ctx->pc = 0x49C68Cu;
            goto label_49c68c;
        }
    }
    ctx->pc = 0x49C66Cu;
    // 0x49c66c: 0x0  nop
    ctx->pc = 0x49c66cu;
    // NOP
label_49c670:
    // 0x49c670: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c670u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c674: 0x0  nop
    ctx->pc = 0x49c674u;
    // NOP
    // 0x49c678: 0x0  nop
    ctx->pc = 0x49c678u;
    // NOP
    // 0x49c67c: 0x0  nop
    ctx->pc = 0x49c67cu;
    // NOP
    // 0x49c680: 0x0  nop
    ctx->pc = 0x49c680u;
    // NOP
    // 0x49c684: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C684u;
    {
        const bool branch_taken_0x49c684 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C684u;
        // 0x49c688: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c684) {
            ctx->pc = 0x49C670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c670;
        }
    }
    ctx->pc = 0x49C68Cu;
label_49c68c:
    // 0x49c68c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c690: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x49C690u;
    {
        const bool branch_taken_0x49c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C690u;
        // 0x49c694: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c690) {
            ctx->pc = 0x49C648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c648;
        }
    }
    ctx->pc = 0x49C698u;
label_49c698:
    // 0x49c698: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c69c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c6a0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c6a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c6a8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C6A8u;
    {
        const bool branch_taken_0x49c6a8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6A8u;
        // 0x49c6ac: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c6a8) {
            ctx->pc = 0x49C6DCu;
            goto label_49c6dc;
        }
    }
    ctx->pc = 0x49C6B0u;
    // 0x49c6b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c6b4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x49c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49c6b8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49c6bc: 0x0  nop
    ctx->pc = 0x49c6bcu;
    // NOP
label_49c6c0:
    // 0x49c6c0: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49c6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49c6c4: 0x0  nop
    ctx->pc = 0x49c6c4u;
    // NOP
    // 0x49c6c8: 0x0  nop
    ctx->pc = 0x49c6c8u;
    // NOP
    // 0x49c6cc: 0x0  nop
    ctx->pc = 0x49c6ccu;
    // NOP
    // 0x49c6d0: 0x0  nop
    ctx->pc = 0x49c6d0u;
    // NOP
    // 0x49c6d4: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C6D4u;
    {
        const bool branch_taken_0x49c6d4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6D4u;
        // 0x49c6d8: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c6d4) {
            ctx->pc = 0x49C6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c6c0;
        }
    }
    ctx->pc = 0x49C6DCu;
label_49c6dc:
    // 0x49c6dc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c6e0: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x49C6E0u;
    {
        const bool branch_taken_0x49c6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6E0u;
        // 0x49c6e4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c6e0) {
            ctx->pc = 0x49C620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c620;
        }
    }
    ctx->pc = 0x49C6E8u;
    // 0x49c6e8: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x49C6E8u;
    {
        const bool branch_taken_0x49c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C6E8u;
        // 0x49c6ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c6e8) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49C6F0u;
label_49c6f0:
    // 0x49c6f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c6f4: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x49c6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x49c6f8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x49c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49c6fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49c6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49c700: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49C700u;
    {
        const bool branch_taken_0x49c700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C700u;
        // 0x49c704: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c700) {
            ctx->pc = 0x49C714u;
            goto label_49c714;
        }
    }
    ctx->pc = 0x49C708u;
    // 0x49c708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c70c: 0xc121902  jal         func_486408
    ctx->pc = 0x49C70Cu;
    SET_GPR_U32(ctx, 31, 0x49C714u);
    ctx->pc = 0x49C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C70Cu;
    // 0x49c710: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49C70Cu, 0x49C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C714u;
label_49c714:
    // 0x49c714: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49c714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c718: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49c71c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x49c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49c720: 0x146200c7  bne         $v1, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x49C720u;
    {
        const bool branch_taken_0x49c720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C720u;
        // 0x49c724: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c720) {
            ctx->pc = 0x49CA40u;
            goto label_49ca40;
        }
    }
    ctx->pc = 0x49C728u;
    // 0x49c728: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x49c728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x49c72c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c730: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49c734: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x49C734u;
    {
        const bool branch_taken_0x49c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C734u;
        // 0x49c738: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c734) {
            ctx->pc = 0x49C848u;
            goto label_49c848;
        }
    }
    ctx->pc = 0x49C73Cu;
    // 0x49c73c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x49c73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x49c740: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c748: 0x1060019d  beqz        $v1, . + 4 + (0x19D << 2)
    ctx->pc = 0x49C748u;
    {
        const bool branch_taken_0x49c748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C748u;
        // 0x49c74c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c748) {
            ctx->pc = 0x49CDC0u;
            goto label_49cdc0;
        }
    }
    ctx->pc = 0x49C750u;
label_49c750:
    // 0x49c750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x49c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c754: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x49c754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c758: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49c758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c75c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x49c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c760: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x49c760u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x49c764: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49c764u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49c768: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c76c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x49C76Cu;
    {
        const bool branch_taken_0x49c76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C76Cu;
        // 0x49c770: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c76c) {
            ctx->pc = 0x49C7F0u;
            goto label_49c7f0;
        }
    }
    ctx->pc = 0x49C774u;
    // 0x49c774: 0x0  nop
    ctx->pc = 0x49c774u;
    // NOP
label_49c778:
    // 0x49c778: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49c778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c77c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49c77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49c780: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49c780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49c784: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49c784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49c788: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49c78c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49c790: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49c790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49c794: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49c798: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49c798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49c79c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x49c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x49c7a0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49c7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49c7a4: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49c7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49c7a8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49C7A8u;
    {
        const bool branch_taken_0x49c7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49c7a8) {
            ctx->pc = 0x49C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C7A8u;
            // 0x49c7ac: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C7B0u;
            goto label_49c7b0;
        }
    }
    ctx->pc = 0x49C7B0u;
label_49c7b0:
    // 0x49c7b0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x49c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c7b4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49c7b8: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49c7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49c7bc: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C7BCu;
    {
        const bool branch_taken_0x49c7bc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7BCu;
        // 0x49c7c0: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c7bc) {
            ctx->pc = 0x49C7E4u;
            goto label_49c7e4;
        }
    }
    ctx->pc = 0x49C7C4u;
    // 0x49c7c4: 0x0  nop
    ctx->pc = 0x49c7c4u;
    // NOP
label_49c7c8:
    // 0x49c7c8: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c7cc: 0x0  nop
    ctx->pc = 0x49c7ccu;
    // NOP
    // 0x49c7d0: 0x0  nop
    ctx->pc = 0x49c7d0u;
    // NOP
    // 0x49c7d4: 0x0  nop
    ctx->pc = 0x49c7d4u;
    // NOP
    // 0x49c7d8: 0x0  nop
    ctx->pc = 0x49c7d8u;
    // NOP
    // 0x49c7dc: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C7DCu;
    {
        const bool branch_taken_0x49c7dc = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7DCu;
        // 0x49c7e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c7dc) {
            ctx->pc = 0x49C7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c7c8;
        }
    }
    ctx->pc = 0x49C7E4u;
label_49c7e4:
    // 0x49c7e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c7e8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49C7E8u;
    {
        const bool branch_taken_0x49c7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C7E8u;
        // 0x49c7ec: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c7e8) {
            ctx->pc = 0x49C778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c778;
        }
    }
    ctx->pc = 0x49C7F0u;
label_49c7f0:
    // 0x49c7f0: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c7f4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c7f8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c7fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c800: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C800u;
    {
        const bool branch_taken_0x49c800 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C800u;
        // 0x49c804: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c800) {
            ctx->pc = 0x49C834u;
            goto label_49c834;
        }
    }
    ctx->pc = 0x49C808u;
    // 0x49c808: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49c808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c80c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x49c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49c810: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49c814: 0x0  nop
    ctx->pc = 0x49c814u;
    // NOP
label_49c818:
    // 0x49c818: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49c818u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49c81c: 0x0  nop
    ctx->pc = 0x49c81cu;
    // NOP
    // 0x49c820: 0x0  nop
    ctx->pc = 0x49c820u;
    // NOP
    // 0x49c824: 0x0  nop
    ctx->pc = 0x49c824u;
    // NOP
    // 0x49c828: 0x0  nop
    ctx->pc = 0x49c828u;
    // NOP
    // 0x49c82c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C82Cu;
    {
        const bool branch_taken_0x49c82c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C82Cu;
        // 0x49c830: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c82c) {
            ctx->pc = 0x49C818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c818;
        }
    }
    ctx->pc = 0x49C834u;
label_49c834:
    // 0x49c834: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c838: 0x1480ffc5  bnez        $a0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x49C838u;
    {
        const bool branch_taken_0x49c838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C838u;
        // 0x49c83c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c838) {
            ctx->pc = 0x49C750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c750;
        }
    }
    ctx->pc = 0x49C840u;
    // 0x49c840: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x49C840u;
    {
        const bool branch_taken_0x49c840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C840u;
        // 0x49c844: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c840) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49C848u;
label_49c848:
    // 0x49c848: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49c848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c84c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49c84cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c850: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x49c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x49c854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c858: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x49c858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x49c85c: 0x10600158  beqz        $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x49C85Cu;
    {
        const bool branch_taken_0x49c85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C85Cu;
        // 0x49c860: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c85c) {
            ctx->pc = 0x49CDC0u;
            goto label_49cdc0;
        }
    }
    ctx->pc = 0x49C864u;
    // 0x49c864: 0x0  nop
    ctx->pc = 0x49c864u;
    // NOP
label_49c868:
    // 0x49c868: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49c868u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49c86c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x49c86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c870: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x49c870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49c874: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x49c874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c878: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c87c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49c87cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49c880: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x49c880u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49c884: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x49C884u;
    {
        const bool branch_taken_0x49c884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C884u;
        // 0x49c888: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c884) {
            ctx->pc = 0x49C9E8u;
            goto label_49c9e8;
        }
    }
    ctx->pc = 0x49C88Cu;
    // 0x49c88c: 0x0  nop
    ctx->pc = 0x49c88cu;
    // NOP
label_49c890:
    // 0x49c890: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x49c890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49c894: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x49c894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x49c898: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49c898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49c89c: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49c89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49c8a0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49c8a4: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49c8a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49c8ac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49c8b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49c8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49c8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x49c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49c8b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49c8bc: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x49c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x49c8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49c8c4: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x49c8c4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49c8c8: 0x3047824  and         $t7, $t8, $a0
    ctx->pc = 0x49c8c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x49c8cc: 0xaf102b  sltu        $v0, $a1, $t7
    ctx->pc = 0x49c8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49c8d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49C8D0u;
    {
        const bool branch_taken_0x49c8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8D0u;
        // 0x49c8d4: 0x3c0200f8  lui         $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)248 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c8d0) {
            ctx->pc = 0x49C900u;
            goto label_49c900;
        }
    }
    ctx->pc = 0x49C8D8u;
    // 0x49c8d8: 0x3304f800  andi        $a0, $t8, 0xF800
    ctx->pc = 0x49c8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x49c8dc: 0x3021824  and         $v1, $t8, $v0
    ctx->pc = 0x49c8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x49c8e0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49c8e4: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49c8e8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x49c8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49c8ec: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x49c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49c8f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49c8f4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49c8f8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49C8F8u;
    {
        const bool branch_taken_0x49c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C8F8u;
        // 0x49c8fc: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c8f8) {
            ctx->pc = 0x49C9A4u;
            goto label_49c9a4;
        }
    }
    ctx->pc = 0x49C900u;
label_49c900:
    // 0x49c900: 0x966c0000  lhu         $t4, 0x0($s3)
    ctx->pc = 0x49c900u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49c904: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49c904u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49c908: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x49c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49c90c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x49c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x49c910: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49c910u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49c914: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x49c914u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x49c918: 0x3046824  and         $t5, $t8, $a0
    ctx->pc = 0x49c918u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x49c91c: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49c91cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49c920: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49c920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49c924: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49c924u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49c928: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49c928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49c92c: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49c92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49c930: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49c930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49c934: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49c934u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49c938: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49c938u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49c93c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49c940: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49c940u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49c944: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49c944u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49c948: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49c948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49c94c: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49c94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49c950: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49c954: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49c954u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49c958: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49c958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49c95c: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49c95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49c960: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49c960u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49c964: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49c964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49c968: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49c968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49c96c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49c970: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49c970u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49c974: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49c974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49c978: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49c978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49c97c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49c980: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49c980u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49c984: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49c988: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49c988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49c98c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49c990: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49c990u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49c994: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49c998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49c998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49c99c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49c9a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49c9a4:
    // 0x49c9a4: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x49c9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c9a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49c9ac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x49c9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x49c9b0: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49c9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49c9b4: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C9B4u;
    {
        const bool branch_taken_0x49c9b4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C9B4u;
        // 0x49c9b8: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c9b4) {
            ctx->pc = 0x49C9DCu;
            goto label_49c9dc;
        }
    }
    ctx->pc = 0x49C9BCu;
    // 0x49c9bc: 0x0  nop
    ctx->pc = 0x49c9bcu;
    // NOP
label_49c9c0:
    // 0x49c9c0: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49c9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49c9c4: 0x0  nop
    ctx->pc = 0x49c9c4u;
    // NOP
    // 0x49c9c8: 0x0  nop
    ctx->pc = 0x49c9c8u;
    // NOP
    // 0x49c9cc: 0x0  nop
    ctx->pc = 0x49c9ccu;
    // NOP
    // 0x49c9d0: 0x0  nop
    ctx->pc = 0x49c9d0u;
    // NOP
    // 0x49c9d4: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C9D4u;
    {
        const bool branch_taken_0x49c9d4 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C9D4u;
        // 0x49c9d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c9d4) {
            ctx->pc = 0x49C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c9c0;
        }
    }
    ctx->pc = 0x49C9DCu;
label_49c9dc:
    // 0x49c9dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49c9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c9e0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x49C9E0u;
    {
        const bool branch_taken_0x49c9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C9E0u;
        // 0x49c9e4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c9e0) {
            ctx->pc = 0x49C890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c890;
        }
    }
    ctx->pc = 0x49C9E8u;
label_49c9e8:
    // 0x49c9e8: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49c9ec: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49c9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c9f0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49c9f4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c9f8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C9F8u;
    {
        const bool branch_taken_0x49c9f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C9F8u;
        // 0x49c9fc: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c9f8) {
            ctx->pc = 0x49CA2Cu;
            goto label_49ca2c;
        }
    }
    ctx->pc = 0x49CA00u;
    // 0x49ca00: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ca04: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49ca08: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49ca0c: 0x0  nop
    ctx->pc = 0x49ca0cu;
    // NOP
label_49ca10:
    // 0x49ca10: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49ca10u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49ca14: 0x0  nop
    ctx->pc = 0x49ca14u;
    // NOP
    // 0x49ca18: 0x0  nop
    ctx->pc = 0x49ca18u;
    // NOP
    // 0x49ca1c: 0x0  nop
    ctx->pc = 0x49ca1cu;
    // NOP
    // 0x49ca20: 0x0  nop
    ctx->pc = 0x49ca20u;
    // NOP
    // 0x49ca24: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49CA24u;
    {
        const bool branch_taken_0x49ca24 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA24u;
        // 0x49ca28: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca24) {
            ctx->pc = 0x49CA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ca10;
        }
    }
    ctx->pc = 0x49CA2Cu;
label_49ca2c:
    // 0x49ca2c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49ca30: 0x1480ff8d  bnez        $a0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x49CA30u;
    {
        const bool branch_taken_0x49ca30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA30u;
        // 0x49ca34: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca30) {
            ctx->pc = 0x49C868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c868;
        }
    }
    ctx->pc = 0x49CA38u;
    // 0x49ca38: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x49CA38u;
    {
        const bool branch_taken_0x49ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA38u;
        // 0x49ca3c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca38) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49CA40u;
label_49ca40:
    // 0x49ca40: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x49ca40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x49ca44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ca48: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49ca4c: 0x1443004a  bne         $v0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x49CA4Cu;
    {
        const bool branch_taken_0x49ca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA4Cu;
        // 0x49ca50: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca4c) {
            ctx->pc = 0x49CB78u;
            goto label_49cb78;
        }
    }
    ctx->pc = 0x49CA54u;
    // 0x49ca54: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ca58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49ca58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ca5c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x49ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x49ca60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ca64: 0x106000d6  beqz        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x49CA64u;
    {
        const bool branch_taken_0x49ca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA64u;
        // 0x49ca68: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca64) {
            ctx->pc = 0x49CDC0u;
            goto label_49cdc0;
        }
    }
    ctx->pc = 0x49CA6Cu;
    // 0x49ca6c: 0x0  nop
    ctx->pc = 0x49ca6cu;
    // NOP
label_49ca70:
    // 0x49ca70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x49ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49ca74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x49ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ca78: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49ca78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ca7c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49ca7cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49ca80: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x49ca80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x49ca84: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x49ca84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ca88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49ca88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ca8c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x49CA8Cu;
    {
        const bool branch_taken_0x49ca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA8Cu;
        // 0x49ca90: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca8c) {
            ctx->pc = 0x49CB20u;
            goto label_49cb20;
        }
    }
    ctx->pc = 0x49CA94u;
    // 0x49ca94: 0x0  nop
    ctx->pc = 0x49ca94u;
    // NOP
label_49ca98:
    // 0x49ca98: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x49ca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x49ca9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49CA9Cu;
    {
        const bool branch_taken_0x49ca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CA9Cu;
        // 0x49caa0: 0x131042  srl         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ca9c) {
            ctx->pc = 0x49CAB8u;
            goto label_49cab8;
        }
    }
    ctx->pc = 0x49CAA4u;
    // 0x49caa4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49caa8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49caa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49caac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49CAACu;
    {
        const bool branch_taken_0x49caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAACu;
        // 0x49cab0: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49caac) {
            ctx->pc = 0x49CAC8u;
            goto label_49cac8;
        }
    }
    ctx->pc = 0x49CAB4u;
    // 0x49cab4: 0x0  nop
    ctx->pc = 0x49cab4u;
    // NOP
label_49cab8:
    // 0x49cab8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49cabc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49cabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49cac0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x49cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x49cac4: 0x0  nop
    ctx->pc = 0x49cac4u;
    // NOP
label_49cac8:
    // 0x49cac8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49cacc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49cad0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x49cad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49cad4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x49cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x49cad8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49CAD8u;
    {
        const bool branch_taken_0x49cad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49cad8) {
            ctx->pc = 0x49CADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49CAD8u;
            // 0x49cadc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49CAE0u;
            goto label_49cae0;
        }
    }
    ctx->pc = 0x49CAE0u;
label_49cae0:
    // 0x49cae0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x49cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49cae4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x49cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49cae8: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49cae8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49caec: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49CAECu;
    {
        const bool branch_taken_0x49caec = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CAECu;
        // 0x49caf0: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49caec) {
            ctx->pc = 0x49CB14u;
            goto label_49cb14;
        }
    }
    ctx->pc = 0x49CAF4u;
    // 0x49caf4: 0x0  nop
    ctx->pc = 0x49caf4u;
    // NOP
label_49caf8:
    // 0x49caf8: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49caf8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49cafc: 0x0  nop
    ctx->pc = 0x49cafcu;
    // NOP
    // 0x49cb00: 0x0  nop
    ctx->pc = 0x49cb00u;
    // NOP
    // 0x49cb04: 0x0  nop
    ctx->pc = 0x49cb04u;
    // NOP
    // 0x49cb08: 0x0  nop
    ctx->pc = 0x49cb08u;
    // NOP
    // 0x49cb0c: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49CB0Cu;
    {
        const bool branch_taken_0x49cb0c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB0Cu;
        // 0x49cb10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb0c) {
            ctx->pc = 0x49CAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49caf8;
        }
    }
    ctx->pc = 0x49CB14u;
label_49cb14:
    // 0x49cb14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49cb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cb18: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x49CB18u;
    {
        const bool branch_taken_0x49cb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB18u;
        // 0x49cb1c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb18) {
            ctx->pc = 0x49CA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ca98;
        }
    }
    ctx->pc = 0x49CB20u;
label_49cb20:
    // 0x49cb20: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49cb24: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49cb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cb28: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49cb2c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49cb30: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49CB30u;
    {
        const bool branch_taken_0x49cb30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB30u;
        // 0x49cb34: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb30) {
            ctx->pc = 0x49CB64u;
            goto label_49cb64;
        }
    }
    ctx->pc = 0x49CB38u;
    // 0x49cb38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49cb3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49cb40: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49cb44: 0x0  nop
    ctx->pc = 0x49cb44u;
    // NOP
label_49cb48:
    // 0x49cb48: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49cb48u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49cb4c: 0x0  nop
    ctx->pc = 0x49cb4cu;
    // NOP
    // 0x49cb50: 0x0  nop
    ctx->pc = 0x49cb50u;
    // NOP
    // 0x49cb54: 0x0  nop
    ctx->pc = 0x49cb54u;
    // NOP
    // 0x49cb58: 0x0  nop
    ctx->pc = 0x49cb58u;
    // NOP
    // 0x49cb5c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49CB5Cu;
    {
        const bool branch_taken_0x49cb5c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB5Cu;
        // 0x49cb60: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb5c) {
            ctx->pc = 0x49CB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cb48;
        }
    }
    ctx->pc = 0x49CB64u;
label_49cb64:
    // 0x49cb64: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49cb68: 0x1480ffc1  bnez        $a0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x49CB68u;
    {
        const bool branch_taken_0x49cb68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB68u;
        // 0x49cb6c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb68) {
            ctx->pc = 0x49CA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ca70;
        }
    }
    ctx->pc = 0x49CB70u;
    // 0x49cb70: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x49CB70u;
    {
        const bool branch_taken_0x49cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB70u;
        // 0x49cb74: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb70) {
            ctx->pc = 0x49CDC4u;
            goto label_49cdc4;
        }
    }
    ctx->pc = 0x49CB78u;
label_49cb78:
    // 0x49cb78: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49cb7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49cb7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cb80: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x49cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x49cb84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49cb88: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x49cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x49cb8c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x49CB8Cu;
    {
        const bool branch_taken_0x49cb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CB8Cu;
        // 0x49cb90: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cb8c) {
            ctx->pc = 0x49CDC0u;
            goto label_49cdc0;
        }
    }
    ctx->pc = 0x49CB94u;
    // 0x49cb94: 0x0  nop
    ctx->pc = 0x49cb94u;
    // NOP
label_49cb98:
    // 0x49cb98: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49cb98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49cb9c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x49cb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cba0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x49cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49cba4: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x49cba4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x49cba8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49cba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cbac: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x49cbacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49cbb0: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x49cbb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49cbb4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x49CBB4u;
    {
        const bool branch_taken_0x49cbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBB4u;
        // 0x49cbb8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cbb4) {
            ctx->pc = 0x49CD70u;
            goto label_49cd70;
        }
    }
    ctx->pc = 0x49CBBCu;
    // 0x49cbbc: 0x0  nop
    ctx->pc = 0x49cbbcu;
    // NOP
label_49cbc0:
    // 0x49cbc0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x49cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x49cbc4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x49CBC4u;
    {
        const bool branch_taken_0x49cbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBC4u;
        // 0x49cbc8: 0x131042  srl         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cbc4) {
            ctx->pc = 0x49CC50u;
            goto label_49cc50;
        }
    }
    ctx->pc = 0x49CBCCu;
    // 0x49cbcc: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x49cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x49cbd0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49cbd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49cbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49cbd8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x49cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x49cbdc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49cbe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49cbe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49cbe8: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x49cbe8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49cbec: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x49cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x49cbf0: 0x3037824  and         $t7, $t8, $v1
    ctx->pc = 0x49cbf0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
    // 0x49cbf4: 0x8f102b  sltu        $v0, $a0, $t7
    ctx->pc = 0x49cbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49cbf8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x49CBF8u;
    {
        const bool branch_taken_0x49cbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CBF8u;
        // 0x49cbfc: 0x3c0400f8  lui         $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)248 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cbf8) {
            ctx->pc = 0x49CC88u;
            goto label_49cc88;
        }
    }
    ctx->pc = 0x49CC00u;
    // 0x49cc00: 0x3302f800  andi        $v0, $t8, 0xF800
    ctx->pc = 0x49cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x49cc04: 0x3041824  and         $v1, $t8, $a0
    ctx->pc = 0x49cc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x49cc08: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49cc0c: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49cc10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x49cc14: 0x330400f8  andi        $a0, $t8, 0xF8
    ctx->pc = 0x49cc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49cc18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49cc1c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x49cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x49cc20: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x49CC20u;
    {
        const bool branch_taken_0x49cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC20u;
        // 0x49cc24: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc20) {
            ctx->pc = 0x49CD2Cu;
            goto label_49cd2c;
        }
    }
    ctx->pc = 0x49CC28u;
label_49cc28:
    // 0x49cc28: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x49cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x49cc2c: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x49cc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x49cc30: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49cc34: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49cc38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x49cc3c: 0x330400f8  andi        $a0, $t8, 0xF8
    ctx->pc = 0x49cc3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49cc40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49cc44: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x49cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x49cc48: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x49CC48u;
    {
        const bool branch_taken_0x49cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC48u;
        // 0x49cc4c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc48) {
            ctx->pc = 0x49CD2Cu;
            goto label_49cd2c;
        }
    }
    ctx->pc = 0x49CC50u;
label_49cc50:
    // 0x49cc50: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x49cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x49cc54: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x49cc58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49cc58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49cc5c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x49cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x49cc60: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x49cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x49cc64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49cc68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49cc6c: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x49cc6cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49cc70: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x49cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x49cc74: 0x3037824  and         $t7, $t8, $v1
    ctx->pc = 0x49cc74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
    // 0x49cc78: 0x8f102b  sltu        $v0, $a0, $t7
    ctx->pc = 0x49cc78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49cc7c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x49CC7Cu;
    {
        const bool branch_taken_0x49cc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CC7Cu;
        // 0x49cc80: 0x3302f800  andi        $v0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cc7c) {
            ctx->pc = 0x49CC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cc28;
        }
    }
    ctx->pc = 0x49CC84u;
    // 0x49cc84: 0x0  nop
    ctx->pc = 0x49cc84u;
    // NOP
label_49cc88:
    // 0x49cc88: 0x968c0000  lhu         $t4, 0x0($s4)
    ctx->pc = 0x49cc88u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49cc8c: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49cc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49cc90: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x49cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49cc94: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x49cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x49cc98: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49cc98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49cc9c: 0xaf8823  subu        $s1, $a1, $t7
    ctx->pc = 0x49cc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x49cca0: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49cca0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49cca4: 0x3026824  and         $t5, $t8, $v0
    ctx->pc = 0x49cca4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x49cca8: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49cca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49ccac: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49ccacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49ccb0: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49ccb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49ccb4: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49ccb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49ccb8: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49ccb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49ccbc: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49ccbcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49ccc0: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49ccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49ccc4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49ccc8: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49ccc8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49cccc: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49ccccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49ccd0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49ccd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49ccd4: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49ccd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49ccd8: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49ccdc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49ccdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49cce0: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49cce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49cce4: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49cce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49cce8: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49cce8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49ccec: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49ccecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49ccf0: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49ccf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49ccf4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49ccf8: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49ccf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49ccfc: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49cd00: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49cd04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49cd08: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49cd08u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49cd0c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49cd10: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49cd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49cd14: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49cd18: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49cd1c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49cd20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49cd24: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49cd28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49cd2c:
    // 0x49cd2c: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x49cd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49cd30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x49cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x49cd34: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x49cd34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x49cd38: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x49cd38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x49cd3c: 0x1b200009  blez        $t9, . + 4 + (0x9 << 2)
    ctx->pc = 0x49CD3Cu;
    {
        const bool branch_taken_0x49cd3c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x49CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD3Cu;
        // 0x49cd40: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd3c) {
            ctx->pc = 0x49CD64u;
            goto label_49cd64;
        }
    }
    ctx->pc = 0x49CD44u;
    // 0x49cd44: 0x0  nop
    ctx->pc = 0x49cd44u;
    // NOP
label_49cd48:
    // 0x49cd48: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x49cd48u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x49cd4c: 0x0  nop
    ctx->pc = 0x49cd4cu;
    // NOP
    // 0x49cd50: 0x0  nop
    ctx->pc = 0x49cd50u;
    // NOP
    // 0x49cd54: 0x0  nop
    ctx->pc = 0x49cd54u;
    // NOP
    // 0x49cd58: 0x0  nop
    ctx->pc = 0x49cd58u;
    // NOP
    // 0x49cd5c: 0x1f20fffa  bgtz        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49CD5Cu;
    {
        const bool branch_taken_0x49cd5c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x49CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD5Cu;
        // 0x49cd60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd5c) {
            ctx->pc = 0x49CD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cd48;
        }
    }
    ctx->pc = 0x49CD64u;
label_49cd64:
    // 0x49cd64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49cd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd68: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x49CD68u;
    {
        const bool branch_taken_0x49cd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD68u;
        // 0x49cd6c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd68) {
            ctx->pc = 0x49CBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cbc0;
        }
    }
    ctx->pc = 0x49CD70u;
label_49cd70:
    // 0x49cd70: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49cd74: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x49cd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd78: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49cd7c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49cd80: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x49CD80u;
    {
        const bool branch_taken_0x49cd80 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x49CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD80u;
        // 0x49cd84: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd80) {
            ctx->pc = 0x49CDB4u;
            goto label_49cdb4;
        }
    }
    ctx->pc = 0x49CD88u;
    // 0x49cd88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49cd8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x49cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49cd90: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49cd94: 0x0  nop
    ctx->pc = 0x49cd94u;
    // NOP
label_49cd98:
    // 0x49cd98: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x49cd98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x49cd9c: 0x0  nop
    ctx->pc = 0x49cd9cu;
    // NOP
    // 0x49cda0: 0x0  nop
    ctx->pc = 0x49cda0u;
    // NOP
    // 0x49cda4: 0x0  nop
    ctx->pc = 0x49cda4u;
    // NOP
    // 0x49cda8: 0x0  nop
    ctx->pc = 0x49cda8u;
    // NOP
    // 0x49cdac: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49CDACu;
    {
        const bool branch_taken_0x49cdac = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x49CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CDACu;
        // 0x49cdb0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cdac) {
            ctx->pc = 0x49CD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cd98;
        }
    }
    ctx->pc = 0x49CDB4u;
label_49cdb4:
    // 0x49cdb4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49cdb8: 0x1480ff77  bnez        $a0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x49CDB8u;
    {
        const bool branch_taken_0x49cdb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CDB8u;
        // 0x49cdbc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cdb8) {
            ctx->pc = 0x49CB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cb98;
        }
    }
    ctx->pc = 0x49CDC0u;
label_49cdc0:
    // 0x49cdc0: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x49cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_49cdc4:
    // 0x49cdc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49CDC4u;
    {
        const bool branch_taken_0x49cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CDC4u;
        // 0x49cdc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cdc4) {
            ctx->pc = 0x49CDD8u;
            goto label_49cdd8;
        }
    }
    ctx->pc = 0x49CDCCu;
    // 0x49cdcc: 0xc121912  jal         func_486448
    ctx->pc = 0x49CDCCu;
    SET_GPR_U32(ctx, 31, 0x49CDD4u);
    ctx->pc = 0x49CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CDCCu;
    // 0x49cdd0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x49CDCCu, 0x49CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CDD4u;
label_49cdd4:
    // 0x49cdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cdd8:
    // 0x49cdd8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x49cdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_49cddc:
    // 0x49cddc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x49cddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x49cde0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x49cde0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x49cde4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x49cde4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x49cde8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x49cde8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x49cdec: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x49cdecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49cdf0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x49cdf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49cdf4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x49cdf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49cdf8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x49cdf8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49cdfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49cdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49ce00: 0x3e00008  jr          $ra
    ctx->pc = 0x49CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE00u;
        // 0x49ce04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49CE08u;
}

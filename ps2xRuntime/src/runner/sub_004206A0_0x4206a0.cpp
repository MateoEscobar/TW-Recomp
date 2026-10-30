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

// Function: sub_004206A0
// Address: 0x4206a0 - 0x420928
void sub_004206A0_0x4206a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004206A0_0x4206a0");
#endif

    switch (ctx->pc) {
        case 0x4206a0u: goto label_4206a0;
        case 0x4206a4u: goto label_4206a4;
        case 0x4206a8u: goto label_4206a8;
        case 0x4206acu: goto label_4206ac;
        case 0x4206b0u: goto label_4206b0;
        case 0x4206b4u: goto label_4206b4;
        case 0x4206b8u: goto label_4206b8;
        case 0x4206bcu: goto label_4206bc;
        case 0x4206c0u: goto label_4206c0;
        case 0x4206c4u: goto label_4206c4;
        case 0x4206c8u: goto label_4206c8;
        case 0x4206ccu: goto label_4206cc;
        case 0x4206d0u: goto label_4206d0;
        case 0x4206d4u: goto label_4206d4;
        case 0x4206d8u: goto label_4206d8;
        case 0x4206dcu: goto label_4206dc;
        case 0x4206e0u: goto label_4206e0;
        case 0x4206e4u: goto label_4206e4;
        case 0x4206e8u: goto label_4206e8;
        case 0x4206ecu: goto label_4206ec;
        case 0x4206f0u: goto label_4206f0;
        case 0x4206f4u: goto label_4206f4;
        case 0x4206f8u: goto label_4206f8;
        case 0x4206fcu: goto label_4206fc;
        case 0x420700u: goto label_420700;
        case 0x420704u: goto label_420704;
        case 0x420708u: goto label_420708;
        case 0x42070cu: goto label_42070c;
        case 0x420710u: goto label_420710;
        case 0x420714u: goto label_420714;
        case 0x420718u: goto label_420718;
        case 0x42071cu: goto label_42071c;
        case 0x420720u: goto label_420720;
        case 0x420724u: goto label_420724;
        case 0x420728u: goto label_420728;
        case 0x42072cu: goto label_42072c;
        case 0x420730u: goto label_420730;
        case 0x420734u: goto label_420734;
        case 0x420738u: goto label_420738;
        case 0x42073cu: goto label_42073c;
        case 0x420740u: goto label_420740;
        case 0x420744u: goto label_420744;
        case 0x420748u: goto label_420748;
        case 0x42074cu: goto label_42074c;
        case 0x420750u: goto label_420750;
        case 0x420754u: goto label_420754;
        case 0x420758u: goto label_420758;
        case 0x42075cu: goto label_42075c;
        case 0x420760u: goto label_420760;
        case 0x420764u: goto label_420764;
        case 0x420768u: goto label_420768;
        case 0x42076cu: goto label_42076c;
        case 0x420770u: goto label_420770;
        case 0x420774u: goto label_420774;
        case 0x420778u: goto label_420778;
        case 0x42077cu: goto label_42077c;
        case 0x420780u: goto label_420780;
        case 0x420784u: goto label_420784;
        case 0x420788u: goto label_420788;
        case 0x42078cu: goto label_42078c;
        case 0x420790u: goto label_420790;
        case 0x420794u: goto label_420794;
        case 0x420798u: goto label_420798;
        case 0x42079cu: goto label_42079c;
        case 0x4207a0u: goto label_4207a0;
        case 0x4207a4u: goto label_4207a4;
        case 0x4207a8u: goto label_4207a8;
        case 0x4207acu: goto label_4207ac;
        case 0x4207b0u: goto label_4207b0;
        case 0x4207b4u: goto label_4207b4;
        case 0x4207b8u: goto label_4207b8;
        case 0x4207bcu: goto label_4207bc;
        case 0x4207c0u: goto label_4207c0;
        case 0x4207c4u: goto label_4207c4;
        case 0x4207c8u: goto label_4207c8;
        case 0x4207ccu: goto label_4207cc;
        case 0x4207d0u: goto label_4207d0;
        case 0x4207d4u: goto label_4207d4;
        case 0x4207d8u: goto label_4207d8;
        case 0x4207dcu: goto label_4207dc;
        case 0x4207e0u: goto label_4207e0;
        case 0x4207e4u: goto label_4207e4;
        case 0x4207e8u: goto label_4207e8;
        case 0x4207ecu: goto label_4207ec;
        case 0x4207f0u: goto label_4207f0;
        case 0x4207f4u: goto label_4207f4;
        case 0x4207f8u: goto label_4207f8;
        case 0x4207fcu: goto label_4207fc;
        case 0x420800u: goto label_420800;
        case 0x420804u: goto label_420804;
        case 0x420808u: goto label_420808;
        case 0x42080cu: goto label_42080c;
        case 0x420810u: goto label_420810;
        case 0x420814u: goto label_420814;
        case 0x420818u: goto label_420818;
        case 0x42081cu: goto label_42081c;
        case 0x420820u: goto label_420820;
        case 0x420824u: goto label_420824;
        case 0x420828u: goto label_420828;
        case 0x42082cu: goto label_42082c;
        case 0x420830u: goto label_420830;
        case 0x420834u: goto label_420834;
        case 0x420838u: goto label_420838;
        case 0x42083cu: goto label_42083c;
        case 0x420840u: goto label_420840;
        case 0x420844u: goto label_420844;
        case 0x420848u: goto label_420848;
        case 0x42084cu: goto label_42084c;
        case 0x420850u: goto label_420850;
        case 0x420854u: goto label_420854;
        case 0x420858u: goto label_420858;
        case 0x42085cu: goto label_42085c;
        case 0x420860u: goto label_420860;
        case 0x420864u: goto label_420864;
        case 0x420868u: goto label_420868;
        case 0x42086cu: goto label_42086c;
        case 0x420870u: goto label_420870;
        case 0x420874u: goto label_420874;
        case 0x420878u: goto label_420878;
        case 0x42087cu: goto label_42087c;
        case 0x420880u: goto label_420880;
        case 0x420884u: goto label_420884;
        case 0x420888u: goto label_420888;
        case 0x42088cu: goto label_42088c;
        case 0x420890u: goto label_420890;
        case 0x420894u: goto label_420894;
        case 0x420898u: goto label_420898;
        case 0x42089cu: goto label_42089c;
        case 0x4208a0u: goto label_4208a0;
        case 0x4208a4u: goto label_4208a4;
        case 0x4208a8u: goto label_4208a8;
        case 0x4208acu: goto label_4208ac;
        case 0x4208b0u: goto label_4208b0;
        case 0x4208b4u: goto label_4208b4;
        case 0x4208b8u: goto label_4208b8;
        case 0x4208bcu: goto label_4208bc;
        case 0x4208c0u: goto label_4208c0;
        case 0x4208c4u: goto label_4208c4;
        case 0x4208c8u: goto label_4208c8;
        case 0x4208ccu: goto label_4208cc;
        case 0x4208d0u: goto label_4208d0;
        case 0x4208d4u: goto label_4208d4;
        case 0x4208d8u: goto label_4208d8;
        case 0x4208dcu: goto label_4208dc;
        case 0x4208e0u: goto label_4208e0;
        case 0x4208e4u: goto label_4208e4;
        case 0x4208e8u: goto label_4208e8;
        case 0x4208ecu: goto label_4208ec;
        case 0x4208f0u: goto label_4208f0;
        case 0x4208f4u: goto label_4208f4;
        case 0x4208f8u: goto label_4208f8;
        case 0x4208fcu: goto label_4208fc;
        case 0x420900u: goto label_420900;
        case 0x420904u: goto label_420904;
        case 0x420908u: goto label_420908;
        case 0x42090cu: goto label_42090c;
        case 0x420910u: goto label_420910;
        case 0x420914u: goto label_420914;
        case 0x420918u: goto label_420918;
        case 0x42091cu: goto label_42091c;
        case 0x420920u: goto label_420920;
        case 0x420924u: goto label_420924;
        default: break;
    }

    ctx->pc = 0x4206a0u;

label_4206a0:
    // 0x4206a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4206a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4206a4:
    // 0x4206a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4206a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4206a8:
    // 0x4206a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4206a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4206ac:
    // 0x4206ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4206acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4206b0:
    // 0x4206b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4206b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4206b4:
    // 0x4206b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4206b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4206b8:
    // 0x4206b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4206b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4206bc:
    // 0x4206bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4206bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4206c0:
    // 0x4206c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4206c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_4206c4:
    // 0x4206c4: 0x8e030188  lw          $v1, 0x188($s0)
    ctx->pc = 0x4206c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_4206c8:
    // 0x4206c8: 0x1071001b  beq         $v1, $s1, . + 4 + (0x1B << 2)
label_4206cc:
    if (ctx->pc == 0x4206CCu) {
        ctx->pc = 0x4206D0u;
        goto label_4206d0;
    }
    ctx->pc = 0x4206C8u;
    {
        const bool branch_taken_0x4206c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x4206c8) {
            ctx->pc = 0x420738u;
            goto label_420738;
        }
    }
    ctx->pc = 0x4206D0u;
label_4206d0:
    // 0x4206d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4206d4:
    if (ctx->pc == 0x4206D4u) {
        ctx->pc = 0x4206D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206D0u;
        // 0x4206d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206D8u;
        goto label_4206d8;
    }
    ctx->pc = 0x4206D0u;
    {
        const bool branch_taken_0x4206d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4206D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206D0u;
        // 0x4206d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4206d0) {
            ctx->pc = 0x4206E8u;
            goto label_4206e8;
        }
    }
    ctx->pc = 0x4206D8u;
label_4206d8:
    // 0x4206d8: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_4206dc:
    if (ctx->pc == 0x4206DCu) {
        ctx->pc = 0x4206E0u;
        goto label_4206e0;
    }
    ctx->pc = 0x4206D8u;
    {
        const bool branch_taken_0x4206d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4206d8) {
            ctx->pc = 0x420790u;
            goto label_420790;
        }
    }
    ctx->pc = 0x4206E0u;
label_4206e0:
    // 0x4206e0: 0x1000008b  b           . + 4 + (0x8B << 2)
label_4206e4:
    if (ctx->pc == 0x4206E4u) {
        ctx->pc = 0x4206E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206E0u;
        // 0x4206e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206E8u;
        goto label_4206e8;
    }
    ctx->pc = 0x4206E0u;
    {
        const bool branch_taken_0x4206e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4206E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206E0u;
        // 0x4206e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4206e0) {
            ctx->pc = 0x420910u;
            goto label_420910;
        }
    }
    ctx->pc = 0x4206E8u;
label_4206e8:
    // 0x4206e8: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x4206e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4206ec:
    // 0x4206ec: 0xc052d32  jal         func_14B4C8
label_4206f0:
    if (ctx->pc == 0x4206F0u) {
        ctx->pc = 0x4206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206ECu;
        // 0x4206f0: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206F4u;
        goto label_4206f4;
    }
    ctx->pc = 0x4206ECu;
    SET_GPR_U32(ctx, 31, 0x4206F4u);
    ctx->pc = 0x4206F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4206ECu;
    // 0x4206f0: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4C8u, 0x4206ECu, 0x4206F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4206F4u;
label_4206f4:
    // 0x4206f4: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_4206f8:
    if (ctx->pc == 0x4206F8u) {
        ctx->pc = 0x4206F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206F4u;
        // 0x4206f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206FCu;
        goto label_4206fc;
    }
    ctx->pc = 0x4206F4u;
    {
        const bool branch_taken_0x4206f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4206f4) {
            ctx->pc = 0x4206F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4206F4u;
            // 0x4206f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420910u;
            goto label_420910;
        }
    }
    ctx->pc = 0x4206FCu;
label_4206fc:
    // 0x4206fc: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x4206fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_420700:
    // 0x420700: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
label_420704:
    if (ctx->pc == 0x420704u) {
        ctx->pc = 0x420704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420700u;
        // 0x420704: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420708u;
        goto label_420708;
    }
    ctx->pc = 0x420700u;
    {
        const bool branch_taken_0x420700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420700) {
            ctx->pc = 0x420704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420700u;
            // 0x420704: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x420708u;
label_420708:
    // 0x420708: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x420708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_42070c:
    // 0x42070c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_420710:
    // 0x420710: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x420710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_420714:
    // 0x420714: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x420714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_420718:
    // 0x420718: 0x40f809  jalr        $v0
label_42071c:
    if (ctx->pc == 0x42071Cu) {
        ctx->pc = 0x42071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420718u;
        // 0x42071c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420720u;
        goto label_420720;
    }
    ctx->pc = 0x420718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420720u);
        ctx->pc = 0x42071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420718u;
        // 0x42071c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420718u, 0x420720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420720u;
label_420720:
    // 0x420720: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x420720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_420724:
    // 0x420724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x420724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_420728:
    // 0x420728: 0xc052dfe  jal         func_14B7F8
label_42072c:
    if (ctx->pc == 0x42072Cu) {
        ctx->pc = 0x42072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420728u;
        // 0x42072c: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420730u;
        goto label_420730;
    }
    ctx->pc = 0x420728u;
    SET_GPR_U32(ctx, 31, 0x420730u);
    ctx->pc = 0x42072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420728u;
    // 0x42072c: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B7F8u, 0x420728u, 0x420730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420730u;
label_420730:
    // 0x420730: 0x10000011  b           . + 4 + (0x11 << 2)
label_420734:
    if (ctx->pc == 0x420734u) {
        ctx->pc = 0x420738u;
        goto label_420738;
    }
    ctx->pc = 0x420730u;
    {
        const bool branch_taken_0x420730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x420730) {
            ctx->pc = 0x420778u;
            goto label_420778;
        }
    }
    ctx->pc = 0x420738u;
label_420738:
    // 0x420738: 0xc052e74  jal         func_14B9D0
label_42073c:
    if (ctx->pc == 0x42073Cu) {
        ctx->pc = 0x42073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420738u;
        // 0x42073c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420740u;
        goto label_420740;
    }
    ctx->pc = 0x420738u;
    SET_GPR_U32(ctx, 31, 0x420740u);
    ctx->pc = 0x42073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420738u;
    // 0x42073c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x420738u, 0x420740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420740u;
label_420740:
    // 0x420740: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_420744:
    if (ctx->pc == 0x420744u) {
        ctx->pc = 0x420744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420740u;
        // 0x420744: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420748u;
        goto label_420748;
    }
    ctx->pc = 0x420740u;
    {
        const bool branch_taken_0x420740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420740u;
        // 0x420744: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420740) {
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x420748u;
label_420748:
    // 0x420748: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_42074c:
    if (ctx->pc == 0x42074Cu) {
        ctx->pc = 0x420750u;
        goto label_420750;
    }
    ctx->pc = 0x420748u;
    {
        const bool branch_taken_0x420748 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x420748) {
            ctx->pc = 0x420760u;
            goto label_420760;
        }
    }
    ctx->pc = 0x420750u;
label_420750:
    // 0x420750: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x420750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_420754:
    // 0x420754: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x420754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_420758:
    // 0x420758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42075c:
    if (ctx->pc == 0x42075Cu) {
        ctx->pc = 0x420760u;
        goto label_420760;
    }
    ctx->pc = 0x420758u;
    {
        const bool branch_taken_0x420758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420758) {
            ctx->pc = 0x420770u;
            goto label_420770;
        }
    }
    ctx->pc = 0x420760u;
label_420760:
    // 0x420760: 0xc0529fc  jal         func_14A7F0
label_420764:
    if (ctx->pc == 0x420764u) {
        ctx->pc = 0x420764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420760u;
        // 0x420764: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420768u;
        goto label_420768;
    }
    ctx->pc = 0x420760u;
    SET_GPR_U32(ctx, 31, 0x420768u);
    ctx->pc = 0x420764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420760u;
    // 0x420764: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x420760u, 0x420768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420768u;
label_420768:
    // 0x420768: 0x10000068  b           . + 4 + (0x68 << 2)
label_42076c:
    if (ctx->pc == 0x42076Cu) {
        ctx->pc = 0x42076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420768u;
        // 0x42076c: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420770u;
        goto label_420770;
    }
    ctx->pc = 0x420768u;
    {
        const bool branch_taken_0x420768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420768u;
        // 0x42076c: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420768) {
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x420770u;
label_420770:
    // 0x420770: 0xc052dac  jal         func_14B6B0
label_420774:
    if (ctx->pc == 0x420774u) {
        ctx->pc = 0x420774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420770u;
        // 0x420774: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420778u;
        goto label_420778;
    }
    ctx->pc = 0x420770u;
    SET_GPR_U32(ctx, 31, 0x420778u);
    ctx->pc = 0x420774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420770u;
    // 0x420774: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6B0u, 0x420770u, 0x420778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420778u;
label_420778:
    // 0x420778: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
label_42077c:
    if (ctx->pc == 0x42077Cu) {
        ctx->pc = 0x42077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420778u;
        // 0x42077c: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420780u;
        goto label_420780;
    }
    ctx->pc = 0x420778u;
    {
        const bool branch_taken_0x420778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420778) {
            ctx->pc = 0x42077Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420778u;
            // 0x42077c: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x420780u;
label_420780:
    // 0x420780: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x420780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_420784:
    // 0x420784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x420784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_420788:
    // 0x420788: 0x10000060  b           . + 4 + (0x60 << 2)
label_42078c:
    if (ctx->pc == 0x42078Cu) {
        ctx->pc = 0x42078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420788u;
        // 0x42078c: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420790u;
        goto label_420790;
    }
    ctx->pc = 0x420788u;
    {
        const bool branch_taken_0x420788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420788u;
        // 0x42078c: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420788) {
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x420790u;
label_420790:
    // 0x420790: 0xc052e74  jal         func_14B9D0
label_420794:
    if (ctx->pc == 0x420794u) {
        ctx->pc = 0x420794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420790u;
        // 0x420794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420798u;
        goto label_420798;
    }
    ctx->pc = 0x420790u;
    SET_GPR_U32(ctx, 31, 0x420798u);
    ctx->pc = 0x420794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420790u;
    // 0x420794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x420790u, 0x420798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420798u;
label_420798:
    // 0x420798: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_42079c:
    if (ctx->pc == 0x42079Cu) {
        ctx->pc = 0x42079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420798u;
        // 0x42079c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207A0u;
        goto label_4207a0;
    }
    ctx->pc = 0x420798u;
    {
        const bool branch_taken_0x420798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420798u;
        // 0x42079c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420798) {
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x4207A0u;
label_4207a0:
    // 0x4207a0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4207a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4207a4:
    // 0x4207a4: 0x24a5b548  addiu       $a1, $a1, -0x4AB8
    ctx->pc = 0x4207a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
label_4207a8:
    // 0x4207a8: 0x24c6b4f8  addiu       $a2, $a2, -0x4B08
    ctx->pc = 0x4207a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
label_4207ac:
    // 0x4207ac: 0xc05292e  jal         func_14A4B8
label_4207b0:
    if (ctx->pc == 0x4207B0u) {
        ctx->pc = 0x4207B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207ACu;
        // 0x4207b0: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207B4u;
        goto label_4207b4;
    }
    ctx->pc = 0x4207ACu;
    SET_GPR_U32(ctx, 31, 0x4207B4u);
    ctx->pc = 0x4207B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4207ACu;
    // 0x4207b0: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A4B8u, 0x4207ACu, 0x4207B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4207B4u;
label_4207b4:
    // 0x4207b4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_4207b8:
    if (ctx->pc == 0x4207B8u) {
        ctx->pc = 0x4207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207B4u;
        // 0x4207b8: 0xae020180  sw          $v0, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4207BCu;
        goto label_4207bc;
    }
    ctx->pc = 0x4207B4u;
    {
        const bool branch_taken_0x4207b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207B4u;
        // 0x4207b8: 0xae020180  sw          $v0, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4207b4) {
            ctx->pc = 0x420768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420768;
        }
    }
    ctx->pc = 0x4207BCu;
label_4207bc:
    // 0x4207bc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x4207bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_4207c0:
    // 0x4207c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4207c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4207c4:
    // 0x4207c4: 0x8e6b27e4  lw          $t3, 0x27E4($s3)
    ctx->pc = 0x4207c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_4207c8:
    // 0x4207c8: 0x2452b5c0  addiu       $s2, $v0, -0x4A40
    ctx->pc = 0x4207c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
label_4207cc:
    // 0x4207cc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4207ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4207d0:
    // 0x4207d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4207d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4207d4:
    // 0x4207d4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4207d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4207d8:
    // 0x4207d8: 0x24a5b5b8  addiu       $a1, $a1, -0x4A48
    ctx->pc = 0x4207d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948280));
label_4207dc:
    // 0x4207dc: 0x240603c4  addiu       $a2, $zero, 0x3C4
    ctx->pc = 0x4207dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_4207e0:
    // 0x4207e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4207e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4207e4:
    // 0x4207e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4207e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4207e8:
    // 0x4207e8: 0x24090459  addiu       $t1, $zero, 0x459
    ctx->pc = 0x4207e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1113));
label_4207ec:
    // 0x4207ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4207ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4207f0:
    // 0x4207f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4207f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4207f4:
    // 0x4207f4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4207f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4207f8:
    // 0x4207f8: 0x40f809  jalr        $v0
label_4207fc:
    if (ctx->pc == 0x4207FCu) {
        ctx->pc = 0x4207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207F8u;
        // 0x4207fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420800u;
        goto label_420800;
    }
    ctx->pc = 0x4207F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420800u);
        ctx->pc = 0x4207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4207F8u;
        // 0x4207fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4207F8u, 0x420800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420800u;
label_420800:
    // 0x420800: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x420800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_420804:
    // 0x420804: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x420804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_420808:
    // 0x420808: 0x2484b5f0  addiu       $a0, $a0, -0x4A10
    ctx->pc = 0x420808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948336));
label_42080c:
    // 0x42080c: 0x24a5b560  addiu       $a1, $a1, -0x4AA0
    ctx->pc = 0x42080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948192));
label_420810:
    // 0x420810: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x420810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_420814:
    // 0x420814: 0xc052b64  jal         func_14AD90
label_420818:
    if (ctx->pc == 0x420818u) {
        ctx->pc = 0x420818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420814u;
        // 0x420818: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42081Cu;
        goto label_42081c;
    }
    ctx->pc = 0x420814u;
    SET_GPR_U32(ctx, 31, 0x42081Cu);
    ctx->pc = 0x420818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420814u;
    // 0x420818: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD90u, 0x420814u, 0x42081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42081Cu;
label_42081c:
    // 0x42081c: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x42081cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420820:
    // 0x420820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x420820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_420824:
    // 0x420824: 0xc052a9e  jal         func_14AA78
label_420828:
    if (ctx->pc == 0x420828u) {
        ctx->pc = 0x420828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420824u;
        // 0x420828: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42082Cu;
        goto label_42082c;
    }
    ctx->pc = 0x420824u;
    SET_GPR_U32(ctx, 31, 0x42082Cu);
    ctx->pc = 0x420828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420824u;
    // 0x420828: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA78u, 0x420824u, 0x42082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42082Cu;
label_42082c:
    // 0x42082c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_420830:
    if (ctx->pc == 0x420830u) {
        ctx->pc = 0x420834u;
        goto label_420834;
    }
    ctx->pc = 0x42082Cu;
    {
        const bool branch_taken_0x42082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42082c) {
            ctx->pc = 0x42086Cu;
            goto label_42086c;
        }
    }
    ctx->pc = 0x420834u;
label_420834:
    // 0x420834: 0xc0529fc  jal         func_14A7F0
label_420838:
    if (ctx->pc == 0x420838u) {
        ctx->pc = 0x420838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420834u;
        // 0x420838: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42083Cu;
        goto label_42083c;
    }
    ctx->pc = 0x420834u;
    SET_GPR_U32(ctx, 31, 0x42083Cu);
    ctx->pc = 0x420838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420834u;
    // 0x420838: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x420834u, 0x42083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42083Cu;
label_42083c:
    // 0x42083c: 0xae110184  sw          $s1, 0x184($s0)
    ctx->pc = 0x42083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
label_420840:
    // 0x420840: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x420840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_420844:
    // 0x420844: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x420844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_420848:
    // 0x420848: 0x24070461  addiu       $a3, $zero, 0x461
    ctx->pc = 0x420848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1121));
label_42084c:
    // 0x42084c: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x42084cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420850:
    // 0x420850: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x420850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_420854:
    // 0x420854: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x420854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_420858:
    // 0x420858: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x420858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_42085c:
    // 0x42085c: 0x60f809  jalr        $v1
label_420860:
    if (ctx->pc == 0x420860u) {
        ctx->pc = 0x420860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42085Cu;
        // 0x420860: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420864u;
        goto label_420864;
    }
    ctx->pc = 0x42085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x420864u);
        ctx->pc = 0x420860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42085Cu;
        // 0x420860: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42085Cu, 0x420864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420864u;
label_420864:
    // 0x420864: 0x10000029  b           . + 4 + (0x29 << 2)
label_420868:
    if (ctx->pc == 0x420868u) {
        ctx->pc = 0x420868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420864u;
        // 0x420868: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42086Cu;
        goto label_42086c;
    }
    ctx->pc = 0x420864u;
    {
        const bool branch_taken_0x420864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420864u;
        // 0x420868: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420864) {
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x42086Cu;
label_42086c:
    // 0x42086c: 0xc0529fc  jal         func_14A7F0
label_420870:
    if (ctx->pc == 0x420870u) {
        ctx->pc = 0x420870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42086Cu;
        // 0x420870: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420874u;
        goto label_420874;
    }
    ctx->pc = 0x42086Cu;
    SET_GPR_U32(ctx, 31, 0x420874u);
    ctx->pc = 0x420870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42086Cu;
    // 0x420870: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x42086Cu, 0x420874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420874u;
label_420874:
    // 0x420874: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x420874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_420878:
    // 0x420878: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x420878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42087c:
    // 0x42087c: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x42087cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_420880:
    // 0x420880: 0x24070467  addiu       $a3, $zero, 0x467
    ctx->pc = 0x420880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1127));
label_420884:
    // 0x420884: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x420884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_420888:
    // 0x420888: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x420888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_42088c:
    // 0x42088c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x42088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_420890:
    // 0x420890: 0x60f809  jalr        $v1
label_420894:
    if (ctx->pc == 0x420894u) {
        ctx->pc = 0x420894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420890u;
        // 0x420894: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420898u;
        goto label_420898;
    }
    ctx->pc = 0x420890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x420898u);
        ctx->pc = 0x420894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420890u;
        // 0x420894: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420890u, 0x420898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420898u;
label_420898:
    // 0x420898: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x420898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_42089c:
    // 0x42089c: 0xae110184  sw          $s1, 0x184($s0)
    ctx->pc = 0x42089cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
label_4208a0:
    // 0x4208a0: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x4208a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_4208a4:
    // 0x4208a4: 0x84640158  lh          $a0, 0x158($v1)
    ctx->pc = 0x4208a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 344)));
label_4208a8:
    // 0x4208a8: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x4208a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_4208ac:
    // 0x4208ac: 0x40f809  jalr        $v0
label_4208b0:
    if (ctx->pc == 0x4208B0u) {
        ctx->pc = 0x4208B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208ACu;
        // 0x4208b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208B4u;
        goto label_4208b4;
    }
    ctx->pc = 0x4208ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4208B4u);
        ctx->pc = 0x4208B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208ACu;
        // 0x4208b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4208ACu, 0x4208B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4208B4u;
label_4208b4:
    // 0x4208b4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_4208b8:
    if (ctx->pc == 0x4208B8u) {
        ctx->pc = 0x4208B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208B4u;
        // 0x4208b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208BCu;
        goto label_4208bc;
    }
    ctx->pc = 0x4208B4u;
    {
        const bool branch_taken_0x4208b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4208b4) {
            ctx->pc = 0x4208B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4208B4u;
            // 0x4208b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420910u;
            goto label_420910;
        }
    }
    ctx->pc = 0x4208BCu;
label_4208bc:
    // 0x4208bc: 0xae11018c  sw          $s1, 0x18C($s0)
    ctx->pc = 0x4208bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 17));
label_4208c0:
    // 0x4208c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4208c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4208c4:
    // 0x4208c4: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x4208c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_4208c8:
    // 0x4208c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4208c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4208cc:
    // 0x4208cc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x4208ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_4208d0:
    // 0x4208d0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x4208d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4208d4:
    // 0x4208d4: 0x40f809  jalr        $v0
label_4208d8:
    if (ctx->pc == 0x4208D8u) {
        ctx->pc = 0x4208D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208D4u;
        // 0x4208d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208DCu;
        goto label_4208dc;
    }
    ctx->pc = 0x4208D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4208DCu);
        ctx->pc = 0x4208D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208D4u;
        // 0x4208d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4208D4u, 0x4208DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4208DCu;
label_4208dc:
    // 0x4208dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4208e0:
    if (ctx->pc == 0x4208E0u) {
        ctx->pc = 0x4208E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208DCu;
        // 0x4208e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208E4u;
        goto label_4208e4;
    }
    ctx->pc = 0x4208DCu;
    {
        const bool branch_taken_0x4208dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4208E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208DCu;
        // 0x4208e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4208dc) {
            ctx->pc = 0x4208FCu;
            goto label_4208fc;
        }
    }
    ctx->pc = 0x4208E4u;
label_4208e4:
    // 0x4208e4: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x4208e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_4208e8:
    // 0x4208e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4208e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4208ec:
    // 0x4208ec: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x4208ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_4208f0:
    // 0x4208f0: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x4208f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_4208f4:
    // 0x4208f4: 0x60f809  jalr        $v1
label_4208f8:
    if (ctx->pc == 0x4208F8u) {
        ctx->pc = 0x4208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208F4u;
        // 0x4208f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208FCu;
        goto label_4208fc;
    }
    ctx->pc = 0x4208F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4208FCu);
        ctx->pc = 0x4208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208F4u;
        // 0x4208f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4208F4u, 0x4208FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4208FCu;
label_4208fc:
    // 0x4208fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4208fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_420900:
    // 0x420900: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x420900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_420904:
    // 0x420904: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_420908:
    if (ctx->pc == 0x420908u) {
        ctx->pc = 0x420908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420904u;
        // 0x420908: 0x8e030128  lw          $v1, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42090Cu;
        goto label_42090c;
    }
    ctx->pc = 0x420904u;
    {
        const bool branch_taken_0x420904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420904) {
            ctx->pc = 0x420908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420904u;
            // 0x420908: 0x8e030128  lw          $v1, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4208C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4208c8;
        }
    }
    ctx->pc = 0x42090Cu;
label_42090c:
    // 0x42090c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x42090cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_420910:
    // 0x420910: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x420910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420914:
    // 0x420914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x420914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420918:
    // 0x420918: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x420918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42091c:
    // 0x42091c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_420920:
    // 0x420920: 0x3e00008  jr          $ra
label_420924:
    if (ctx->pc == 0x420924u) {
        ctx->pc = 0x420924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420920u;
        // 0x420924: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420928u;
        goto label_fallthrough_0x420920;
    }
    ctx->pc = 0x420920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420920u;
        // 0x420924: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x420920:
    ctx->pc = 0x420928u;
}

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

// Function: sub_003D5788
// Address: 0x3d5788 - 0x3d5860
void sub_003D5788_0x3d5788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5788_0x3d5788");
#endif

    switch (ctx->pc) {
        case 0x3d5788u: goto label_3d5788;
        case 0x3d578cu: goto label_3d578c;
        case 0x3d5790u: goto label_3d5790;
        case 0x3d5794u: goto label_3d5794;
        case 0x3d5798u: goto label_3d5798;
        case 0x3d579cu: goto label_3d579c;
        case 0x3d57a0u: goto label_3d57a0;
        case 0x3d57a4u: goto label_3d57a4;
        case 0x3d57a8u: goto label_3d57a8;
        case 0x3d57acu: goto label_3d57ac;
        case 0x3d57b0u: goto label_3d57b0;
        case 0x3d57b4u: goto label_3d57b4;
        case 0x3d57b8u: goto label_3d57b8;
        case 0x3d57bcu: goto label_3d57bc;
        case 0x3d57c0u: goto label_3d57c0;
        case 0x3d57c4u: goto label_3d57c4;
        case 0x3d57c8u: goto label_3d57c8;
        case 0x3d57ccu: goto label_3d57cc;
        case 0x3d57d0u: goto label_3d57d0;
        case 0x3d57d4u: goto label_3d57d4;
        case 0x3d57d8u: goto label_3d57d8;
        case 0x3d57dcu: goto label_3d57dc;
        case 0x3d57e0u: goto label_3d57e0;
        case 0x3d57e4u: goto label_3d57e4;
        case 0x3d57e8u: goto label_3d57e8;
        case 0x3d57ecu: goto label_3d57ec;
        case 0x3d57f0u: goto label_3d57f0;
        case 0x3d57f4u: goto label_3d57f4;
        case 0x3d57f8u: goto label_3d57f8;
        case 0x3d57fcu: goto label_3d57fc;
        case 0x3d5800u: goto label_3d5800;
        case 0x3d5804u: goto label_3d5804;
        case 0x3d5808u: goto label_3d5808;
        case 0x3d580cu: goto label_3d580c;
        case 0x3d5810u: goto label_3d5810;
        case 0x3d5814u: goto label_3d5814;
        case 0x3d5818u: goto label_3d5818;
        case 0x3d581cu: goto label_3d581c;
        case 0x3d5820u: goto label_3d5820;
        case 0x3d5824u: goto label_3d5824;
        case 0x3d5828u: goto label_3d5828;
        case 0x3d582cu: goto label_3d582c;
        case 0x3d5830u: goto label_3d5830;
        case 0x3d5834u: goto label_3d5834;
        case 0x3d5838u: goto label_3d5838;
        case 0x3d583cu: goto label_3d583c;
        case 0x3d5840u: goto label_3d5840;
        case 0x3d5844u: goto label_3d5844;
        case 0x3d5848u: goto label_3d5848;
        case 0x3d584cu: goto label_3d584c;
        case 0x3d5850u: goto label_3d5850;
        case 0x3d5854u: goto label_3d5854;
        case 0x3d5858u: goto label_3d5858;
        case 0x3d585cu: goto label_3d585c;
        default: break;
    }

    ctx->pc = 0x3d5788u;

label_3d5788:
    // 0x3d5788: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d5788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d578c:
    // 0x3d578c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d5790:
    // 0x3d5790: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d5790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d5794:
    // 0x3d5794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d5794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d5798:
    // 0x3d5798: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d579c:
    // 0x3d579c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d579cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d57a0:
    // 0x3d57a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d57a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d57a4:
    // 0x3d57a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d57a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d57a8:
    // 0x3d57a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d57a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d57ac:
    // 0x3d57ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d57b0:
    // 0x3d57b0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d57b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d57b4:
    // 0x3d57b4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d57b8:
    // 0x3d57b8: 0x40f809  jalr        $v0
label_3d57bc:
    if (ctx->pc == 0x3D57BCu) {
        ctx->pc = 0x3D57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57B8u;
        // 0x3d57bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57C0u;
        goto label_3d57c0;
    }
    ctx->pc = 0x3D57B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D57C0u);
        ctx->pc = 0x3D57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57B8u;
        // 0x3d57bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D57B8u, 0x3D57C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D57C0u;
label_3d57c0:
    // 0x3d57c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d57c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d57c4:
    // 0x3d57c4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3d57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d57c8:
    // 0x3d57c8: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
label_3d57cc:
    if (ctx->pc == 0x3D57CCu) {
        ctx->pc = 0x3D57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57C8u;
        // 0x3d57cc: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57D0u;
        goto label_3d57d0;
    }
    ctx->pc = 0x3D57C8u;
    {
        const bool branch_taken_0x3d57c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57C8u;
        // 0x3d57cc: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57c8) {
            ctx->pc = 0x3D5830u;
            goto label_3d5830;
        }
    }
    ctx->pc = 0x3D57D0u;
label_3d57d0:
    // 0x3d57d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d57d4:
    if (ctx->pc == 0x3D57D4u) {
        ctx->pc = 0x3D57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57D0u;
        // 0x3d57d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57D8u;
        goto label_3d57d8;
    }
    ctx->pc = 0x3D57D0u;
    {
        const bool branch_taken_0x3d57d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57D0u;
        // 0x3d57d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57d0) {
            ctx->pc = 0x3D57E8u;
            goto label_3d57e8;
        }
    }
    ctx->pc = 0x3D57D8u;
label_3d57d8:
    // 0x3d57d8: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_3d57dc:
    if (ctx->pc == 0x3D57DCu) {
        ctx->pc = 0x3D57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57D8u;
        // 0x3d57dc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57E0u;
        goto label_3d57e0;
    }
    ctx->pc = 0x3D57D8u;
    {
        const bool branch_taken_0x3d57d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57D8u;
        // 0x3d57dc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57d8) {
            ctx->pc = 0x3D5814u;
            goto label_3d5814;
        }
    }
    ctx->pc = 0x3D57E0u;
label_3d57e0:
    // 0x3d57e0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d57e4:
    if (ctx->pc == 0x3D57E4u) {
        ctx->pc = 0x3D57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57E0u;
        // 0x3d57e4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57E8u;
        goto label_3d57e8;
    }
    ctx->pc = 0x3D57E0u;
    {
        const bool branch_taken_0x3d57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57E0u;
        // 0x3d57e4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57e0) {
            ctx->pc = 0x3D5848u;
            goto label_3d5848;
        }
    }
    ctx->pc = 0x3D57E8u;
label_3d57e8:
    // 0x3d57e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3d57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d57ec:
    // 0x3d57ec: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
label_3d57f0:
    if (ctx->pc == 0x3D57F0u) {
        ctx->pc = 0x3D57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57ECu;
        // 0x3d57f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57F4u;
        goto label_3d57f4;
    }
    ctx->pc = 0x3D57ECu;
    {
        const bool branch_taken_0x3d57ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57ECu;
        // 0x3d57f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57ec) {
            ctx->pc = 0x3D5844u;
            goto label_3d5844;
        }
    }
    ctx->pc = 0x3D57F4u;
label_3d57f4:
    // 0x3d57f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d57f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d57f8:
    // 0x3d57f8: 0xc0ea12a  jal         func_3A84A8
label_3d57fc:
    if (ctx->pc == 0x3D57FCu) {
        ctx->pc = 0x3D57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57F8u;
        // 0x3d57fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5800u;
        goto label_3d5800;
    }
    ctx->pc = 0x3D57F8u;
    SET_GPR_U32(ctx, 31, 0x3D5800u);
    ctx->pc = 0x3D57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D57F8u;
    // 0x3d57fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D57F8u, 0x3D5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5800u;
label_3d5800:
    // 0x3d5800: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d5800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5804:
    // 0x3d5804: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d5804u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d5808:
    // 0x3d5808: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d5808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d580c:
    // 0x3d580c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d5810:
    if (ctx->pc == 0x3D5810u) {
        ctx->pc = 0x3D5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D580Cu;
        // 0x3d5810: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5814u;
        goto label_3d5814;
    }
    ctx->pc = 0x3D580Cu;
    {
        const bool branch_taken_0x3d580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D580Cu;
        // 0x3d5810: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d580c) {
            ctx->pc = 0x3D5840u;
            goto label_3d5840;
        }
    }
    ctx->pc = 0x3D5814u;
label_3d5814:
    // 0x3d5814: 0xc0ea146  jal         func_3A8518
label_3d5818:
    if (ctx->pc == 0x3D5818u) {
        ctx->pc = 0x3D5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5814u;
        // 0x3d5818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D581Cu;
        goto label_3d581c;
    }
    ctx->pc = 0x3D5814u;
    SET_GPR_U32(ctx, 31, 0x3D581Cu);
    ctx->pc = 0x3D5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5814u;
    // 0x3d5818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D5814u, 0x3D581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D581Cu;
label_3d581c:
    // 0x3d581c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5820:
    // 0x3d5820: 0xc0e85fa  jal         func_3A17E8
label_3d5824:
    if (ctx->pc == 0x3D5824u) {
        ctx->pc = 0x3D5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5820u;
        // 0x3d5824: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5828u;
        goto label_3d5828;
    }
    ctx->pc = 0x3D5820u;
    SET_GPR_U32(ctx, 31, 0x3D5828u);
    ctx->pc = 0x3D5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5820u;
    // 0x3d5824: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3D5820u, 0x3D5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5828u;
label_3d5828:
    // 0x3d5828: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d582c:
    if (ctx->pc == 0x3D582Cu) {
        ctx->pc = 0x3D582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5828u;
        // 0x3d582c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5830u;
        goto label_3d5830;
    }
    ctx->pc = 0x3D5828u;
    {
        const bool branch_taken_0x3d5828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5828u;
        // 0x3d582c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5828) {
            ctx->pc = 0x3D5844u;
            goto label_3d5844;
        }
    }
    ctx->pc = 0x3D5830u;
label_3d5830:
    // 0x3d5830: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d5830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d5834:
    // 0x3d5834: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d5834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d5838:
    // 0x3d5838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d5838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d583c:
    // 0x3d583c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d583cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d5840:
    // 0x3d5840: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d5840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d5844:
    // 0x3d5844: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d5844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d5848:
    // 0x3d5848: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d5848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d584c:
    // 0x3d584c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d584cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d5850:
    // 0x3d5850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d5850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d5854:
    // 0x3d5854: 0x3e00008  jr          $ra
label_3d5858:
    if (ctx->pc == 0x3D5858u) {
        ctx->pc = 0x3D5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5854u;
        // 0x3d5858: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D585Cu;
        goto label_3d585c;
    }
    ctx->pc = 0x3D5854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5854u;
        // 0x3d5858: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D585Cu;
label_3d585c:
    // 0x3d585c: 0x0  nop
    ctx->pc = 0x3d585cu;
    // NOP
    ctx->pc = 0x3d5860u;
}

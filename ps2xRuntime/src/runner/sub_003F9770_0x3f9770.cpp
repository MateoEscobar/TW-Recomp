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

// Function: sub_003F9770
// Address: 0x3f9770 - 0x3f98f8
void sub_003F9770_0x3f9770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9770_0x3f9770");
#endif

    switch (ctx->pc) {
        case 0x3f9798u: goto label_3f9798;
        case 0x3f97dcu: goto label_3f97dc;
        case 0x3f97f4u: goto label_3f97f4;
        case 0x3f9810u: goto label_3f9810;
        case 0x3f9824u: goto label_3f9824;
        case 0x3f9834u: goto label_3f9834;
        case 0x3f9844u: goto label_3f9844;
        case 0x3f984cu: goto label_3f984c;
        case 0x3f9854u: goto label_3f9854;
        case 0x3f985cu: goto label_3f985c;
        case 0x3f9884u: goto label_3f9884;
        case 0x3f989cu: goto label_3f989c;
        case 0x3f98b0u: goto label_3f98b0;
        case 0x3f98bcu: goto label_3f98bc;
        case 0x3f98c4u: goto label_3f98c4;
        case 0x3f98ccu: goto label_3f98cc;
        case 0x3f98d4u: goto label_3f98d4;
        case 0x3f98e8u: goto label_3f98e8;
        default: break;
    }

    ctx->pc = 0x3f9770u;

    // 0x3f9770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f9770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f9774: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f9774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3f9778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f977c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9780: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f9780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3f9784: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f9784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f9788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f978c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f978cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9790: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F9790u;
    SET_GPR_U32(ctx, 31, 0x3F9798u);
    ctx->pc = 0x3F9794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9790u;
    // 0x3f9794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F9790u, 0x3F9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9798u;
label_3f9798:
    // 0x3f9798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f9798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f979c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x3f979cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3f97a0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3F97A0u;
    {
        const bool branch_taken_0x3f97a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F97A0u;
        // 0x3f97a4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f97a0) {
            ctx->pc = 0x3F98F8u;
            return;
        }
    }
    ctx->pc = 0x3F97A8u;
    // 0x3f97a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f97a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f97ac: 0x24426ed0  addiu       $v0, $v0, 0x6ED0
    ctx->pc = 0x3f97acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28368));
    // 0x3f97b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f97b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f97b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f97b8: 0x800008  jr          $a0
    ctx->pc = 0x3F97B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F97C0u: goto label_3f97c0;
            case 0x3F9818u: goto label_3f9818;
            case 0x3F983Cu: goto label_3f983c;
            case 0x3F9864u: goto label_3f9864;
            case 0x3F98B4u: goto label_3f98b4;
            case 0x3F98DCu: goto label_3f98dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F97B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F97C0u;
label_3f97c0:
    // 0x3f97c0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3f97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3f97c4: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x3F97C4u;
    {
        const bool branch_taken_0x3f97c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f97c4) {
            ctx->pc = 0x3F97C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F97C4u;
            // 0x3f97c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F98FCu;
            return;
        }
    }
    ctx->pc = 0x3F97CCu;
    // 0x3f97cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f97ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f97d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f97d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f97d4: 0xc0fe4da  jal         func_3F9368
    ctx->pc = 0x3F97D4u;
    SET_GPR_U32(ctx, 31, 0x3F97DCu);
    ctx->pc = 0x3F97D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F97D4u;
    // 0x3f97d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9368u, 0x3F97D4u, 0x3F97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F97DCu;
label_3f97dc:
    // 0x3f97dc: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x3f97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x3f97e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f97e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f97e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3f97e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f97e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f97ec: 0xc0fe3f4  jal         func_3F8FD0
    ctx->pc = 0x3F97ECu;
    SET_GPR_U32(ctx, 31, 0x3F97F4u);
    ctx->pc = 0x3F97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F97ECu;
    // 0x3f97f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8FD0u, 0x3F97ECu, 0x3F97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F97F4u;
label_3f97f4:
    // 0x3f97f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f97f8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3f97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3f97fc: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x3f97fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f9800: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f9800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9804: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f9804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3f9808: 0xc0e9bba  jal         func_3A6EE8
    ctx->pc = 0x3F9808u;
    SET_GPR_U32(ctx, 31, 0x3F9810u);
    ctx->pc = 0x3F980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9808u;
    // 0x3f980c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3F9808u, 0x3F9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9810u;
label_3f9810:
    // 0x3f9810: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3F9810u;
    {
        const bool branch_taken_0x3f9810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9810u;
        // 0x3f9814: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9810) {
            ctx->pc = 0x3F98FCu;
            return;
        }
    }
    ctx->pc = 0x3F9818u;
label_3f9818:
    // 0x3f9818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f981c: 0xc0ea16a  jal         func_3A85A8
    ctx->pc = 0x3F981Cu;
    SET_GPR_U32(ctx, 31, 0x3F9824u);
    ctx->pc = 0x3F9820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F981Cu;
    // 0x3f9820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F981Cu, 0x3F9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9824u;
label_3f9824:
    // 0x3f9824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f982c: 0xc0fe562  jal         func_3F9588
    ctx->pc = 0x3F982Cu;
    SET_GPR_U32(ctx, 31, 0x3F9834u);
    ctx->pc = 0x3F9830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F982Cu;
    // 0x3f9830: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9588u, 0x3F982Cu, 0x3F9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9834u;
label_3f9834:
    // 0x3f9834: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3F9834u;
    {
        const bool branch_taken_0x3f9834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9834u;
        // 0x3f9838: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9834) {
            ctx->pc = 0x3F98FCu;
            return;
        }
    }
    ctx->pc = 0x3F983Cu;
label_3f983c:
    // 0x3f983c: 0xc0e92c0  jal         func_3A4B00
    ctx->pc = 0x3F983Cu;
    SET_GPR_U32(ctx, 31, 0x3F9844u);
    ctx->pc = 0x3F9840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F983Cu;
    // 0x3f9840: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3F983Cu, 0x3F9844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9844u;
label_3f9844:
    // 0x3f9844: 0xc0e91b2  jal         func_3A46C8
    ctx->pc = 0x3F9844u;
    SET_GPR_U32(ctx, 31, 0x3F984Cu);
    ctx->pc = 0x3F9848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9844u;
    // 0x3f9848: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F9844u, 0x3F984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F984Cu;
label_3f984c:
    // 0x3f984c: 0xc0e91b2  jal         func_3A46C8
    ctx->pc = 0x3F984Cu;
    SET_GPR_U32(ctx, 31, 0x3F9854u);
    ctx->pc = 0x3F9850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F984Cu;
    // 0x3f9850: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F984Cu, 0x3F9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9854u;
label_3f9854:
    // 0x3f9854: 0xc0e94d0  jal         func_3A5340
    ctx->pc = 0x3F9854u;
    SET_GPR_U32(ctx, 31, 0x3F985Cu);
    ctx->pc = 0x3F9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9854u;
    // 0x3f9858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3F9854u, 0x3F985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F985Cu;
label_3f985c:
    // 0x3f985c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3F985Cu;
    {
        const bool branch_taken_0x3f985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F985Cu;
        // 0x3f9860: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f985c) {
            ctx->pc = 0x3F98FCu;
            return;
        }
    }
    ctx->pc = 0x3F9864u;
label_3f9864:
    // 0x3f9864: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x3f9864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3f9868: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f986c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F986Cu;
    {
        const bool branch_taken_0x3f986c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F986Cu;
        // 0x3f9870: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f986c) {
            ctx->pc = 0x3F988Cu;
            goto label_3f988c;
        }
    }
    ctx->pc = 0x3F9874u;
    // 0x3f9874: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f9874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f987c: 0xc0fe4da  jal         func_3F9368
    ctx->pc = 0x3F987Cu;
    SET_GPR_U32(ctx, 31, 0x3F9884u);
    ctx->pc = 0x3F9880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F987Cu;
    // 0x3f9880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9368u, 0x3F987Cu, 0x3F9884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9884u;
label_3f9884:
    // 0x3f9884: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F9884u;
    {
        const bool branch_taken_0x3f9884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9884u;
        // 0x3f9888: 0xa2200028  sb          $zero, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9884) {
            ctx->pc = 0x3F98B4u;
            goto label_3f98b4;
        }
    }
    ctx->pc = 0x3F988Cu;
label_3f988c:
    // 0x3f988c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9894: 0xc0fe3f4  jal         func_3F8FD0
    ctx->pc = 0x3F9894u;
    SET_GPR_U32(ctx, 31, 0x3F989Cu);
    ctx->pc = 0x3F9898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9894u;
    // 0x3f9898: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8FD0u, 0x3F9894u, 0x3F989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F989Cu;
label_3f989c:
    // 0x3f989c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f989cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3f98a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f98a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f98a4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f98a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3f98a8: 0xc0e9bba  jal         func_3A6EE8
    ctx->pc = 0x3F98A8u;
    SET_GPR_U32(ctx, 31, 0x3F98B0u);
    ctx->pc = 0x3F98ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98A8u;
    // 0x3f98ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3F98A8u, 0x3F98B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98B0u;
label_3f98b0:
    // 0x3f98b0: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x3f98b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_3f98b4:
    // 0x3f98b4: 0xc0e91c4  jal         func_3A4710
    ctx->pc = 0x3F98B4u;
    SET_GPR_U32(ctx, 31, 0x3F98BCu);
    ctx->pc = 0x3F98B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98B4u;
    // 0x3f98b8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3F98B4u, 0x3F98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98BCu;
label_3f98bc:
    // 0x3f98bc: 0xc0e91c4  jal         func_3A4710
    ctx->pc = 0x3F98BCu;
    SET_GPR_U32(ctx, 31, 0x3F98C4u);
    ctx->pc = 0x3F98C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98BCu;
    // 0x3f98c0: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3F98BCu, 0x3F98C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98C4u;
label_3f98c4:
    // 0x3f98c4: 0xc0e94b2  jal         func_3A52C8
    ctx->pc = 0x3F98C4u;
    SET_GPR_U32(ctx, 31, 0x3F98CCu);
    ctx->pc = 0x3F98C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98C4u;
    // 0x3f98c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52C8u, 0x3F98C4u, 0x3F98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98CCu;
label_3f98cc:
    // 0x3f98cc: 0xc0e92b8  jal         func_3A4AE0
    ctx->pc = 0x3F98CCu;
    SET_GPR_U32(ctx, 31, 0x3F98D4u);
    ctx->pc = 0x3F98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98CCu;
    // 0x3f98d0: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AE0u, 0x3F98CCu, 0x3F98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98D4u;
label_3f98d4:
    // 0x3f98d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F98D4u;
    {
        const bool branch_taken_0x3f98d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F98D4u;
        // 0x3f98d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f98d4) {
            ctx->pc = 0x3F98FCu;
            return;
        }
    }
    ctx->pc = 0x3F98DCu;
label_3f98dc:
    // 0x3f98dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f98dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f98e0: 0xc0ea16a  jal         func_3A85A8
    ctx->pc = 0x3F98E0u;
    SET_GPR_U32(ctx, 31, 0x3F98E8u);
    ctx->pc = 0x3F98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98E0u;
    // 0x3f98e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F98E0u, 0x3F98E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98E8u;
label_3f98e8:
    // 0x3f98e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f98e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f98ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f98ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f98f0: 0xc0fe562  jal         func_3F9588
    ctx->pc = 0x3F98F0u;
    SET_GPR_U32(ctx, 31, 0x3F98F8u);
    ctx->pc = 0x3F98F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98F0u;
    // 0x3f98f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9588u, 0x3F98F0u, 0x3F98F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98F8u;
}

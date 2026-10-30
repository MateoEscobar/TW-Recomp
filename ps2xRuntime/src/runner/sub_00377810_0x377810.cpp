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

// Function: sub_00377810
// Address: 0x377810 - 0x377a10
void sub_00377810_0x377810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377810_0x377810");
#endif

    switch (ctx->pc) {
        case 0x377854u: goto label_377854;
        case 0x37785cu: goto label_37785c;
        case 0x377870u: goto label_377870;
        case 0x377878u: goto label_377878;
        case 0x37788cu: goto label_37788c;
        case 0x377894u: goto label_377894;
        case 0x3778a8u: goto label_3778a8;
        case 0x3778b0u: goto label_3778b0;
        case 0x3778c8u: goto label_3778c8;
        case 0x3778f0u: goto label_3778f0;
        case 0x377904u: goto label_377904;
        case 0x377918u: goto label_377918;
        case 0x377928u: goto label_377928;
        case 0x377940u: goto label_377940;
        case 0x377948u: goto label_377948;
        case 0x37797cu: goto label_37797c;
        case 0x377988u: goto label_377988;
        case 0x37799cu: goto label_37799c;
        case 0x3779b4u: goto label_3779b4;
        case 0x3779c8u: goto label_3779c8;
        default: break;
    }

    ctx->pc = 0x377810u;

    // 0x377810: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x377810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x377814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377818: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x377818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x37781c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x37781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x377820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x377824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377828: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x377828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x37782c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x37782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x377830: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x377830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x377834: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x377834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x377838: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x377838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x37783c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x37783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x377840: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x377840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x377844: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x377844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x377848: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x377848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37784c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37784Cu;
    SET_GPR_U32(ctx, 31, 0x377854u);
    ctx->pc = 0x377850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37784Cu;
    // 0x377850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37784Cu, 0x377854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377854u;
label_377854:
    // 0x377854: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377854u;
    SET_GPR_U32(ctx, 31, 0x37785Cu);
    ctx->pc = 0x377858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377854u;
    // 0x377858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377854u, 0x37785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37785Cu;
label_37785c:
    // 0x37785c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377860: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377868: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377868u;
    SET_GPR_U32(ctx, 31, 0x377870u);
    ctx->pc = 0x37786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377868u;
    // 0x37786c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377868u, 0x377870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377870u;
label_377870:
    // 0x377870: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377870u;
    SET_GPR_U32(ctx, 31, 0x377878u);
    ctx->pc = 0x377874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377870u;
    // 0x377874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377870u, 0x377878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377878u;
label_377878:
    // 0x377878: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x377878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37787c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37787cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377884: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377884u;
    SET_GPR_U32(ctx, 31, 0x37788Cu);
    ctx->pc = 0x377888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377884u;
    // 0x377888: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377884u, 0x37788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37788Cu;
label_37788c:
    // 0x37788c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37788Cu;
    SET_GPR_U32(ctx, 31, 0x377894u);
    ctx->pc = 0x377890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37788Cu;
    // 0x377890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37788Cu, 0x377894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377894u;
label_377894:
    // 0x377894: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x377894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377898: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37789c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37789cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3778a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3778A0u;
    SET_GPR_U32(ctx, 31, 0x3778A8u);
    ctx->pc = 0x3778A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778A0u;
    // 0x3778a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3778A0u, 0x3778A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3778A8u;
label_3778a8:
    // 0x3778a8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3778A8u;
    SET_GPR_U32(ctx, 31, 0x3778B0u);
    ctx->pc = 0x3778ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778A8u;
    // 0x3778ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3778A8u, 0x3778B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3778B0u;
label_3778b0:
    // 0x3778b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3778b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3778b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3778b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3778b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3778b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3778bc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3778bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3778c0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3778c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3778c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3778c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3778c8:
    // 0x3778c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3778c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3778cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3778ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3778d0: 0x0  nop
    ctx->pc = 0x3778d0u;
    // NOP
    // 0x3778d4: 0x0  nop
    ctx->pc = 0x3778d4u;
    // NOP
    // 0x3778d8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3778D8u;
    {
        const bool branch_taken_0x3778d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3778DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778D8u;
        // 0x3778dc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778d8) {
            ctx->pc = 0x3778C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3778c8;
        }
    }
    ctx->pc = 0x3778E0u;
    // 0x3778e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3778e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3778e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3778e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3778e8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3778E8u;
    SET_GPR_U32(ctx, 31, 0x3778F0u);
    ctx->pc = 0x3778ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778E8u;
    // 0x3778ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3778E8u, 0x3778F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3778F0u;
label_3778f0:
    // 0x3778f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3778f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3778f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3778f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3778f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3778f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3778fc: 0xc102488  jal         func_409220
    ctx->pc = 0x3778FCu;
    SET_GPR_U32(ctx, 31, 0x377904u);
    ctx->pc = 0x377900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778FCu;
    // 0x377900: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3778FCu, 0x377904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377904u;
label_377904:
    // 0x377904: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x377904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37790c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x37790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x377910: 0xc1024c6  jal         func_409318
    ctx->pc = 0x377910u;
    SET_GPR_U32(ctx, 31, 0x377918u);
    ctx->pc = 0x377914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377910u;
    // 0x377914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x377910u, 0x377918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377918u;
label_377918:
    // 0x377918: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x377918u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37791c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37791cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377920: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x377920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377924: 0x0  nop
    ctx->pc = 0x377924u;
    // NOP
label_377928:
    // 0x377928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37792c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377930: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x377930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x377934: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377938: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x377938u;
    SET_GPR_U32(ctx, 31, 0x377940u);
    ctx->pc = 0x37793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377938u;
    // 0x37793c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x377938u, 0x377940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377940u;
label_377940:
    // 0x377940: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377940u;
    SET_GPR_U32(ctx, 31, 0x377948u);
    ctx->pc = 0x377944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377940u;
    // 0x377944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377940u, 0x377948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377948u;
label_377948:
    // 0x377948: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x377948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x37794c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x37794cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x377950: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377950u;
    {
        const bool branch_taken_0x377950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377950u;
        // 0x377954: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377950) {
            ctx->pc = 0x377928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377928;
        }
    }
    ctx->pc = 0x377958u;
    // 0x377958: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x377958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37795c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x37795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377960: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x377960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377964: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x377964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x377968: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x377968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37796c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x37796cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377970: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x377970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377974: 0xc0c68d0  jal         func_31A340
    ctx->pc = 0x377974u;
    SET_GPR_U32(ctx, 31, 0x37797Cu);
    ctx->pc = 0x377978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377974u;
    // 0x377978: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A340u, 0x377974u, 0x37797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37797Cu;
label_37797c:
    // 0x37797c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37797cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377980: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x377980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x377984: 0x0  nop
    ctx->pc = 0x377984u;
    // NOP
label_377988:
    // 0x377988: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x377988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37798c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x37798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x377990: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x377990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377994: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x377994u;
    SET_GPR_U32(ctx, 31, 0x37799Cu);
    ctx->pc = 0x377998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377994u;
    // 0x377998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x377994u, 0x37799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37799Cu;
label_37799c:
    // 0x37799c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37799Cu;
    {
        const bool branch_taken_0x37799c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3779A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37799Cu;
        // 0x3779a0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37799c) {
            ctx->pc = 0x3779B8u;
            goto label_3779b8;
        }
    }
    ctx->pc = 0x3779A4u;
    // 0x3779a4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3779a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3779a8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3779a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3779ac: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3779ACu;
    SET_GPR_U32(ctx, 31, 0x3779B4u);
    ctx->pc = 0x3779B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779ACu;
    // 0x3779b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3779ACu, 0x3779B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3779B4u;
label_3779b4:
    // 0x3779b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3779b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3779b8:
    // 0x3779b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3779b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3779bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3779bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3779c0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3779C0u;
    SET_GPR_U32(ctx, 31, 0x3779C8u);
    ctx->pc = 0x3779C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779C0u;
    // 0x3779c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3779C0u, 0x3779C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3779C8u;
label_3779c8:
    // 0x3779c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3779c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3779cc: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x3779ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3779d0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3779D0u;
    {
        const bool branch_taken_0x3779d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3779D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3779D0u;
        // 0x3779d4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3779d0) {
            ctx->pc = 0x377988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377988;
        }
    }
    ctx->pc = 0x3779D8u;
    // 0x3779d8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3779d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3779dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3779dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3779e0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3779e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3779e4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3779e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3779e8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3779e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3779ec: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3779ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3779f0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3779f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3779f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3779f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3779f8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3779f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3779fc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3779fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377a00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x377a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377a04: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x377a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377a08: 0x3e00008  jr          $ra
    ctx->pc = 0x377A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A08u;
        // 0x377a0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377A10u;
}

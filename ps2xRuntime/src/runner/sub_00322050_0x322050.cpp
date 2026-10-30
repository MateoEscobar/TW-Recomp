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

// Function: sub_00322050
// Address: 0x322050 - 0x322188
void sub_00322050_0x322050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322050_0x322050");
#endif

    switch (ctx->pc) {
        case 0x322070u: goto label_322070;
        case 0x322088u: goto label_322088;
        case 0x322098u: goto label_322098;
        case 0x3220a8u: goto label_3220a8;
        case 0x3220ccu: goto label_3220cc;
        case 0x3220e0u: goto label_3220e0;
        case 0x322110u: goto label_322110;
        case 0x322118u: goto label_322118;
        case 0x322138u: goto label_322138;
        case 0x322148u: goto label_322148;
        case 0x322168u: goto label_322168;
        default: break;
    }

    ctx->pc = 0x322050u;

    // 0x322050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322054: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x322054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x322058: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x322058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32205c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322068: 0xc05959e  jal         func_165678
    ctx->pc = 0x322068u;
    SET_GPR_U32(ctx, 31, 0x322070u);
    ctx->pc = 0x32206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322068u;
    // 0x32206c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x322068u, 0x322070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322070u;
label_322070:
    // 0x322070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322074: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x322074u;
    {
        const bool branch_taken_0x322074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x322078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322074u;
        // 0x322078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322074) {
            ctx->pc = 0x32216Cu;
            goto label_32216c;
        }
    }
    ctx->pc = 0x32207Cu;
    // 0x32207c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322080: 0xc088edc  jal         func_223B70
    ctx->pc = 0x322080u;
    SET_GPR_U32(ctx, 31, 0x322088u);
    ctx->pc = 0x322084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322080u;
    // 0x322084: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x322080u, 0x322088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322088u;
label_322088:
    // 0x322088: 0x10520038  beq         $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x322088u;
    {
        const bool branch_taken_0x322088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x32208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322088u;
        // 0x32208c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322088) {
            ctx->pc = 0x32216Cu;
            goto label_32216c;
        }
    }
    ctx->pc = 0x322090u;
    // 0x322090: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x322090u;
    SET_GPR_U32(ctx, 31, 0x322098u);
    ctx->pc = 0x322094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322090u;
    // 0x322094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x322090u, 0x322098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322098u;
label_322098:
    // 0x322098: 0x10520034  beq         $v0, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x322098u;
    {
        const bool branch_taken_0x322098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x32209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322098u;
        // 0x32209c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322098) {
            ctx->pc = 0x32216Cu;
            goto label_32216c;
        }
    }
    ctx->pc = 0x3220A0u;
    // 0x3220a0: 0xc08a08a  jal         func_228228
    ctx->pc = 0x3220A0u;
    SET_GPR_U32(ctx, 31, 0x3220A8u);
    ctx->pc = 0x3220A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220A0u;
    // 0x3220a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3220A0u, 0x3220A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220A8u;
label_3220a8:
    // 0x3220a8: 0x10520030  beq         $v0, $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x3220A8u;
    {
        const bool branch_taken_0x3220a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3220ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220A8u;
        // 0x3220ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220a8) {
            ctx->pc = 0x32216Cu;
            goto label_32216c;
        }
    }
    ctx->pc = 0x3220B0u;
    // 0x3220b0: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x3220b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3220b4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3220B4u;
    {
        const bool branch_taken_0x3220b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3220b4) {
            ctx->pc = 0x3220B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3220B4u;
            // 0x3220b8: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32213Cu;
            goto label_32213c;
        }
    }
    ctx->pc = 0x3220BCu;
    // 0x3220bc: 0xa2320014  sb          $s2, 0x14($s1)
    ctx->pc = 0x3220bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x3220c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3220c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3220c4: 0xc059856  jal         func_166158
    ctx->pc = 0x3220C4u;
    SET_GPR_U32(ctx, 31, 0x3220CCu);
    ctx->pc = 0x3220C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220C4u;
    // 0x3220c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x3220C4u, 0x3220CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220CCu;
label_3220cc:
    // 0x3220cc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3220ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3220d0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3220D0u;
    {
        const bool branch_taken_0x3220d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3220d0) {
            ctx->pc = 0x3220D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3220D0u;
            // 0x3220d4: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32213Cu;
            goto label_32213c;
        }
    }
    ctx->pc = 0x3220D8u;
    // 0x3220d8: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x3220D8u;
    SET_GPR_U32(ctx, 31, 0x3220E0u);
    ctx->pc = 0x3220DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220D8u;
    // 0x3220dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x3220D8u, 0x3220E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220E0u;
label_3220e0:
    // 0x3220e0: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x3220E0u;
    {
        const bool branch_taken_0x3220e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3220E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220E0u;
        // 0x3220e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220e0) {
            ctx->pc = 0x322110u;
            goto label_322110;
        }
    }
    ctx->pc = 0x3220E8u;
    // 0x3220e8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3220e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3220ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3220ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3220f0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x3220f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x3220f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3220f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3220f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3220fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3220fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x322100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x322104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322108: 0xc088178  jal         func_2205E0
    ctx->pc = 0x322108u;
    SET_GPR_U32(ctx, 31, 0x322110u);
    ctx->pc = 0x32210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322108u;
    // 0x32210c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x322108u, 0x322110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322110u;
label_322110:
    // 0x322110: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x322110u;
    SET_GPR_U32(ctx, 31, 0x322118u);
    ctx->pc = 0x322114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322110u;
    // 0x322114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x322110u, 0x322118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322118u;
label_322118:
    // 0x322118: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x322118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x32211c: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x32211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x322120: 0x240602a4  addiu       $a2, $zero, 0x2A4
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x322124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322128: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x322128u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x32212c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322130: 0xc0c8636  jal         func_3218D8
    ctx->pc = 0x322130u;
    SET_GPR_U32(ctx, 31, 0x322138u);
    ctx->pc = 0x322134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322130u;
    // 0x322134: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218D8u, 0x322130u, 0x322138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322138u;
label_322138:
    // 0x322138: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_32213c:
    // 0x32213c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322140: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x322140u;
    SET_GPR_U32(ctx, 31, 0x322148u);
    ctx->pc = 0x322144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322140u;
    // 0x322144: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x322140u, 0x322148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322148u;
label_322148:
    // 0x322148: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x322148u;
    {
        const bool branch_taken_0x322148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322148u;
        // 0x32214c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322148) {
            ctx->pc = 0x322168u;
            goto label_322168;
        }
    }
    ctx->pc = 0x322150u;
    // 0x322150: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x322150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x322154: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322154u;
    {
        const bool branch_taken_0x322154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322154u;
        // 0x322158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322154) {
            ctx->pc = 0x32216Cu;
            goto label_32216c;
        }
    }
    ctx->pc = 0x32215Cu;
    // 0x32215c: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x32215cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x322160: 0xc0c877a  jal         func_321DE8
    ctx->pc = 0x322160u;
    SET_GPR_U32(ctx, 31, 0x322168u);
    ctx->pc = 0x322164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322160u;
    // 0x322164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321DE8u, 0x322160u, 0x322168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322168u;
label_322168:
    // 0x322168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32216c:
    // 0x32216c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32216cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322170: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x322170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32217c: 0x3e00008  jr          $ra
    ctx->pc = 0x32217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32217Cu;
        // 0x322180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32217Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322184u;
    // 0x322184: 0x0  nop
    ctx->pc = 0x322184u;
    // NOP
    ctx->pc = 0x322188u;
}

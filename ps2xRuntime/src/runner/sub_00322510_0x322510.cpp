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

// Function: sub_00322510
// Address: 0x322510 - 0x322708
void sub_00322510_0x322510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322510_0x322510");
#endif

    switch (ctx->pc) {
        case 0x322534u: goto label_322534;
        case 0x322548u: goto label_322548;
        case 0x322558u: goto label_322558;
        case 0x322568u: goto label_322568;
        case 0x32258cu: goto label_32258c;
        case 0x3225b4u: goto label_3225b4;
        case 0x3225e4u: goto label_3225e4;
        case 0x3225ecu: goto label_3225ec;
        case 0x32260cu: goto label_32260c;
        case 0x322620u: goto label_322620;
        case 0x322640u: goto label_322640;
        case 0x322678u: goto label_322678;
        case 0x3226b0u: goto label_3226b0;
        case 0x3226b8u: goto label_3226b8;
        case 0x3226d8u: goto label_3226d8;
        default: break;
    }

    ctx->pc = 0x322510u;

    // 0x322510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x322510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x322514: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x322514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x322518: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x322518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32251c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32251cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322520: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x322520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x322524: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x322524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x322528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32252c: 0xc05959e  jal         func_165678
    ctx->pc = 0x32252Cu;
    SET_GPR_U32(ctx, 31, 0x322534u);
    ctx->pc = 0x322530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32252Cu;
    // 0x322530: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x32252Cu, 0x322534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322534u;
label_322534:
    // 0x322534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322538: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
    ctx->pc = 0x322538u;
    {
        const bool branch_taken_0x322538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322538u;
        // 0x32253c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322538) {
            ctx->pc = 0x3226E0u;
            goto label_3226e0;
        }
    }
    ctx->pc = 0x322540u;
    // 0x322540: 0xc088edc  jal         func_223B70
    ctx->pc = 0x322540u;
    SET_GPR_U32(ctx, 31, 0x322548u);
    ctx->pc = 0x322544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322540u;
    // 0x322544: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x322540u, 0x322548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322548u;
label_322548:
    // 0x322548: 0x10530068  beq         $v0, $s3, . + 4 + (0x68 << 2)
    ctx->pc = 0x322548u;
    {
        const bool branch_taken_0x322548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x32254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322548u;
        // 0x32254c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322548) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x322550u;
    // 0x322550: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x322550u;
    SET_GPR_U32(ctx, 31, 0x322558u);
    ctx->pc = 0x322554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322550u;
    // 0x322554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x322550u, 0x322558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322558u;
label_322558:
    // 0x322558: 0x10530064  beq         $v0, $s3, . + 4 + (0x64 << 2)
    ctx->pc = 0x322558u;
    {
        const bool branch_taken_0x322558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x32255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322558u;
        // 0x32255c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322558) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x322560u;
    // 0x322560: 0xc08a08a  jal         func_228228
    ctx->pc = 0x322560u;
    SET_GPR_U32(ctx, 31, 0x322568u);
    ctx->pc = 0x322564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322560u;
    // 0x322564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x322560u, 0x322568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322568u;
label_322568:
    // 0x322568: 0x10530060  beq         $v0, $s3, . + 4 + (0x60 << 2)
    ctx->pc = 0x322568u;
    {
        const bool branch_taken_0x322568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x32256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322568u;
        // 0x32256c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322568) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x322570u;
    // 0x322570: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x322570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x322574: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x322574u;
    {
        const bool branch_taken_0x322574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322574) {
            ctx->pc = 0x322578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322574u;
            // 0x322578: 0x8e220178  lw          $v0, 0x178($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322610u;
            goto label_322610;
        }
    }
    ctx->pc = 0x32257Cu;
    // 0x32257c: 0xa2130014  sb          $s3, 0x14($s0)
    ctx->pc = 0x32257cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 19));
    // 0x322580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322584: 0xc059856  jal         func_166158
    ctx->pc = 0x322584u;
    SET_GPR_U32(ctx, 31, 0x32258Cu);
    ctx->pc = 0x322588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322584u;
    // 0x322588: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x322584u, 0x32258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32258Cu;
label_32258c:
    // 0x32258c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32258cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x322590: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x322590u;
    {
        const bool branch_taken_0x322590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322590) {
            ctx->pc = 0x322594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322590u;
            // 0x322594: 0x8e220178  lw          $v0, 0x178($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322610u;
            goto label_322610;
        }
    }
    ctx->pc = 0x322598u;
    // 0x322598: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x322598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x32259c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x32259cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3225a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3225a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3225a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3225a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3225a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3225ac: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x3225ACu;
    SET_GPR_U32(ctx, 31, 0x3225B4u);
    ctx->pc = 0x3225B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225ACu;
    // 0x3225b0: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x3225ACu, 0x3225B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225B4u;
label_3225b4:
    // 0x3225b4: 0x1453000b  bne         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3225B4u;
    {
        const bool branch_taken_0x3225b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3225B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225B4u;
        // 0x3225b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225b4) {
            ctx->pc = 0x3225E4u;
            goto label_3225e4;
        }
    }
    ctx->pc = 0x3225BCu;
    // 0x3225bc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3225bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3225c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3225c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3225c4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x3225c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x3225c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3225c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3225ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3225d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3225d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3225d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3225d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225dc: 0xc088178  jal         func_2205E0
    ctx->pc = 0x3225DCu;
    SET_GPR_U32(ctx, 31, 0x3225E4u);
    ctx->pc = 0x3225E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225DCu;
    // 0x3225e0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x3225DCu, 0x3225E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225E4u;
label_3225e4:
    // 0x3225e4: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x3225E4u;
    SET_GPR_U32(ctx, 31, 0x3225ECu);
    ctx->pc = 0x3225E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225E4u;
    // 0x3225e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x3225E4u, 0x3225ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225ECu;
label_3225ec:
    // 0x3225ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3225ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3225f0: 0x240302a7  addiu       $v1, $zero, 0x2A7
    ctx->pc = 0x3225f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x3225f4: 0x240602a3  addiu       $a2, $zero, 0x2A3
    ctx->pc = 0x3225f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x3225f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3225f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225fc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3225fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x322600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322604: 0xc0c8636  jal         func_3218D8
    ctx->pc = 0x322604u;
    SET_GPR_U32(ctx, 31, 0x32260Cu);
    ctx->pc = 0x322608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322604u;
    // 0x322608: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218D8u, 0x322604u, 0x32260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32260Cu;
label_32260c:
    // 0x32260c: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x32260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_322610:
    // 0x322610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x322610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322614: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x322614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322618: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x322618u;
    SET_GPR_U32(ctx, 31, 0x322620u);
    ctx->pc = 0x32261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322618u;
    // 0x32261c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x322618u, 0x322620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322620u;
label_322620:
    // 0x322620: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x322620u;
    {
        const bool branch_taken_0x322620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322620u;
        // 0x322624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322620) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x322628u;
    // 0x322628: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x322628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x32262c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32262Cu;
    {
        const bool branch_taken_0x32262c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32262c) {
            ctx->pc = 0x322630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32262Cu;
            // 0x322630: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322644u;
            goto label_322644;
        }
    }
    ctx->pc = 0x322634u;
    // 0x322634: 0xa2120015  sb          $s2, 0x15($s0)
    ctx->pc = 0x322634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 18));
    // 0x322638: 0xc0c887a  jal         func_3221E8
    ctx->pc = 0x322638u;
    SET_GPR_U32(ctx, 31, 0x322640u);
    ctx->pc = 0x32263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322638u;
    // 0x32263c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221E8u, 0x322638u, 0x322640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322640u;
label_322640:
    // 0x322640: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x322640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_322644:
    // 0x322644: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x322644u;
    {
        const bool branch_taken_0x322644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x322648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322644u;
        // 0x322648: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322644) {
            ctx->pc = 0x3226E8u;
            goto label_3226e8;
        }
    }
    ctx->pc = 0x32264Cu;
    // 0x32264c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x32264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x322650: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x322650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x322654: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x322654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x322658: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x322658u;
    {
        const bool branch_taken_0x322658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322658u;
        // 0x32265c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322658) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x322660u;
    // 0x322660: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x322660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x322664: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x322664u;
    {
        const bool branch_taken_0x322664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322664u;
        // 0x322668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322664) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x32266Cu;
    // 0x32266c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x322670: 0xc059856  jal         func_166158
    ctx->pc = 0x322670u;
    SET_GPR_U32(ctx, 31, 0x322678u);
    ctx->pc = 0x322674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322670u;
    // 0x322674: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x322670u, 0x322678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322678u;
label_322678:
    // 0x322678: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x322678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32267c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x32267Cu;
    {
        const bool branch_taken_0x32267c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32267c) {
            ctx->pc = 0x322680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32267Cu;
            // 0x322680: 0xa2120018  sb          $s2, 0x18($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3226E8u;
            goto label_3226e8;
        }
    }
    ctx->pc = 0x322684u;
    // 0x322684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x322684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x322688: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x322688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x32268c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32268cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x322690: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x322690u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x322694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32269c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32269cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3226a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3226a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3226a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226a8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x3226A8u;
    SET_GPR_U32(ctx, 31, 0x3226B0u);
    ctx->pc = 0x3226ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226A8u;
    // 0x3226ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x3226A8u, 0x3226B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226B0u;
label_3226b0:
    // 0x3226b0: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x3226B0u;
    SET_GPR_U32(ctx, 31, 0x3226B8u);
    ctx->pc = 0x3226B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226B0u;
    // 0x3226b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x3226B0u, 0x3226B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226B8u;
label_3226b8:
    // 0x3226b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3226b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3226bc: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x3226bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x3226c0: 0x240602a4  addiu       $a2, $zero, 0x2A4
    ctx->pc = 0x3226c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x3226c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3226c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226c8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3226c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x3226cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3226ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226d0: 0xc0c8636  jal         func_3218D8
    ctx->pc = 0x3226D0u;
    SET_GPR_U32(ctx, 31, 0x3226D8u);
    ctx->pc = 0x3226D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226D0u;
    // 0x3226d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218D8u, 0x3226D0u, 0x3226D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226D8u;
label_3226d8:
    // 0x3226d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3226D8u;
    {
        const bool branch_taken_0x3226d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226D8u;
        // 0x3226dc: 0xa2120018  sb          $s2, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226d8) {
            ctx->pc = 0x3226E8u;
            goto label_3226e8;
        }
    }
    ctx->pc = 0x3226E0u;
label_3226e0:
    // 0x3226e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3226E0u;
    {
        const bool branch_taken_0x3226e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226E0u;
        // 0x3226e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226e0) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x3226E8u;
label_3226e8:
    // 0x3226e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3226e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3226ec:
    // 0x3226ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3226ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3226f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3226f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3226f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3226f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3226f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3226f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3226fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3226fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322700: 0x3e00008  jr          $ra
    ctx->pc = 0x322700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322700u;
        // 0x322704: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322708u;
}

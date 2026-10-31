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

// Function: sub_001EC490
// Address: 0x1ec490 - 0x1ec980
void sub_001EC490_0x1ec490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC490_0x1ec490");
#endif

    switch (ctx->pc) {
        case 0x1ec4bcu: goto label_1ec4bc;
        case 0x1ec4ecu: goto label_1ec4ec;
        case 0x1ec518u: goto label_1ec518;
        case 0x1ec544u: goto label_1ec544;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec59cu: goto label_1ec59c;
        case 0x1ec5c8u: goto label_1ec5c8;
        case 0x1ec5f4u: goto label_1ec5f4;
        case 0x1ec620u: goto label_1ec620;
        case 0x1ec64cu: goto label_1ec64c;
        case 0x1ec678u: goto label_1ec678;
        case 0x1ec6a4u: goto label_1ec6a4;
        case 0x1ec6d0u: goto label_1ec6d0;
        case 0x1ec6fcu: goto label_1ec6fc;
        case 0x1ec728u: goto label_1ec728;
        case 0x1ec754u: goto label_1ec754;
        case 0x1ec780u: goto label_1ec780;
        case 0x1ec7acu: goto label_1ec7ac;
        case 0x1ec7d8u: goto label_1ec7d8;
        case 0x1ec804u: goto label_1ec804;
        case 0x1ec830u: goto label_1ec830;
        case 0x1ec85cu: goto label_1ec85c;
        case 0x1ec888u: goto label_1ec888;
        case 0x1ec8b4u: goto label_1ec8b4;
        case 0x1ec8e0u: goto label_1ec8e0;
        case 0x1ec90cu: goto label_1ec90c;
        case 0x1ec938u: goto label_1ec938;
        case 0x1ec964u: goto label_1ec964;
        default: break;
    }

    ctx->pc = 0x1ec490u;

    // 0x1ec490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec494: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x1ec494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x1ec498: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ec49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4a0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC4A0u;
    {
        const bool branch_taken_0x1ec4a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4A0u;
        // 0x1ec4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4a0) {
            ctx->pc = 0x1EC4CCu;
            goto label_1ec4cc;
        }
    }
    ctx->pc = 0x1EC4A8u;
    // 0x1ec4a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec4ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec4b0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec4b4: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC4B4u;
    SET_GPR_U32(ctx, 31, 0x1EC4BCu);
    ctx->pc = 0x1EC4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4B4u;
    // 0x1ec4b8: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC4B4u, 0x1EC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4BCu;
label_1ec4bc:
    // 0x1ec4bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC4BCu;
    {
        const bool branch_taken_0x1ec4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4BCu;
        // 0x1ec4c0: 0x240200ba  addiu       $v0, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4bc) {
            ctx->pc = 0x1EC4D0u;
            goto label_1ec4d0;
        }
    }
    ctx->pc = 0x1EC4C4u;
    // 0x1ec4c4: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x1EC4C4u;
    {
        const bool branch_taken_0x1ec4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C4u;
        // 0x1ec4c8: 0x241000c4  addiu       $s0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4c4) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC4CCu;
label_1ec4cc:
    // 0x1ec4cc: 0x240200ba  addiu       $v0, $zero, 0xBA
    ctx->pc = 0x1ec4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1ec4d0:
    // 0x1ec4d0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC4D0u;
    {
        const bool branch_taken_0x1ec4d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4D0u;
        // 0x1ec4d4: 0x240200b9  addiu       $v0, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4d0) {
            ctx->pc = 0x1EC4FCu;
            goto label_1ec4fc;
        }
    }
    ctx->pc = 0x1EC4D8u;
    // 0x1ec4d8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec4dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec4e0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec4e4: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC4E4u;
    SET_GPR_U32(ctx, 31, 0x1EC4ECu);
    ctx->pc = 0x1EC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4E4u;
    // 0x1ec4e8: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC4E4u, 0x1EC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4ECu;
label_1ec4ec:
    // 0x1ec4ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC4ECu;
    {
        const bool branch_taken_0x1ec4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4ECu;
        // 0x1ec4f0: 0x240200b9  addiu       $v0, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4ec) {
            ctx->pc = 0x1EC4FCu;
            goto label_1ec4fc;
        }
    }
    ctx->pc = 0x1EC4F4u;
    // 0x1ec4f4: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1EC4F4u;
    {
        const bool branch_taken_0x1ec4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4F4u;
        // 0x1ec4f8: 0x241000c7  addiu       $s0, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4f4) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC4FCu;
label_1ec4fc:
    // 0x1ec4fc: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC4FCu;
    {
        const bool branch_taken_0x1ec4fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4FCu;
        // 0x1ec500: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4fc) {
            ctx->pc = 0x1EC528u;
            goto label_1ec528;
        }
    }
    ctx->pc = 0x1EC504u;
    // 0x1ec504: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec508: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec50c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec510: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC510u;
    SET_GPR_U32(ctx, 31, 0x1EC518u);
    ctx->pc = 0x1EC514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC510u;
    // 0x1ec514: 0x240600b9  addiu       $a2, $zero, 0xB9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC510u, 0x1EC518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC518u;
label_1ec518:
    // 0x1ec518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC518u;
    {
        const bool branch_taken_0x1ec518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC518u;
        // 0x1ec51c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec518) {
            ctx->pc = 0x1EC528u;
            goto label_1ec528;
        }
    }
    ctx->pc = 0x1EC520u;
    // 0x1ec520: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x1EC520u;
    {
        const bool branch_taken_0x1ec520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC520u;
        // 0x1ec524: 0x241000c0  addiu       $s0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec520) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC528u;
label_1ec528:
    // 0x1ec528: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC528u;
    {
        const bool branch_taken_0x1ec528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC528u;
        // 0x1ec52c: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec528) {
            ctx->pc = 0x1EC554u;
            goto label_1ec554;
        }
    }
    ctx->pc = 0x1EC530u;
    // 0x1ec530: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec534: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec538: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec53c: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC53Cu;
    SET_GPR_U32(ctx, 31, 0x1EC544u);
    ctx->pc = 0x1EC540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC53Cu;
    // 0x1ec540: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC53Cu, 0x1EC544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC544u;
label_1ec544:
    // 0x1ec544: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC544u;
    {
        const bool branch_taken_0x1ec544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC544u;
        // 0x1ec548: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec544) {
            ctx->pc = 0x1EC554u;
            goto label_1ec554;
        }
    }
    ctx->pc = 0x1EC54Cu;
    // 0x1ec54c: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1EC54Cu;
    {
        const bool branch_taken_0x1ec54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC54Cu;
        // 0x1ec550: 0x241000c5  addiu       $s0, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec54c) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC554u;
label_1ec554:
    // 0x1ec554: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC554u;
    {
        const bool branch_taken_0x1ec554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC554u;
        // 0x1ec558: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec554) {
            ctx->pc = 0x1EC580u;
            goto label_1ec580;
        }
    }
    ctx->pc = 0x1EC55Cu;
    // 0x1ec55c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec560: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec564: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec568: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC568u;
    SET_GPR_U32(ctx, 31, 0x1EC570u);
    ctx->pc = 0x1EC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC568u;
    // 0x1ec56c: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC568u, 0x1EC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC570u;
label_1ec570:
    // 0x1ec570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC570u;
    {
        const bool branch_taken_0x1ec570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC570u;
        // 0x1ec574: 0x240200df  addiu       $v0, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec570) {
            ctx->pc = 0x1EC580u;
            goto label_1ec580;
        }
    }
    ctx->pc = 0x1EC578u;
    // 0x1ec578: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1EC578u;
    {
        const bool branch_taken_0x1ec578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC578u;
        // 0x1ec57c: 0x241000e1  addiu       $s0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec578) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC580u;
label_1ec580:
    // 0x1ec580: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC580u;
    {
        const bool branch_taken_0x1ec580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC580u;
        // 0x1ec584: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec580) {
            ctx->pc = 0x1EC5ACu;
            goto label_1ec5ac;
        }
    }
    ctx->pc = 0x1EC588u;
    // 0x1ec588: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec58c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec590: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec594: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC594u;
    SET_GPR_U32(ctx, 31, 0x1EC59Cu);
    ctx->pc = 0x1EC598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC594u;
    // 0x1ec598: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC594u, 0x1EC59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC59Cu;
label_1ec59c:
    // 0x1ec59c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC59Cu;
    {
        const bool branch_taken_0x1ec59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC59Cu;
        // 0x1ec5a0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec59c) {
            ctx->pc = 0x1EC5ACu;
            goto label_1ec5ac;
        }
    }
    ctx->pc = 0x1EC5A4u;
    // 0x1ec5a4: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1EC5A4u;
    {
        const bool branch_taken_0x1ec5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5A4u;
        // 0x1ec5a8: 0x241000e2  addiu       $s0, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5a4) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC5ACu;
label_1ec5ac:
    // 0x1ec5ac: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC5ACu;
    {
        const bool branch_taken_0x1ec5ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ACu;
        // 0x1ec5b0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5ac) {
            ctx->pc = 0x1EC5D8u;
            goto label_1ec5d8;
        }
    }
    ctx->pc = 0x1EC5B4u;
    // 0x1ec5b4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec5b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec5bc: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec5c0: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC5C0u;
    SET_GPR_U32(ctx, 31, 0x1EC5C8u);
    ctx->pc = 0x1EC5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC5C0u;
    // 0x1ec5c4: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC5C0u, 0x1EC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC5C8u;
label_1ec5c8:
    // 0x1ec5c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC5C8u;
    {
        const bool branch_taken_0x1ec5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5C8u;
        // 0x1ec5cc: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5c8) {
            ctx->pc = 0x1EC5D8u;
            goto label_1ec5d8;
        }
    }
    ctx->pc = 0x1EC5D0u;
    // 0x1ec5d0: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1EC5D0u;
    {
        const bool branch_taken_0x1ec5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5D0u;
        // 0x1ec5d4: 0x24100065  addiu       $s0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5d0) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC5D8u;
label_1ec5d8:
    // 0x1ec5d8: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC5D8u;
    {
        const bool branch_taken_0x1ec5d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5D8u;
        // 0x1ec5dc: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5d8) {
            ctx->pc = 0x1EC604u;
            goto label_1ec604;
        }
    }
    ctx->pc = 0x1EC5E0u;
    // 0x1ec5e0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec5e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec5e8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec5ec: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC5ECu;
    SET_GPR_U32(ctx, 31, 0x1EC5F4u);
    ctx->pc = 0x1EC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC5ECu;
    // 0x1ec5f0: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC5ECu, 0x1EC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC5F4u;
label_1ec5f4:
    // 0x1ec5f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC5F4u;
    {
        const bool branch_taken_0x1ec5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5F4u;
        // 0x1ec5f8: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5f4) {
            ctx->pc = 0x1EC604u;
            goto label_1ec604;
        }
    }
    ctx->pc = 0x1EC5FCu;
    // 0x1ec5fc: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1EC5FCu;
    {
        const bool branch_taken_0x1ec5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5FCu;
        // 0x1ec600: 0x24100066  addiu       $s0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5fc) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC604u;
label_1ec604:
    // 0x1ec604: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC604u;
    {
        const bool branch_taken_0x1ec604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC604u;
        // 0x1ec608: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec604) {
            ctx->pc = 0x1EC630u;
            goto label_1ec630;
        }
    }
    ctx->pc = 0x1EC60Cu;
    // 0x1ec60c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec610: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec614: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec618: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC618u;
    SET_GPR_U32(ctx, 31, 0x1EC620u);
    ctx->pc = 0x1EC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC618u;
    // 0x1ec61c: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC618u, 0x1EC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC620u;
label_1ec620:
    // 0x1ec620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC620u;
    {
        const bool branch_taken_0x1ec620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC620u;
        // 0x1ec624: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec620) {
            ctx->pc = 0x1EC630u;
            goto label_1ec630;
        }
    }
    ctx->pc = 0x1EC628u;
    // 0x1ec628: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x1EC628u;
    {
        const bool branch_taken_0x1ec628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC628u;
        // 0x1ec62c: 0x2410005b  addiu       $s0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec628) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC630u;
label_1ec630:
    // 0x1ec630: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC630u;
    {
        const bool branch_taken_0x1ec630 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC630u;
        // 0x1ec634: 0x240200ed  addiu       $v0, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec630) {
            ctx->pc = 0x1EC65Cu;
            goto label_1ec65c;
        }
    }
    ctx->pc = 0x1EC638u;
    // 0x1ec638: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec63c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec640: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec644: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC644u;
    SET_GPR_U32(ctx, 31, 0x1EC64Cu);
    ctx->pc = 0x1EC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC644u;
    // 0x1ec648: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC644u, 0x1EC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC64Cu;
label_1ec64c:
    // 0x1ec64c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC64Cu;
    {
        const bool branch_taken_0x1ec64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC64Cu;
        // 0x1ec650: 0x240200ed  addiu       $v0, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec64c) {
            ctx->pc = 0x1EC65Cu;
            goto label_1ec65c;
        }
    }
    ctx->pc = 0x1EC654u;
    // 0x1ec654: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1EC654u;
    {
        const bool branch_taken_0x1ec654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC654u;
        // 0x1ec658: 0x2410005e  addiu       $s0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec654) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC65Cu;
label_1ec65c:
    // 0x1ec65c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC65Cu;
    {
        const bool branch_taken_0x1ec65c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC65Cu;
        // 0x1ec660: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec65c) {
            ctx->pc = 0x1EC688u;
            goto label_1ec688;
        }
    }
    ctx->pc = 0x1EC664u;
    // 0x1ec664: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec668: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec66c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec670: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC670u;
    SET_GPR_U32(ctx, 31, 0x1EC678u);
    ctx->pc = 0x1EC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC670u;
    // 0x1ec674: 0x240600ed  addiu       $a2, $zero, 0xED (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC670u, 0x1EC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC678u;
label_1ec678:
    // 0x1ec678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC678u;
    {
        const bool branch_taken_0x1ec678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC678u;
        // 0x1ec67c: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec678) {
            ctx->pc = 0x1EC688u;
            goto label_1ec688;
        }
    }
    ctx->pc = 0x1EC680u;
    // 0x1ec680: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1EC680u;
    {
        const bool branch_taken_0x1ec680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC680u;
        // 0x1ec684: 0x241000f1  addiu       $s0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec680) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC688u;
label_1ec688:
    // 0x1ec688: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC688u;
    {
        const bool branch_taken_0x1ec688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC688u;
        // 0x1ec68c: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec688) {
            ctx->pc = 0x1EC6B4u;
            goto label_1ec6b4;
        }
    }
    ctx->pc = 0x1EC690u;
    // 0x1ec690: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec694: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec698: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec69c: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC69Cu;
    SET_GPR_U32(ctx, 31, 0x1EC6A4u);
    ctx->pc = 0x1EC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC69Cu;
    // 0x1ec6a0: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC69Cu, 0x1EC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6A4u;
label_1ec6a4:
    // 0x1ec6a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC6A4u;
    {
        const bool branch_taken_0x1ec6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6A4u;
        // 0x1ec6a8: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6a4) {
            ctx->pc = 0x1EC6B4u;
            goto label_1ec6b4;
        }
    }
    ctx->pc = 0x1EC6ACu;
    // 0x1ec6ac: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1EC6ACu;
    {
        const bool branch_taken_0x1ec6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6ACu;
        // 0x1ec6b0: 0x24100051  addiu       $s0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6ac) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC6B4u;
label_1ec6b4:
    // 0x1ec6b4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC6B4u;
    {
        const bool branch_taken_0x1ec6b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6B4u;
        // 0x1ec6b8: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6b4) {
            ctx->pc = 0x1EC6E0u;
            goto label_1ec6e0;
        }
    }
    ctx->pc = 0x1EC6BCu;
    // 0x1ec6bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec6c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec6c4: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec6c8: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC6C8u;
    SET_GPR_U32(ctx, 31, 0x1EC6D0u);
    ctx->pc = 0x1EC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6C8u;
    // 0x1ec6cc: 0x24060087  addiu       $a2, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC6C8u, 0x1EC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6D0u;
label_1ec6d0:
    // 0x1ec6d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC6D0u;
    {
        const bool branch_taken_0x1ec6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6D0u;
        // 0x1ec6d4: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6d0) {
            ctx->pc = 0x1EC6E0u;
            goto label_1ec6e0;
        }
    }
    ctx->pc = 0x1EC6D8u;
    // 0x1ec6d8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1EC6D8u;
    {
        const bool branch_taken_0x1ec6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6D8u;
        // 0x1ec6dc: 0x2410008d  addiu       $s0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6d8) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC6E0u;
label_1ec6e0:
    // 0x1ec6e0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC6E0u;
    {
        const bool branch_taken_0x1ec6e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E0u;
        // 0x1ec6e4: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6e0) {
            ctx->pc = 0x1EC70Cu;
            goto label_1ec70c;
        }
    }
    ctx->pc = 0x1EC6E8u;
    // 0x1ec6e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec6ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec6f0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec6f4: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC6F4u;
    SET_GPR_U32(ctx, 31, 0x1EC6FCu);
    ctx->pc = 0x1EC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6F4u;
    // 0x1ec6f8: 0x24060089  addiu       $a2, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC6F4u, 0x1EC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6FCu;
label_1ec6fc:
    // 0x1ec6fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC6FCu;
    {
        const bool branch_taken_0x1ec6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6FCu;
        // 0x1ec700: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6fc) {
            ctx->pc = 0x1EC70Cu;
            goto label_1ec70c;
        }
    }
    ctx->pc = 0x1EC704u;
    // 0x1ec704: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1EC704u;
    {
        const bool branch_taken_0x1ec704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC704u;
        // 0x1ec708: 0x2410008a  addiu       $s0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec704) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC70Cu;
label_1ec70c:
    // 0x1ec70c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC70Cu;
    {
        const bool branch_taken_0x1ec70c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC70Cu;
        // 0x1ec710: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec70c) {
            ctx->pc = 0x1EC738u;
            goto label_1ec738;
        }
    }
    ctx->pc = 0x1EC714u;
    // 0x1ec714: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec718: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec71c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec720: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC720u;
    SET_GPR_U32(ctx, 31, 0x1EC728u);
    ctx->pc = 0x1EC724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC720u;
    // 0x1ec724: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC720u, 0x1EC728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC728u;
label_1ec728:
    // 0x1ec728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC728u;
    {
        const bool branch_taken_0x1ec728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC728u;
        // 0x1ec72c: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec728) {
            ctx->pc = 0x1EC738u;
            goto label_1ec738;
        }
    }
    ctx->pc = 0x1EC730u;
    // 0x1ec730: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1EC730u;
    {
        const bool branch_taken_0x1ec730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC730u;
        // 0x1ec734: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec730) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC738u;
label_1ec738:
    // 0x1ec738: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC738u;
    {
        const bool branch_taken_0x1ec738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC738u;
        // 0x1ec73c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec738) {
            ctx->pc = 0x1EC764u;
            goto label_1ec764;
        }
    }
    ctx->pc = 0x1EC740u;
    // 0x1ec740: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec744: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec748: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec74c: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC74Cu;
    SET_GPR_U32(ctx, 31, 0x1EC754u);
    ctx->pc = 0x1EC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC74Cu;
    // 0x1ec750: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC74Cu, 0x1EC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC754u;
label_1ec754:
    // 0x1ec754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC754u;
    {
        const bool branch_taken_0x1ec754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC754u;
        // 0x1ec758: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec754) {
            ctx->pc = 0x1EC764u;
            goto label_1ec764;
        }
    }
    ctx->pc = 0x1EC75Cu;
    // 0x1ec75c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1EC75Cu;
    {
        const bool branch_taken_0x1ec75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC75Cu;
        // 0x1ec760: 0x241000a4  addiu       $s0, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec75c) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC764u;
label_1ec764:
    // 0x1ec764: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC764u;
    {
        const bool branch_taken_0x1ec764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC764u;
        // 0x1ec768: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec764) {
            ctx->pc = 0x1EC790u;
            goto label_1ec790;
        }
    }
    ctx->pc = 0x1EC76Cu;
    // 0x1ec76c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec770: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec774: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec778: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC778u;
    SET_GPR_U32(ctx, 31, 0x1EC780u);
    ctx->pc = 0x1EC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC778u;
    // 0x1ec77c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC778u, 0x1EC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC780u;
label_1ec780:
    // 0x1ec780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC780u;
    {
        const bool branch_taken_0x1ec780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC780u;
        // 0x1ec784: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec780) {
            ctx->pc = 0x1EC790u;
            goto label_1ec790;
        }
    }
    ctx->pc = 0x1EC788u;
    // 0x1ec788: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1EC788u;
    {
        const bool branch_taken_0x1ec788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC788u;
        // 0x1ec78c: 0x241000a2  addiu       $s0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec788) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC790u;
label_1ec790:
    // 0x1ec790: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC790u;
    {
        const bool branch_taken_0x1ec790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC790u;
        // 0x1ec794: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec790) {
            ctx->pc = 0x1EC7BCu;
            goto label_1ec7bc;
        }
    }
    ctx->pc = 0x1EC798u;
    // 0x1ec798: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec79c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec7a0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec7a4: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC7A4u;
    SET_GPR_U32(ctx, 31, 0x1EC7ACu);
    ctx->pc = 0x1EC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7A4u;
    // 0x1ec7a8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC7A4u, 0x1EC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC7ACu;
label_1ec7ac:
    // 0x1ec7ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7ACu;
    {
        const bool branch_taken_0x1ec7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ACu;
        // 0x1ec7b0: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ac) {
            ctx->pc = 0x1EC7BCu;
            goto label_1ec7bc;
        }
    }
    ctx->pc = 0x1EC7B4u;
    // 0x1ec7b4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1EC7B4u;
    {
        const bool branch_taken_0x1ec7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7B4u;
        // 0x1ec7b8: 0x24100082  addiu       $s0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7b4) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC7BCu;
label_1ec7bc:
    // 0x1ec7bc: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC7BCu;
    {
        const bool branch_taken_0x1ec7bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7BCu;
        // 0x1ec7c0: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7bc) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC7C4u;
    // 0x1ec7c4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec7c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec7cc: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec7d0: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC7D0u;
    SET_GPR_U32(ctx, 31, 0x1EC7D8u);
    ctx->pc = 0x1EC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7D0u;
    // 0x1ec7d4: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC7D0u, 0x1EC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC7D8u;
label_1ec7d8:
    // 0x1ec7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7D8u;
    {
        const bool branch_taken_0x1ec7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D8u;
        // 0x1ec7dc: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7d8) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC7E0u;
    // 0x1ec7e0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1EC7E0u;
    {
        const bool branch_taken_0x1ec7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7E0u;
        // 0x1ec7e4: 0x2410007c  addiu       $s0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7e0) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC7E8u;
label_1ec7e8:
    // 0x1ec7e8: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC7E8u;
    {
        const bool branch_taken_0x1ec7e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7E8u;
        // 0x1ec7ec: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7e8) {
            ctx->pc = 0x1EC814u;
            goto label_1ec814;
        }
    }
    ctx->pc = 0x1EC7F0u;
    // 0x1ec7f0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec7f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec7f8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec7fc: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC7FCu;
    SET_GPR_U32(ctx, 31, 0x1EC804u);
    ctx->pc = 0x1EC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7FCu;
    // 0x1ec800: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC7FCu, 0x1EC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC804u;
label_1ec804:
    // 0x1ec804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC804u;
    {
        const bool branch_taken_0x1ec804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC804u;
        // 0x1ec808: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec804) {
            ctx->pc = 0x1EC814u;
            goto label_1ec814;
        }
    }
    ctx->pc = 0x1EC80Cu;
    // 0x1ec80c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1EC80Cu;
    {
        const bool branch_taken_0x1ec80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x2410007e  addiu       $s0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec80c) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC814u;
label_1ec814:
    // 0x1ec814: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC814u;
    {
        const bool branch_taken_0x1ec814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC814u;
        // 0x1ec818: 0x2402009a  addiu       $v0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec814) {
            ctx->pc = 0x1EC840u;
            goto label_1ec840;
        }
    }
    ctx->pc = 0x1EC81Cu;
    // 0x1ec81c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec820: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec824: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec828: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC828u;
    SET_GPR_U32(ctx, 31, 0x1EC830u);
    ctx->pc = 0x1EC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC828u;
    // 0x1ec82c: 0x2406007a  addiu       $a2, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC828u, 0x1EC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC830u;
label_1ec830:
    // 0x1ec830: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC830u;
    {
        const bool branch_taken_0x1ec830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC830u;
        // 0x1ec834: 0x2402009a  addiu       $v0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec830) {
            ctx->pc = 0x1EC840u;
            goto label_1ec840;
        }
    }
    ctx->pc = 0x1EC838u;
    // 0x1ec838: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1EC838u;
    {
        const bool branch_taken_0x1ec838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC838u;
        // 0x1ec83c: 0x2410007d  addiu       $s0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec838) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC840u;
label_1ec840:
    // 0x1ec840: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC840u;
    {
        const bool branch_taken_0x1ec840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC840u;
        // 0x1ec844: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec840) {
            ctx->pc = 0x1EC86Cu;
            goto label_1ec86c;
        }
    }
    ctx->pc = 0x1EC848u;
    // 0x1ec848: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec84c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec850: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec854: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC854u;
    SET_GPR_U32(ctx, 31, 0x1EC85Cu);
    ctx->pc = 0x1EC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC854u;
    // 0x1ec858: 0x2406009a  addiu       $a2, $zero, 0x9A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC854u, 0x1EC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC85Cu;
label_1ec85c:
    // 0x1ec85c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC85Cu;
    {
        const bool branch_taken_0x1ec85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC85Cu;
        // 0x1ec860: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec85c) {
            ctx->pc = 0x1EC86Cu;
            goto label_1ec86c;
        }
    }
    ctx->pc = 0x1EC864u;
    // 0x1ec864: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1EC864u;
    {
        const bool branch_taken_0x1ec864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0x2410009c  addiu       $s0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec864) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC86Cu;
label_1ec86c:
    // 0x1ec86c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC86Cu;
    {
        const bool branch_taken_0x1ec86c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC86Cu;
        // 0x1ec870: 0x240201a5  addiu       $v0, $zero, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec86c) {
            ctx->pc = 0x1EC898u;
            goto label_1ec898;
        }
    }
    ctx->pc = 0x1EC874u;
    // 0x1ec874: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec878: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec87c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec880: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC880u;
    SET_GPR_U32(ctx, 31, 0x1EC888u);
    ctx->pc = 0x1EC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC880u;
    // 0x1ec884: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC880u, 0x1EC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC888u;
label_1ec888:
    // 0x1ec888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC888u;
    {
        const bool branch_taken_0x1ec888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC888u;
        // 0x1ec88c: 0x240201a5  addiu       $v0, $zero, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec888) {
            ctx->pc = 0x1EC898u;
            goto label_1ec898;
        }
    }
    ctx->pc = 0x1EC890u;
    // 0x1ec890: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1EC890u;
    {
        const bool branch_taken_0x1ec890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC890u;
        // 0x1ec894: 0x241001a1  addiu       $s0, $zero, 0x1A1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec890) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC898u;
label_1ec898:
    // 0x1ec898: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC898u;
    {
        const bool branch_taken_0x1ec898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC898u;
        // 0x1ec89c: 0x2402013b  addiu       $v0, $zero, 0x13B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec898) {
            ctx->pc = 0x1EC8C4u;
            goto label_1ec8c4;
        }
    }
    ctx->pc = 0x1EC8A0u;
    // 0x1ec8a0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec8a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec8a8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec8ac: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC8ACu;
    SET_GPR_U32(ctx, 31, 0x1EC8B4u);
    ctx->pc = 0x1EC8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8ACu;
    // 0x1ec8b0: 0x240601a5  addiu       $a2, $zero, 0x1A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 421));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC8ACu, 0x1EC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8B4u;
label_1ec8b4:
    // 0x1ec8b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC8B4u;
    {
        const bool branch_taken_0x1ec8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8B4u;
        // 0x1ec8b8: 0x2402013b  addiu       $v0, $zero, 0x13B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8b4) {
            ctx->pc = 0x1EC8C4u;
            goto label_1ec8c4;
        }
    }
    ctx->pc = 0x1EC8BCu;
    // 0x1ec8bc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1EC8BCu;
    {
        const bool branch_taken_0x1ec8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8BCu;
        // 0x1ec8c0: 0x241001a2  addiu       $s0, $zero, 0x1A2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8bc) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC8C4u;
label_1ec8c4:
    // 0x1ec8c4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC8C4u;
    {
        const bool branch_taken_0x1ec8c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8C4u;
        // 0x1ec8c8: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8c4) {
            ctx->pc = 0x1EC8F0u;
            goto label_1ec8f0;
        }
    }
    ctx->pc = 0x1EC8CCu;
    // 0x1ec8cc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec8d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec8d4: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec8d8: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC8D8u;
    SET_GPR_U32(ctx, 31, 0x1EC8E0u);
    ctx->pc = 0x1EC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8D8u;
    // 0x1ec8dc: 0x2406013b  addiu       $a2, $zero, 0x13B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC8D8u, 0x1EC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8E0u;
label_1ec8e0:
    // 0x1ec8e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC8E0u;
    {
        const bool branch_taken_0x1ec8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8E0u;
        // 0x1ec8e4: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8e0) {
            ctx->pc = 0x1EC8F0u;
            goto label_1ec8f0;
        }
    }
    ctx->pc = 0x1EC8E8u;
    // 0x1ec8e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1EC8E8u;
    {
        const bool branch_taken_0x1ec8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8E8u;
        // 0x1ec8ec: 0x241001a3  addiu       $s0, $zero, 0x1A3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8e8) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC8F0u;
label_1ec8f0:
    // 0x1ec8f0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC8F0u;
    {
        const bool branch_taken_0x1ec8f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8F0u;
        // 0x1ec8f4: 0x24020106  addiu       $v0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8f0) {
            ctx->pc = 0x1EC91Cu;
            goto label_1ec91c;
        }
    }
    ctx->pc = 0x1EC8F8u;
    // 0x1ec8f8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec8fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec900: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec904: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC904u;
    SET_GPR_U32(ctx, 31, 0x1EC90Cu);
    ctx->pc = 0x1EC908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC904u;
    // 0x1ec908: 0x24060103  addiu       $a2, $zero, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC904u, 0x1EC90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC90Cu;
label_1ec90c:
    // 0x1ec90c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC90Cu;
    {
        const bool branch_taken_0x1ec90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC90Cu;
        // 0x1ec910: 0x24020106  addiu       $v0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec90c) {
            ctx->pc = 0x1EC91Cu;
            goto label_1ec91c;
        }
    }
    ctx->pc = 0x1EC914u;
    // 0x1ec914: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EC914u;
    {
        const bool branch_taken_0x1ec914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC914u;
        // 0x1ec918: 0x241000fd  addiu       $s0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec914) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC91Cu;
label_1ec91c:
    // 0x1ec91c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC91Cu;
    {
        const bool branch_taken_0x1ec91c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC91Cu;
        // 0x1ec920: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec91c) {
            ctx->pc = 0x1EC948u;
            goto label_1ec948;
        }
    }
    ctx->pc = 0x1EC924u;
    // 0x1ec924: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec928: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec92c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec930: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC930u;
    SET_GPR_U32(ctx, 31, 0x1EC938u);
    ctx->pc = 0x1EC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC930u;
    // 0x1ec934: 0x24060106  addiu       $a2, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC930u, 0x1EC938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC938u;
label_1ec938:
    // 0x1ec938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC938u;
    {
        const bool branch_taken_0x1ec938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC938u;
        // 0x1ec93c: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec938) {
            ctx->pc = 0x1EC948u;
            goto label_1ec948;
        }
    }
    ctx->pc = 0x1EC940u;
    // 0x1ec940: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC940u;
    {
        const bool branch_taken_0x1ec940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC940u;
        // 0x1ec944: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec940) {
            ctx->pc = 0x1EC96Cu;
            goto label_1ec96c;
        }
    }
    ctx->pc = 0x1EC948u;
label_1ec948:
    // 0x1ec948: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC948u;
    {
        const bool branch_taken_0x1ec948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC948u;
        // 0x1ec94c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec948) {
            ctx->pc = 0x1EC970u;
            goto label_1ec970;
        }
    }
    ctx->pc = 0x1EC950u;
    // 0x1ec950: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ec950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ec954: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec958: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x1ec95c: 0xc10904c  jal         func_424130
    ctx->pc = 0x1EC95Cu;
    SET_GPR_U32(ctx, 31, 0x1EC964u);
    ctx->pc = 0x1EC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC95Cu;
    // 0x1ec960: 0x24060105  addiu       $a2, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1EC95Cu, 0x1EC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC964u;
label_1ec964:
    // 0x1ec964: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x1ec964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1ec968: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1ec968u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1ec96c:
    // 0x1ec96c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec970:
    // 0x1ec970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec974: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec978: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC978u;
        // 0x1ec97c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC980u;
}

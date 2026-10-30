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

// Function: sub_001DE488
// Address: 0x1de488 - 0x1de6c0
void sub_001DE488_0x1de488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE488_0x1de488");
#endif

    switch (ctx->pc) {
        case 0x1de488u: goto label_1de488;
        case 0x1de48cu: goto label_1de48c;
        case 0x1de490u: goto label_1de490;
        case 0x1de494u: goto label_1de494;
        case 0x1de498u: goto label_1de498;
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a0u: goto label_1de4a0;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4a8u: goto label_1de4a8;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4b0u: goto label_1de4b0;
        case 0x1de4b4u: goto label_1de4b4;
        case 0x1de4b8u: goto label_1de4b8;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4ccu: goto label_1de4cc;
        case 0x1de4d0u: goto label_1de4d0;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4d8u: goto label_1de4d8;
        case 0x1de4dcu: goto label_1de4dc;
        case 0x1de4e0u: goto label_1de4e0;
        case 0x1de4e4u: goto label_1de4e4;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de4ecu: goto label_1de4ec;
        case 0x1de4f0u: goto label_1de4f0;
        case 0x1de4f4u: goto label_1de4f4;
        case 0x1de4f8u: goto label_1de4f8;
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de500u: goto label_1de500;
        case 0x1de504u: goto label_1de504;
        case 0x1de508u: goto label_1de508;
        case 0x1de50cu: goto label_1de50c;
        case 0x1de510u: goto label_1de510;
        case 0x1de514u: goto label_1de514;
        case 0x1de518u: goto label_1de518;
        case 0x1de51cu: goto label_1de51c;
        case 0x1de520u: goto label_1de520;
        case 0x1de524u: goto label_1de524;
        case 0x1de528u: goto label_1de528;
        case 0x1de52cu: goto label_1de52c;
        case 0x1de530u: goto label_1de530;
        case 0x1de534u: goto label_1de534;
        case 0x1de538u: goto label_1de538;
        case 0x1de53cu: goto label_1de53c;
        case 0x1de540u: goto label_1de540;
        case 0x1de544u: goto label_1de544;
        case 0x1de548u: goto label_1de548;
        case 0x1de54cu: goto label_1de54c;
        case 0x1de550u: goto label_1de550;
        case 0x1de554u: goto label_1de554;
        case 0x1de558u: goto label_1de558;
        case 0x1de55cu: goto label_1de55c;
        case 0x1de560u: goto label_1de560;
        case 0x1de564u: goto label_1de564;
        case 0x1de568u: goto label_1de568;
        case 0x1de56cu: goto label_1de56c;
        case 0x1de570u: goto label_1de570;
        case 0x1de574u: goto label_1de574;
        case 0x1de578u: goto label_1de578;
        case 0x1de57cu: goto label_1de57c;
        case 0x1de580u: goto label_1de580;
        case 0x1de584u: goto label_1de584;
        case 0x1de588u: goto label_1de588;
        case 0x1de58cu: goto label_1de58c;
        case 0x1de590u: goto label_1de590;
        case 0x1de594u: goto label_1de594;
        case 0x1de598u: goto label_1de598;
        case 0x1de59cu: goto label_1de59c;
        case 0x1de5a0u: goto label_1de5a0;
        case 0x1de5a4u: goto label_1de5a4;
        case 0x1de5a8u: goto label_1de5a8;
        case 0x1de5acu: goto label_1de5ac;
        case 0x1de5b0u: goto label_1de5b0;
        case 0x1de5b4u: goto label_1de5b4;
        case 0x1de5b8u: goto label_1de5b8;
        case 0x1de5bcu: goto label_1de5bc;
        case 0x1de5c0u: goto label_1de5c0;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5c8u: goto label_1de5c8;
        case 0x1de5ccu: goto label_1de5cc;
        case 0x1de5d0u: goto label_1de5d0;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5d8u: goto label_1de5d8;
        case 0x1de5dcu: goto label_1de5dc;
        case 0x1de5e0u: goto label_1de5e0;
        case 0x1de5e4u: goto label_1de5e4;
        case 0x1de5e8u: goto label_1de5e8;
        case 0x1de5ecu: goto label_1de5ec;
        case 0x1de5f0u: goto label_1de5f0;
        case 0x1de5f4u: goto label_1de5f4;
        case 0x1de5f8u: goto label_1de5f8;
        case 0x1de5fcu: goto label_1de5fc;
        case 0x1de600u: goto label_1de600;
        case 0x1de604u: goto label_1de604;
        case 0x1de608u: goto label_1de608;
        case 0x1de60cu: goto label_1de60c;
        case 0x1de610u: goto label_1de610;
        case 0x1de614u: goto label_1de614;
        case 0x1de618u: goto label_1de618;
        case 0x1de61cu: goto label_1de61c;
        case 0x1de620u: goto label_1de620;
        case 0x1de624u: goto label_1de624;
        case 0x1de628u: goto label_1de628;
        case 0x1de62cu: goto label_1de62c;
        case 0x1de630u: goto label_1de630;
        case 0x1de634u: goto label_1de634;
        case 0x1de638u: goto label_1de638;
        case 0x1de63cu: goto label_1de63c;
        case 0x1de640u: goto label_1de640;
        case 0x1de644u: goto label_1de644;
        case 0x1de648u: goto label_1de648;
        case 0x1de64cu: goto label_1de64c;
        case 0x1de650u: goto label_1de650;
        case 0x1de654u: goto label_1de654;
        case 0x1de658u: goto label_1de658;
        case 0x1de65cu: goto label_1de65c;
        case 0x1de660u: goto label_1de660;
        case 0x1de664u: goto label_1de664;
        case 0x1de668u: goto label_1de668;
        case 0x1de66cu: goto label_1de66c;
        case 0x1de670u: goto label_1de670;
        case 0x1de674u: goto label_1de674;
        case 0x1de678u: goto label_1de678;
        case 0x1de67cu: goto label_1de67c;
        case 0x1de680u: goto label_1de680;
        case 0x1de684u: goto label_1de684;
        case 0x1de688u: goto label_1de688;
        case 0x1de68cu: goto label_1de68c;
        case 0x1de690u: goto label_1de690;
        case 0x1de694u: goto label_1de694;
        case 0x1de698u: goto label_1de698;
        case 0x1de69cu: goto label_1de69c;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6a4u: goto label_1de6a4;
        case 0x1de6a8u: goto label_1de6a8;
        case 0x1de6acu: goto label_1de6ac;
        case 0x1de6b0u: goto label_1de6b0;
        case 0x1de6b4u: goto label_1de6b4;
        case 0x1de6b8u: goto label_1de6b8;
        case 0x1de6bcu: goto label_1de6bc;
        default: break;
    }

    ctx->pc = 0x1de488u;

label_1de488:
    // 0x1de488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1de48c:
    // 0x1de48c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1de490:
    // 0x1de490: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1de494:
    // 0x1de494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de498:
    // 0x1de498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1de49c:
    // 0x1de49c: 0xae203a74  sw          $zero, 0x3A74($s1)
    ctx->pc = 0x1de49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14964), GPR_U32(ctx, 0));
label_1de4a0:
    // 0x1de4a0: 0x8e221ba8  lw          $v0, 0x1BA8($s1)
    ctx->pc = 0x1de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7080)));
label_1de4a4:
    // 0x1de4a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de4a8:
    if (ctx->pc == 0x1DE4A8u) {
        ctx->pc = 0x1DE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4A4u;
        // 0x1de4a8: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4ACu;
        goto label_1de4ac;
    }
    ctx->pc = 0x1DE4A4u;
    {
        const bool branch_taken_0x1de4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4A4u;
        // 0x1de4a8: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4a4) {
            ctx->pc = 0x1DE4B8u;
            goto label_1de4b8;
        }
    }
    ctx->pc = 0x1DE4ACu;
label_1de4ac:
    // 0x1de4ac: 0xae201ba8  sw          $zero, 0x1BA8($s1)
    ctx->pc = 0x1de4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7080), GPR_U32(ctx, 0));
label_1de4b0:
    // 0x1de4b0: 0x10000048  b           . + 4 + (0x48 << 2)
label_1de4b4:
    if (ctx->pc == 0x1DE4B4u) {
        ctx->pc = 0x1DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4B0u;
        // 0x1de4b4: 0x26302dd0  addiu       $s0, $s1, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4B8u;
        goto label_1de4b8;
    }
    ctx->pc = 0x1DE4B0u;
    {
        const bool branch_taken_0x1de4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4B0u;
        // 0x1de4b4: 0x26302dd0  addiu       $s0, $s1, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4b0) {
            ctx->pc = 0x1DE5D4u;
            goto label_1de5d4;
        }
    }
    ctx->pc = 0x1DE4B8u;
label_1de4b8:
    // 0x1de4b8: 0x8e223a78  lw          $v0, 0x3A78($s1)
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14968)));
label_1de4bc:
    // 0x1de4bc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1de4c0:
    if (ctx->pc == 0x1DE4C0u) {
        ctx->pc = 0x1DE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4BCu;
        // 0x1de4c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4C4u;
        goto label_1de4c4;
    }
    ctx->pc = 0x1DE4BCu;
    {
        const bool branch_taken_0x1de4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4BCu;
        // 0x1de4c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4bc) {
            ctx->pc = 0x1DE554u;
            goto label_1de554;
        }
    }
    ctx->pc = 0x1DE4C4u;
label_1de4c4:
    // 0x1de4c4: 0x8c43ecec  lw          $v1, -0x1314($v0)
    ctx->pc = 0x1de4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1de4c8:
    // 0x1de4c8: 0x8c6445d0  lw          $a0, 0x45D0($v1)
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17872)));
label_1de4cc:
    // 0x1de4cc: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1de4d0:
    if (ctx->pc == 0x1DE4D0u) {
        ctx->pc = 0x1DE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4CCu;
        // 0x1de4d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4D4u;
        goto label_1de4d4;
    }
    ctx->pc = 0x1DE4CCu;
    {
        const bool branch_taken_0x1de4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4CCu;
        // 0x1de4d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4cc) {
            ctx->pc = 0x1DE554u;
            goto label_1de554;
        }
    }
    ctx->pc = 0x1DE4D4u;
label_1de4d4:
    // 0x1de4d4: 0x8e223a80  lw          $v0, 0x3A80($s1)
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14976)));
label_1de4d8:
    // 0x1de4d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de4dc:
    if (ctx->pc == 0x1DE4DCu) {
        ctx->pc = 0x1DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D8u;
        // 0x1de4dc: 0xae203a78  sw          $zero, 0x3A78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4E0u;
        goto label_1de4e0;
    }
    ctx->pc = 0x1DE4D8u;
    {
        const bool branch_taken_0x1de4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D8u;
        // 0x1de4dc: 0xae203a78  sw          $zero, 0x3A78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4d8) {
            ctx->pc = 0x1DE4FCu;
            goto label_1de4fc;
        }
    }
    ctx->pc = 0x1DE4E0u;
label_1de4e0:
    // 0x1de4e0: 0xc067b9c  jal         func_19EE70
label_1de4e4:
    if (ctx->pc == 0x1DE4E4u) {
        ctx->pc = 0x1DE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4E0u;
        // 0x1de4e4: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4E8u;
        goto label_1de4e8;
    }
    ctx->pc = 0x1DE4E0u;
    SET_GPR_U32(ctx, 31, 0x1DE4E8u);
    ctx->pc = 0x1DE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4E0u;
    // 0x1de4e4: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE4E0u, 0x1DE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4E8u;
label_1de4e8:
    // 0x1de4e8: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de4ec:
    // 0x1de4ec: 0xc079f96  jal         func_1E7E58
label_1de4f0:
    if (ctx->pc == 0x1DE4F0u) {
        ctx->pc = 0x1DE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4ECu;
        // 0x1de4f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4F4u;
        goto label_1de4f4;
    }
    ctx->pc = 0x1DE4ECu;
    SET_GPR_U32(ctx, 31, 0x1DE4F4u);
    ctx->pc = 0x1DE4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4ECu;
    // 0x1de4f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE4ECu, 0x1DE4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4F4u;
label_1de4f4:
    // 0x1de4f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de4f8:
    if (ctx->pc == 0x1DE4F8u) {
        ctx->pc = 0x1DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F4u;
        // 0x1de4f8: 0x8e242af0  lw          $a0, 0x2AF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4FCu;
        goto label_1de4fc;
    }
    ctx->pc = 0x1DE4F4u;
    {
        const bool branch_taken_0x1de4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F4u;
        // 0x1de4f8: 0x8e242af0  lw          $a0, 0x2AF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f4) {
            ctx->pc = 0x1DE514u;
            goto label_1de514;
        }
    }
    ctx->pc = 0x1DE4FCu;
label_1de4fc:
    // 0x1de4fc: 0xc067b9c  jal         func_19EE70
label_1de500:
    if (ctx->pc == 0x1DE500u) {
        ctx->pc = 0x1DE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4FCu;
        // 0x1de500: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE504u;
        goto label_1de504;
    }
    ctx->pc = 0x1DE4FCu;
    SET_GPR_U32(ctx, 31, 0x1DE504u);
    ctx->pc = 0x1DE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4FCu;
    // 0x1de500: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE4FCu, 0x1DE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE504u;
label_1de504:
    // 0x1de504: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de508:
    // 0x1de508: 0xc079f96  jal         func_1E7E58
label_1de50c:
    if (ctx->pc == 0x1DE50Cu) {
        ctx->pc = 0x1DE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE508u;
        // 0x1de50c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE510u;
        goto label_1de510;
    }
    ctx->pc = 0x1DE508u;
    SET_GPR_U32(ctx, 31, 0x1DE510u);
    ctx->pc = 0x1DE50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE508u;
    // 0x1de50c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE508u, 0x1DE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE510u;
label_1de510:
    // 0x1de510: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de514:
    // 0x1de514: 0xc079f9e  jal         func_1E7E78
label_1de518:
    if (ctx->pc == 0x1DE518u) {
        ctx->pc = 0x1DE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE514u;
        // 0x1de518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE51Cu;
        goto label_1de51c;
    }
    ctx->pc = 0x1DE514u;
    SET_GPR_U32(ctx, 31, 0x1DE51Cu);
    ctx->pc = 0x1DE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE514u;
    // 0x1de518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE514u, 0x1DE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE51Cu;
label_1de51c:
    // 0x1de51c: 0x8e05ecec  lw          $a1, -0x1314($s0)
    ctx->pc = 0x1de51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962412)));
label_1de520:
    // 0x1de520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1de520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1de524:
    // 0x1de524: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1de524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1de528:
    // 0x1de528: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1de528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1de52c:
    // 0x1de52c: 0x60f809  jalr        $v1
label_1de530:
    if (ctx->pc == 0x1DE530u) {
        ctx->pc = 0x1DE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE52Cu;
        // 0x1de530: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE534u;
        goto label_1de534;
    }
    ctx->pc = 0x1DE52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DE534u);
        ctx->pc = 0x1DE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE52Cu;
        // 0x1de530: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE52Cu, 0x1DE534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE534u;
label_1de534:
    // 0x1de534: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1de534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1de538:
    // 0x1de538: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1de538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1de53c:
    // 0x1de53c: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x1de53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_1de540:
    // 0x1de540: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_1de544:
    if (ctx->pc == 0x1DE544u) {
        ctx->pc = 0x1DE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE540u;
        // 0x1de544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE548u;
        goto label_1de548;
    }
    ctx->pc = 0x1DE540u;
    {
        const bool branch_taken_0x1de540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE540u;
        // 0x1de544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de540) {
            ctx->pc = 0x1DE6ACu;
            goto label_1de6ac;
        }
    }
    ctx->pc = 0x1DE548u;
label_1de548:
    // 0x1de548: 0xae221b7c  sw          $v0, 0x1B7C($s1)
    ctx->pc = 0x1de548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7036), GPR_U32(ctx, 2));
label_1de54c:
    // 0x1de54c: 0x10000057  b           . + 4 + (0x57 << 2)
label_1de550:
    if (ctx->pc == 0x1DE550u) {
        ctx->pc = 0x1DE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE54Cu;
        // 0x1de550: 0xac80011c  sw          $zero, 0x11C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE554u;
        goto label_1de554;
    }
    ctx->pc = 0x1DE54Cu;
    {
        const bool branch_taken_0x1de54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE54Cu;
        // 0x1de550: 0xac80011c  sw          $zero, 0x11C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de54c) {
            ctx->pc = 0x1DE6ACu;
            goto label_1de6ac;
        }
    }
    ctx->pc = 0x1DE554u;
label_1de554:
    // 0x1de554: 0x8e221ba4  lw          $v0, 0x1BA4($s1)
    ctx->pc = 0x1de554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7076)));
label_1de558:
    // 0x1de558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1de55c:
    if (ctx->pc == 0x1DE55Cu) {
        ctx->pc = 0x1DE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE558u;
        // 0x1de55c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE560u;
        goto label_1de560;
    }
    ctx->pc = 0x1DE558u;
    {
        const bool branch_taken_0x1de558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE558u;
        // 0x1de55c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de558) {
            ctx->pc = 0x1DE574u;
            goto label_1de574;
        }
    }
    ctx->pc = 0x1DE560u;
label_1de560:
    // 0x1de560: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de564:
    // 0x1de564: 0xae201ba4  sw          $zero, 0x1BA4($s1)
    ctx->pc = 0x1de564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7076), GPR_U32(ctx, 0));
label_1de568:
    // 0x1de568: 0x26302dd0  addiu       $s0, $s1, 0x2DD0
    ctx->pc = 0x1de568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
label_1de56c:
    // 0x1de56c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1de570:
    if (ctx->pc == 0x1DE570u) {
        ctx->pc = 0x1DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE56Cu;
        // 0x1de570: 0xae203bb4  sw          $zero, 0x3BB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE574u;
        goto label_1de574;
    }
    ctx->pc = 0x1DE56Cu;
    {
        const bool branch_taken_0x1de56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE56Cu;
        // 0x1de570: 0xae203bb4  sw          $zero, 0x3BB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de56c) {
            ctx->pc = 0x1DE5C8u;
            goto label_1de5c8;
        }
    }
    ctx->pc = 0x1DE574u;
label_1de574:
    // 0x1de574: 0x8e223a7c  lw          $v0, 0x3A7C($s1)
    ctx->pc = 0x1de574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14972)));
label_1de578:
    // 0x1de578: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_1de57c:
    if (ctx->pc == 0x1DE57Cu) {
        ctx->pc = 0x1DE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE578u;
        // 0x1de57c: 0x8e221bb4  lw          $v0, 0x1BB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE580u;
        goto label_1de580;
    }
    ctx->pc = 0x1DE578u;
    {
        const bool branch_taken_0x1de578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de578) {
            ctx->pc = 0x1DE57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE578u;
            // 0x1de57c: 0x8e221bb4  lw          $v0, 0x1BB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE5F0u;
            goto label_1de5f0;
        }
    }
    ctx->pc = 0x1DE580u;
label_1de580:
    // 0x1de580: 0x8e223a80  lw          $v0, 0x3A80($s1)
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14976)));
label_1de584:
    // 0x1de584: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de588:
    if (ctx->pc == 0x1DE588u) {
        ctx->pc = 0x1DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE584u;
        // 0x1de588: 0xae203a7c  sw          $zero, 0x3A7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE58Cu;
        goto label_1de58c;
    }
    ctx->pc = 0x1DE584u;
    {
        const bool branch_taken_0x1de584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE584u;
        // 0x1de588: 0xae203a7c  sw          $zero, 0x3A7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de584) {
            ctx->pc = 0x1DE5A8u;
            goto label_1de5a8;
        }
    }
    ctx->pc = 0x1DE58Cu;
label_1de58c:
    // 0x1de58c: 0xc067b9c  jal         func_19EE70
label_1de590:
    if (ctx->pc == 0x1DE590u) {
        ctx->pc = 0x1DE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE58Cu;
        // 0x1de590: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE594u;
        goto label_1de594;
    }
    ctx->pc = 0x1DE58Cu;
    SET_GPR_U32(ctx, 31, 0x1DE594u);
    ctx->pc = 0x1DE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE58Cu;
    // 0x1de590: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE58Cu, 0x1DE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE594u;
label_1de594:
    // 0x1de594: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de598:
    // 0x1de598: 0xc079f96  jal         func_1E7E58
label_1de59c:
    if (ctx->pc == 0x1DE59Cu) {
        ctx->pc = 0x1DE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE598u;
        // 0x1de59c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5A0u;
        goto label_1de5a0;
    }
    ctx->pc = 0x1DE598u;
    SET_GPR_U32(ctx, 31, 0x1DE5A0u);
    ctx->pc = 0x1DE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE598u;
    // 0x1de59c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE598u, 0x1DE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5A0u;
label_1de5a0:
    // 0x1de5a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de5a4:
    if (ctx->pc == 0x1DE5A4u) {
        ctx->pc = 0x1DE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5A0u;
        // 0x1de5a4: 0x8e242af0  lw          $a0, 0x2AF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5A8u;
        goto label_1de5a8;
    }
    ctx->pc = 0x1DE5A0u;
    {
        const bool branch_taken_0x1de5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5A0u;
        // 0x1de5a4: 0x8e242af0  lw          $a0, 0x2AF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5a0) {
            ctx->pc = 0x1DE5C0u;
            goto label_1de5c0;
        }
    }
    ctx->pc = 0x1DE5A8u;
label_1de5a8:
    // 0x1de5a8: 0xc067b9c  jal         func_19EE70
label_1de5ac:
    if (ctx->pc == 0x1DE5ACu) {
        ctx->pc = 0x1DE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5A8u;
        // 0x1de5ac: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5B0u;
        goto label_1de5b0;
    }
    ctx->pc = 0x1DE5A8u;
    SET_GPR_U32(ctx, 31, 0x1DE5B0u);
    ctx->pc = 0x1DE5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5A8u;
    // 0x1de5ac: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE5A8u, 0x1DE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5B0u;
label_1de5b0:
    // 0x1de5b0: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de5b4:
    // 0x1de5b4: 0xc079f96  jal         func_1E7E58
label_1de5b8:
    if (ctx->pc == 0x1DE5B8u) {
        ctx->pc = 0x1DE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5B4u;
        // 0x1de5b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5BCu;
        goto label_1de5bc;
    }
    ctx->pc = 0x1DE5B4u;
    SET_GPR_U32(ctx, 31, 0x1DE5BCu);
    ctx->pc = 0x1DE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5B4u;
    // 0x1de5b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE5B4u, 0x1DE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5BCu;
label_1de5bc:
    // 0x1de5bc: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de5c0:
    // 0x1de5c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de5c4:
    // 0x1de5c4: 0x26302dd0  addiu       $s0, $s1, 0x2DD0
    ctx->pc = 0x1de5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
label_1de5c8:
    // 0x1de5c8: 0xc079f9e  jal         func_1E7E78
label_1de5cc:
    if (ctx->pc == 0x1DE5CCu) {
        ctx->pc = 0x1DE5D0u;
        goto label_1de5d0;
    }
    ctx->pc = 0x1DE5C8u;
    SET_GPR_U32(ctx, 31, 0x1DE5D0u);
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE5C8u, 0x1DE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5D0u;
label_1de5d0:
    // 0x1de5d0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1de5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1de5d4:
    // 0x1de5d4: 0xc067b9c  jal         func_19EE70
label_1de5d8:
    if (ctx->pc == 0x1DE5D8u) {
        ctx->pc = 0x1DE5DCu;
        goto label_1de5dc;
    }
    ctx->pc = 0x1DE5D4u;
    SET_GPR_U32(ctx, 31, 0x1DE5DCu);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE5D4u, 0x1DE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5DCu;
label_1de5dc:
    // 0x1de5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de5e0:
    // 0x1de5e0: 0xc073b0a  jal         func_1CEC28
label_1de5e4:
    if (ctx->pc == 0x1DE5E4u) {
        ctx->pc = 0x1DE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5E0u;
        // 0x1de5e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5E8u;
        goto label_1de5e8;
    }
    ctx->pc = 0x1DE5E0u;
    SET_GPR_U32(ctx, 31, 0x1DE5E8u);
    ctx->pc = 0x1DE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5E0u;
    // 0x1de5e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1DE5E0u, 0x1DE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5E8u;
label_1de5e8:
    // 0x1de5e8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1de5ec:
    if (ctx->pc == 0x1DE5ECu) {
        ctx->pc = 0x1DE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5E8u;
        // 0x1de5ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5F0u;
        goto label_1de5f0;
    }
    ctx->pc = 0x1DE5E8u;
    {
        const bool branch_taken_0x1de5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5E8u;
        // 0x1de5ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5e8) {
            ctx->pc = 0x1DE6B0u;
            goto label_1de6b0;
        }
    }
    ctx->pc = 0x1DE5F0u;
label_1de5f0:
    // 0x1de5f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1de5f4:
    if (ctx->pc == 0x1DE5F4u) {
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x8e223a80  lw          $v0, 0x3A80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14976)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5F8u;
        goto label_1de5f8;
    }
    ctx->pc = 0x1DE5F0u;
    {
        const bool branch_taken_0x1de5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de5f0) {
            ctx->pc = 0x1DE5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE5F0u;
            // 0x1de5f4: 0x8e223a80  lw          $v0, 0x3A80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE608u;
            goto label_1de608;
        }
    }
    ctx->pc = 0x1DE5F8u;
label_1de5f8:
    // 0x1de5f8: 0x8e221bb8  lw          $v0, 0x1BB8($s1)
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7096)));
label_1de5fc:
    // 0x1de5fc: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_1de600:
    if (ctx->pc == 0x1DE600u) {
        ctx->pc = 0x1DE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5FCu;
        // 0x1de600: 0x8e221bbc  lw          $v0, 0x1BBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE604u;
        goto label_1de604;
    }
    ctx->pc = 0x1DE5FCu;
    {
        const bool branch_taken_0x1de5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de5fc) {
            ctx->pc = 0x1DE600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE5FCu;
            // 0x1de600: 0x8e221bbc  lw          $v0, 0x1BBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE694u;
            goto label_1de694;
        }
    }
    ctx->pc = 0x1DE604u;
label_1de604:
    // 0x1de604: 0x8e223a80  lw          $v0, 0x3A80($s1)
    ctx->pc = 0x1de604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14976)));
label_1de608:
    // 0x1de608: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de60c:
    if (ctx->pc == 0x1DE60Cu) {
        ctx->pc = 0x1DE610u;
        goto label_1de610;
    }
    ctx->pc = 0x1DE608u;
    {
        const bool branch_taken_0x1de608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de608) {
            ctx->pc = 0x1DE62Cu;
            goto label_1de62c;
        }
    }
    ctx->pc = 0x1DE610u;
label_1de610:
    // 0x1de610: 0xc067b9c  jal         func_19EE70
label_1de614:
    if (ctx->pc == 0x1DE614u) {
        ctx->pc = 0x1DE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE610u;
        // 0x1de614: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE618u;
        goto label_1de618;
    }
    ctx->pc = 0x1DE610u;
    SET_GPR_U32(ctx, 31, 0x1DE618u);
    ctx->pc = 0x1DE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE610u;
    // 0x1de614: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE610u, 0x1DE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE618u;
label_1de618:
    // 0x1de618: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de61c:
    // 0x1de61c: 0xc079f96  jal         func_1E7E58
label_1de620:
    if (ctx->pc == 0x1DE620u) {
        ctx->pc = 0x1DE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE61Cu;
        // 0x1de620: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE624u;
        goto label_1de624;
    }
    ctx->pc = 0x1DE61Cu;
    SET_GPR_U32(ctx, 31, 0x1DE624u);
    ctx->pc = 0x1DE620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE61Cu;
    // 0x1de620: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE61Cu, 0x1DE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE624u;
label_1de624:
    // 0x1de624: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de628:
    if (ctx->pc == 0x1DE628u) {
        ctx->pc = 0x1DE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE624u;
        // 0x1de628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE62Cu;
        goto label_1de62c;
    }
    ctx->pc = 0x1DE624u;
    {
        const bool branch_taken_0x1de624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE624u;
        // 0x1de628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de624) {
            ctx->pc = 0x1DE644u;
            goto label_1de644;
        }
    }
    ctx->pc = 0x1DE62Cu;
label_1de62c:
    // 0x1de62c: 0xc067b9c  jal         func_19EE70
label_1de630:
    if (ctx->pc == 0x1DE630u) {
        ctx->pc = 0x1DE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE62Cu;
        // 0x1de630: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE634u;
        goto label_1de634;
    }
    ctx->pc = 0x1DE62Cu;
    SET_GPR_U32(ctx, 31, 0x1DE634u);
    ctx->pc = 0x1DE630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE62Cu;
    // 0x1de630: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE62Cu, 0x1DE634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE634u;
label_1de634:
    // 0x1de634: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de638:
    // 0x1de638: 0xc079f96  jal         func_1E7E58
label_1de63c:
    if (ctx->pc == 0x1DE63Cu) {
        ctx->pc = 0x1DE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE638u;
        // 0x1de63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE640u;
        goto label_1de640;
    }
    ctx->pc = 0x1DE638u;
    SET_GPR_U32(ctx, 31, 0x1DE640u);
    ctx->pc = 0x1DE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE638u;
    // 0x1de63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE638u, 0x1DE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE640u;
label_1de640:
    // 0x1de640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de644:
    // 0x1de644: 0xc069538  jal         func_1A54E0
label_1de648:
    if (ctx->pc == 0x1DE648u) {
        ctx->pc = 0x1DE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE644u;
        // 0x1de648: 0x262420d0  addiu       $a0, $s1, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE64Cu;
        goto label_1de64c;
    }
    ctx->pc = 0x1DE644u;
    SET_GPR_U32(ctx, 31, 0x1DE64Cu);
    ctx->pc = 0x1DE648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE644u;
    // 0x1de648: 0x262420d0  addiu       $a0, $s1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DE644u, 0x1DE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE64Cu;
label_1de64c:
    // 0x1de64c: 0xc067b9c  jal         func_19EE70
label_1de650:
    if (ctx->pc == 0x1DE650u) {
        ctx->pc = 0x1DE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE64Cu;
        // 0x1de650: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE654u;
        goto label_1de654;
    }
    ctx->pc = 0x1DE64Cu;
    SET_GPR_U32(ctx, 31, 0x1DE654u);
    ctx->pc = 0x1DE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE64Cu;
    // 0x1de650: 0x240400e9  addiu       $a0, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DE64Cu, 0x1DE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE654u;
label_1de654:
    // 0x1de654: 0x8e242af4  lw          $a0, 0x2AF4($s1)
    ctx->pc = 0x1de654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10996)));
label_1de658:
    // 0x1de658: 0xc079f96  jal         func_1E7E58
label_1de65c:
    if (ctx->pc == 0x1DE65Cu) {
        ctx->pc = 0x1DE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE658u;
        // 0x1de65c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE660u;
        goto label_1de660;
    }
    ctx->pc = 0x1DE658u;
    SET_GPR_U32(ctx, 31, 0x1DE660u);
    ctx->pc = 0x1DE65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE658u;
    // 0x1de65c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E58u, 0x1DE658u, 0x1DE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE660u;
label_1de660:
    // 0x1de660: 0x26242430  addiu       $a0, $s1, 0x2430
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9264));
label_1de664:
    // 0x1de664: 0xc069538  jal         func_1A54E0
label_1de668:
    if (ctx->pc == 0x1DE668u) {
        ctx->pc = 0x1DE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE664u;
        // 0x1de668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE66Cu;
        goto label_1de66c;
    }
    ctx->pc = 0x1DE664u;
    SET_GPR_U32(ctx, 31, 0x1DE66Cu);
    ctx->pc = 0x1DE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE664u;
    // 0x1de668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1DE664u, 0x1DE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE66Cu;
label_1de66c:
    // 0x1de66c: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de670:
    // 0x1de670: 0xc079f9e  jal         func_1E7E78
label_1de674:
    if (ctx->pc == 0x1DE674u) {
        ctx->pc = 0x1DE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE670u;
        // 0x1de674: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE678u;
        goto label_1de678;
    }
    ctx->pc = 0x1DE670u;
    SET_GPR_U32(ctx, 31, 0x1DE678u);
    ctx->pc = 0x1DE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE670u;
    // 0x1de674: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE670u, 0x1DE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE678u;
label_1de678:
    // 0x1de678: 0x8e242af4  lw          $a0, 0x2AF4($s1)
    ctx->pc = 0x1de678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10996)));
label_1de67c:
    // 0x1de67c: 0xc079f9e  jal         func_1E7E78
label_1de680:
    if (ctx->pc == 0x1DE680u) {
        ctx->pc = 0x1DE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE67Cu;
        // 0x1de680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE684u;
        goto label_1de684;
    }
    ctx->pc = 0x1DE67Cu;
    SET_GPR_U32(ctx, 31, 0x1DE684u);
    ctx->pc = 0x1DE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE67Cu;
    // 0x1de680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1DE67Cu, 0x1DE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE684u;
label_1de684:
    // 0x1de684: 0xae201bb0  sw          $zero, 0x1BB0($s1)
    ctx->pc = 0x1de684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7088), GPR_U32(ctx, 0));
label_1de688:
    // 0x1de688: 0xae201bb4  sw          $zero, 0x1BB4($s1)
    ctx->pc = 0x1de688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7092), GPR_U32(ctx, 0));
label_1de68c:
    // 0x1de68c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de690:
    if (ctx->pc == 0x1DE690u) {
        ctx->pc = 0x1DE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE68Cu;
        // 0x1de690: 0xae201bb8  sw          $zero, 0x1BB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE694u;
        goto label_1de694;
    }
    ctx->pc = 0x1DE68Cu;
    {
        const bool branch_taken_0x1de68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE68Cu;
        // 0x1de690: 0xae201bb8  sw          $zero, 0x1BB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de68c) {
            ctx->pc = 0x1DE6ACu;
            goto label_1de6ac;
        }
    }
    ctx->pc = 0x1DE694u;
label_1de694:
    // 0x1de694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1de698:
    if (ctx->pc == 0x1DE698u) {
        ctx->pc = 0x1DE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE694u;
        // 0x1de698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE69Cu;
        goto label_1de69c;
    }
    ctx->pc = 0x1DE694u;
    {
        const bool branch_taken_0x1de694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE694u;
        // 0x1de698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de694) {
            ctx->pc = 0x1DE6B0u;
            goto label_1de6b0;
        }
    }
    ctx->pc = 0x1DE69Cu;
label_1de69c:
    // 0x1de69c: 0x8e242af0  lw          $a0, 0x2AF0($s1)
    ctx->pc = 0x1de69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10992)));
label_1de6a0:
    // 0x1de6a0: 0xc079faa  jal         func_1E7EA8
label_1de6a4:
    if (ctx->pc == 0x1DE6A4u) {
        ctx->pc = 0x1DE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6A0u;
        // 0x1de6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6A8u;
        goto label_1de6a8;
    }
    ctx->pc = 0x1DE6A0u;
    SET_GPR_U32(ctx, 31, 0x1DE6A8u);
    ctx->pc = 0x1DE6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6A0u;
    // 0x1de6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DE6A0u, 0x1DE6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6A8u;
label_1de6a8:
    // 0x1de6a8: 0xae201bbc  sw          $zero, 0x1BBC($s1)
    ctx->pc = 0x1de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7100), GPR_U32(ctx, 0));
label_1de6ac:
    // 0x1de6ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1de6b0:
    // 0x1de6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de6b4:
    // 0x1de6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de6b8:
    // 0x1de6b8: 0x3e00008  jr          $ra
label_1de6bc:
    if (ctx->pc == 0x1DE6BCu) {
        ctx->pc = 0x1DE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6B8u;
        // 0x1de6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6C0u;
        goto label_fallthrough_0x1de6b8;
    }
    ctx->pc = 0x1DE6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6B8u;
        // 0x1de6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1de6b8:
    ctx->pc = 0x1DE6C0u;
}

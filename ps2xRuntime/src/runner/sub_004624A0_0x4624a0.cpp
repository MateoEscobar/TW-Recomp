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

// Function: sub_004624A0
// Address: 0x4624a0 - 0x4626c0
void sub_004624A0_0x4624a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004624A0_0x4624a0");
#endif

    switch (ctx->pc) {
        case 0x4624a0u: goto label_4624a0;
        case 0x4624a4u: goto label_4624a4;
        case 0x4624a8u: goto label_4624a8;
        case 0x4624acu: goto label_4624ac;
        case 0x4624b0u: goto label_4624b0;
        case 0x4624b4u: goto label_4624b4;
        case 0x4624b8u: goto label_4624b8;
        case 0x4624bcu: goto label_4624bc;
        case 0x4624c0u: goto label_4624c0;
        case 0x4624c4u: goto label_4624c4;
        case 0x4624c8u: goto label_4624c8;
        case 0x4624ccu: goto label_4624cc;
        case 0x4624d0u: goto label_4624d0;
        case 0x4624d4u: goto label_4624d4;
        case 0x4624d8u: goto label_4624d8;
        case 0x4624dcu: goto label_4624dc;
        case 0x4624e0u: goto label_4624e0;
        case 0x4624e4u: goto label_4624e4;
        case 0x4624e8u: goto label_4624e8;
        case 0x4624ecu: goto label_4624ec;
        case 0x4624f0u: goto label_4624f0;
        case 0x4624f4u: goto label_4624f4;
        case 0x4624f8u: goto label_4624f8;
        case 0x4624fcu: goto label_4624fc;
        case 0x462500u: goto label_462500;
        case 0x462504u: goto label_462504;
        case 0x462508u: goto label_462508;
        case 0x46250cu: goto label_46250c;
        case 0x462510u: goto label_462510;
        case 0x462514u: goto label_462514;
        case 0x462518u: goto label_462518;
        case 0x46251cu: goto label_46251c;
        case 0x462520u: goto label_462520;
        case 0x462524u: goto label_462524;
        case 0x462528u: goto label_462528;
        case 0x46252cu: goto label_46252c;
        case 0x462530u: goto label_462530;
        case 0x462534u: goto label_462534;
        case 0x462538u: goto label_462538;
        case 0x46253cu: goto label_46253c;
        case 0x462540u: goto label_462540;
        case 0x462544u: goto label_462544;
        case 0x462548u: goto label_462548;
        case 0x46254cu: goto label_46254c;
        case 0x462550u: goto label_462550;
        case 0x462554u: goto label_462554;
        case 0x462558u: goto label_462558;
        case 0x46255cu: goto label_46255c;
        case 0x462560u: goto label_462560;
        case 0x462564u: goto label_462564;
        case 0x462568u: goto label_462568;
        case 0x46256cu: goto label_46256c;
        case 0x462570u: goto label_462570;
        case 0x462574u: goto label_462574;
        case 0x462578u: goto label_462578;
        case 0x46257cu: goto label_46257c;
        case 0x462580u: goto label_462580;
        case 0x462584u: goto label_462584;
        case 0x462588u: goto label_462588;
        case 0x46258cu: goto label_46258c;
        case 0x462590u: goto label_462590;
        case 0x462594u: goto label_462594;
        case 0x462598u: goto label_462598;
        case 0x46259cu: goto label_46259c;
        case 0x4625a0u: goto label_4625a0;
        case 0x4625a4u: goto label_4625a4;
        case 0x4625a8u: goto label_4625a8;
        case 0x4625acu: goto label_4625ac;
        case 0x4625b0u: goto label_4625b0;
        case 0x4625b4u: goto label_4625b4;
        case 0x4625b8u: goto label_4625b8;
        case 0x4625bcu: goto label_4625bc;
        case 0x4625c0u: goto label_4625c0;
        case 0x4625c4u: goto label_4625c4;
        case 0x4625c8u: goto label_4625c8;
        case 0x4625ccu: goto label_4625cc;
        case 0x4625d0u: goto label_4625d0;
        case 0x4625d4u: goto label_4625d4;
        case 0x4625d8u: goto label_4625d8;
        case 0x4625dcu: goto label_4625dc;
        case 0x4625e0u: goto label_4625e0;
        case 0x4625e4u: goto label_4625e4;
        case 0x4625e8u: goto label_4625e8;
        case 0x4625ecu: goto label_4625ec;
        case 0x4625f0u: goto label_4625f0;
        case 0x4625f4u: goto label_4625f4;
        case 0x4625f8u: goto label_4625f8;
        case 0x4625fcu: goto label_4625fc;
        case 0x462600u: goto label_462600;
        case 0x462604u: goto label_462604;
        case 0x462608u: goto label_462608;
        case 0x46260cu: goto label_46260c;
        case 0x462610u: goto label_462610;
        case 0x462614u: goto label_462614;
        case 0x462618u: goto label_462618;
        case 0x46261cu: goto label_46261c;
        case 0x462620u: goto label_462620;
        case 0x462624u: goto label_462624;
        case 0x462628u: goto label_462628;
        case 0x46262cu: goto label_46262c;
        case 0x462630u: goto label_462630;
        case 0x462634u: goto label_462634;
        case 0x462638u: goto label_462638;
        case 0x46263cu: goto label_46263c;
        case 0x462640u: goto label_462640;
        case 0x462644u: goto label_462644;
        case 0x462648u: goto label_462648;
        case 0x46264cu: goto label_46264c;
        case 0x462650u: goto label_462650;
        case 0x462654u: goto label_462654;
        case 0x462658u: goto label_462658;
        case 0x46265cu: goto label_46265c;
        case 0x462660u: goto label_462660;
        case 0x462664u: goto label_462664;
        case 0x462668u: goto label_462668;
        case 0x46266cu: goto label_46266c;
        case 0x462670u: goto label_462670;
        case 0x462674u: goto label_462674;
        case 0x462678u: goto label_462678;
        case 0x46267cu: goto label_46267c;
        case 0x462680u: goto label_462680;
        case 0x462684u: goto label_462684;
        case 0x462688u: goto label_462688;
        case 0x46268cu: goto label_46268c;
        case 0x462690u: goto label_462690;
        case 0x462694u: goto label_462694;
        case 0x462698u: goto label_462698;
        case 0x46269cu: goto label_46269c;
        case 0x4626a0u: goto label_4626a0;
        case 0x4626a4u: goto label_4626a4;
        case 0x4626a8u: goto label_4626a8;
        case 0x4626acu: goto label_4626ac;
        case 0x4626b0u: goto label_4626b0;
        case 0x4626b4u: goto label_4626b4;
        case 0x4626b8u: goto label_4626b8;
        case 0x4626bcu: goto label_4626bc;
        default: break;
    }

    ctx->pc = 0x4624a0u;

label_4624a0:
    // 0x4624a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4624a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4624a4:
    // 0x4624a4: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x4624a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
label_4624a8:
    // 0x4624a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4624a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4624ac:
    // 0x4624ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4624acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4624b0:
    // 0x4624b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4624b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4624b4:
    // 0x4624b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4624b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4624b8:
    // 0x4624b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4624b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4624bc:
    // 0x4624bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4624bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4624c0:
    // 0x4624c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4624c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4624c4:
    // 0x4624c4: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x4624c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4624c8:
    // 0x4624c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4624c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4624cc:
    // 0x4624cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4624ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4624d0:
    // 0x4624d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4624d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4624d4:
    // 0x4624d4: 0xc11ef80  jal         func_47BE00
label_4624d8:
    if (ctx->pc == 0x4624D8u) {
        ctx->pc = 0x4624D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4624D4u;
        // 0x4624d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4624DCu;
        goto label_4624dc;
    }
    ctx->pc = 0x4624D4u;
    SET_GPR_U32(ctx, 31, 0x4624DCu);
    ctx->pc = 0x4624D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4624D4u;
    // 0x4624d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4624D4u, 0x4624DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4624DCu;
label_4624dc:
    // 0x4624dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4624e0:
    if (ctx->pc == 0x4624E0u) {
        ctx->pc = 0x4624E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4624DCu;
        // 0x4624e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4624E4u;
        goto label_4624e4;
    }
    ctx->pc = 0x4624DCu;
    {
        const bool branch_taken_0x4624dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4624E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4624DCu;
        // 0x4624e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4624dc) {
            ctx->pc = 0x46251Cu;
            goto label_46251c;
        }
    }
    ctx->pc = 0x4624E4u;
label_4624e4:
    // 0x4624e4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4624e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4624e8:
    // 0x4624e8: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
label_4624ec:
    if (ctx->pc == 0x4624ECu) {
        ctx->pc = 0x4624ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4624E8u;
        // 0x4624ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4624F0u;
        goto label_4624f0;
    }
    ctx->pc = 0x4624E8u;
    {
        const bool branch_taken_0x4624e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4624ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4624E8u;
        // 0x4624ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4624e8) {
            ctx->pc = 0x462684u;
            goto label_462684;
        }
    }
    ctx->pc = 0x4624F0u;
label_4624f0:
    // 0x4624f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4624f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4624f4:
    // 0x4624f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4624f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4624f8:
    // 0x4624f8: 0xc11ef80  jal         func_47BE00
label_4624fc:
    if (ctx->pc == 0x4624FCu) {
        ctx->pc = 0x4624FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4624F8u;
        // 0x4624fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462500u;
        goto label_462500;
    }
    ctx->pc = 0x4624F8u;
    SET_GPR_U32(ctx, 31, 0x462500u);
    ctx->pc = 0x4624FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4624F8u;
    // 0x4624fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4624F8u, 0x462500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462500u;
label_462500:
    // 0x462500: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_462504:
    if (ctx->pc == 0x462504u) {
        ctx->pc = 0x462504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462500u;
        // 0x462504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462508u;
        goto label_462508;
    }
    ctx->pc = 0x462500u;
    {
        const bool branch_taken_0x462500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462500u;
        // 0x462504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462500) {
            ctx->pc = 0x46251Cu;
            goto label_46251c;
        }
    }
    ctx->pc = 0x462508u;
label_462508:
    // 0x462508: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x462508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_46250c:
    // 0x46250c: 0xc11ef80  jal         func_47BE00
label_462510:
    if (ctx->pc == 0x462510u) {
        ctx->pc = 0x462510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46250Cu;
        // 0x462510: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462514u;
        goto label_462514;
    }
    ctx->pc = 0x46250Cu;
    SET_GPR_U32(ctx, 31, 0x462514u);
    ctx->pc = 0x462510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46250Cu;
    // 0x462510: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46250Cu, 0x462514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462514u;
label_462514:
    // 0x462514: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_462518:
    if (ctx->pc == 0x462518u) {
        ctx->pc = 0x462518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462514u;
        // 0x462518: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46251Cu;
        goto label_46251c;
    }
    ctx->pc = 0x462514u;
    {
        const bool branch_taken_0x462514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462514u;
        // 0x462518: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462514) {
            ctx->pc = 0x462524u;
            goto label_462524;
        }
    }
    ctx->pc = 0x46251Cu;
label_46251c:
    // 0x46251c: 0x10000059  b           . + 4 + (0x59 << 2)
label_462520:
    if (ctx->pc == 0x462520u) {
        ctx->pc = 0x462520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46251Cu;
        // 0x462520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462524u;
        goto label_462524;
    }
    ctx->pc = 0x46251Cu;
    {
        const bool branch_taken_0x46251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46251Cu;
        // 0x462520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46251c) {
            ctx->pc = 0x462684u;
            goto label_462684;
        }
    }
    ctx->pc = 0x462524u;
label_462524:
    // 0x462524: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
label_462528:
    if (ctx->pc == 0x462528u) {
        ctx->pc = 0x462528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462524u;
        // 0x462528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46252Cu;
        goto label_46252c;
    }
    ctx->pc = 0x462524u;
    {
        const bool branch_taken_0x462524 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x462528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462524u;
        // 0x462528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462524) {
            ctx->pc = 0x462680u;
            goto label_462680;
        }
    }
    ctx->pc = 0x46252Cu;
label_46252c:
    // 0x46252c: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x46252cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_462530:
    // 0x462530: 0xc11ef80  jal         func_47BE00
label_462534:
    if (ctx->pc == 0x462534u) {
        ctx->pc = 0x462534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462530u;
        // 0x462534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462538u;
        goto label_462538;
    }
    ctx->pc = 0x462530u;
    SET_GPR_U32(ctx, 31, 0x462538u);
    ctx->pc = 0x462534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462530u;
    // 0x462534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x462530u, 0x462538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462538u;
label_462538:
    // 0x462538: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_46253c:
    if (ctx->pc == 0x46253Cu) {
        ctx->pc = 0x46253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462538u;
        // 0x46253c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462540u;
        goto label_462540;
    }
    ctx->pc = 0x462538u;
    {
        const bool branch_taken_0x462538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462538u;
        // 0x46253c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462538) {
            ctx->pc = 0x46251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46251c;
        }
    }
    ctx->pc = 0x462540u;
label_462540:
    // 0x462540: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x462540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_462544:
    // 0x462544: 0xc11ef80  jal         func_47BE00
label_462548:
    if (ctx->pc == 0x462548u) {
        ctx->pc = 0x462548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462544u;
        // 0x462548: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46254Cu;
        goto label_46254c;
    }
    ctx->pc = 0x462544u;
    SET_GPR_U32(ctx, 31, 0x46254Cu);
    ctx->pc = 0x462548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462544u;
    // 0x462548: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x462544u, 0x46254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46254Cu;
label_46254c:
    // 0x46254c: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_462550:
    if (ctx->pc == 0x462550u) {
        ctx->pc = 0x462550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46254Cu;
        // 0x462550: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462554u;
        goto label_462554;
    }
    ctx->pc = 0x46254Cu;
    {
        const bool branch_taken_0x46254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46254Cu;
        // 0x462550: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46254c) {
            ctx->pc = 0x46251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46251c;
        }
    }
    ctx->pc = 0x462554u;
label_462554:
    // 0x462554: 0x8f848894  lw          $a0, -0x776C($gp)
    ctx->pc = 0x462554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
label_462558:
    // 0x462558: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x462558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46255c:
    // 0x46255c: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x46255cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_462560:
    // 0x462560: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x462560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_462564:
    // 0x462564: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x462564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_462568:
    // 0x462568: 0x40f809  jalr        $v0
label_46256c:
    if (ctx->pc == 0x46256Cu) {
        ctx->pc = 0x46256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462568u;
        // 0x46256c: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x462570u;
        goto label_462570;
    }
    ctx->pc = 0x462568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x462570u);
        ctx->pc = 0x46256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462568u;
        // 0x46256c: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462568u, 0x462570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462570u;
label_462570:
    // 0x462570: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x462570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462574:
    // 0x462574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x462574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462578:
    // 0x462578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x462578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46257c:
    // 0x46257c: 0xc10c1fa  jal         func_4307E8
label_462580:
    if (ctx->pc == 0x462580u) {
        ctx->pc = 0x462580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46257Cu;
        // 0x462580: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462584u;
        goto label_462584;
    }
    ctx->pc = 0x46257Cu;
    SET_GPR_U32(ctx, 31, 0x462584u);
    ctx->pc = 0x462580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46257Cu;
    // 0x462580: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46257Cu, 0x462584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462584u;
label_462584:
    // 0x462584: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
label_462588:
    if (ctx->pc == 0x462588u) {
        ctx->pc = 0x462588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462584u;
        // 0x462588: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46258Cu;
        goto label_46258c;
    }
    ctx->pc = 0x462584u;
    {
        const bool branch_taken_0x462584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x462588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462584u;
        // 0x462588: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462584) {
            ctx->pc = 0x46267Cu;
            goto label_46267c;
        }
    }
    ctx->pc = 0x46258Cu;
label_46258c:
    // 0x46258c: 0xc118f6a  jal         func_463DA8
label_462590:
    if (ctx->pc == 0x462590u) {
        ctx->pc = 0x462590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46258Cu;
        // 0x462590: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462594u;
        goto label_462594;
    }
    ctx->pc = 0x46258Cu;
    SET_GPR_U32(ctx, 31, 0x462594u);
    ctx->pc = 0x462590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46258Cu;
    // 0x462590: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463DA8u, 0x46258Cu, 0x462594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462594u;
label_462594:
    // 0x462594: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x462594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_462598:
    // 0x462598: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x462598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_46259c:
    // 0x46259c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x46259cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_4625a0:
    // 0x4625a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4625a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4625a4:
    // 0x4625a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4625a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4625a8:
    // 0x4625a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4625a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4625ac:
    // 0x4625ac: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x4625acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
label_4625b0:
    // 0x4625b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4625b4:
    if (ctx->pc == 0x4625B4u) {
        ctx->pc = 0x4625B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4625B0u;
        // 0x4625b4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4625B8u;
        goto label_4625b8;
    }
    ctx->pc = 0x4625B0u;
    {
        const bool branch_taken_0x4625b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4625B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4625B0u;
        // 0x4625b4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4625b0) {
            ctx->pc = 0x4625C4u;
            goto label_4625c4;
        }
    }
    ctx->pc = 0x4625B8u;
label_4625b8:
    // 0x4625b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4625b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_4625bc:
    // 0x4625bc: 0x1000000e  b           . + 4 + (0xE << 2)
label_4625c0:
    if (ctx->pc == 0x4625C0u) {
        ctx->pc = 0x4625C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4625BCu;
        // 0x4625c0: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4625C4u;
        goto label_4625c4;
    }
    ctx->pc = 0x4625BCu;
    {
        const bool branch_taken_0x4625bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4625C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4625BCu;
        // 0x4625c0: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4625bc) {
            ctx->pc = 0x4625F8u;
            goto label_4625f8;
        }
    }
    ctx->pc = 0x4625C4u;
label_4625c4:
    // 0x4625c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4625c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4625c8:
    // 0x4625c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4625c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4625cc:
    // 0x4625cc: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x4625ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_4625d0:
    // 0x4625d0: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x4625d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_4625d4:
    // 0x4625d4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x4625d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_4625d8:
    // 0x4625d8: 0x40f809  jalr        $v0
label_4625dc:
    if (ctx->pc == 0x4625DCu) {
        ctx->pc = 0x4625DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4625D8u;
        // 0x4625dc: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4625E0u;
        goto label_4625e0;
    }
    ctx->pc = 0x4625D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4625E0u);
        ctx->pc = 0x4625DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4625D8u;
        // 0x4625dc: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4625D8u, 0x4625E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4625E0u;
label_4625e0:
    // 0x4625e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4625e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4625e4:
    // 0x4625e4: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x4625e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_4625e8:
    // 0x4625e8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x4625e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_4625ec:
    // 0x4625ec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4625ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4625f0:
    // 0x4625f0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4625f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4625f4:
    // 0x4625f4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4625f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_4625f8:
    // 0x4625f8: 0x26a3ad18  addiu       $v1, $s5, -0x52E8
    ctx->pc = 0x4625f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_4625fc:
    // 0x4625fc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4625fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_462600:
    // 0x462600: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x462600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_462604:
    // 0x462604: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x462604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_462608:
    // 0x462608: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x462608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_46260c:
    // 0x46260c: 0x40f809  jalr        $v0
label_462610:
    if (ctx->pc == 0x462610u) {
        ctx->pc = 0x462610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46260Cu;
        // 0x462610: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x462614u;
        goto label_462614;
    }
    ctx->pc = 0x46260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x462614u);
        ctx->pc = 0x462610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46260Cu;
        // 0x462610: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46260Cu, 0x462614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462614u;
label_462614:
    // 0x462614: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x462614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462618:
    // 0x462618: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x462618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46261c:
    // 0x46261c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46261cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462620:
    // 0x462620: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_462624:
    if (ctx->pc == 0x462624u) {
        ctx->pc = 0x462624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462620u;
        // 0x462624: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462628u;
        goto label_462628;
    }
    ctx->pc = 0x462620u;
    {
        const bool branch_taken_0x462620 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x462624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462620u;
        // 0x462624: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462620) {
            ctx->pc = 0x46267Cu;
            goto label_46267c;
        }
    }
    ctx->pc = 0x462628u;
label_462628:
    // 0x462628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x462628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46262c:
    // 0x46262c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46262cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462630:
    // 0x462630: 0xc11ef80  jal         func_47BE00
label_462634:
    if (ctx->pc == 0x462634u) {
        ctx->pc = 0x462634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462630u;
        // 0x462634: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462638u;
        goto label_462638;
    }
    ctx->pc = 0x462630u;
    SET_GPR_U32(ctx, 31, 0x462638u);
    ctx->pc = 0x462634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462630u;
    // 0x462634: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x462630u, 0x462638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462638u;
label_462638:
    // 0x462638: 0x1040ffb8  beqz        $v0, . + 4 + (-0x48 << 2)
label_46263c:
    if (ctx->pc == 0x46263Cu) {
        ctx->pc = 0x46263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462638u;
        // 0x46263c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462640u;
        goto label_462640;
    }
    ctx->pc = 0x462638u;
    {
        const bool branch_taken_0x462638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462638u;
        // 0x46263c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462638) {
            ctx->pc = 0x46251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46251c;
        }
    }
    ctx->pc = 0x462640u;
label_462640:
    // 0x462640: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x462640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_462644:
    // 0x462644: 0xc11ef80  jal         func_47BE00
label_462648:
    if (ctx->pc == 0x462648u) {
        ctx->pc = 0x462648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462644u;
        // 0x462648: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46264Cu;
        goto label_46264c;
    }
    ctx->pc = 0x462644u;
    SET_GPR_U32(ctx, 31, 0x46264Cu);
    ctx->pc = 0x462648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462644u;
    // 0x462648: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x462644u, 0x46264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46264Cu;
label_46264c:
    // 0x46264c: 0x1040ffb3  beqz        $v0, . + 4 + (-0x4D << 2)
label_462650:
    if (ctx->pc == 0x462650u) {
        ctx->pc = 0x462650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46264Cu;
        // 0x462650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462654u;
        goto label_462654;
    }
    ctx->pc = 0x46264Cu;
    {
        const bool branch_taken_0x46264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46264Cu;
        // 0x462650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46264c) {
            ctx->pc = 0x46251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46251c;
        }
    }
    ctx->pc = 0x462654u;
label_462654:
    // 0x462654: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x462654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_462658:
    // 0x462658: 0xc11ef80  jal         func_47BE00
label_46265c:
    if (ctx->pc == 0x46265Cu) {
        ctx->pc = 0x46265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462658u;
        // 0x46265c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462660u;
        goto label_462660;
    }
    ctx->pc = 0x462658u;
    SET_GPR_U32(ctx, 31, 0x462660u);
    ctx->pc = 0x46265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462658u;
    // 0x46265c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x462658u, 0x462660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462660u;
label_462660:
    // 0x462660: 0x1040ffae  beqz        $v0, . + 4 + (-0x52 << 2)
label_462664:
    if (ctx->pc == 0x462664u) {
        ctx->pc = 0x462664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462660u;
        // 0x462664: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462668u;
        goto label_462668;
    }
    ctx->pc = 0x462660u;
    {
        const bool branch_taken_0x462660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462660u;
        // 0x462664: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462660) {
            ctx->pc = 0x46251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46251c;
        }
    }
    ctx->pc = 0x462668u;
label_462668:
    // 0x462668: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x462668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_46266c:
    // 0x46266c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x46266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_462670:
    // 0x462670: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x462670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_462674:
    // 0x462674: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_462678:
    if (ctx->pc == 0x462678u) {
        ctx->pc = 0x462678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462674u;
        // 0x462678: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46267Cu;
        goto label_46267c;
    }
    ctx->pc = 0x462674u;
    {
        const bool branch_taken_0x462674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462674u;
        // 0x462678: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462674) {
            ctx->pc = 0x462628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_462628;
        }
    }
    ctx->pc = 0x46267Cu;
label_46267c:
    // 0x46267c: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x46267cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
label_462680:
    // 0x462680: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x462680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_462684:
    // 0x462684: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x462684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_462688:
    // 0x462688: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x462688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46268c:
    // 0x46268c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x46268cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_462690:
    // 0x462690: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x462690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_462694:
    // 0x462694: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x462694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_462698:
    // 0x462698: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x462698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46269c:
    // 0x46269c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46269cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4626a0:
    // 0x4626a0: 0x3e00008  jr          $ra
label_4626a4:
    if (ctx->pc == 0x4626A4u) {
        ctx->pc = 0x4626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4626A0u;
        // 0x4626a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4626A8u;
        goto label_4626a8;
    }
    ctx->pc = 0x4626A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4626A0u;
        // 0x4626a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4626A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4626A8u;
label_4626a8:
    // 0x4626a8: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x4626a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4626ac:
    // 0x4626ac: 0x0  nop
    ctx->pc = 0x4626acu;
    // NOP
label_4626b0:
    // 0x4626b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4626b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4626b4:
    // 0x4626b4: 0x0  nop
    ctx->pc = 0x4626b4u;
    // NOP
label_4626b8:
    // 0x4626b8: 0x27bd09b0  addiu       $sp, $sp, 0x9B0
    ctx->pc = 0x4626b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
label_4626bc:
    // 0x4626bc: 0x0  nop
    ctx->pc = 0x4626bcu;
    // NOP
    ctx->pc = 0x4626c0u;
}

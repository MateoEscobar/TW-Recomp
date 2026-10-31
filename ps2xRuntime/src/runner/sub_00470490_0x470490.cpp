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

// Function: sub_00470490
// Address: 0x470490 - 0x470788
void sub_00470490_0x470490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470490_0x470490");
#endif

    switch (ctx->pc) {
        case 0x470490u: goto label_470490;
        case 0x470494u: goto label_470494;
        case 0x470498u: goto label_470498;
        case 0x47049cu: goto label_47049c;
        case 0x4704a0u: goto label_4704a0;
        case 0x4704a4u: goto label_4704a4;
        case 0x4704a8u: goto label_4704a8;
        case 0x4704acu: goto label_4704ac;
        case 0x4704b0u: goto label_4704b0;
        case 0x4704b4u: goto label_4704b4;
        case 0x4704b8u: goto label_4704b8;
        case 0x4704bcu: goto label_4704bc;
        case 0x4704c0u: goto label_4704c0;
        case 0x4704c4u: goto label_4704c4;
        case 0x4704c8u: goto label_4704c8;
        case 0x4704ccu: goto label_4704cc;
        case 0x4704d0u: goto label_4704d0;
        case 0x4704d4u: goto label_4704d4;
        case 0x4704d8u: goto label_4704d8;
        case 0x4704dcu: goto label_4704dc;
        case 0x4704e0u: goto label_4704e0;
        case 0x4704e4u: goto label_4704e4;
        case 0x4704e8u: goto label_4704e8;
        case 0x4704ecu: goto label_4704ec;
        case 0x4704f0u: goto label_4704f0;
        case 0x4704f4u: goto label_4704f4;
        case 0x4704f8u: goto label_4704f8;
        case 0x4704fcu: goto label_4704fc;
        case 0x470500u: goto label_470500;
        case 0x470504u: goto label_470504;
        case 0x470508u: goto label_470508;
        case 0x47050cu: goto label_47050c;
        case 0x470510u: goto label_470510;
        case 0x470514u: goto label_470514;
        case 0x470518u: goto label_470518;
        case 0x47051cu: goto label_47051c;
        case 0x470520u: goto label_470520;
        case 0x470524u: goto label_470524;
        case 0x470528u: goto label_470528;
        case 0x47052cu: goto label_47052c;
        case 0x470530u: goto label_470530;
        case 0x470534u: goto label_470534;
        case 0x470538u: goto label_470538;
        case 0x47053cu: goto label_47053c;
        case 0x470540u: goto label_470540;
        case 0x470544u: goto label_470544;
        case 0x470548u: goto label_470548;
        case 0x47054cu: goto label_47054c;
        case 0x470550u: goto label_470550;
        case 0x470554u: goto label_470554;
        case 0x470558u: goto label_470558;
        case 0x47055cu: goto label_47055c;
        case 0x470560u: goto label_470560;
        case 0x470564u: goto label_470564;
        case 0x470568u: goto label_470568;
        case 0x47056cu: goto label_47056c;
        case 0x470570u: goto label_470570;
        case 0x470574u: goto label_470574;
        case 0x470578u: goto label_470578;
        case 0x47057cu: goto label_47057c;
        case 0x470580u: goto label_470580;
        case 0x470584u: goto label_470584;
        case 0x470588u: goto label_470588;
        case 0x47058cu: goto label_47058c;
        case 0x470590u: goto label_470590;
        case 0x470594u: goto label_470594;
        case 0x470598u: goto label_470598;
        case 0x47059cu: goto label_47059c;
        case 0x4705a0u: goto label_4705a0;
        case 0x4705a4u: goto label_4705a4;
        case 0x4705a8u: goto label_4705a8;
        case 0x4705acu: goto label_4705ac;
        case 0x4705b0u: goto label_4705b0;
        case 0x4705b4u: goto label_4705b4;
        case 0x4705b8u: goto label_4705b8;
        case 0x4705bcu: goto label_4705bc;
        case 0x4705c0u: goto label_4705c0;
        case 0x4705c4u: goto label_4705c4;
        case 0x4705c8u: goto label_4705c8;
        case 0x4705ccu: goto label_4705cc;
        case 0x4705d0u: goto label_4705d0;
        case 0x4705d4u: goto label_4705d4;
        case 0x4705d8u: goto label_4705d8;
        case 0x4705dcu: goto label_4705dc;
        case 0x4705e0u: goto label_4705e0;
        case 0x4705e4u: goto label_4705e4;
        case 0x4705e8u: goto label_4705e8;
        case 0x4705ecu: goto label_4705ec;
        case 0x4705f0u: goto label_4705f0;
        case 0x4705f4u: goto label_4705f4;
        case 0x4705f8u: goto label_4705f8;
        case 0x4705fcu: goto label_4705fc;
        case 0x470600u: goto label_470600;
        case 0x470604u: goto label_470604;
        case 0x470608u: goto label_470608;
        case 0x47060cu: goto label_47060c;
        case 0x470610u: goto label_470610;
        case 0x470614u: goto label_470614;
        case 0x470618u: goto label_470618;
        case 0x47061cu: goto label_47061c;
        case 0x470620u: goto label_470620;
        case 0x470624u: goto label_470624;
        case 0x470628u: goto label_470628;
        case 0x47062cu: goto label_47062c;
        case 0x470630u: goto label_470630;
        case 0x470634u: goto label_470634;
        case 0x470638u: goto label_470638;
        case 0x47063cu: goto label_47063c;
        case 0x470640u: goto label_470640;
        case 0x470644u: goto label_470644;
        case 0x470648u: goto label_470648;
        case 0x47064cu: goto label_47064c;
        case 0x470650u: goto label_470650;
        case 0x470654u: goto label_470654;
        case 0x470658u: goto label_470658;
        case 0x47065cu: goto label_47065c;
        case 0x470660u: goto label_470660;
        case 0x470664u: goto label_470664;
        case 0x470668u: goto label_470668;
        case 0x47066cu: goto label_47066c;
        case 0x470670u: goto label_470670;
        case 0x470674u: goto label_470674;
        case 0x470678u: goto label_470678;
        case 0x47067cu: goto label_47067c;
        case 0x470680u: goto label_470680;
        case 0x470684u: goto label_470684;
        case 0x470688u: goto label_470688;
        case 0x47068cu: goto label_47068c;
        case 0x470690u: goto label_470690;
        case 0x470694u: goto label_470694;
        case 0x470698u: goto label_470698;
        case 0x47069cu: goto label_47069c;
        case 0x4706a0u: goto label_4706a0;
        case 0x4706a4u: goto label_4706a4;
        case 0x4706a8u: goto label_4706a8;
        case 0x4706acu: goto label_4706ac;
        case 0x4706b0u: goto label_4706b0;
        case 0x4706b4u: goto label_4706b4;
        case 0x4706b8u: goto label_4706b8;
        case 0x4706bcu: goto label_4706bc;
        case 0x4706c0u: goto label_4706c0;
        case 0x4706c4u: goto label_4706c4;
        case 0x4706c8u: goto label_4706c8;
        case 0x4706ccu: goto label_4706cc;
        case 0x4706d0u: goto label_4706d0;
        case 0x4706d4u: goto label_4706d4;
        case 0x4706d8u: goto label_4706d8;
        case 0x4706dcu: goto label_4706dc;
        case 0x4706e0u: goto label_4706e0;
        case 0x4706e4u: goto label_4706e4;
        case 0x4706e8u: goto label_4706e8;
        case 0x4706ecu: goto label_4706ec;
        case 0x4706f0u: goto label_4706f0;
        case 0x4706f4u: goto label_4706f4;
        case 0x4706f8u: goto label_4706f8;
        case 0x4706fcu: goto label_4706fc;
        case 0x470700u: goto label_470700;
        case 0x470704u: goto label_470704;
        case 0x470708u: goto label_470708;
        case 0x47070cu: goto label_47070c;
        case 0x470710u: goto label_470710;
        case 0x470714u: goto label_470714;
        case 0x470718u: goto label_470718;
        case 0x47071cu: goto label_47071c;
        case 0x470720u: goto label_470720;
        case 0x470724u: goto label_470724;
        case 0x470728u: goto label_470728;
        case 0x47072cu: goto label_47072c;
        case 0x470730u: goto label_470730;
        case 0x470734u: goto label_470734;
        case 0x470738u: goto label_470738;
        case 0x47073cu: goto label_47073c;
        case 0x470740u: goto label_470740;
        case 0x470744u: goto label_470744;
        case 0x470748u: goto label_470748;
        case 0x47074cu: goto label_47074c;
        case 0x470750u: goto label_470750;
        case 0x470754u: goto label_470754;
        case 0x470758u: goto label_470758;
        case 0x47075cu: goto label_47075c;
        case 0x470760u: goto label_470760;
        case 0x470764u: goto label_470764;
        case 0x470768u: goto label_470768;
        case 0x47076cu: goto label_47076c;
        case 0x470770u: goto label_470770;
        case 0x470774u: goto label_470774;
        case 0x470778u: goto label_470778;
        case 0x47077cu: goto label_47077c;
        case 0x470780u: goto label_470780;
        case 0x470784u: goto label_470784;
        default: break;
    }

    ctx->pc = 0x470490u;

label_470490:
    // 0x470490: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x470490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_470494:
    // 0x470494: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x470494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_470498:
    // 0x470498: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x470498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_47049c:
    // 0x47049c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x47049cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4704a0:
    // 0x4704a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4704a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4704a4:
    // 0x4704a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4704a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4704a8:
    // 0x4704a8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4704a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4704ac:
    // 0x4704ac: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x4704acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_4704b0:
    // 0x4704b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4704b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4704b4:
    // 0x4704b4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x4704b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4704b8:
    // 0x4704b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4704b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4704bc:
    // 0x4704bc: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4704bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_4704c0:
    // 0x4704c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4704c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4704c4:
    // 0x4704c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4704c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4704c8:
    // 0x4704c8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4704c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4704cc:
    // 0x4704cc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x4704ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_4704d0:
    // 0x4704d0: 0x40f809  jalr        $v0
label_4704d4:
    if (ctx->pc == 0x4704D4u) {
        ctx->pc = 0x4704D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4704D0u;
        // 0x4704d4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4704D8u;
        goto label_4704d8;
    }
    ctx->pc = 0x4704D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4704D8u);
        ctx->pc = 0x4704D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4704D0u;
        // 0x4704d4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4704D0u, 0x4704D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4704D8u;
label_4704d8:
    // 0x4704d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4704d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4704dc:
    // 0x4704dc: 0x52600085  beql        $s3, $zero, . + 4 + (0x85 << 2)
label_4704e0:
    if (ctx->pc == 0x4704E0u) {
        ctx->pc = 0x4704E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4704DCu;
        // 0x4704e0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4704E4u;
        goto label_4704e4;
    }
    ctx->pc = 0x4704DCu;
    {
        const bool branch_taken_0x4704dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4704dc) {
            ctx->pc = 0x4704E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4704DCu;
            // 0x4704e0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4706F4u;
            goto label_4706f4;
        }
    }
    ctx->pc = 0x4704E4u;
label_4704e4:
    // 0x4704e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4704e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4704e8:
    // 0x4704e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4704ec:
    if (ctx->pc == 0x4704ECu) {
        ctx->pc = 0x4704ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4704E8u;
        // 0x4704ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4704F0u;
        goto label_4704f0;
    }
    ctx->pc = 0x4704E8u;
    {
        const bool branch_taken_0x4704e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4704ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4704E8u;
        // 0x4704ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4704e8) {
            ctx->pc = 0x47051Cu;
            goto label_47051c;
        }
    }
    ctx->pc = 0x4704F0u;
label_4704f0:
    // 0x4704f0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x4704f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4704f4:
    // 0x4704f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4704f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4704f8:
    // 0x4704f8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4704f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4704fc:
    // 0x4704fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4704fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_470500:
    // 0x470500: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x470500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_470504:
    // 0x470504: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x470504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_470508:
    // 0x470508: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x470508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_47050c:
    // 0x47050c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x47050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_470510:
    // 0x470510: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x470510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470514:
    // 0x470514: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_470518:
    if (ctx->pc == 0x470518u) {
        ctx->pc = 0x470518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470514u;
        // 0x470518: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47051Cu;
        goto label_47051c;
    }
    ctx->pc = 0x470514u;
    {
        const bool branch_taken_0x470514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470514u;
        // 0x470518: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470514) {
            ctx->pc = 0x4704F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4704f8;
        }
    }
    ctx->pc = 0x47051Cu;
label_47051c:
    // 0x47051c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x47051cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_470520:
    // 0x470520: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x470520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_470524:
    // 0x470524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x470524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_470528:
    // 0x470528: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x470528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47052c:
    // 0x47052c: 0xc10cff6  jal         func_433FD8
label_470530:
    if (ctx->pc == 0x470530u) {
        ctx->pc = 0x470530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47052Cu;
        // 0x470530: 0x24e7e168  addiu       $a3, $a3, -0x1E98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470534u;
        goto label_470534;
    }
    ctx->pc = 0x47052Cu;
    SET_GPR_U32(ctx, 31, 0x470534u);
    ctx->pc = 0x470530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47052Cu;
    // 0x470530: 0x24e7e168  addiu       $a3, $a3, -0x1E98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x47052Cu, 0x470534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470534u;
label_470534:
    // 0x470534: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x470534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_470538:
    // 0x470538: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x470538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_47053c:
    // 0x47053c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_470540:
    if (ctx->pc == 0x470540u) {
        ctx->pc = 0x470540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47053Cu;
        // 0x470540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470544u;
        goto label_470544;
    }
    ctx->pc = 0x47053Cu;
    {
        const bool branch_taken_0x47053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47053Cu;
        // 0x470540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47053c) {
            ctx->pc = 0x470584u;
            goto label_470584;
        }
    }
    ctx->pc = 0x470544u;
label_470544:
    // 0x470544: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x470544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_470548:
    // 0x470548: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x470548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47054c:
    // 0x47054c: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x47054cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_470550:
    // 0x470550: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_470554:
    if (ctx->pc == 0x470554u) {
        ctx->pc = 0x470554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470550u;
        // 0x470554: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470558u;
        goto label_470558;
    }
    ctx->pc = 0x470550u;
    {
        const bool branch_taken_0x470550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x470554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470550u;
        // 0x470554: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470550) {
            ctx->pc = 0x470584u;
            goto label_470584;
        }
    }
    ctx->pc = 0x470558u;
label_470558:
    // 0x470558: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x470558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_47055c:
    // 0x47055c: 0x0  nop
    ctx->pc = 0x47055cu;
    // NOP
label_470560:
    // 0x470560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x470560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_470564:
    // 0x470564: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x470564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_470568:
    // 0x470568: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_47056c:
    if (ctx->pc == 0x47056Cu) {
        ctx->pc = 0x47056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470568u;
        // 0x47056c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470570u;
        goto label_470570;
    }
    ctx->pc = 0x470568u;
    {
        const bool branch_taken_0x470568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x47056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470568u;
        // 0x47056c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470568) {
            ctx->pc = 0x470578u;
            goto label_470578;
        }
    }
    ctx->pc = 0x470570u;
label_470570:
    // 0x470570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x470570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470574:
    // 0x470574: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x470574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_470578:
    // 0x470578: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x470578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_47057c:
    // 0x47057c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_470580:
    if (ctx->pc == 0x470580u) {
        ctx->pc = 0x470580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47057Cu;
        // 0x470580: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470584u;
        goto label_470584;
    }
    ctx->pc = 0x47057Cu;
    {
        const bool branch_taken_0x47057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47057Cu;
        // 0x470580: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47057c) {
            ctx->pc = 0x470560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470560;
        }
    }
    ctx->pc = 0x470584u;
label_470584:
    // 0x470584: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x470584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_470588:
    // 0x470588: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x470588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_47058c:
    // 0x47058c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x47058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_470590:
    // 0x470590: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x470590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_470594:
    // 0x470594: 0xc3a018  mult        $s4, $a2, $v1
    ctx->pc = 0x470594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_470598:
    // 0x470598: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x470598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_47059c:
    // 0x47059c: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x47059cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4705a0:
    // 0x4705a0: 0xc11b850  jal         func_46E140
label_4705a4:
    if (ctx->pc == 0x4705A4u) {
        ctx->pc = 0x4705A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705A0u;
        // 0x4705a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4705A8u;
        goto label_4705a8;
    }
    ctx->pc = 0x4705A0u;
    SET_GPR_U32(ctx, 31, 0x4705A8u);
    ctx->pc = 0x4705A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4705A0u;
    // 0x4705a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E140u, 0x4705A0u, 0x4705A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4705A8u;
label_4705a8:
    // 0x4705a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4705a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4705ac:
    // 0x4705ac: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_4705b0:
    if (ctx->pc == 0x4705B0u) {
        ctx->pc = 0x4705B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705ACu;
        // 0x4705b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4705B4u;
        goto label_4705b4;
    }
    ctx->pc = 0x4705ACu;
    {
        const bool branch_taken_0x4705ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4705B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705ACu;
        // 0x4705b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4705ac) {
            ctx->pc = 0x4705D8u;
            goto label_4705d8;
        }
    }
    ctx->pc = 0x4705B4u;
label_4705b4:
    // 0x4705b4: 0x26a2ad18  addiu       $v0, $s5, -0x52E8
    ctx->pc = 0x4705b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_4705b8:
    // 0x4705b8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x4705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_4705bc:
    // 0x4705bc: 0x60f809  jalr        $v1
label_4705c0:
    if (ctx->pc == 0x4705C0u) {
        ctx->pc = 0x4705C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705BCu;
        // 0x4705c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4705C4u;
        goto label_4705c4;
    }
    ctx->pc = 0x4705BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4705C4u);
        ctx->pc = 0x4705C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705BCu;
        // 0x4705c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4705BCu, 0x4705C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4705C4u;
label_4705c4:
    // 0x4705c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4705c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4705c8:
    // 0x4705c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4705c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4705cc:
    // 0x4705cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4705ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4705d0:
    // 0x4705d0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_4705d4:
    if (ctx->pc == 0x4705D4u) {
        ctx->pc = 0x4705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705D0u;
        // 0x4705d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4705D8u;
        goto label_4705d8;
    }
    ctx->pc = 0x4705D0u;
    {
        const bool branch_taken_0x4705d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4705D0u;
        // 0x4705d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4705d0) {
            ctx->pc = 0x470708u;
            goto label_470708;
        }
    }
    ctx->pc = 0x4705D8u;
label_4705d8:
    // 0x4705d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4705d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4705dc:
    // 0x4705dc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x4705dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_4705e0:
    // 0x4705e0: 0x26a5ad18  addiu       $a1, $s5, -0x52E8
    ctx->pc = 0x4705e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_4705e4:
    // 0x4705e4: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4705e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4705e8:
    // 0x4705e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4705e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4705ec:
    // 0x4705ec: 0x8f8288e8  lw          $v0, -0x7718($gp)
    ctx->pc = 0x4705ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_4705f0:
    // 0x4705f0: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x4705f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_4705f4:
    // 0x4705f4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4705f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4705f8:
    // 0x4705f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4705f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4705fc:
    // 0x4705fc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4705fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_470600:
    // 0x470600: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x470600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_470604:
    // 0x470604: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x470604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
label_470608:
    // 0x470608: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x470608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_47060c:
    // 0x47060c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_470610:
    // 0x470610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x470610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_470614:
    // 0x470614: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x470614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_470618:
    // 0x470618: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x470618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_47061c:
    // 0x47061c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_470620:
    // 0x470620: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x470620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_470624:
    // 0x470624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_470628:
    // 0x470628: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x470628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_47062c:
    // 0x47062c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x47062cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_470630:
    // 0x470630: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x470630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_470634:
    // 0x470634: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x470634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_470638:
    // 0x470638: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x470638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_47063c:
    // 0x47063c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x47063cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_470640:
    // 0x470640: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x470640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_470644:
    // 0x470644: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x470644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_470648:
    // 0x470648: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x470648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_47064c:
    // 0x47064c: 0x5064000b  beql        $v1, $a0, . + 4 + (0xB << 2)
label_470650:
    if (ctx->pc == 0x470650u) {
        ctx->pc = 0x470650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47064Cu;
        // 0x470650: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470654u;
        goto label_470654;
    }
    ctx->pc = 0x47064Cu;
    {
        const bool branch_taken_0x47064c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47064c) {
            ctx->pc = 0x470650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47064Cu;
            // 0x470650: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47067Cu;
            goto label_47067c;
        }
    }
    ctx->pc = 0x470654u;
label_470654:
    // 0x470654: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x470654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_470658:
    // 0x470658: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x470658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_47065c:
    // 0x47065c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x47065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_470660:
    // 0x470660: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x470660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_470664:
    // 0x470664: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x470664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_470668:
    // 0x470668: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x470668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_47066c:
    // 0x47066c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x47066cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_470670:
    // 0x470670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_470674:
    // 0x470674: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x470674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_470678:
    // 0x470678: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x470678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_47067c:
    // 0x47067c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47067cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_470680:
    // 0x470680: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x470680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_470684:
    // 0x470684: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x470684u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_470688:
    // 0x470688: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x470688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_47068c:
    // 0x47068c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x47068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_470690:
    // 0x470690: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x470690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_470694:
    // 0x470694: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x470694u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_470698:
    // 0x470698: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x470698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_47069c:
    // 0x47069c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x47069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4706a0:
    // 0x4706a0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4706a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_4706a4:
    // 0x4706a4: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x4706a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_4706a8:
    // 0x4706a8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4706a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4706ac:
    // 0x4706ac: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4706acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4706b0:
    // 0x4706b0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4706b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_4706b4:
    // 0x4706b4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4706b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_4706b8:
    // 0x4706b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4706b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4706bc:
    // 0x4706bc: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x4706bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4706c0:
    // 0x4706c0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_4706c4:
    if (ctx->pc == 0x4706C4u) {
        ctx->pc = 0x4706C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706C0u;
        // 0x4706c4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4706C8u;
        goto label_4706c8;
    }
    ctx->pc = 0x4706C0u;
    {
        const bool branch_taken_0x4706c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4706C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706C0u;
        // 0x4706c4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4706c0) {
            ctx->pc = 0x470640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470640;
        }
    }
    ctx->pc = 0x4706C8u;
label_4706c8:
    // 0x4706c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x4706c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_4706cc:
    // 0x4706cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4706ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4706d0:
    // 0x4706d0: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40
    ctx->pc = 0x4706d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
label_4706d4:
    // 0x4706d4: 0xc11b80e  jal         func_46E038
label_4706d8:
    if (ctx->pc == 0x4706D8u) {
        ctx->pc = 0x4706D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706D4u;
        // 0x4706d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4706DCu;
        goto label_4706dc;
    }
    ctx->pc = 0x4706D4u;
    SET_GPR_U32(ctx, 31, 0x4706DCu);
    ctx->pc = 0x4706D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4706D4u;
    // 0x4706d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E038u, 0x4706D4u, 0x4706DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4706DCu;
label_4706dc:
    // 0x4706dc: 0x26a3ad18  addiu       $v1, $s5, -0x52E8
    ctx->pc = 0x4706dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_4706e0:
    // 0x4706e0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x4706e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_4706e4:
    // 0x4706e4: 0x40f809  jalr        $v0
label_4706e8:
    if (ctx->pc == 0x4706E8u) {
        ctx->pc = 0x4706E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706E4u;
        // 0x4706e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4706ECu;
        goto label_4706ec;
    }
    ctx->pc = 0x4706E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4706ECu);
        ctx->pc = 0x4706E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706E4u;
        // 0x4706e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4706E4u, 0x4706ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4706ECu;
label_4706ec:
    // 0x4706ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_4706f0:
    if (ctx->pc == 0x4706F0u) {
        ctx->pc = 0x4706F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706ECu;
        // 0x4706f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4706F4u;
        goto label_4706f4;
    }
    ctx->pc = 0x4706ECu;
    {
        const bool branch_taken_0x4706ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4706F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4706ECu;
        // 0x4706f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4706ec) {
            ctx->pc = 0x470720u;
            goto label_470720;
        }
    }
    ctx->pc = 0x4706F4u;
label_4706f4:
    // 0x4706f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4706f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4706f8:
    // 0x4706f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4706f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4706fc:
    // 0x4706fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4706fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_470700:
    // 0x470700: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x470700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_470704:
    // 0x470704: 0x0  nop
    ctx->pc = 0x470704u;
    // NOP
label_470708:
    // 0x470708: 0xc11eff2  jal         func_47BFC8
label_47070c:
    if (ctx->pc == 0x47070Cu) {
        ctx->pc = 0x47070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470708u;
        // 0x47070c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x470710u;
        goto label_470710;
    }
    ctx->pc = 0x470708u;
    SET_GPR_U32(ctx, 31, 0x470710u);
    ctx->pc = 0x47070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470708u;
    // 0x47070c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x470708u, 0x470710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470710u;
label_470710:
    // 0x470710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x470710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_470714:
    // 0x470714: 0xc11f024  jal         func_47C090
label_470718:
    if (ctx->pc == 0x470718u) {
        ctx->pc = 0x470718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470714u;
        // 0x470718: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47071Cu;
        goto label_47071c;
    }
    ctx->pc = 0x470714u;
    SET_GPR_U32(ctx, 31, 0x47071Cu);
    ctx->pc = 0x470718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470714u;
    // 0x470718: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x470714u, 0x47071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47071Cu;
label_47071c:
    // 0x47071c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47071cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470720:
    // 0x470720: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x470720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_470724:
    // 0x470724: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x470724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_470728:
    // 0x470728: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x470728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47072c:
    // 0x47072c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47072cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_470730:
    // 0x470730: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x470730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_470734:
    // 0x470734: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x470734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_470738:
    // 0x470738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x470738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47073c:
    // 0x47073c: 0x3e00008  jr          $ra
label_470740:
    if (ctx->pc == 0x470740u) {
        ctx->pc = 0x470740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47073Cu;
        // 0x470740: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470744u;
        goto label_470744;
    }
    ctx->pc = 0x47073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47073Cu;
        // 0x470740: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470744u;
label_470744:
    // 0x470744: 0x0  nop
    ctx->pc = 0x470744u;
    // NOP
label_470748:
    // 0x470748: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x470748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47074c:
    // 0x47074c: 0x0  nop
    ctx->pc = 0x47074cu;
    // NOP
label_470750:
    // 0x470750: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x470750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_470754:
    // 0x470754: 0x0  nop
    ctx->pc = 0x470754u;
    // NOP
label_470758:
    // 0x470758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x470758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_47075c:
    // 0x47075c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47075cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470760:
    // 0x470760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470764:
    // 0x470764: 0xc11bf98  jal         func_46FE60
label_470768:
    if (ctx->pc == 0x470768u) {
        ctx->pc = 0x470768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470764u;
        // 0x470768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47076Cu;
        goto label_47076c;
    }
    ctx->pc = 0x470764u;
    SET_GPR_U32(ctx, 31, 0x47076Cu);
    ctx->pc = 0x470768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470764u;
    // 0x470768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46FE60u, 0x470764u, 0x47076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47076Cu;
label_47076c:
    // 0x47076c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_470770:
    // 0x470770: 0x3e00008  jr          $ra
label_470774:
    if (ctx->pc == 0x470774u) {
        ctx->pc = 0x470774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470770u;
        // 0x470774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470778u;
        goto label_470778;
    }
    ctx->pc = 0x470770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470770u;
        // 0x470774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470778u;
label_470778:
    // 0x470778: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x470778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47077c:
    // 0x47077c: 0x0  nop
    ctx->pc = 0x47077cu;
    // NOP
label_470780:
    // 0x470780: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x470780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470784:
    // 0x470784: 0x0  nop
    ctx->pc = 0x470784u;
    // NOP
    ctx->pc = 0x470788u;
}

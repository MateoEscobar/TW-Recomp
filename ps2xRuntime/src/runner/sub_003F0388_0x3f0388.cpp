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

// Function: sub_003F0388
// Address: 0x3f0388 - 0x3f0758
void sub_003F0388_0x3f0388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0388_0x3f0388");
#endif

    switch (ctx->pc) {
        case 0x3f0388u: goto label_3f0388;
        case 0x3f038cu: goto label_3f038c;
        case 0x3f0390u: goto label_3f0390;
        case 0x3f0394u: goto label_3f0394;
        case 0x3f0398u: goto label_3f0398;
        case 0x3f039cu: goto label_3f039c;
        case 0x3f03a0u: goto label_3f03a0;
        case 0x3f03a4u: goto label_3f03a4;
        case 0x3f03a8u: goto label_3f03a8;
        case 0x3f03acu: goto label_3f03ac;
        case 0x3f03b0u: goto label_3f03b0;
        case 0x3f03b4u: goto label_3f03b4;
        case 0x3f03b8u: goto label_3f03b8;
        case 0x3f03bcu: goto label_3f03bc;
        case 0x3f03c0u: goto label_3f03c0;
        case 0x3f03c4u: goto label_3f03c4;
        case 0x3f03c8u: goto label_3f03c8;
        case 0x3f03ccu: goto label_3f03cc;
        case 0x3f03d0u: goto label_3f03d0;
        case 0x3f03d4u: goto label_3f03d4;
        case 0x3f03d8u: goto label_3f03d8;
        case 0x3f03dcu: goto label_3f03dc;
        case 0x3f03e0u: goto label_3f03e0;
        case 0x3f03e4u: goto label_3f03e4;
        case 0x3f03e8u: goto label_3f03e8;
        case 0x3f03ecu: goto label_3f03ec;
        case 0x3f03f0u: goto label_3f03f0;
        case 0x3f03f4u: goto label_3f03f4;
        case 0x3f03f8u: goto label_3f03f8;
        case 0x3f03fcu: goto label_3f03fc;
        case 0x3f0400u: goto label_3f0400;
        case 0x3f0404u: goto label_3f0404;
        case 0x3f0408u: goto label_3f0408;
        case 0x3f040cu: goto label_3f040c;
        case 0x3f0410u: goto label_3f0410;
        case 0x3f0414u: goto label_3f0414;
        case 0x3f0418u: goto label_3f0418;
        case 0x3f041cu: goto label_3f041c;
        case 0x3f0420u: goto label_3f0420;
        case 0x3f0424u: goto label_3f0424;
        case 0x3f0428u: goto label_3f0428;
        case 0x3f042cu: goto label_3f042c;
        case 0x3f0430u: goto label_3f0430;
        case 0x3f0434u: goto label_3f0434;
        case 0x3f0438u: goto label_3f0438;
        case 0x3f043cu: goto label_3f043c;
        case 0x3f0440u: goto label_3f0440;
        case 0x3f0444u: goto label_3f0444;
        case 0x3f0448u: goto label_3f0448;
        case 0x3f044cu: goto label_3f044c;
        case 0x3f0450u: goto label_3f0450;
        case 0x3f0454u: goto label_3f0454;
        case 0x3f0458u: goto label_3f0458;
        case 0x3f045cu: goto label_3f045c;
        case 0x3f0460u: goto label_3f0460;
        case 0x3f0464u: goto label_3f0464;
        case 0x3f0468u: goto label_3f0468;
        case 0x3f046cu: goto label_3f046c;
        case 0x3f0470u: goto label_3f0470;
        case 0x3f0474u: goto label_3f0474;
        case 0x3f0478u: goto label_3f0478;
        case 0x3f047cu: goto label_3f047c;
        case 0x3f0480u: goto label_3f0480;
        case 0x3f0484u: goto label_3f0484;
        case 0x3f0488u: goto label_3f0488;
        case 0x3f048cu: goto label_3f048c;
        case 0x3f0490u: goto label_3f0490;
        case 0x3f0494u: goto label_3f0494;
        case 0x3f0498u: goto label_3f0498;
        case 0x3f049cu: goto label_3f049c;
        case 0x3f04a0u: goto label_3f04a0;
        case 0x3f04a4u: goto label_3f04a4;
        case 0x3f04a8u: goto label_3f04a8;
        case 0x3f04acu: goto label_3f04ac;
        case 0x3f04b0u: goto label_3f04b0;
        case 0x3f04b4u: goto label_3f04b4;
        case 0x3f04b8u: goto label_3f04b8;
        case 0x3f04bcu: goto label_3f04bc;
        case 0x3f04c0u: goto label_3f04c0;
        case 0x3f04c4u: goto label_3f04c4;
        case 0x3f04c8u: goto label_3f04c8;
        case 0x3f04ccu: goto label_3f04cc;
        case 0x3f04d0u: goto label_3f04d0;
        case 0x3f04d4u: goto label_3f04d4;
        case 0x3f04d8u: goto label_3f04d8;
        case 0x3f04dcu: goto label_3f04dc;
        case 0x3f04e0u: goto label_3f04e0;
        case 0x3f04e4u: goto label_3f04e4;
        case 0x3f04e8u: goto label_3f04e8;
        case 0x3f04ecu: goto label_3f04ec;
        case 0x3f04f0u: goto label_3f04f0;
        case 0x3f04f4u: goto label_3f04f4;
        case 0x3f04f8u: goto label_3f04f8;
        case 0x3f04fcu: goto label_3f04fc;
        case 0x3f0500u: goto label_3f0500;
        case 0x3f0504u: goto label_3f0504;
        case 0x3f0508u: goto label_3f0508;
        case 0x3f050cu: goto label_3f050c;
        case 0x3f0510u: goto label_3f0510;
        case 0x3f0514u: goto label_3f0514;
        case 0x3f0518u: goto label_3f0518;
        case 0x3f051cu: goto label_3f051c;
        case 0x3f0520u: goto label_3f0520;
        case 0x3f0524u: goto label_3f0524;
        case 0x3f0528u: goto label_3f0528;
        case 0x3f052cu: goto label_3f052c;
        case 0x3f0530u: goto label_3f0530;
        case 0x3f0534u: goto label_3f0534;
        case 0x3f0538u: goto label_3f0538;
        case 0x3f053cu: goto label_3f053c;
        case 0x3f0540u: goto label_3f0540;
        case 0x3f0544u: goto label_3f0544;
        case 0x3f0548u: goto label_3f0548;
        case 0x3f054cu: goto label_3f054c;
        case 0x3f0550u: goto label_3f0550;
        case 0x3f0554u: goto label_3f0554;
        case 0x3f0558u: goto label_3f0558;
        case 0x3f055cu: goto label_3f055c;
        case 0x3f0560u: goto label_3f0560;
        case 0x3f0564u: goto label_3f0564;
        case 0x3f0568u: goto label_3f0568;
        case 0x3f056cu: goto label_3f056c;
        case 0x3f0570u: goto label_3f0570;
        case 0x3f0574u: goto label_3f0574;
        case 0x3f0578u: goto label_3f0578;
        case 0x3f057cu: goto label_3f057c;
        case 0x3f0580u: goto label_3f0580;
        case 0x3f0584u: goto label_3f0584;
        case 0x3f0588u: goto label_3f0588;
        case 0x3f058cu: goto label_3f058c;
        case 0x3f0590u: goto label_3f0590;
        case 0x3f0594u: goto label_3f0594;
        case 0x3f0598u: goto label_3f0598;
        case 0x3f059cu: goto label_3f059c;
        case 0x3f05a0u: goto label_3f05a0;
        case 0x3f05a4u: goto label_3f05a4;
        case 0x3f05a8u: goto label_3f05a8;
        case 0x3f05acu: goto label_3f05ac;
        case 0x3f05b0u: goto label_3f05b0;
        case 0x3f05b4u: goto label_3f05b4;
        case 0x3f05b8u: goto label_3f05b8;
        case 0x3f05bcu: goto label_3f05bc;
        case 0x3f05c0u: goto label_3f05c0;
        case 0x3f05c4u: goto label_3f05c4;
        case 0x3f05c8u: goto label_3f05c8;
        case 0x3f05ccu: goto label_3f05cc;
        case 0x3f05d0u: goto label_3f05d0;
        case 0x3f05d4u: goto label_3f05d4;
        case 0x3f05d8u: goto label_3f05d8;
        case 0x3f05dcu: goto label_3f05dc;
        case 0x3f05e0u: goto label_3f05e0;
        case 0x3f05e4u: goto label_3f05e4;
        case 0x3f05e8u: goto label_3f05e8;
        case 0x3f05ecu: goto label_3f05ec;
        case 0x3f05f0u: goto label_3f05f0;
        case 0x3f05f4u: goto label_3f05f4;
        case 0x3f05f8u: goto label_3f05f8;
        case 0x3f05fcu: goto label_3f05fc;
        case 0x3f0600u: goto label_3f0600;
        case 0x3f0604u: goto label_3f0604;
        case 0x3f0608u: goto label_3f0608;
        case 0x3f060cu: goto label_3f060c;
        case 0x3f0610u: goto label_3f0610;
        case 0x3f0614u: goto label_3f0614;
        case 0x3f0618u: goto label_3f0618;
        case 0x3f061cu: goto label_3f061c;
        case 0x3f0620u: goto label_3f0620;
        case 0x3f0624u: goto label_3f0624;
        case 0x3f0628u: goto label_3f0628;
        case 0x3f062cu: goto label_3f062c;
        case 0x3f0630u: goto label_3f0630;
        case 0x3f0634u: goto label_3f0634;
        case 0x3f0638u: goto label_3f0638;
        case 0x3f063cu: goto label_3f063c;
        case 0x3f0640u: goto label_3f0640;
        case 0x3f0644u: goto label_3f0644;
        case 0x3f0648u: goto label_3f0648;
        case 0x3f064cu: goto label_3f064c;
        case 0x3f0650u: goto label_3f0650;
        case 0x3f0654u: goto label_3f0654;
        case 0x3f0658u: goto label_3f0658;
        case 0x3f065cu: goto label_3f065c;
        case 0x3f0660u: goto label_3f0660;
        case 0x3f0664u: goto label_3f0664;
        case 0x3f0668u: goto label_3f0668;
        case 0x3f066cu: goto label_3f066c;
        case 0x3f0670u: goto label_3f0670;
        case 0x3f0674u: goto label_3f0674;
        case 0x3f0678u: goto label_3f0678;
        case 0x3f067cu: goto label_3f067c;
        case 0x3f0680u: goto label_3f0680;
        case 0x3f0684u: goto label_3f0684;
        case 0x3f0688u: goto label_3f0688;
        case 0x3f068cu: goto label_3f068c;
        case 0x3f0690u: goto label_3f0690;
        case 0x3f0694u: goto label_3f0694;
        case 0x3f0698u: goto label_3f0698;
        case 0x3f069cu: goto label_3f069c;
        case 0x3f06a0u: goto label_3f06a0;
        case 0x3f06a4u: goto label_3f06a4;
        case 0x3f06a8u: goto label_3f06a8;
        case 0x3f06acu: goto label_3f06ac;
        case 0x3f06b0u: goto label_3f06b0;
        case 0x3f06b4u: goto label_3f06b4;
        case 0x3f06b8u: goto label_3f06b8;
        case 0x3f06bcu: goto label_3f06bc;
        case 0x3f06c0u: goto label_3f06c0;
        case 0x3f06c4u: goto label_3f06c4;
        case 0x3f06c8u: goto label_3f06c8;
        case 0x3f06ccu: goto label_3f06cc;
        case 0x3f06d0u: goto label_3f06d0;
        case 0x3f06d4u: goto label_3f06d4;
        case 0x3f06d8u: goto label_3f06d8;
        case 0x3f06dcu: goto label_3f06dc;
        case 0x3f06e0u: goto label_3f06e0;
        case 0x3f06e4u: goto label_3f06e4;
        case 0x3f06e8u: goto label_3f06e8;
        case 0x3f06ecu: goto label_3f06ec;
        case 0x3f06f0u: goto label_3f06f0;
        case 0x3f06f4u: goto label_3f06f4;
        case 0x3f06f8u: goto label_3f06f8;
        case 0x3f06fcu: goto label_3f06fc;
        case 0x3f0700u: goto label_3f0700;
        case 0x3f0704u: goto label_3f0704;
        case 0x3f0708u: goto label_3f0708;
        case 0x3f070cu: goto label_3f070c;
        case 0x3f0710u: goto label_3f0710;
        case 0x3f0714u: goto label_3f0714;
        case 0x3f0718u: goto label_3f0718;
        case 0x3f071cu: goto label_3f071c;
        case 0x3f0720u: goto label_3f0720;
        case 0x3f0724u: goto label_3f0724;
        case 0x3f0728u: goto label_3f0728;
        case 0x3f072cu: goto label_3f072c;
        case 0x3f0730u: goto label_3f0730;
        case 0x3f0734u: goto label_3f0734;
        case 0x3f0738u: goto label_3f0738;
        case 0x3f073cu: goto label_3f073c;
        case 0x3f0740u: goto label_3f0740;
        case 0x3f0744u: goto label_3f0744;
        case 0x3f0748u: goto label_3f0748;
        case 0x3f074cu: goto label_3f074c;
        case 0x3f0750u: goto label_3f0750;
        case 0x3f0754u: goto label_3f0754;
        default: break;
    }

    ctx->pc = 0x3f0388u;

label_3f0388:
    // 0x3f0388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f0388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f038c:
    // 0x3f038c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3f0390:
    // 0x3f0390: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f0390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3f0394:
    // 0x3f0394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0398:
    // 0x3f0398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f039c:
    // 0x3f039c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f03a0:
    // 0x3f03a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f03a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f03a4:
    // 0x3f03a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f03a8:
    // 0x3f03a8: 0x40f809  jalr        $v0
label_3f03ac:
    if (ctx->pc == 0x3F03ACu) {
        ctx->pc = 0x3F03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03A8u;
        // 0x3f03ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F03B0u;
        goto label_3f03b0;
    }
    ctx->pc = 0x3F03A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F03B0u);
        ctx->pc = 0x3F03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03A8u;
        // 0x3f03ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F03A8u, 0x3F03B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F03B0u;
label_3f03b0:
    // 0x3f03b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f03b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f03b4:
    // 0x3f03b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3f03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3f03b8:
    // 0x3f03b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3f03bc:
    if (ctx->pc == 0x3F03BCu) {
        ctx->pc = 0x3F03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03B8u;
        // 0x3f03bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F03C0u;
        goto label_3f03c0;
    }
    ctx->pc = 0x3F03B8u;
    {
        const bool branch_taken_0x3f03b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03B8u;
        // 0x3f03bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f03b8) {
            ctx->pc = 0x3F03D8u;
            goto label_3f03d8;
        }
    }
    ctx->pc = 0x3F03C0u;
label_3f03c0:
    // 0x3f03c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f03c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f03c4:
    // 0x3f03c4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3f03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3f03c8:
    // 0x3f03c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f03c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f03cc:
    // 0x3f03cc: 0xc0e637e  jal         func_398DF8
label_3f03d0:
    if (ctx->pc == 0x3F03D0u) {
        ctx->pc = 0x3F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03CCu;
        // 0x3f03d0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F03D4u;
        goto label_3f03d4;
    }
    ctx->pc = 0x3F03CCu;
    SET_GPR_U32(ctx, 31, 0x3F03D4u);
    ctx->pc = 0x3F03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F03CCu;
    // 0x3f03d0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F03CCu, 0x3F03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F03D4u;
label_3f03d4:
    // 0x3f03d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3f03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3f03d8:
    // 0x3f03d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3f03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f03dc:
    // 0x3f03dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f03e0:
    // 0x3f03e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f03e4:
    // 0x3f03e4: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
label_3f03e8:
    if (ctx->pc == 0x3F03E8u) {
        ctx->pc = 0x3F03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03E4u;
        // 0x3f03e8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F03ECu;
        goto label_3f03ec;
    }
    ctx->pc = 0x3F03E4u;
    {
        const bool branch_taken_0x3f03e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03E4u;
        // 0x3f03e8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f03e4) {
            ctx->pc = 0x3F0478u;
            goto label_3f0478;
        }
    }
    ctx->pc = 0x3F03ECu;
label_3f03ec:
    // 0x3f03ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f03ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f03f0:
    // 0x3f03f0: 0xc0e858c  jal         func_3A1630
label_3f03f4:
    if (ctx->pc == 0x3F03F4u) {
        ctx->pc = 0x3F03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F03F0u;
        // 0x3f03f4: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F03F8u;
        goto label_3f03f8;
    }
    ctx->pc = 0x3F03F0u;
    SET_GPR_U32(ctx, 31, 0x3F03F8u);
    ctx->pc = 0x3F03F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F03F0u;
    // 0x3f03f4: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F03F0u, 0x3F03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F03F8u;
label_3f03f8:
    // 0x3f03f8: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f03f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f03fc:
    // 0x3f03fc: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f03fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f0400:
    // 0x3f0400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0404:
    // 0x3f0404: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3f0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0408:
    // 0x3f0408: 0x3c01c394  lui         $at, 0xC394
    ctx->pc = 0x3f0408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50068 << 16));
label_3f040c:
    // 0x3f040c: 0x3421a23d  ori         $at, $at, 0xA23D
    ctx->pc = 0x3f040cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41533);
label_3f0410:
    // 0x3f0410: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0414:
    // 0x3f0414: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f0414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f0418:
    // 0x3f0418: 0x3c013ecb  lui         $at, 0x3ECB
    ctx->pc = 0x3f0418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16075 << 16));
label_3f041c:
    // 0x3f041c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x3f041cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_3f0420:
    // 0x3f0420: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0424:
    // 0x3f0424: 0x3463ff90  ori         $v1, $v1, 0xFF90
    ctx->pc = 0x3f0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65424);
label_3f0428:
    // 0x3f0428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f042c:
    // 0x3f042c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f042cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0430:
    // 0x3f0430: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x3f0430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_3f0434:
    // 0x3f0434: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0438:
    // 0x3f0438: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3f0438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3f043c:
    // 0x3f043c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f0440:
    // 0x3f0440: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3f0440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3f0444:
    // 0x3f0444: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f0444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0448:
    // 0x3f0448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f0448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f044c:
    // 0x3f044c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x3f044cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f0450:
    // 0x3f0450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0454:
    // 0x3f0454: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x3f0454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_3f0458:
    // 0x3f0458: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f0458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f045c:
    // 0x3f045c: 0x8ce82c7c  lw          $t0, 0x2C7C($a3)
    ctx->pc = 0x3f045cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11388)));
label_3f0460:
    // 0x3f0460: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3f0460u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
label_3f0464:
    // 0x3f0464: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f0468:
    // 0x3f0468: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f0468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f046c:
    // 0x3f046c: 0xac4400cc  sw          $a0, 0xCC($v0)
    ctx->pc = 0x3f046cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 4));
label_3f0470:
    // 0x3f0470: 0xc0e637e  jal         func_398DF8
label_3f0474:
    if (ctx->pc == 0x3F0474u) {
        ctx->pc = 0x3F0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0470u;
        // 0x3f0474: 0x8d040840  lw          $a0, 0x840($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0478u;
        goto label_3f0478;
    }
    ctx->pc = 0x3F0470u;
    SET_GPR_U32(ctx, 31, 0x3F0478u);
    ctx->pc = 0x3F0474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0470u;
    // 0x3f0474: 0x8d040840  lw          $a0, 0x840($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F0470u, 0x3F0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0478u;
label_3f0478:
    // 0x3f0478: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f0478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f047c:
    // 0x3f047c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0480:
    // 0x3f0480: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_3f0484:
    if (ctx->pc == 0x3F0484u) {
        ctx->pc = 0x3F0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0480u;
        // 0x3f0484: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0488u;
        goto label_3f0488;
    }
    ctx->pc = 0x3F0480u;
    {
        const bool branch_taken_0x3f0480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0480u;
        // 0x3f0484: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0480) {
            ctx->pc = 0x3F04E8u;
            goto label_3f04e8;
        }
    }
    ctx->pc = 0x3F0488u;
label_3f0488:
    // 0x3f0488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f048c:
    // 0x3f048c: 0xc0e858c  jal         func_3A1630
label_3f0490:
    if (ctx->pc == 0x3F0490u) {
        ctx->pc = 0x3F0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F048Cu;
        // 0x3f0490: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0494u;
        goto label_3f0494;
    }
    ctx->pc = 0x3F048Cu;
    SET_GPR_U32(ctx, 31, 0x3F0494u);
    ctx->pc = 0x3F0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F048Cu;
    // 0x3f0490: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F048Cu, 0x3F0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0494u;
label_3f0494:
    // 0x3f0494: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f0494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f0498:
    // 0x3f0498: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f0498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f049c:
    // 0x3f049c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f049cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f04a0:
    // 0x3f04a0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f04a4:
    // 0x3f04a4: 0x3c01c37a  lui         $at, 0xC37A
    ctx->pc = 0x3f04a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50042 << 16));
label_3f04a8:
    // 0x3f04a8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3f04a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_3f04ac:
    // 0x3f04ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f04acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f04b0:
    // 0x3f04b0: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x3f04b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_3f04b4:
    // 0x3f04b4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3f04b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_3f04b8:
    // 0x3f04b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f04b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f04bc:
    // 0x3f04bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f04bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f04c0:
    // 0x3f04c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f04c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f04c4:
    // 0x3f04c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f04c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f04c8:
    // 0x3f04c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f04c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f04cc:
    // 0x3f04cc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f04ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f04d0:
    // 0x3f04d0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f04d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f04d4:
    // 0x3f04d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f04d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f04d8:
    // 0x3f04d8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f04d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f04dc:
    // 0x3f04dc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f04e0:
    // 0x3f04e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f04e4:
    // 0x3f04e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f04e8:
    // 0x3f04e8: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f04ec:
    if (ctx->pc == 0x3F04ECu) {
        ctx->pc = 0x3F04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F04E8u;
        // 0x3f04ec: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F04F0u;
        goto label_3f04f0;
    }
    ctx->pc = 0x3F04E8u;
    {
        const bool branch_taken_0x3f04e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f04e8) {
            ctx->pc = 0x3F04ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F04E8u;
            // 0x3f04ec: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F054Cu;
            goto label_3f054c;
        }
    }
    ctx->pc = 0x3F04F0u;
label_3f04f0:
    // 0x3f04f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f04f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f04f4:
    // 0x3f04f4: 0xc0e858c  jal         func_3A1630
label_3f04f8:
    if (ctx->pc == 0x3F04F8u) {
        ctx->pc = 0x3F04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F04F4u;
        // 0x3f04f8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F04FCu;
        goto label_3f04fc;
    }
    ctx->pc = 0x3F04F4u;
    SET_GPR_U32(ctx, 31, 0x3F04FCu);
    ctx->pc = 0x3F04F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F04F4u;
    // 0x3f04f8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F04F4u, 0x3F04FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F04FCu;
label_3f04fc:
    // 0x3f04fc: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f04fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f0500:
    // 0x3f0500: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f0500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f0504:
    // 0x3f0504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0508:
    // 0x3f0508: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f050c:
    // 0x3f050c: 0x3c01c376  lui         $at, 0xC376
    ctx->pc = 0x3f050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50038 << 16));
label_3f0510:
    // 0x3f0510: 0x3421e8f6  ori         $at, $at, 0xE8F6
    ctx->pc = 0x3f0510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59638);
label_3f0514:
    // 0x3f0514: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0518:
    // 0x3f0518: 0x3c013eac  lui         $at, 0x3EAC
    ctx->pc = 0x3f0518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16044 << 16));
label_3f051c:
    // 0x3f051c: 0x34218b44  ori         $at, $at, 0x8B44
    ctx->pc = 0x3f051cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35652);
label_3f0520:
    // 0x3f0520: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0524:
    // 0x3f0524: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0528:
    // 0x3f0528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f052c:
    // 0x3f052c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f052cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0530:
    // 0x3f0530: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0534:
    // 0x3f0534: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0538:
    // 0x3f0538: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0538u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f053c:
    // 0x3f053c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f053cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0540:
    // 0x3f0540: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0540u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0544:
    // 0x3f0544: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f0544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f0548:
    // 0x3f0548: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f054c:
    // 0x3f054c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f0550:
    // 0x3f0550: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_3f0554:
    if (ctx->pc == 0x3F0554u) {
        ctx->pc = 0x3F0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0550u;
        // 0x3f0554: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0558u;
        goto label_3f0558;
    }
    ctx->pc = 0x3F0550u;
    {
        const bool branch_taken_0x3f0550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0550) {
            ctx->pc = 0x3F0554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0550u;
            // 0x3f0554: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F05C4u;
            goto label_3f05c4;
        }
    }
    ctx->pc = 0x3F0558u;
label_3f0558:
    // 0x3f0558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f055c:
    // 0x3f055c: 0xc0e858c  jal         func_3A1630
label_3f0560:
    if (ctx->pc == 0x3F0560u) {
        ctx->pc = 0x3F0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F055Cu;
        // 0x3f0560: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0564u;
        goto label_3f0564;
    }
    ctx->pc = 0x3F055Cu;
    SET_GPR_U32(ctx, 31, 0x3F0564u);
    ctx->pc = 0x3F0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F055Cu;
    // 0x3f0560: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F055Cu, 0x3F0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0564u;
label_3f0564:
    // 0x3f0564: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f0564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f0568:
    // 0x3f0568: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f0568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f056c:
    // 0x3f056c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f056cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0570:
    // 0x3f0570: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0574:
    // 0x3f0574: 0x3c01c374  lui         $at, 0xC374
    ctx->pc = 0x3f0574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50036 << 16));
label_3f0578:
    // 0x3f0578: 0x3421e8f6  ori         $at, $at, 0xE8F6
    ctx->pc = 0x3f0578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59638);
label_3f057c:
    // 0x3f057c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0580:
    // 0x3f0580: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3f0580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3f0584:
    // 0x3f0584: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3f0584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3f0588:
    // 0x3f0588: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f0588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f058c:
    // 0x3f058c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f058cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0590:
    // 0x3f0590: 0x3484ffa0  ori         $a0, $a0, 0xFFA0
    ctx->pc = 0x3f0590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65440);
label_3f0594:
    // 0x3f0594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0598:
    // 0x3f0598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f059c:
    // 0x3f059c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f059cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f05a0:
    // 0x3f05a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f05a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f05a4:
    // 0x3f05a4: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f05a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f05a8:
    // 0x3f05a8: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f05a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f05ac:
    // 0x3f05ac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f05acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f05b0:
    // 0x3f05b0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f05b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f05b4:
    // 0x3f05b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f05b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f05b8:
    // 0x3f05b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f05bc:
    // 0x3f05bc: 0xac6400cc  sw          $a0, 0xCC($v1)
    ctx->pc = 0x3f05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
label_3f05c0:
    // 0x3f05c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f05c4:
    // 0x3f05c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3f05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f05c8:
    // 0x3f05c8: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_3f05cc:
    if (ctx->pc == 0x3F05CCu) {
        ctx->pc = 0x3F05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05C8u;
        // 0x3f05cc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F05D0u;
        goto label_3f05d0;
    }
    ctx->pc = 0x3F05C8u;
    {
        const bool branch_taken_0x3f05c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f05c8) {
            ctx->pc = 0x3F05CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F05C8u;
            // 0x3f05cc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0628u;
            goto label_3f0628;
        }
    }
    ctx->pc = 0x3F05D0u;
label_3f05d0:
    // 0x3f05d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f05d4:
    // 0x3f05d4: 0xc0e858c  jal         func_3A1630
label_3f05d8:
    if (ctx->pc == 0x3F05D8u) {
        ctx->pc = 0x3F05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05D4u;
        // 0x3f05d8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F05DCu;
        goto label_3f05dc;
    }
    ctx->pc = 0x3F05D4u;
    SET_GPR_U32(ctx, 31, 0x3F05DCu);
    ctx->pc = 0x3F05D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F05D4u;
    // 0x3f05d8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F05D4u, 0x3F05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F05DCu;
label_3f05dc:
    // 0x3f05dc: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f05dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f05e0:
    // 0x3f05e0: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f05e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f05e4:
    // 0x3f05e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f05e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f05e8:
    // 0x3f05e8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f05ec:
    // 0x3f05ec: 0x3c01c373  lui         $at, 0xC373
    ctx->pc = 0x3f05ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50035 << 16));
label_3f05f0:
    // 0x3f05f0: 0x3421ee14  ori         $at, $at, 0xEE14
    ctx->pc = 0x3f05f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60948);
label_3f05f4:
    // 0x3f05f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f05f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f05f8:
    // 0x3f05f8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3f05f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3f05fc:
    // 0x3f05fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f05fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0600:
    // 0x3f0600: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0604:
    // 0x3f0604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0608:
    // 0x3f0608: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f060c:
    // 0x3f060c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0610:
    // 0x3f0610: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0614:
    // 0x3f0614: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0614u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0618:
    // 0x3f0618: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f061c:
    // 0x3f061c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f061cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0620:
    // 0x3f0620: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f0620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f0624:
    // 0x3f0624: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f0624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f0628:
    // 0x3f0628: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3f0628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f062c:
    // 0x3f062c: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_3f0630:
    if (ctx->pc == 0x3F0630u) {
        ctx->pc = 0x3F0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F062Cu;
        // 0x3f0630: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0634u;
        goto label_3f0634;
    }
    ctx->pc = 0x3F062Cu;
    {
        const bool branch_taken_0x3f062c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f062c) {
            ctx->pc = 0x3F0630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F062Cu;
            // 0x3f0630: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F06ACu;
            goto label_3f06ac;
        }
    }
    ctx->pc = 0x3F0634u;
label_3f0634:
    // 0x3f0634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0638:
    // 0x3f0638: 0xc0e858c  jal         func_3A1630
label_3f063c:
    if (ctx->pc == 0x3F063Cu) {
        ctx->pc = 0x3F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0638u;
        // 0x3f063c: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0640u;
        goto label_3f0640;
    }
    ctx->pc = 0x3F0638u;
    SET_GPR_U32(ctx, 31, 0x3F0640u);
    ctx->pc = 0x3F063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0638u;
    // 0x3f063c: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0638u, 0x3F0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0640u;
label_3f0640:
    // 0x3f0640: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f0640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f0644:
    // 0x3f0644: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f0644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f0648:
    // 0x3f0648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f064c:
    // 0x3f064c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3f064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0650:
    // 0x3f0650: 0x3c01c38a  lui         $at, 0xC38A
    ctx->pc = 0x3f0650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50058 << 16));
label_3f0654:
    // 0x3f0654: 0x3421f8f6  ori         $at, $at, 0xF8F6
    ctx->pc = 0x3f0654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63734);
label_3f0658:
    // 0x3f0658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f065c:
    // 0x3f065c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3f065cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3f0660:
    // 0x3f0660: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3f0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0664:
    // 0x3f0664: 0x3484ff01  ori         $a0, $a0, 0xFF01
    ctx->pc = 0x3f0664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65281);
label_3f0668:
    // 0x3f0668: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3f0668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f066c:
    // 0x3f066c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3f066cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3f0670:
    // 0x3f0670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0674:
    // 0x3f0674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0678:
    // 0x3f0678: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x3f0678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
label_3f067c:
    // 0x3f067c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3f067cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3f0680:
    // 0x3f0680: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f0680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f0684:
    // 0x3f0684: 0xae0400c8  sw          $a0, 0xC8($s0)
    ctx->pc = 0x3f0684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 4));
label_3f0688:
    // 0x3f0688: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f068c:
    // 0x3f068c: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x3f068cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
label_3f0690:
    // 0x3f0690: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0690u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0694:
    // 0x3f0694: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f0698:
    // 0x3f0698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f069c:
    // 0x3f069c: 0xac6400c8  sw          $a0, 0xC8($v1)
    ctx->pc = 0x3f069cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 4));
label_3f06a0:
    // 0x3f06a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f06a4:
    // 0x3f06a4: 0xac4500cc  sw          $a1, 0xCC($v0)
    ctx->pc = 0x3f06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 5));
label_3f06a8:
    // 0x3f06a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f06ac:
    // 0x3f06ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f06acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f06b0:
    // 0x3f06b0: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f06b4:
    if (ctx->pc == 0x3F06B4u) {
        ctx->pc = 0x3F06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06B0u;
        // 0x3f06b4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F06B8u;
        goto label_3f06b8;
    }
    ctx->pc = 0x3F06B0u;
    {
        const bool branch_taken_0x3f06b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f06b0) {
            ctx->pc = 0x3F06B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F06B0u;
            // 0x3f06b4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0714u;
            goto label_3f0714;
        }
    }
    ctx->pc = 0x3F06B8u;
label_3f06b8:
    // 0x3f06b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f06b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f06bc:
    // 0x3f06bc: 0xc0e858c  jal         func_3A1630
label_3f06c0:
    if (ctx->pc == 0x3F06C0u) {
        ctx->pc = 0x3F06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06BCu;
        // 0x3f06c0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F06C4u;
        goto label_3f06c4;
    }
    ctx->pc = 0x3F06BCu;
    SET_GPR_U32(ctx, 31, 0x3F06C4u);
    ctx->pc = 0x3F06C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F06BCu;
    // 0x3f06c0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F06BCu, 0x3F06C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F06C4u;
label_3f06c4:
    // 0x3f06c4: 0x3c01c40e  lui         $at, 0xC40E
    ctx->pc = 0x3f06c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50190 << 16));
label_3f06c8:
    // 0x3f06c8: 0x34216333  ori         $at, $at, 0x6333
    ctx->pc = 0x3f06c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25395);
label_3f06cc:
    // 0x3f06cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f06ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f06d0:
    // 0x3f06d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f06d4:
    // 0x3f06d4: 0x3c01c39a  lui         $at, 0xC39A
    ctx->pc = 0x3f06d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50074 << 16));
label_3f06d8:
    // 0x3f06d8: 0x3421fae1  ori         $at, $at, 0xFAE1
    ctx->pc = 0x3f06d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64225);
label_3f06dc:
    // 0x3f06dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f06dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f06e0:
    // 0x3f06e0: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x3f06e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_3f06e4:
    // 0x3f06e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3f06e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3f06e8:
    // 0x3f06e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f06e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f06ec:
    // 0x3f06ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f06ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f06f0:
    // 0x3f06f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f06f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f06f4:
    // 0x3f06f4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f06f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f06f8:
    // 0x3f06f8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f06f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f06fc:
    // 0x3f06fc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f06fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0700:
    // 0x3f0700: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0704:
    // 0x3f0704: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0708:
    // 0x3f0708: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0708u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f070c:
    // 0x3f070c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f0710:
    // 0x3f0710: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f0714:
    // 0x3f0714: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3f0714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3f0718:
    // 0x3f0718: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_3f071c:
    if (ctx->pc == 0x3F071Cu) {
        ctx->pc = 0x3F071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0718u;
        // 0x3f071c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0720u;
        goto label_3f0720;
    }
    ctx->pc = 0x3F0718u;
    {
        const bool branch_taken_0x3f0718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0718u;
        // 0x3f071c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0718) {
            ctx->pc = 0x3F0744u;
            goto label_3f0744;
        }
    }
    ctx->pc = 0x3F0720u;
label_3f0720:
    // 0x3f0720: 0xc0e8616  jal         func_3A1858
label_3f0724:
    if (ctx->pc == 0x3F0724u) {
        ctx->pc = 0x3F0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0720u;
        // 0x3f0724: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0728u;
        goto label_3f0728;
    }
    ctx->pc = 0x3F0720u;
    SET_GPR_U32(ctx, 31, 0x3F0728u);
    ctx->pc = 0x3F0724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0720u;
    // 0x3f0724: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3F0720u, 0x3F0728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0728u;
label_3f0728:
    // 0x3f0728: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3f0728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f072c:
    // 0x3f072c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f0730:
    // 0x3f0730: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3f0730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3f0734:
    // 0x3f0734: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f0734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3f0738:
    // 0x3f0738: 0x60f809  jalr        $v1
label_3f073c:
    if (ctx->pc == 0x3F073Cu) {
        ctx->pc = 0x3F073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0738u;
        // 0x3f073c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0740u;
        goto label_3f0740;
    }
    ctx->pc = 0x3F0738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F0740u);
        ctx->pc = 0x3F073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0738u;
        // 0x3f073c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0738u, 0x3F0740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0740u;
label_3f0740:
    // 0x3f0740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0744:
    // 0x3f0744: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f0744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0748:
    // 0x3f0748: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f0748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f074c:
    // 0x3f074c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0750:
    // 0x3f0750: 0x3e00008  jr          $ra
label_3f0754:
    if (ctx->pc == 0x3F0754u) {
        ctx->pc = 0x3F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0750u;
        // 0x3f0754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0758u;
        goto label_fallthrough_0x3f0750;
    }
    ctx->pc = 0x3F0750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0750u;
        // 0x3f0754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0750:
    ctx->pc = 0x3F0758u;
}

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

// Function: sub_003AB5B0
// Address: 0x3ab5b0 - 0x3ab980
void sub_003AB5B0_0x3ab5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB5B0_0x3ab5b0");
#endif

    switch (ctx->pc) {
        case 0x3ab5b0u: goto label_3ab5b0;
        case 0x3ab5b4u: goto label_3ab5b4;
        case 0x3ab5b8u: goto label_3ab5b8;
        case 0x3ab5bcu: goto label_3ab5bc;
        case 0x3ab5c0u: goto label_3ab5c0;
        case 0x3ab5c4u: goto label_3ab5c4;
        case 0x3ab5c8u: goto label_3ab5c8;
        case 0x3ab5ccu: goto label_3ab5cc;
        case 0x3ab5d0u: goto label_3ab5d0;
        case 0x3ab5d4u: goto label_3ab5d4;
        case 0x3ab5d8u: goto label_3ab5d8;
        case 0x3ab5dcu: goto label_3ab5dc;
        case 0x3ab5e0u: goto label_3ab5e0;
        case 0x3ab5e4u: goto label_3ab5e4;
        case 0x3ab5e8u: goto label_3ab5e8;
        case 0x3ab5ecu: goto label_3ab5ec;
        case 0x3ab5f0u: goto label_3ab5f0;
        case 0x3ab5f4u: goto label_3ab5f4;
        case 0x3ab5f8u: goto label_3ab5f8;
        case 0x3ab5fcu: goto label_3ab5fc;
        case 0x3ab600u: goto label_3ab600;
        case 0x3ab604u: goto label_3ab604;
        case 0x3ab608u: goto label_3ab608;
        case 0x3ab60cu: goto label_3ab60c;
        case 0x3ab610u: goto label_3ab610;
        case 0x3ab614u: goto label_3ab614;
        case 0x3ab618u: goto label_3ab618;
        case 0x3ab61cu: goto label_3ab61c;
        case 0x3ab620u: goto label_3ab620;
        case 0x3ab624u: goto label_3ab624;
        case 0x3ab628u: goto label_3ab628;
        case 0x3ab62cu: goto label_3ab62c;
        case 0x3ab630u: goto label_3ab630;
        case 0x3ab634u: goto label_3ab634;
        case 0x3ab638u: goto label_3ab638;
        case 0x3ab63cu: goto label_3ab63c;
        case 0x3ab640u: goto label_3ab640;
        case 0x3ab644u: goto label_3ab644;
        case 0x3ab648u: goto label_3ab648;
        case 0x3ab64cu: goto label_3ab64c;
        case 0x3ab650u: goto label_3ab650;
        case 0x3ab654u: goto label_3ab654;
        case 0x3ab658u: goto label_3ab658;
        case 0x3ab65cu: goto label_3ab65c;
        case 0x3ab660u: goto label_3ab660;
        case 0x3ab664u: goto label_3ab664;
        case 0x3ab668u: goto label_3ab668;
        case 0x3ab66cu: goto label_3ab66c;
        case 0x3ab670u: goto label_3ab670;
        case 0x3ab674u: goto label_3ab674;
        case 0x3ab678u: goto label_3ab678;
        case 0x3ab67cu: goto label_3ab67c;
        case 0x3ab680u: goto label_3ab680;
        case 0x3ab684u: goto label_3ab684;
        case 0x3ab688u: goto label_3ab688;
        case 0x3ab68cu: goto label_3ab68c;
        case 0x3ab690u: goto label_3ab690;
        case 0x3ab694u: goto label_3ab694;
        case 0x3ab698u: goto label_3ab698;
        case 0x3ab69cu: goto label_3ab69c;
        case 0x3ab6a0u: goto label_3ab6a0;
        case 0x3ab6a4u: goto label_3ab6a4;
        case 0x3ab6a8u: goto label_3ab6a8;
        case 0x3ab6acu: goto label_3ab6ac;
        case 0x3ab6b0u: goto label_3ab6b0;
        case 0x3ab6b4u: goto label_3ab6b4;
        case 0x3ab6b8u: goto label_3ab6b8;
        case 0x3ab6bcu: goto label_3ab6bc;
        case 0x3ab6c0u: goto label_3ab6c0;
        case 0x3ab6c4u: goto label_3ab6c4;
        case 0x3ab6c8u: goto label_3ab6c8;
        case 0x3ab6ccu: goto label_3ab6cc;
        case 0x3ab6d0u: goto label_3ab6d0;
        case 0x3ab6d4u: goto label_3ab6d4;
        case 0x3ab6d8u: goto label_3ab6d8;
        case 0x3ab6dcu: goto label_3ab6dc;
        case 0x3ab6e0u: goto label_3ab6e0;
        case 0x3ab6e4u: goto label_3ab6e4;
        case 0x3ab6e8u: goto label_3ab6e8;
        case 0x3ab6ecu: goto label_3ab6ec;
        case 0x3ab6f0u: goto label_3ab6f0;
        case 0x3ab6f4u: goto label_3ab6f4;
        case 0x3ab6f8u: goto label_3ab6f8;
        case 0x3ab6fcu: goto label_3ab6fc;
        case 0x3ab700u: goto label_3ab700;
        case 0x3ab704u: goto label_3ab704;
        case 0x3ab708u: goto label_3ab708;
        case 0x3ab70cu: goto label_3ab70c;
        case 0x3ab710u: goto label_3ab710;
        case 0x3ab714u: goto label_3ab714;
        case 0x3ab718u: goto label_3ab718;
        case 0x3ab71cu: goto label_3ab71c;
        case 0x3ab720u: goto label_3ab720;
        case 0x3ab724u: goto label_3ab724;
        case 0x3ab728u: goto label_3ab728;
        case 0x3ab72cu: goto label_3ab72c;
        case 0x3ab730u: goto label_3ab730;
        case 0x3ab734u: goto label_3ab734;
        case 0x3ab738u: goto label_3ab738;
        case 0x3ab73cu: goto label_3ab73c;
        case 0x3ab740u: goto label_3ab740;
        case 0x3ab744u: goto label_3ab744;
        case 0x3ab748u: goto label_3ab748;
        case 0x3ab74cu: goto label_3ab74c;
        case 0x3ab750u: goto label_3ab750;
        case 0x3ab754u: goto label_3ab754;
        case 0x3ab758u: goto label_3ab758;
        case 0x3ab75cu: goto label_3ab75c;
        case 0x3ab760u: goto label_3ab760;
        case 0x3ab764u: goto label_3ab764;
        case 0x3ab768u: goto label_3ab768;
        case 0x3ab76cu: goto label_3ab76c;
        case 0x3ab770u: goto label_3ab770;
        case 0x3ab774u: goto label_3ab774;
        case 0x3ab778u: goto label_3ab778;
        case 0x3ab77cu: goto label_3ab77c;
        case 0x3ab780u: goto label_3ab780;
        case 0x3ab784u: goto label_3ab784;
        case 0x3ab788u: goto label_3ab788;
        case 0x3ab78cu: goto label_3ab78c;
        case 0x3ab790u: goto label_3ab790;
        case 0x3ab794u: goto label_3ab794;
        case 0x3ab798u: goto label_3ab798;
        case 0x3ab79cu: goto label_3ab79c;
        case 0x3ab7a0u: goto label_3ab7a0;
        case 0x3ab7a4u: goto label_3ab7a4;
        case 0x3ab7a8u: goto label_3ab7a8;
        case 0x3ab7acu: goto label_3ab7ac;
        case 0x3ab7b0u: goto label_3ab7b0;
        case 0x3ab7b4u: goto label_3ab7b4;
        case 0x3ab7b8u: goto label_3ab7b8;
        case 0x3ab7bcu: goto label_3ab7bc;
        case 0x3ab7c0u: goto label_3ab7c0;
        case 0x3ab7c4u: goto label_3ab7c4;
        case 0x3ab7c8u: goto label_3ab7c8;
        case 0x3ab7ccu: goto label_3ab7cc;
        case 0x3ab7d0u: goto label_3ab7d0;
        case 0x3ab7d4u: goto label_3ab7d4;
        case 0x3ab7d8u: goto label_3ab7d8;
        case 0x3ab7dcu: goto label_3ab7dc;
        case 0x3ab7e0u: goto label_3ab7e0;
        case 0x3ab7e4u: goto label_3ab7e4;
        case 0x3ab7e8u: goto label_3ab7e8;
        case 0x3ab7ecu: goto label_3ab7ec;
        case 0x3ab7f0u: goto label_3ab7f0;
        case 0x3ab7f4u: goto label_3ab7f4;
        case 0x3ab7f8u: goto label_3ab7f8;
        case 0x3ab7fcu: goto label_3ab7fc;
        case 0x3ab800u: goto label_3ab800;
        case 0x3ab804u: goto label_3ab804;
        case 0x3ab808u: goto label_3ab808;
        case 0x3ab80cu: goto label_3ab80c;
        case 0x3ab810u: goto label_3ab810;
        case 0x3ab814u: goto label_3ab814;
        case 0x3ab818u: goto label_3ab818;
        case 0x3ab81cu: goto label_3ab81c;
        case 0x3ab820u: goto label_3ab820;
        case 0x3ab824u: goto label_3ab824;
        case 0x3ab828u: goto label_3ab828;
        case 0x3ab82cu: goto label_3ab82c;
        case 0x3ab830u: goto label_3ab830;
        case 0x3ab834u: goto label_3ab834;
        case 0x3ab838u: goto label_3ab838;
        case 0x3ab83cu: goto label_3ab83c;
        case 0x3ab840u: goto label_3ab840;
        case 0x3ab844u: goto label_3ab844;
        case 0x3ab848u: goto label_3ab848;
        case 0x3ab84cu: goto label_3ab84c;
        case 0x3ab850u: goto label_3ab850;
        case 0x3ab854u: goto label_3ab854;
        case 0x3ab858u: goto label_3ab858;
        case 0x3ab85cu: goto label_3ab85c;
        case 0x3ab860u: goto label_3ab860;
        case 0x3ab864u: goto label_3ab864;
        case 0x3ab868u: goto label_3ab868;
        case 0x3ab86cu: goto label_3ab86c;
        case 0x3ab870u: goto label_3ab870;
        case 0x3ab874u: goto label_3ab874;
        case 0x3ab878u: goto label_3ab878;
        case 0x3ab87cu: goto label_3ab87c;
        case 0x3ab880u: goto label_3ab880;
        case 0x3ab884u: goto label_3ab884;
        case 0x3ab888u: goto label_3ab888;
        case 0x3ab88cu: goto label_3ab88c;
        case 0x3ab890u: goto label_3ab890;
        case 0x3ab894u: goto label_3ab894;
        case 0x3ab898u: goto label_3ab898;
        case 0x3ab89cu: goto label_3ab89c;
        case 0x3ab8a0u: goto label_3ab8a0;
        case 0x3ab8a4u: goto label_3ab8a4;
        case 0x3ab8a8u: goto label_3ab8a8;
        case 0x3ab8acu: goto label_3ab8ac;
        case 0x3ab8b0u: goto label_3ab8b0;
        case 0x3ab8b4u: goto label_3ab8b4;
        case 0x3ab8b8u: goto label_3ab8b8;
        case 0x3ab8bcu: goto label_3ab8bc;
        case 0x3ab8c0u: goto label_3ab8c0;
        case 0x3ab8c4u: goto label_3ab8c4;
        case 0x3ab8c8u: goto label_3ab8c8;
        case 0x3ab8ccu: goto label_3ab8cc;
        case 0x3ab8d0u: goto label_3ab8d0;
        case 0x3ab8d4u: goto label_3ab8d4;
        case 0x3ab8d8u: goto label_3ab8d8;
        case 0x3ab8dcu: goto label_3ab8dc;
        case 0x3ab8e0u: goto label_3ab8e0;
        case 0x3ab8e4u: goto label_3ab8e4;
        case 0x3ab8e8u: goto label_3ab8e8;
        case 0x3ab8ecu: goto label_3ab8ec;
        case 0x3ab8f0u: goto label_3ab8f0;
        case 0x3ab8f4u: goto label_3ab8f4;
        case 0x3ab8f8u: goto label_3ab8f8;
        case 0x3ab8fcu: goto label_3ab8fc;
        case 0x3ab900u: goto label_3ab900;
        case 0x3ab904u: goto label_3ab904;
        case 0x3ab908u: goto label_3ab908;
        case 0x3ab90cu: goto label_3ab90c;
        case 0x3ab910u: goto label_3ab910;
        case 0x3ab914u: goto label_3ab914;
        case 0x3ab918u: goto label_3ab918;
        case 0x3ab91cu: goto label_3ab91c;
        case 0x3ab920u: goto label_3ab920;
        case 0x3ab924u: goto label_3ab924;
        case 0x3ab928u: goto label_3ab928;
        case 0x3ab92cu: goto label_3ab92c;
        case 0x3ab930u: goto label_3ab930;
        case 0x3ab934u: goto label_3ab934;
        case 0x3ab938u: goto label_3ab938;
        case 0x3ab93cu: goto label_3ab93c;
        case 0x3ab940u: goto label_3ab940;
        case 0x3ab944u: goto label_3ab944;
        case 0x3ab948u: goto label_3ab948;
        case 0x3ab94cu: goto label_3ab94c;
        case 0x3ab950u: goto label_3ab950;
        case 0x3ab954u: goto label_3ab954;
        case 0x3ab958u: goto label_3ab958;
        case 0x3ab95cu: goto label_3ab95c;
        case 0x3ab960u: goto label_3ab960;
        case 0x3ab964u: goto label_3ab964;
        case 0x3ab968u: goto label_3ab968;
        case 0x3ab96cu: goto label_3ab96c;
        case 0x3ab970u: goto label_3ab970;
        case 0x3ab974u: goto label_3ab974;
        case 0x3ab978u: goto label_3ab978;
        case 0x3ab97cu: goto label_3ab97c;
        default: break;
    }

    ctx->pc = 0x3ab5b0u;

label_3ab5b0:
    // 0x3ab5b0: 0x27bdf6b0  addiu       $sp, $sp, -0x950
    ctx->pc = 0x3ab5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964912));
label_3ab5b4:
    // 0x3ab5b4: 0x7fb00930  sq          $s0, 0x930($sp)
    ctx->pc = 0x3ab5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 16));
label_3ab5b8:
    // 0x3ab5b8: 0x7fb10920  sq          $s1, 0x920($sp)
    ctx->pc = 0x3ab5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 17));
label_3ab5bc:
    // 0x3ab5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5c0:
    // 0x3ab5c0: 0x7fb20910  sq          $s2, 0x910($sp)
    ctx->pc = 0x3ab5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 18));
label_3ab5c4:
    // 0x3ab5c4: 0x7fb30900  sq          $s3, 0x900($sp)
    ctx->pc = 0x3ab5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 19));
label_3ab5c8:
    // 0x3ab5c8: 0x7fb408f0  sq          $s4, 0x8F0($sp)
    ctx->pc = 0x3ab5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 20));
label_3ab5cc:
    // 0x3ab5cc: 0x7fb508e0  sq          $s5, 0x8E0($sp)
    ctx->pc = 0x3ab5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 21));
label_3ab5d0:
    // 0x3ab5d0: 0xffbf08d0  sd          $ra, 0x8D0($sp)
    ctx->pc = 0x3ab5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 31));
label_3ab5d4:
    // 0x3ab5d4: 0xe7b40940  swc1        $f20, 0x940($sp)
    ctx->pc = 0x3ab5d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2368), bits); }
label_3ab5d8:
    // 0x3ab5d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ab5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab5dc:
    // 0x3ab5dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ab5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ab5e0:
    // 0x3ab5e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ab5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ab5e4:
    // 0x3ab5e4: 0x40f809  jalr        $v0
label_3ab5e8:
    if (ctx->pc == 0x3AB5E8u) {
        ctx->pc = 0x3AB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5E4u;
        // 0x3ab5e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB5ECu;
        goto label_3ab5ec;
    }
    ctx->pc = 0x3AB5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB5ECu);
        ctx->pc = 0x3AB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5E4u;
        // 0x3ab5e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB5E4u, 0x3AB5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB5ECu;
label_3ab5ec:
    // 0x3ab5ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ab5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5f0:
    // 0x3ab5f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ab5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ab5f4:
    // 0x3ab5f4: 0x27b20410  addiu       $s2, $sp, 0x410
    ctx->pc = 0x3ab5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3ab5f8:
    // 0x3ab5f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ab5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ab5fc:
    // 0x3ab5fc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ab5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ab600:
    // 0x3ab600: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ab600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ab604:
    // 0x3ab604: 0x0  nop
    ctx->pc = 0x3ab604u;
    // NOP
label_3ab608:
    // 0x3ab608: 0x0  nop
    ctx->pc = 0x3ab608u;
    // NOP
label_3ab60c:
    // 0x3ab60c: 0x0  nop
    ctx->pc = 0x3ab60cu;
    // NOP
label_3ab610:
    // 0x3ab610: 0x0  nop
    ctx->pc = 0x3ab610u;
    // NOP
label_3ab614:
    // 0x3ab614: 0x0  nop
    ctx->pc = 0x3ab614u;
    // NOP
label_3ab618:
    // 0x3ab618: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ab61c:
    if (ctx->pc == 0x3AB61Cu) {
        ctx->pc = 0x3AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB618u;
        // 0x3ab61c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB620u;
        goto label_3ab620;
    }
    ctx->pc = 0x3AB618u;
    {
        const bool branch_taken_0x3ab618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB618u;
        // 0x3ab61c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab618) {
            ctx->pc = 0x3AB608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab608;
        }
    }
    ctx->pc = 0x3AB620u;
label_3ab620:
    // 0x3ab620: 0xc138ddc  jal         func_4E3770
label_3ab624:
    if (ctx->pc == 0x3AB624u) {
        ctx->pc = 0x3AB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB620u;
        // 0x3ab624: 0x2413000f  addiu       $s3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB628u;
        goto label_3ab628;
    }
    ctx->pc = 0x3AB620u;
    SET_GPR_U32(ctx, 31, 0x3AB628u);
    ctx->pc = 0x3AB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB620u;
    // 0x3ab624: 0x2413000f  addiu       $s3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AB620u, 0x3AB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB628u;
label_3ab628:
    // 0x3ab628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab62c:
    // 0x3ab62c: 0xc0e90ca  jal         func_3A4328
label_3ab630:
    if (ctx->pc == 0x3AB630u) {
        ctx->pc = 0x3AB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB62Cu;
        // 0x3ab630: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB634u;
        goto label_3ab634;
    }
    ctx->pc = 0x3AB62Cu;
    SET_GPR_U32(ctx, 31, 0x3AB634u);
    ctx->pc = 0x3AB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB62Cu;
    // 0x3ab630: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AB62Cu, 0x3AB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB634u;
label_3ab634:
    // 0x3ab634: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ab638:
    // 0x3ab638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ab63c:
    // 0x3ab63c: 0x1053000d  beq         $v0, $s3, . + 4 + (0xD << 2)
label_3ab640:
    if (ctx->pc == 0x3AB640u) {
        ctx->pc = 0x3AB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB63Cu;
        // 0x3ab640: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB644u;
        goto label_3ab644;
    }
    ctx->pc = 0x3AB63Cu;
    {
        const bool branch_taken_0x3ab63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3AB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB63Cu;
        // 0x3ab640: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab63c) {
            ctx->pc = 0x3AB674u;
            goto label_3ab674;
        }
    }
    ctx->pc = 0x3AB644u;
label_3ab644:
    // 0x3ab644: 0xc0e9694  jal         func_3A5A50
label_3ab648:
    if (ctx->pc == 0x3AB648u) {
        ctx->pc = 0x3AB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB644u;
        // 0x3ab648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB64Cu;
        goto label_3ab64c;
    }
    ctx->pc = 0x3AB644u;
    SET_GPR_U32(ctx, 31, 0x3AB64Cu);
    ctx->pc = 0x3AB648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB644u;
    // 0x3ab648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AB644u, 0x3AB64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB64Cu;
label_3ab64c:
    // 0x3ab64c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_3ab650:
    if (ctx->pc == 0x3AB650u) {
        ctx->pc = 0x3AB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB64Cu;
        // 0x3ab650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB654u;
        goto label_3ab654;
    }
    ctx->pc = 0x3AB64Cu;
    {
        const bool branch_taken_0x3ab64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB64Cu;
        // 0x3ab650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab64c) {
            ctx->pc = 0x3AB958u;
            goto label_3ab958;
        }
    }
    ctx->pc = 0x3AB654u;
label_3ab654:
    // 0x3ab654: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3ab654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3ab658:
    // 0x3ab658: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab65c:
    // 0x3ab65c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3ab65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3ab660:
    // 0x3ab660: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab664:
    // 0x3ab664: 0xc0e9f56  jal         func_3A7D58
label_3ab668:
    if (ctx->pc == 0x3AB668u) {
        ctx->pc = 0x3AB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB664u;
        // 0x3ab668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB66Cu;
        goto label_3ab66c;
    }
    ctx->pc = 0x3AB664u;
    SET_GPR_U32(ctx, 31, 0x3AB66Cu);
    ctx->pc = 0x3AB668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB664u;
    // 0x3ab668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3AB664u, 0x3AB66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB66Cu;
label_3ab66c:
    // 0x3ab66c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ab670:
    if (ctx->pc == 0x3AB670u) {
        ctx->pc = 0x3AB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB66Cu;
        // 0x3ab670: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB674u;
        goto label_3ab674;
    }
    ctx->pc = 0x3AB66Cu;
    {
        const bool branch_taken_0x3ab66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab66c) {
            ctx->pc = 0x3AB670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB66Cu;
            // 0x3ab670: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB67Cu;
            goto label_3ab67c;
        }
    }
    ctx->pc = 0x3AB674u;
label_3ab674:
    // 0x3ab674: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_3ab678:
    if (ctx->pc == 0x3AB678u) {
        ctx->pc = 0x3AB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB674u;
        // 0x3ab678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB67Cu;
        goto label_3ab67c;
    }
    ctx->pc = 0x3AB674u;
    {
        const bool branch_taken_0x3ab674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB674u;
        // 0x3ab678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab674) {
            ctx->pc = 0x3AB958u;
            goto label_3ab958;
        }
    }
    ctx->pc = 0x3AB67Cu;
label_3ab67c:
    // 0x3ab67c: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_3ab680:
    if (ctx->pc == 0x3AB680u) {
        ctx->pc = 0x3AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB67Cu;
        // 0x3ab680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB684u;
        goto label_3ab684;
    }
    ctx->pc = 0x3AB67Cu;
    {
        const bool branch_taken_0x3ab67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB67Cu;
        // 0x3ab680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab67c) {
            ctx->pc = 0x3AB958u;
            goto label_3ab958;
        }
    }
    ctx->pc = 0x3AB684u;
label_3ab684:
    // 0x3ab684: 0xc0e9694  jal         func_3A5A50
label_3ab688:
    if (ctx->pc == 0x3AB688u) {
        ctx->pc = 0x3AB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB684u;
        // 0x3ab688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB68Cu;
        goto label_3ab68c;
    }
    ctx->pc = 0x3AB684u;
    SET_GPR_U32(ctx, 31, 0x3AB68Cu);
    ctx->pc = 0x3AB688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB684u;
    // 0x3ab688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AB684u, 0x3AB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB68Cu;
label_3ab68c:
    // 0x3ab68c: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_3ab690:
    if (ctx->pc == 0x3AB690u) {
        ctx->pc = 0x3AB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB68Cu;
        // 0x3ab690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB694u;
        goto label_3ab694;
    }
    ctx->pc = 0x3AB68Cu;
    {
        const bool branch_taken_0x3ab68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB68Cu;
        // 0x3ab690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab68c) {
            ctx->pc = 0x3AB958u;
            goto label_3ab958;
        }
    }
    ctx->pc = 0x3AB694u;
label_3ab694:
    // 0x3ab694: 0xc0e8630  jal         func_3A18C0
label_3ab698:
    if (ctx->pc == 0x3AB698u) {
        ctx->pc = 0x3AB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB694u;
        // 0x3ab698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB69Cu;
        goto label_3ab69c;
    }
    ctx->pc = 0x3AB694u;
    SET_GPR_U32(ctx, 31, 0x3AB69Cu);
    ctx->pc = 0x3AB698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB694u;
    // 0x3ab698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3AB694u, 0x3AB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB69Cu;
label_3ab69c:
    // 0x3ab69c: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_3ab6a0:
    if (ctx->pc == 0x3AB6A0u) {
        ctx->pc = 0x3AB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB69Cu;
        // 0x3ab6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6A4u;
        goto label_3ab6a4;
    }
    ctx->pc = 0x3AB69Cu;
    {
        const bool branch_taken_0x3ab69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB69Cu;
        // 0x3ab6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab69c) {
            ctx->pc = 0x3AB954u;
            goto label_3ab954;
        }
    }
    ctx->pc = 0x3AB6A4u;
label_3ab6a4:
    // 0x3ab6a4: 0xc0e8630  jal         func_3A18C0
label_3ab6a8:
    if (ctx->pc == 0x3AB6A8u) {
        ctx->pc = 0x3AB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6A4u;
        // 0x3ab6a8: 0x27b00440  addiu       $s0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6ACu;
        goto label_3ab6ac;
    }
    ctx->pc = 0x3AB6A4u;
    SET_GPR_U32(ctx, 31, 0x3AB6ACu);
    ctx->pc = 0x3AB6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB6A4u;
    // 0x3ab6a8: 0x27b00440  addiu       $s0, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3AB6A4u, 0x3AB6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB6ACu;
label_3ab6ac:
    // 0x3ab6ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ab6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab6b0:
    // 0x3ab6b0: 0xc0e911e  jal         func_3A4478
label_3ab6b4:
    if (ctx->pc == 0x3AB6B4u) {
        ctx->pc = 0x3AB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6B0u;
        // 0x3ab6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB6B8u;
        goto label_3ab6b8;
    }
    ctx->pc = 0x3AB6B0u;
    SET_GPR_U32(ctx, 31, 0x3AB6B8u);
    ctx->pc = 0x3AB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB6B0u;
    // 0x3ab6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3AB6B0u, 0x3AB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB6B8u;
label_3ab6b8:
    // 0x3ab6b8: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3ab6b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ab6bc:
    // 0x3ab6bc: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3ab6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3ab6c0:
    // 0x3ab6c0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3ab6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3ab6c4:
    // 0x3ab6c4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3ab6c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab6c8:
    // 0x3ab6c8: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3ab6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3ab6cc:
    // 0x3ab6cc: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3ab6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3ab6d0:
    // 0x3ab6d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ab6d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ab6d4:
    // 0x3ab6d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ab6d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ab6d8:
    // 0x3ab6d8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ab6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ab6dc:
    // 0x3ab6dc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ab6dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ab6e0:
    // 0x3ab6e0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ab6e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ab6e4:
    // 0x3ab6e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ab6e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ab6e8:
    // 0x3ab6e8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ab6e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ab6ec:
    // 0x3ab6ec: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ab6ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ab6f0:
    // 0x3ab6f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ab6f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ab6f4:
    // 0x3ab6f4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ab6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ab6f8:
    // 0x3ab6f8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ab6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ab6fc:
    // 0x3ab6fc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ab6fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ab700:
    // 0x3ab700: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ab700u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ab704:
    // 0x3ab704: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ab704u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ab708:
    // 0x3ab708: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ab708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ab70c:
    // 0x3ab70c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ab70cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ab710:
    // 0x3ab710: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3ab710u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ab714:
    // 0x3ab714: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3ab714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3ab718:
    // 0x3ab718: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3ab718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3ab71c:
    // 0x3ab71c: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3ab71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_3ab720:
    // 0x3ab720: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3ab720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3ab724:
    // 0x3ab724: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3ab724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3ab728:
    // 0x3ab728: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_3ab72c:
    if (ctx->pc == 0x3AB72Cu) {
        ctx->pc = 0x3AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB728u;
        // 0x3ab72c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB730u;
        goto label_3ab730;
    }
    ctx->pc = 0x3AB728u;
    {
        const bool branch_taken_0x3ab728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB728u;
        // 0x3ab72c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab728) {
            ctx->pc = 0x3AB87Cu;
            goto label_3ab87c;
        }
    }
    ctx->pc = 0x3AB730u;
label_3ab730:
    // 0x3ab730: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3ab730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3ab734:
    // 0x3ab734: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ab734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ab738:
    // 0x3ab738: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab73c:
    // 0x3ab73c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ab73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ab740:
    // 0x3ab740: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3ab740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3ab744:
    // 0x3ab744: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ab744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ab748:
    // 0x3ab748: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab74c:
    // 0x3ab74c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x3ab74cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_3ab750:
    // 0x3ab750: 0xc0cd518  jal         func_335460
label_3ab754:
    if (ctx->pc == 0x3AB754u) {
        ctx->pc = 0x3AB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB750u;
        // 0x3ab754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB758u;
        goto label_3ab758;
    }
    ctx->pc = 0x3AB750u;
    SET_GPR_U32(ctx, 31, 0x3AB758u);
    ctx->pc = 0x3AB754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB750u;
    // 0x3ab754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB750u, 0x3AB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB758u;
label_3ab758:
    // 0x3ab758: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x3ab758u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ab75c:
    // 0x3ab75c: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x3ab75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
label_3ab760:
    // 0x3ab760: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x3ab760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_3ab764:
    // 0x3ab764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab768:
    // 0x3ab768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab76c:
    // 0x3ab76c: 0x3c013c9b  lui         $at, 0x3C9B
    ctx->pc = 0x3ab76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15515 << 16));
label_3ab770:
    // 0x3ab770: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x3ab770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
label_3ab774:
    // 0x3ab774: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab778:
    // 0x3ab778: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ab778u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ab77c:
    // 0x3ab77c: 0x3631ff18  ori         $s1, $s1, 0xFF18
    ctx->pc = 0x3ab77cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65304);
label_3ab780:
    // 0x3ab780: 0xc0cd518  jal         func_335460
label_3ab784:
    if (ctx->pc == 0x3AB784u) {
        ctx->pc = 0x3AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB780u;
        // 0x3ab784: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB788u;
        goto label_3ab788;
    }
    ctx->pc = 0x3AB780u;
    SET_GPR_U32(ctx, 31, 0x3AB788u);
    ctx->pc = 0x3AB784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB780u;
    // 0x3ab784: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB780u, 0x3AB788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB788u;
label_3ab788:
    // 0x3ab788: 0xe7a0045c  swc1        $f0, 0x45C($sp)
    ctx->pc = 0x3ab788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1116), bits); }
label_3ab78c:
    // 0x3ab78c: 0x27b20450  addiu       $s2, $sp, 0x450
    ctx->pc = 0x3ab78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ab790:
    // 0x3ab790: 0xe7b40458  swc1        $f20, 0x458($sp)
    ctx->pc = 0x3ab790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3ab794:
    // 0x3ab794: 0x27b304c0  addiu       $s3, $sp, 0x4C0
    ctx->pc = 0x3ab794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3ab798:
    // 0x3ab798: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3ab798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3ab79c:
    // 0x3ab79c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ab79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ab7a0:
    // 0x3ab7a0: 0xafa00454  sw          $zero, 0x454($sp)
    ctx->pc = 0x3ab7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 0));
label_3ab7a4:
    // 0x3ab7a4: 0x27aa04a0  addiu       $t2, $sp, 0x4A0
    ctx->pc = 0x3ab7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3ab7a8:
    // 0x3ab7a8: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3ab7a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ab7ac:
    // 0x3ab7ac: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3ab7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3ab7b0:
    // 0x3ab7b0: 0x7bac0450  lq          $t4, 0x450($sp)
    ctx->pc = 0x3ab7b0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ab7b4:
    // 0x3ab7b4: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3ab7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3ab7b8:
    // 0x3ab7b8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3ab7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3ab7bc:
    // 0x3ab7bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ab7bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ab7c0:
    // 0x3ab7c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ab7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ab7c4:
    // 0x3ab7c4: 0x27a80480  addiu       $t0, $sp, 0x480
    ctx->pc = 0x3ab7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3ab7c8:
    // 0x3ab7c8: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3ab7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ab7cc:
    // 0x3ab7cc: 0x27a90490  addiu       $t1, $sp, 0x490
    ctx->pc = 0x3ab7ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3ab7d0:
    // 0x3ab7d0: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3ab7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3ab7d4:
    // 0x3ab7d4: 0x27ab04b0  addiu       $t3, $sp, 0x4B0
    ctx->pc = 0x3ab7d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3ab7d8:
    // 0x3ab7d8: 0x26101d60  addiu       $s0, $s0, 0x1D60
    ctx->pc = 0x3ab7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7520));
label_3ab7dc:
    // 0x3ab7dc: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ab7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ab7e0:
    // 0x3ab7e0: 0x7fac0470  sq          $t4, 0x470($sp)
    ctx->pc = 0x3ab7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 12));
label_3ab7e4:
    // 0x3ab7e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ab7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ab7e8:
    // 0x3ab7e8: 0xe7a10480  swc1        $f1, 0x480($sp)
    ctx->pc = 0x3ab7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3ab7ec:
    // 0x3ab7ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ab7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab7f0:
    // 0x3ab7f0: 0x7fac0440  sq          $t4, 0x440($sp)
    ctx->pc = 0x3ab7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 12));
label_3ab7f4:
    // 0x3ab7f4: 0xafb50490  sw          $s5, 0x490($sp)
    ctx->pc = 0x3ab7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 21));
label_3ab7f8:
    // 0x3ab7f8: 0xafb104a0  sw          $s1, 0x4A0($sp)
    ctx->pc = 0x3ab7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 17));
label_3ab7fc:
    // 0x3ab7fc: 0xc0ea084  jal         func_3A8210
label_3ab800:
    if (ctx->pc == 0x3AB800u) {
        ctx->pc = 0x3AB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7FCu;
        // 0x3ab800: 0xafb404b0  sw          $s4, 0x4B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB804u;
        goto label_3ab804;
    }
    ctx->pc = 0x3AB7FCu;
    SET_GPR_U32(ctx, 31, 0x3AB804u);
    ctx->pc = 0x3AB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7FCu;
    // 0x3ab800: 0xafb404b0  sw          $s4, 0x4B0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3AB7FCu, 0x3AB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB804u;
label_3ab804:
    // 0x3ab804: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ab804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ab808:
    // 0x3ab808: 0xc0f15bc  jal         func_3C56F0
label_3ab80c:
    if (ctx->pc == 0x3AB80Cu) {
        ctx->pc = 0x3AB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB808u;
        // 0x3ab80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB810u;
        goto label_3ab810;
    }
    ctx->pc = 0x3AB808u;
    SET_GPR_U32(ctx, 31, 0x3AB810u);
    ctx->pc = 0x3AB80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB808u;
    // 0x3ab80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AB808u, 0x3AB810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB810u;
label_3ab810:
    // 0x3ab810: 0x7baa0440  lq          $t2, 0x440($sp)
    ctx->pc = 0x3ab810u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ab814:
    // 0x3ab814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab818:
    // 0x3ab818: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3ab818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ab81c:
    // 0x3ab81c: 0x27a50860  addiu       $a1, $sp, 0x860
    ctx->pc = 0x3ab81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3ab820:
    // 0x3ab820: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3ab820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ab824:
    // 0x3ab824: 0x27a60870  addiu       $a2, $sp, 0x870
    ctx->pc = 0x3ab824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3ab828:
    // 0x3ab828: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ab828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ab82c:
    // 0x3ab82c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ab82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ab830:
    // 0x3ab830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ab830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ab834:
    // 0x3ab834: 0x27a70880  addiu       $a3, $sp, 0x880
    ctx->pc = 0x3ab834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3ab838:
    // 0x3ab838: 0x7faa0880  sq          $t2, 0x880($sp)
    ctx->pc = 0x3ab838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 10));
label_3ab83c:
    // 0x3ab83c: 0x27a80890  addiu       $t0, $sp, 0x890
    ctx->pc = 0x3ab83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3ab840:
    // 0x3ab840: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3ab840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3ab844:
    // 0x3ab844: 0x27a908a0  addiu       $t1, $sp, 0x8A0
    ctx->pc = 0x3ab844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3ab848:
    // 0x3ab848: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3ab848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3ab84c:
    // 0x3ab84c: 0x27aa08b0  addiu       $t2, $sp, 0x8B0
    ctx->pc = 0x3ab84cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_3ab850:
    // 0x3ab850: 0xe7a00890  swc1        $f0, 0x890($sp)
    ctx->pc = 0x3ab850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
label_3ab854:
    // 0x3ab854: 0x27ab08c0  addiu       $t3, $sp, 0x8C0
    ctx->pc = 0x3ab854u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
label_3ab858:
    // 0x3ab858: 0xafb508a0  sw          $s5, 0x8A0($sp)
    ctx->pc = 0x3ab858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 21));
label_3ab85c:
    // 0x3ab85c: 0xafb108b0  sw          $s1, 0x8B0($sp)
    ctx->pc = 0x3ab85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 17));
label_3ab860:
    // 0x3ab860: 0xc0ea084  jal         func_3A8210
label_3ab864:
    if (ctx->pc == 0x3AB864u) {
        ctx->pc = 0x3AB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB860u;
        // 0x3ab864: 0xafb408c0  sw          $s4, 0x8C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB868u;
        goto label_3ab868;
    }
    ctx->pc = 0x3AB860u;
    SET_GPR_U32(ctx, 31, 0x3AB868u);
    ctx->pc = 0x3AB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB860u;
    // 0x3ab864: 0xafb408c0  sw          $s4, 0x8C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3AB860u, 0x3AB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB868u;
label_3ab868:
    // 0x3ab868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab86c:
    // 0x3ab86c: 0xc0f15bc  jal         func_3C56F0
label_3ab870:
    if (ctx->pc == 0x3AB870u) {
        ctx->pc = 0x3AB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB86Cu;
        // 0x3ab870: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB874u;
        goto label_3ab874;
    }
    ctx->pc = 0x3AB86Cu;
    SET_GPR_U32(ctx, 31, 0x3AB874u);
    ctx->pc = 0x3AB870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB86Cu;
    // 0x3ab870: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AB86Cu, 0x3AB874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB874u;
label_3ab874:
    // 0x3ab874: 0x10000038  b           . + 4 + (0x38 << 2)
label_3ab878:
    if (ctx->pc == 0x3AB878u) {
        ctx->pc = 0x3AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB874u;
        // 0x3ab878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB87Cu;
        goto label_3ab87c;
    }
    ctx->pc = 0x3AB874u;
    {
        const bool branch_taken_0x3ab874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB874u;
        // 0x3ab878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab874) {
            ctx->pc = 0x3AB958u;
            goto label_3ab958;
        }
    }
    ctx->pc = 0x3AB87Cu;
label_3ab87c:
    // 0x3ab87c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3ab87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3ab880:
    // 0x3ab880: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ab880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ab884:
    // 0x3ab884: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab888:
    // 0x3ab888: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ab888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ab88c:
    // 0x3ab88c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x3ab88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_3ab890:
    // 0x3ab890: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3ab890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3ab894:
    // 0x3ab894: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab898:
    // 0x3ab898: 0xc0cd518  jal         func_335460
label_3ab89c:
    if (ctx->pc == 0x3AB89Cu) {
        ctx->pc = 0x3AB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB898u;
        // 0x3ab89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB8A0u;
        goto label_3ab8a0;
    }
    ctx->pc = 0x3AB898u;
    SET_GPR_U32(ctx, 31, 0x3AB8A0u);
    ctx->pc = 0x3AB89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB898u;
    // 0x3ab89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB898u, 0x3AB8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8A0u;
label_3ab8a0:
    // 0x3ab8a0: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x3ab8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
label_3ab8a4:
    // 0x3ab8a4: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x3ab8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_3ab8a8:
    // 0x3ab8a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab8ac:
    // 0x3ab8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab8b0:
    // 0x3ab8b0: 0x3c013cc4  lui         $at, 0x3CC4
    ctx->pc = 0x3ab8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15556 << 16));
label_3ab8b4:
    // 0x3ab8b4: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x3ab8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_3ab8b8:
    // 0x3ab8b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab8bc:
    // 0x3ab8bc: 0xc0cd518  jal         func_335460
label_3ab8c0:
    if (ctx->pc == 0x3AB8C0u) {
        ctx->pc = 0x3AB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8BCu;
        // 0x3ab8c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB8C4u;
        goto label_3ab8c4;
    }
    ctx->pc = 0x3AB8BCu;
    SET_GPR_U32(ctx, 31, 0x3AB8C4u);
    ctx->pc = 0x3AB8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8BCu;
    // 0x3ab8c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB8BCu, 0x3AB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8C4u;
label_3ab8c4:
    // 0x3ab8c4: 0xe7b40458  swc1        $f20, 0x458($sp)
    ctx->pc = 0x3ab8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3ab8c8:
    // 0x3ab8c8: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x3ab8c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_3ab8cc:
    // 0x3ab8cc: 0xe7a0045c  swc1        $f0, 0x45C($sp)
    ctx->pc = 0x3ab8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1116), bits); }
label_3ab8d0:
    // 0x3ab8d0: 0x356bff18  ori         $t3, $t3, 0xFF18
    ctx->pc = 0x3ab8d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65304);
label_3ab8d4:
    // 0x3ab8d4: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3ab8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3ab8d8:
    // 0x3ab8d8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3ab8d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ab8dc:
    // 0x3ab8dc: 0xafa00454  sw          $zero, 0x454($sp)
    ctx->pc = 0x3ab8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 0));
label_3ab8e0:
    // 0x3ab8e0: 0x27b10450  addiu       $s1, $sp, 0x450
    ctx->pc = 0x3ab8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ab8e4:
    // 0x3ab8e4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ab8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ab8e8:
    // 0x3ab8e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ab8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ab8ec:
    // 0x3ab8ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ab8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ab8f0:
    // 0x3ab8f0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ab8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ab8f4:
    // 0x3ab8f4: 0x7bac0450  lq          $t4, 0x450($sp)
    ctx->pc = 0x3ab8f4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ab8f8:
    // 0x3ab8f8: 0x26101d60  addiu       $s0, $s0, 0x1D60
    ctx->pc = 0x3ab8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7520));
label_3ab8fc:
    // 0x3ab8fc: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3ab8fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ab900:
    // 0x3ab900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab904:
    // 0x3ab904: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3ab904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ab908:
    // 0x3ab908: 0x27a50860  addiu       $a1, $sp, 0x860
    ctx->pc = 0x3ab908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3ab90c:
    // 0x3ab90c: 0xafaa08a0  sw          $t2, 0x8A0($sp)
    ctx->pc = 0x3ab90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 10));
label_3ab910:
    // 0x3ab910: 0x27a60870  addiu       $a2, $sp, 0x870
    ctx->pc = 0x3ab910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3ab914:
    // 0x3ab914: 0xafab08b0  sw          $t3, 0x8B0($sp)
    ctx->pc = 0x3ab914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 11));
label_3ab918:
    // 0x3ab918: 0x27a70880  addiu       $a3, $sp, 0x880
    ctx->pc = 0x3ab918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3ab91c:
    // 0x3ab91c: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3ab91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3ab920:
    // 0x3ab920: 0x27a80890  addiu       $t0, $sp, 0x890
    ctx->pc = 0x3ab920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3ab924:
    // 0x3ab924: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3ab924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3ab928:
    // 0x3ab928: 0x27a908a0  addiu       $t1, $sp, 0x8A0
    ctx->pc = 0x3ab928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3ab92c:
    // 0x3ab92c: 0x7fac0880  sq          $t4, 0x880($sp)
    ctx->pc = 0x3ab92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 12));
label_3ab930:
    // 0x3ab930: 0x27aa08b0  addiu       $t2, $sp, 0x8B0
    ctx->pc = 0x3ab930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_3ab934:
    // 0x3ab934: 0xe7a10890  swc1        $f1, 0x890($sp)
    ctx->pc = 0x3ab934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
label_3ab938:
    // 0x3ab938: 0x27ab08c0  addiu       $t3, $sp, 0x8C0
    ctx->pc = 0x3ab938u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
label_3ab93c:
    // 0x3ab93c: 0xafb308c0  sw          $s3, 0x8C0($sp)
    ctx->pc = 0x3ab93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2240), GPR_U32(ctx, 19));
label_3ab940:
    // 0x3ab940: 0xc0ea084  jal         func_3A8210
label_3ab944:
    if (ctx->pc == 0x3AB944u) {
        ctx->pc = 0x3AB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB940u;
        // 0x3ab944: 0x7fac0440  sq          $t4, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB948u;
        goto label_3ab948;
    }
    ctx->pc = 0x3AB940u;
    SET_GPR_U32(ctx, 31, 0x3AB948u);
    ctx->pc = 0x3AB944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB940u;
    // 0x3ab944: 0x7fac0440  sq          $t4, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3AB940u, 0x3AB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB948u;
label_3ab948:
    // 0x3ab948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab94c:
    // 0x3ab94c: 0xc0f15bc  jal         func_3C56F0
label_3ab950:
    if (ctx->pc == 0x3AB950u) {
        ctx->pc = 0x3AB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB94Cu;
        // 0x3ab950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB954u;
        goto label_3ab954;
    }
    ctx->pc = 0x3AB94Cu;
    SET_GPR_U32(ctx, 31, 0x3AB954u);
    ctx->pc = 0x3AB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB94Cu;
    // 0x3ab950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AB94Cu, 0x3AB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB954u;
label_3ab954:
    // 0x3ab954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab958:
    // 0x3ab958: 0x7bb00930  lq          $s0, 0x930($sp)
    ctx->pc = 0x3ab958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3ab95c:
    // 0x3ab95c: 0x7bb10920  lq          $s1, 0x920($sp)
    ctx->pc = 0x3ab95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3ab960:
    // 0x3ab960: 0x7bb20910  lq          $s2, 0x910($sp)
    ctx->pc = 0x3ab960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3ab964:
    // 0x3ab964: 0x7bb30900  lq          $s3, 0x900($sp)
    ctx->pc = 0x3ab964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3ab968:
    // 0x3ab968: 0x7bb408f0  lq          $s4, 0x8F0($sp)
    ctx->pc = 0x3ab968u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3ab96c:
    // 0x3ab96c: 0x7bb508e0  lq          $s5, 0x8E0($sp)
    ctx->pc = 0x3ab96cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3ab970:
    // 0x3ab970: 0xdfbf08d0  ld          $ra, 0x8D0($sp)
    ctx->pc = 0x3ab970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
label_3ab974:
    // 0x3ab974: 0xc7b40940  lwc1        $f20, 0x940($sp)
    ctx->pc = 0x3ab974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ab978:
    // 0x3ab978: 0x3e00008  jr          $ra
label_3ab97c:
    if (ctx->pc == 0x3AB97Cu) {
        ctx->pc = 0x3AB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB978u;
        // 0x3ab97c: 0x27bd0950  addiu       $sp, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB980u;
        goto label_fallthrough_0x3ab978;
    }
    ctx->pc = 0x3AB978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB978u;
        // 0x3ab97c: 0x27bd0950  addiu       $sp, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ab978:
    ctx->pc = 0x3AB980u;
}

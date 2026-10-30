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

// Function: sub_001635D0
// Address: 0x1635d0 - 0x163888
void sub_001635D0_0x1635d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001635D0_0x1635d0");
#endif

    switch (ctx->pc) {
        case 0x1635d0u: goto label_1635d0;
        case 0x1635d4u: goto label_1635d4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635dcu: goto label_1635dc;
        case 0x1635e0u: goto label_1635e0;
        case 0x1635e4u: goto label_1635e4;
        case 0x1635e8u: goto label_1635e8;
        case 0x1635ecu: goto label_1635ec;
        case 0x1635f0u: goto label_1635f0;
        case 0x1635f4u: goto label_1635f4;
        case 0x1635f8u: goto label_1635f8;
        case 0x1635fcu: goto label_1635fc;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163608u: goto label_163608;
        case 0x16360cu: goto label_16360c;
        case 0x163610u: goto label_163610;
        case 0x163614u: goto label_163614;
        case 0x163618u: goto label_163618;
        case 0x16361cu: goto label_16361c;
        case 0x163620u: goto label_163620;
        case 0x163624u: goto label_163624;
        case 0x163628u: goto label_163628;
        case 0x16362cu: goto label_16362c;
        case 0x163630u: goto label_163630;
        case 0x163634u: goto label_163634;
        case 0x163638u: goto label_163638;
        case 0x16363cu: goto label_16363c;
        case 0x163640u: goto label_163640;
        case 0x163644u: goto label_163644;
        case 0x163648u: goto label_163648;
        case 0x16364cu: goto label_16364c;
        case 0x163650u: goto label_163650;
        case 0x163654u: goto label_163654;
        case 0x163658u: goto label_163658;
        case 0x16365cu: goto label_16365c;
        case 0x163660u: goto label_163660;
        case 0x163664u: goto label_163664;
        case 0x163668u: goto label_163668;
        case 0x16366cu: goto label_16366c;
        case 0x163670u: goto label_163670;
        case 0x163674u: goto label_163674;
        case 0x163678u: goto label_163678;
        case 0x16367cu: goto label_16367c;
        case 0x163680u: goto label_163680;
        case 0x163684u: goto label_163684;
        case 0x163688u: goto label_163688;
        case 0x16368cu: goto label_16368c;
        case 0x163690u: goto label_163690;
        case 0x163694u: goto label_163694;
        case 0x163698u: goto label_163698;
        case 0x16369cu: goto label_16369c;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a4u: goto label_1636a4;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636b4u: goto label_1636b4;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636bcu: goto label_1636bc;
        case 0x1636c0u: goto label_1636c0;
        case 0x1636c4u: goto label_1636c4;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636ccu: goto label_1636cc;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636d8u: goto label_1636d8;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e0u: goto label_1636e0;
        case 0x1636e4u: goto label_1636e4;
        case 0x1636e8u: goto label_1636e8;
        case 0x1636ecu: goto label_1636ec;
        case 0x1636f0u: goto label_1636f0;
        case 0x1636f4u: goto label_1636f4;
        case 0x1636f8u: goto label_1636f8;
        case 0x1636fcu: goto label_1636fc;
        case 0x163700u: goto label_163700;
        case 0x163704u: goto label_163704;
        case 0x163708u: goto label_163708;
        case 0x16370cu: goto label_16370c;
        case 0x163710u: goto label_163710;
        case 0x163714u: goto label_163714;
        case 0x163718u: goto label_163718;
        case 0x16371cu: goto label_16371c;
        case 0x163720u: goto label_163720;
        case 0x163724u: goto label_163724;
        case 0x163728u: goto label_163728;
        case 0x16372cu: goto label_16372c;
        case 0x163730u: goto label_163730;
        case 0x163734u: goto label_163734;
        case 0x163738u: goto label_163738;
        case 0x16373cu: goto label_16373c;
        case 0x163740u: goto label_163740;
        case 0x163744u: goto label_163744;
        case 0x163748u: goto label_163748;
        case 0x16374cu: goto label_16374c;
        case 0x163750u: goto label_163750;
        case 0x163754u: goto label_163754;
        case 0x163758u: goto label_163758;
        case 0x16375cu: goto label_16375c;
        case 0x163760u: goto label_163760;
        case 0x163764u: goto label_163764;
        case 0x163768u: goto label_163768;
        case 0x16376cu: goto label_16376c;
        case 0x163770u: goto label_163770;
        case 0x163774u: goto label_163774;
        case 0x163778u: goto label_163778;
        case 0x16377cu: goto label_16377c;
        case 0x163780u: goto label_163780;
        case 0x163784u: goto label_163784;
        case 0x163788u: goto label_163788;
        case 0x16378cu: goto label_16378c;
        case 0x163790u: goto label_163790;
        case 0x163794u: goto label_163794;
        case 0x163798u: goto label_163798;
        case 0x16379cu: goto label_16379c;
        case 0x1637a0u: goto label_1637a0;
        case 0x1637a4u: goto label_1637a4;
        case 0x1637a8u: goto label_1637a8;
        case 0x1637acu: goto label_1637ac;
        case 0x1637b0u: goto label_1637b0;
        case 0x1637b4u: goto label_1637b4;
        case 0x1637b8u: goto label_1637b8;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637c0u: goto label_1637c0;
        case 0x1637c4u: goto label_1637c4;
        case 0x1637c8u: goto label_1637c8;
        case 0x1637ccu: goto label_1637cc;
        case 0x1637d0u: goto label_1637d0;
        case 0x1637d4u: goto label_1637d4;
        case 0x1637d8u: goto label_1637d8;
        case 0x1637dcu: goto label_1637dc;
        case 0x1637e0u: goto label_1637e0;
        case 0x1637e4u: goto label_1637e4;
        case 0x1637e8u: goto label_1637e8;
        case 0x1637ecu: goto label_1637ec;
        case 0x1637f0u: goto label_1637f0;
        case 0x1637f4u: goto label_1637f4;
        case 0x1637f8u: goto label_1637f8;
        case 0x1637fcu: goto label_1637fc;
        case 0x163800u: goto label_163800;
        case 0x163804u: goto label_163804;
        case 0x163808u: goto label_163808;
        case 0x16380cu: goto label_16380c;
        case 0x163810u: goto label_163810;
        case 0x163814u: goto label_163814;
        case 0x163818u: goto label_163818;
        case 0x16381cu: goto label_16381c;
        case 0x163820u: goto label_163820;
        case 0x163824u: goto label_163824;
        case 0x163828u: goto label_163828;
        case 0x16382cu: goto label_16382c;
        case 0x163830u: goto label_163830;
        case 0x163834u: goto label_163834;
        case 0x163838u: goto label_163838;
        case 0x16383cu: goto label_16383c;
        case 0x163840u: goto label_163840;
        case 0x163844u: goto label_163844;
        case 0x163848u: goto label_163848;
        case 0x16384cu: goto label_16384c;
        case 0x163850u: goto label_163850;
        case 0x163854u: goto label_163854;
        case 0x163858u: goto label_163858;
        case 0x16385cu: goto label_16385c;
        case 0x163860u: goto label_163860;
        case 0x163864u: goto label_163864;
        case 0x163868u: goto label_163868;
        case 0x16386cu: goto label_16386c;
        case 0x163870u: goto label_163870;
        case 0x163874u: goto label_163874;
        case 0x163878u: goto label_163878;
        case 0x16387cu: goto label_16387c;
        case 0x163880u: goto label_163880;
        case 0x163884u: goto label_163884;
        default: break;
    }

    ctx->pc = 0x1635d0u;

label_1635d0:
    // 0x1635d0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1635d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1635d4:
    // 0x1635d4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1635d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1635d8:
    // 0x1635d8: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1635d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_1635dc:
    // 0x1635dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1635dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1635e0:
    // 0x1635e0: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1635e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_1635e4:
    // 0x1635e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1635e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1635e8:
    // 0x1635e8: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1635e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_1635ec:
    // 0x1635ec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1635ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1635f0:
    // 0x1635f0: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1635f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1635f4:
    // 0x1635f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1635f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1635f8:
    // 0x1635f8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1635f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_1635fc:
    // 0x1635fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1635fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163600:
    // 0x163600: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x163600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_163604:
    // 0x163604: 0x24a50688  addiu       $a1, $a1, 0x688
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1672));
label_163608:
    // 0x163608: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x163608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_16360c:
    // 0x16360c: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x16360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_163610:
    // 0x163610: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x163610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_163614:
    // 0x163614: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x163614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_163618:
    // 0x163618: 0xc10ca28  jal         func_4328A0
label_16361c:
    if (ctx->pc == 0x16361Cu) {
        ctx->pc = 0x16361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163618u;
        // 0x16361c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163620u;
        goto label_163620;
    }
    ctx->pc = 0x163618u;
    SET_GPR_U32(ctx, 31, 0x163620u);
    ctx->pc = 0x16361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163618u;
    // 0x16361c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x163618u, 0x163620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163620u;
label_163620:
    // 0x163620: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_163624:
    // 0x163624: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_163628:
    // 0x163628: 0x8c440120  lw          $a0, 0x120($v0)
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_16362c:
    // 0x16362c: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x16362cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_163630:
    // 0x163630: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_163634:
    if (ctx->pc == 0x163634u) {
        ctx->pc = 0x163634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163630u;
        // 0x163634: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163638u;
        goto label_163638;
    }
    ctx->pc = 0x163630u;
    {
        const bool branch_taken_0x163630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163630u;
        // 0x163634: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163630) {
            ctx->pc = 0x1636C0u;
            goto label_1636c0;
        }
    }
    ctx->pc = 0x163638u;
label_163638:
    // 0x163638: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x163638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_16363c:
    // 0x16363c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16363cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_163640:
    // 0x163640: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
label_163644:
    // 0x163644: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163648:
    // 0x163648: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x163648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16364c:
    // 0x16364c: 0x800008  jr          $a0
label_163650:
    if (ctx->pc == 0x163650u) {
        ctx->pc = 0x163654u;
        goto label_163654;
    }
    ctx->pc = 0x16364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163654u: goto label_163654;
            case 0x163664u: goto label_163664;
            case 0x163674u: goto label_163674;
            case 0x163684u: goto label_163684;
            case 0x1636A8u: goto label_1636a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16364Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x163654u;
label_163654:
    // 0x163654: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_163658:
    // 0x163658: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16365c:
    // 0x16365c: 0x1000000c  b           . + 4 + (0xC << 2)
label_163660:
    if (ctx->pc == 0x163660u) {
        ctx->pc = 0x163660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16365Cu;
        // 0x163660: 0x24c605d8  addiu       $a2, $a2, 0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163664u;
        goto label_163664;
    }
    ctx->pc = 0x16365Cu;
    {
        const bool branch_taken_0x16365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16365Cu;
        // 0x163660: 0x24c605d8  addiu       $a2, $a2, 0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16365c) {
            ctx->pc = 0x163690u;
            goto label_163690;
        }
    }
    ctx->pc = 0x163664u;
label_163664:
    // 0x163664: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_163668:
    // 0x163668: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16366c:
    // 0x16366c: 0x10000008  b           . + 4 + (0x8 << 2)
label_163670:
    if (ctx->pc == 0x163670u) {
        ctx->pc = 0x163670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16366Cu;
        // 0x163670: 0x24c605e0  addiu       $a2, $a2, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163674u;
        goto label_163674;
    }
    ctx->pc = 0x16366Cu;
    {
        const bool branch_taken_0x16366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16366Cu;
        // 0x163670: 0x24c605e0  addiu       $a2, $a2, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16366c) {
            ctx->pc = 0x163690u;
            goto label_163690;
        }
    }
    ctx->pc = 0x163674u;
label_163674:
    // 0x163674: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_163678:
    // 0x163678: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16367c:
    // 0x16367c: 0x10000004  b           . + 4 + (0x4 << 2)
label_163680:
    if (ctx->pc == 0x163680u) {
        ctx->pc = 0x163680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16367Cu;
        // 0x163680: 0x24c605e8  addiu       $a2, $a2, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163684u;
        goto label_163684;
    }
    ctx->pc = 0x16367Cu;
    {
        const bool branch_taken_0x16367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16367Cu;
        // 0x163680: 0x24c605e8  addiu       $a2, $a2, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16367c) {
            ctx->pc = 0x163690u;
            goto label_163690;
        }
    }
    ctx->pc = 0x163684u;
label_163684:
    // 0x163684: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_163688:
    // 0x163688: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16368c:
    // 0x16368c: 0x24c605f0  addiu       $a2, $a2, 0x5F0
    ctx->pc = 0x16368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1520));
label_163690:
    // 0x163690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163694:
    // 0x163694: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x163694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_163698:
    // 0x163698: 0xc10ca04  jal         func_432810
label_16369c:
    if (ctx->pc == 0x16369Cu) {
        ctx->pc = 0x16369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163698u;
        // 0x16369c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636A0u;
        goto label_1636a0;
    }
    ctx->pc = 0x163698u;
    SET_GPR_U32(ctx, 31, 0x1636A0u);
    ctx->pc = 0x16369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163698u;
    // 0x16369c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x163698u, 0x1636A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636A0u;
label_1636a0:
    // 0x1636a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1636a4:
    if (ctx->pc == 0x1636A4u) {
        ctx->pc = 0x1636A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A0u;
        // 0x1636a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636A8u;
        goto label_1636a8;
    }
    ctx->pc = 0x1636A0u;
    {
        const bool branch_taken_0x1636a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A0u;
        // 0x1636a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636a0) {
            ctx->pc = 0x1636C4u;
            goto label_1636c4;
        }
    }
    ctx->pc = 0x1636A8u;
label_1636a8:
    // 0x1636a8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1636a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1636ac:
    // 0x1636ac: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1636acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1636b0:
    // 0x1636b0: 0x24c605f8  addiu       $a2, $a2, 0x5F8
    ctx->pc = 0x1636b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1528));
label_1636b4:
    // 0x1636b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1636b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1636b8:
    // 0x1636b8: 0xc10ca04  jal         func_432810
label_1636bc:
    if (ctx->pc == 0x1636BCu) {
        ctx->pc = 0x1636BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636B8u;
        // 0x1636bc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636C0u;
        goto label_1636c0;
    }
    ctx->pc = 0x1636B8u;
    SET_GPR_U32(ctx, 31, 0x1636C0u);
    ctx->pc = 0x1636BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636B8u;
    // 0x1636bc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1636B8u, 0x1636C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636C0u;
label_1636c0:
    // 0x1636c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1636c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1636c4:
    // 0x1636c4: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1636c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1636c8:
    // 0x1636c8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1636c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1636cc:
    // 0x1636cc: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1636ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1636d0:
    // 0x1636d0: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1636d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1636d4:
    // 0x1636d4: 0x40f809  jalr        $v0
label_1636d8:
    if (ctx->pc == 0x1636D8u) {
        ctx->pc = 0x1636D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D4u;
        // 0x1636d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636DCu;
        goto label_1636dc;
    }
    ctx->pc = 0x1636D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1636DCu);
        ctx->pc = 0x1636D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D4u;
        // 0x1636d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1636D4u, 0x1636DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1636e0:
    if (ctx->pc == 0x1636E0u) {
        ctx->pc = 0x1636E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636DCu;
        // 0x1636e0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636E4u;
        goto label_1636e4;
    }
    ctx->pc = 0x1636DCu;
    {
        const bool branch_taken_0x1636dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636DCu;
        // 0x1636e0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636dc) {
            ctx->pc = 0x163704u;
            goto label_163704;
        }
    }
    ctx->pc = 0x1636E4u;
label_1636e4:
    // 0x1636e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1636e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1636e8:
    // 0x1636e8: 0x24a50600  addiu       $a1, $a1, 0x600
    ctx->pc = 0x1636e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1536));
label_1636ec:
    // 0x1636ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1636ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1636f0:
    // 0x1636f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1636f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1636f4:
    // 0x1636f4: 0xc10ca28  jal         func_4328A0
label_1636f8:
    if (ctx->pc == 0x1636F8u) {
        ctx->pc = 0x1636F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636F4u;
        // 0x1636f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636FCu;
        goto label_1636fc;
    }
    ctx->pc = 0x1636F4u;
    SET_GPR_U32(ctx, 31, 0x1636FCu);
    ctx->pc = 0x1636F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636F4u;
    // 0x1636f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1636F4u, 0x1636FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636FCu;
label_1636fc:
    // 0x1636fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_163700:
    if (ctx->pc == 0x163700u) {
        ctx->pc = 0x163700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636FCu;
        // 0x163700: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163704u;
        goto label_163704;
    }
    ctx->pc = 0x1636FCu;
    {
        const bool branch_taken_0x1636fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636FCu;
        // 0x163700: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636fc) {
            ctx->pc = 0x163724u;
            goto label_163724;
        }
    }
    ctx->pc = 0x163704u;
label_163704:
    // 0x163704: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x163704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_163708:
    // 0x163708: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x163708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16370c:
    // 0x16370c: 0x24a50610  addiu       $a1, $a1, 0x610
    ctx->pc = 0x16370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
label_163710:
    // 0x163710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163714:
    // 0x163714: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x163714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163718:
    // 0x163718: 0xc10ca28  jal         func_4328A0
label_16371c:
    if (ctx->pc == 0x16371Cu) {
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163720u;
        goto label_163720;
    }
    ctx->pc = 0x163718u;
    SET_GPR_U32(ctx, 31, 0x163720u);
    ctx->pc = 0x16371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163718u;
    // 0x16371c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x163718u, 0x163720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163720u;
label_163720:
    // 0x163720: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_163724:
    // 0x163724: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x163724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163728:
    // 0x163728: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x163728u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16372c:
    // 0x16372c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x16372cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_163730:
    // 0x163730: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_163734:
    // 0x163734: 0xc050fda  jal         func_143F68
label_163738:
    if (ctx->pc == 0x163738u) {
        ctx->pc = 0x163738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163734u;
        // 0x163738: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16373Cu;
        goto label_16373c;
    }
    ctx->pc = 0x163734u;
    SET_GPR_U32(ctx, 31, 0x16373Cu);
    ctx->pc = 0x163738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163734u;
    // 0x163738: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x163734u, 0x16373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16373Cu;
label_16373c:
    // 0x16373c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_163740:
    // 0x163740: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_163744:
    // 0x163744: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x163744u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163748:
    // 0x163748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16374c:
    // 0x16374c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x16374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_163750:
    // 0x163750: 0x24c60560  addiu       $a2, $a2, 0x560
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
label_163754:
    // 0x163754: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163758:
    // 0x163758: 0xc10ca04  jal         func_432810
label_16375c:
    if (ctx->pc == 0x16375Cu) {
        ctx->pc = 0x16375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163758u;
        // 0x16375c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163760u;
        goto label_163760;
    }
    ctx->pc = 0x163758u;
    SET_GPR_U32(ctx, 31, 0x163760u);
    ctx->pc = 0x16375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163758u;
    // 0x16375c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x163758u, 0x163760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163760u;
label_163760:
    // 0x163760: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x163760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163764:
    // 0x163764: 0x8e02b788  lw          $v0, -0x4878($s0)
    ctx->pc = 0x163764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_163768:
    // 0x163768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16376c:
    // 0x16376c: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_163770:
    // 0x163770: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_163774:
    // 0x163774: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_163778:
    // 0x163778: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x163778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_16377c:
    // 0x16377c: 0x40f809  jalr        $v0
label_163780:
    if (ctx->pc == 0x163780u) {
        ctx->pc = 0x163780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16377Cu;
        // 0x163780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163784u;
        goto label_163784;
    }
    ctx->pc = 0x16377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163784u);
        ctx->pc = 0x163780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16377Cu;
        // 0x163780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16377Cu, 0x163784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163784u;
label_163784:
    // 0x163784: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_163788:
    if (ctx->pc == 0x163788u) {
        ctx->pc = 0x163788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163784u;
        // 0x163788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16378Cu;
        goto label_16378c;
    }
    ctx->pc = 0x163784u;
    {
        const bool branch_taken_0x163784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163784u;
        // 0x163788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163784) {
            ctx->pc = 0x163858u;
            goto label_163858;
        }
    }
    ctx->pc = 0x16378Cu;
label_16378c:
    // 0x16378c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_163790:
    // 0x163790: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_163794:
    // 0x163794: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_163798:
    // 0x163798: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_16379c:
    // 0x16379c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1637a0:
    // 0x1637a0: 0x40f809  jalr        $v0
label_1637a4:
    if (ctx->pc == 0x1637A4u) {
        ctx->pc = 0x1637A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A0u;
        // 0x1637a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637A8u;
        goto label_1637a8;
    }
    ctx->pc = 0x1637A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1637A8u);
        ctx->pc = 0x1637A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A0u;
        // 0x1637a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1637A0u, 0x1637A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1637A8u;
label_1637a8:
    // 0x1637a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1637ac:
    if (ctx->pc == 0x1637ACu) {
        ctx->pc = 0x1637ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A8u;
        // 0x1637ac: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637B0u;
        goto label_1637b0;
    }
    ctx->pc = 0x1637A8u;
    {
        const bool branch_taken_0x1637a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A8u;
        // 0x1637ac: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637a8) {
            ctx->pc = 0x1637CCu;
            goto label_1637cc;
        }
    }
    ctx->pc = 0x1637B0u;
label_1637b0:
    // 0x1637b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1637b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1637b4:
    // 0x1637b4: 0x24a50620  addiu       $a1, $a1, 0x620
    ctx->pc = 0x1637b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
label_1637b8:
    // 0x1637b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1637b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1637bc:
    // 0x1637bc: 0xc10ca28  jal         func_4328A0
label_1637c0:
    if (ctx->pc == 0x1637C0u) {
        ctx->pc = 0x1637C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637BCu;
        // 0x1637c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637C4u;
        goto label_1637c4;
    }
    ctx->pc = 0x1637BCu;
    SET_GPR_U32(ctx, 31, 0x1637C4u);
    ctx->pc = 0x1637C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637BCu;
    // 0x1637c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1637BCu, 0x1637C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637C4u;
label_1637c4:
    // 0x1637c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1637c8:
    if (ctx->pc == 0x1637C8u) {
        ctx->pc = 0x1637C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637C4u;
        // 0x1637c8: 0x27d091e0  addiu       $s0, $fp, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637CCu;
        goto label_1637cc;
    }
    ctx->pc = 0x1637C4u;
    {
        const bool branch_taken_0x1637c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637C4u;
        // 0x1637c8: 0x27d091e0  addiu       $s0, $fp, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637c4) {
            ctx->pc = 0x1637E8u;
            goto label_1637e8;
        }
    }
    ctx->pc = 0x1637CCu;
label_1637cc:
    // 0x1637cc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1637ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1637d0:
    // 0x1637d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1637d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1637d4:
    // 0x1637d4: 0x24a50630  addiu       $a1, $a1, 0x630
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
label_1637d8:
    // 0x1637d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1637d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1637dc:
    // 0x1637dc: 0xc10ca28  jal         func_4328A0
label_1637e0:
    if (ctx->pc == 0x1637E0u) {
        ctx->pc = 0x1637E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637DCu;
        // 0x1637e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637E4u;
        goto label_1637e4;
    }
    ctx->pc = 0x1637DCu;
    SET_GPR_U32(ctx, 31, 0x1637E4u);
    ctx->pc = 0x1637E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637DCu;
    // 0x1637e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1637DCu, 0x1637E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637E4u;
label_1637e4:
    // 0x1637e4: 0x27d091e0  addiu       $s0, $fp, -0x6E20
    ctx->pc = 0x1637e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
label_1637e8:
    // 0x1637e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1637e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1637ec:
    // 0x1637ec: 0xc050fda  jal         func_143F68
label_1637f0:
    if (ctx->pc == 0x1637F0u) {
        ctx->pc = 0x1637F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637ECu;
        // 0x1637f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1637F4u;
        goto label_1637f4;
    }
    ctx->pc = 0x1637ECu;
    SET_GPR_U32(ctx, 31, 0x1637F4u);
    ctx->pc = 0x1637F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637ECu;
    // 0x1637f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1637ECu, 0x1637F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637F4u;
label_1637f4:
    // 0x1637f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1637f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1637f8:
    // 0x1637f8: 0x26e60560  addiu       $a2, $s7, 0x560
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1376));
label_1637fc:
    // 0x1637fc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_163800:
    // 0x163800: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163804:
    // 0x163804: 0xc10ca04  jal         func_432810
label_163808:
    if (ctx->pc == 0x163808u) {
        ctx->pc = 0x163808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163804u;
        // 0x163808: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16380Cu;
        goto label_16380c;
    }
    ctx->pc = 0x163804u;
    SET_GPR_U32(ctx, 31, 0x16380Cu);
    ctx->pc = 0x163808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163804u;
    // 0x163808: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x163804u, 0x16380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16380Cu;
label_16380c:
    // 0x16380c: 0x8ec4b788  lw          $a0, -0x4878($s6)
    ctx->pc = 0x16380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
label_163810:
    // 0x163810: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x163810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_163814:
    // 0x163814: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_163818:
    // 0x163818: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16381c:
    // 0x16381c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x16381cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_163820:
    // 0x163820: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x163820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_163824:
    // 0x163824: 0x40f809  jalr        $v0
label_163828:
    if (ctx->pc == 0x163828u) {
        ctx->pc = 0x163828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163824u;
        // 0x163828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16382Cu;
        goto label_16382c;
    }
    ctx->pc = 0x163824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16382Cu);
        ctx->pc = 0x163828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163824u;
        // 0x163828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163824u, 0x16382Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16382Cu;
label_16382c:
    // 0x16382c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_163830:
    if (ctx->pc == 0x163830u) {
        ctx->pc = 0x163830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16382Cu;
        // 0x163830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163834u;
        goto label_163834;
    }
    ctx->pc = 0x16382Cu;
    {
        const bool branch_taken_0x16382c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16382c) {
            ctx->pc = 0x163830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16382Cu;
            // 0x163830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163858u;
            goto label_163858;
        }
    }
    ctx->pc = 0x163834u;
label_163834:
    // 0x163834: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x163834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_163838:
    // 0x163838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16383c:
    // 0x16383c: 0xc10ca28  jal         func_4328A0
label_163840:
    if (ctx->pc == 0x163840u) {
        ctx->pc = 0x163840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16383Cu;
        // 0x163840: 0x24a50658  addiu       $a1, $a1, 0x658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163844u;
        goto label_163844;
    }
    ctx->pc = 0x16383Cu;
    SET_GPR_U32(ctx, 31, 0x163844u);
    ctx->pc = 0x163840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16383Cu;
    // 0x163840: 0x24a50658  addiu       $a1, $a1, 0x658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x16383Cu, 0x163844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163844u;
label_163844:
    // 0x163844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163848:
    // 0x163848: 0xc050fda  jal         func_143F68
label_16384c:
    if (ctx->pc == 0x16384Cu) {
        ctx->pc = 0x16384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163848u;
        // 0x16384c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163850u;
        goto label_163850;
    }
    ctx->pc = 0x163848u;
    SET_GPR_U32(ctx, 31, 0x163850u);
    ctx->pc = 0x16384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163848u;
    // 0x16384c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x163848u, 0x163850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163850u;
label_163850:
    // 0x163850: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x163850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_163854:
    // 0x163854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163858:
    // 0x163858: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x163858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_16385c:
    // 0x16385c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x16385cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_163860:
    // 0x163860: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x163860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_163864:
    // 0x163864: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x163864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_163868:
    // 0x163868: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x163868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_16386c:
    // 0x16386c: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x16386cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_163870:
    // 0x163870: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x163870u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_163874:
    // 0x163874: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x163874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_163878:
    // 0x163878: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x163878u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_16387c:
    // 0x16387c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x16387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_163880:
    // 0x163880: 0x3e00008  jr          $ra
label_163884:
    if (ctx->pc == 0x163884u) {
        ctx->pc = 0x163884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163880u;
        // 0x163884: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163888u;
        goto label_fallthrough_0x163880;
    }
    ctx->pc = 0x163880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163880u;
        // 0x163884: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163880:
    ctx->pc = 0x163888u;
}

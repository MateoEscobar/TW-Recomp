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

// Function: sub_001831C0
// Address: 0x1831c0 - 0x183510
void sub_001831C0_0x1831c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001831C0_0x1831c0");
#endif

    switch (ctx->pc) {
        case 0x1831c0u: goto label_1831c0;
        case 0x1831c4u: goto label_1831c4;
        case 0x1831c8u: goto label_1831c8;
        case 0x1831ccu: goto label_1831cc;
        case 0x1831d0u: goto label_1831d0;
        case 0x1831d4u: goto label_1831d4;
        case 0x1831d8u: goto label_1831d8;
        case 0x1831dcu: goto label_1831dc;
        case 0x1831e0u: goto label_1831e0;
        case 0x1831e4u: goto label_1831e4;
        case 0x1831e8u: goto label_1831e8;
        case 0x1831ecu: goto label_1831ec;
        case 0x1831f0u: goto label_1831f0;
        case 0x1831f4u: goto label_1831f4;
        case 0x1831f8u: goto label_1831f8;
        case 0x1831fcu: goto label_1831fc;
        case 0x183200u: goto label_183200;
        case 0x183204u: goto label_183204;
        case 0x183208u: goto label_183208;
        case 0x18320cu: goto label_18320c;
        case 0x183210u: goto label_183210;
        case 0x183214u: goto label_183214;
        case 0x183218u: goto label_183218;
        case 0x18321cu: goto label_18321c;
        case 0x183220u: goto label_183220;
        case 0x183224u: goto label_183224;
        case 0x183228u: goto label_183228;
        case 0x18322cu: goto label_18322c;
        case 0x183230u: goto label_183230;
        case 0x183234u: goto label_183234;
        case 0x183238u: goto label_183238;
        case 0x18323cu: goto label_18323c;
        case 0x183240u: goto label_183240;
        case 0x183244u: goto label_183244;
        case 0x183248u: goto label_183248;
        case 0x18324cu: goto label_18324c;
        case 0x183250u: goto label_183250;
        case 0x183254u: goto label_183254;
        case 0x183258u: goto label_183258;
        case 0x18325cu: goto label_18325c;
        case 0x183260u: goto label_183260;
        case 0x183264u: goto label_183264;
        case 0x183268u: goto label_183268;
        case 0x18326cu: goto label_18326c;
        case 0x183270u: goto label_183270;
        case 0x183274u: goto label_183274;
        case 0x183278u: goto label_183278;
        case 0x18327cu: goto label_18327c;
        case 0x183280u: goto label_183280;
        case 0x183284u: goto label_183284;
        case 0x183288u: goto label_183288;
        case 0x18328cu: goto label_18328c;
        case 0x183290u: goto label_183290;
        case 0x183294u: goto label_183294;
        case 0x183298u: goto label_183298;
        case 0x18329cu: goto label_18329c;
        case 0x1832a0u: goto label_1832a0;
        case 0x1832a4u: goto label_1832a4;
        case 0x1832a8u: goto label_1832a8;
        case 0x1832acu: goto label_1832ac;
        case 0x1832b0u: goto label_1832b0;
        case 0x1832b4u: goto label_1832b4;
        case 0x1832b8u: goto label_1832b8;
        case 0x1832bcu: goto label_1832bc;
        case 0x1832c0u: goto label_1832c0;
        case 0x1832c4u: goto label_1832c4;
        case 0x1832c8u: goto label_1832c8;
        case 0x1832ccu: goto label_1832cc;
        case 0x1832d0u: goto label_1832d0;
        case 0x1832d4u: goto label_1832d4;
        case 0x1832d8u: goto label_1832d8;
        case 0x1832dcu: goto label_1832dc;
        case 0x1832e0u: goto label_1832e0;
        case 0x1832e4u: goto label_1832e4;
        case 0x1832e8u: goto label_1832e8;
        case 0x1832ecu: goto label_1832ec;
        case 0x1832f0u: goto label_1832f0;
        case 0x1832f4u: goto label_1832f4;
        case 0x1832f8u: goto label_1832f8;
        case 0x1832fcu: goto label_1832fc;
        case 0x183300u: goto label_183300;
        case 0x183304u: goto label_183304;
        case 0x183308u: goto label_183308;
        case 0x18330cu: goto label_18330c;
        case 0x183310u: goto label_183310;
        case 0x183314u: goto label_183314;
        case 0x183318u: goto label_183318;
        case 0x18331cu: goto label_18331c;
        case 0x183320u: goto label_183320;
        case 0x183324u: goto label_183324;
        case 0x183328u: goto label_183328;
        case 0x18332cu: goto label_18332c;
        case 0x183330u: goto label_183330;
        case 0x183334u: goto label_183334;
        case 0x183338u: goto label_183338;
        case 0x18333cu: goto label_18333c;
        case 0x183340u: goto label_183340;
        case 0x183344u: goto label_183344;
        case 0x183348u: goto label_183348;
        case 0x18334cu: goto label_18334c;
        case 0x183350u: goto label_183350;
        case 0x183354u: goto label_183354;
        case 0x183358u: goto label_183358;
        case 0x18335cu: goto label_18335c;
        case 0x183360u: goto label_183360;
        case 0x183364u: goto label_183364;
        case 0x183368u: goto label_183368;
        case 0x18336cu: goto label_18336c;
        case 0x183370u: goto label_183370;
        case 0x183374u: goto label_183374;
        case 0x183378u: goto label_183378;
        case 0x18337cu: goto label_18337c;
        case 0x183380u: goto label_183380;
        case 0x183384u: goto label_183384;
        case 0x183388u: goto label_183388;
        case 0x18338cu: goto label_18338c;
        case 0x183390u: goto label_183390;
        case 0x183394u: goto label_183394;
        case 0x183398u: goto label_183398;
        case 0x18339cu: goto label_18339c;
        case 0x1833a0u: goto label_1833a0;
        case 0x1833a4u: goto label_1833a4;
        case 0x1833a8u: goto label_1833a8;
        case 0x1833acu: goto label_1833ac;
        case 0x1833b0u: goto label_1833b0;
        case 0x1833b4u: goto label_1833b4;
        case 0x1833b8u: goto label_1833b8;
        case 0x1833bcu: goto label_1833bc;
        case 0x1833c0u: goto label_1833c0;
        case 0x1833c4u: goto label_1833c4;
        case 0x1833c8u: goto label_1833c8;
        case 0x1833ccu: goto label_1833cc;
        case 0x1833d0u: goto label_1833d0;
        case 0x1833d4u: goto label_1833d4;
        case 0x1833d8u: goto label_1833d8;
        case 0x1833dcu: goto label_1833dc;
        case 0x1833e0u: goto label_1833e0;
        case 0x1833e4u: goto label_1833e4;
        case 0x1833e8u: goto label_1833e8;
        case 0x1833ecu: goto label_1833ec;
        case 0x1833f0u: goto label_1833f0;
        case 0x1833f4u: goto label_1833f4;
        case 0x1833f8u: goto label_1833f8;
        case 0x1833fcu: goto label_1833fc;
        case 0x183400u: goto label_183400;
        case 0x183404u: goto label_183404;
        case 0x183408u: goto label_183408;
        case 0x18340cu: goto label_18340c;
        case 0x183410u: goto label_183410;
        case 0x183414u: goto label_183414;
        case 0x183418u: goto label_183418;
        case 0x18341cu: goto label_18341c;
        case 0x183420u: goto label_183420;
        case 0x183424u: goto label_183424;
        case 0x183428u: goto label_183428;
        case 0x18342cu: goto label_18342c;
        case 0x183430u: goto label_183430;
        case 0x183434u: goto label_183434;
        case 0x183438u: goto label_183438;
        case 0x18343cu: goto label_18343c;
        case 0x183440u: goto label_183440;
        case 0x183444u: goto label_183444;
        case 0x183448u: goto label_183448;
        case 0x18344cu: goto label_18344c;
        case 0x183450u: goto label_183450;
        case 0x183454u: goto label_183454;
        case 0x183458u: goto label_183458;
        case 0x18345cu: goto label_18345c;
        case 0x183460u: goto label_183460;
        case 0x183464u: goto label_183464;
        case 0x183468u: goto label_183468;
        case 0x18346cu: goto label_18346c;
        case 0x183470u: goto label_183470;
        case 0x183474u: goto label_183474;
        case 0x183478u: goto label_183478;
        case 0x18347cu: goto label_18347c;
        case 0x183480u: goto label_183480;
        case 0x183484u: goto label_183484;
        case 0x183488u: goto label_183488;
        case 0x18348cu: goto label_18348c;
        case 0x183490u: goto label_183490;
        case 0x183494u: goto label_183494;
        case 0x183498u: goto label_183498;
        case 0x18349cu: goto label_18349c;
        case 0x1834a0u: goto label_1834a0;
        case 0x1834a4u: goto label_1834a4;
        case 0x1834a8u: goto label_1834a8;
        case 0x1834acu: goto label_1834ac;
        case 0x1834b0u: goto label_1834b0;
        case 0x1834b4u: goto label_1834b4;
        case 0x1834b8u: goto label_1834b8;
        case 0x1834bcu: goto label_1834bc;
        case 0x1834c0u: goto label_1834c0;
        case 0x1834c4u: goto label_1834c4;
        case 0x1834c8u: goto label_1834c8;
        case 0x1834ccu: goto label_1834cc;
        case 0x1834d0u: goto label_1834d0;
        case 0x1834d4u: goto label_1834d4;
        case 0x1834d8u: goto label_1834d8;
        case 0x1834dcu: goto label_1834dc;
        case 0x1834e0u: goto label_1834e0;
        case 0x1834e4u: goto label_1834e4;
        case 0x1834e8u: goto label_1834e8;
        case 0x1834ecu: goto label_1834ec;
        case 0x1834f0u: goto label_1834f0;
        case 0x1834f4u: goto label_1834f4;
        case 0x1834f8u: goto label_1834f8;
        case 0x1834fcu: goto label_1834fc;
        case 0x183500u: goto label_183500;
        case 0x183504u: goto label_183504;
        case 0x183508u: goto label_183508;
        case 0x18350cu: goto label_18350c;
        default: break;
    }

    ctx->pc = 0x1831c0u;

label_1831c0:
    // 0x1831c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1831c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1831c4:
    // 0x1831c4: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1831c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1831c8:
    // 0x1831c8: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1831c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1831cc:
    // 0x1831cc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1831ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_1831d0:
    // 0x1831d0: 0xc060ad0  jal         func_182B40
label_1831d4:
    if (ctx->pc == 0x1831D4u) {
        ctx->pc = 0x1831D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831D0u;
        // 0x1831d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831D8u;
        goto label_1831d8;
    }
    ctx->pc = 0x1831D0u;
    SET_GPR_U32(ctx, 31, 0x1831D8u);
    ctx->pc = 0x1831D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1831D0u;
    // 0x1831d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B40u, 0x1831D0u, 0x1831D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1831D8u;
label_1831d8:
    // 0x1831d8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_1831dc:
    // 0x1831dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1831dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1831e0:
    // 0x1831e0: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_1831e4:
    // 0x1831e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1831e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1831e8:
    // 0x1831e8: 0x40f809  jalr        $v0
label_1831ec:
    if (ctx->pc == 0x1831ECu) {
        ctx->pc = 0x1831ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831E8u;
        // 0x1831ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831F0u;
        goto label_1831f0;
    }
    ctx->pc = 0x1831E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1831F0u);
        ctx->pc = 0x1831ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831E8u;
        // 0x1831ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831E8u, 0x1831F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1831F0u;
label_1831f0:
    // 0x1831f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1831f4:
    // 0x1831f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1831f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1831f8:
    // 0x1831f8: 0x40f809  jalr        $v0
label_1831fc:
    if (ctx->pc == 0x1831FCu) {
        ctx->pc = 0x1831FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831F8u;
        // 0x1831fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183200u;
        goto label_183200;
    }
    ctx->pc = 0x1831F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183200u);
        ctx->pc = 0x1831FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831F8u;
        // 0x1831fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831F8u, 0x183200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183200u;
label_183200:
    // 0x183200: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x183200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_183204:
    // 0x183204: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x183204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_183208:
    // 0x183208: 0x40f809  jalr        $v0
label_18320c:
    if (ctx->pc == 0x18320Cu) {
        ctx->pc = 0x18320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183208u;
        // 0x18320c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183210u;
        goto label_183210;
    }
    ctx->pc = 0x183208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183210u);
        ctx->pc = 0x18320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183208u;
        // 0x18320c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183208u, 0x183210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183210u;
label_183210:
    // 0x183210: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_183214:
    // 0x183214: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_183218:
    // 0x183218: 0x40f809  jalr        $v0
label_18321c:
    if (ctx->pc == 0x18321Cu) {
        ctx->pc = 0x18321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183218u;
        // 0x18321c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183220u;
        goto label_183220;
    }
    ctx->pc = 0x183218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183220u);
        ctx->pc = 0x18321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183218u;
        // 0x18321c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183218u, 0x183220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183220u;
label_183220:
    // 0x183220: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x183220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_183224:
    // 0x183224: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x183224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_183228:
    // 0x183228: 0x40f809  jalr        $v0
label_18322c:
    if (ctx->pc == 0x18322Cu) {
        ctx->pc = 0x18322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183228u;
        // 0x18322c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183230u;
        goto label_183230;
    }
    ctx->pc = 0x183228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183230u);
        ctx->pc = 0x18322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183228u;
        // 0x18322c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183228u, 0x183230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183230u;
label_183230:
    // 0x183230: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x183230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_183234:
    // 0x183234: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x183234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_183238:
    // 0x183238: 0x40f809  jalr        $v0
label_18323c:
    if (ctx->pc == 0x18323Cu) {
        ctx->pc = 0x18323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183238u;
        // 0x18323c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183240u;
        goto label_183240;
    }
    ctx->pc = 0x183238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183240u);
        ctx->pc = 0x18323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183238u;
        // 0x18323c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183238u, 0x183240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183240u;
label_183240:
    // 0x183240: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x183240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_183244:
    // 0x183244: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_183248:
    // 0x183248: 0x40f809  jalr        $v0
label_18324c:
    if (ctx->pc == 0x18324Cu) {
        ctx->pc = 0x18324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183248u;
        // 0x18324c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183250u;
        goto label_183250;
    }
    ctx->pc = 0x183248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183250u);
        ctx->pc = 0x18324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183248u;
        // 0x18324c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183248u, 0x183250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183250u;
label_183250:
    // 0x183250: 0x8a230077  lwl         $v1, 0x77($s1)
    ctx->pc = 0x183250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 119); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_183254:
    // 0x183254: 0x9a230074  lwr         $v1, 0x74($s1)
    ctx->pc = 0x183254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 116); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_183258:
    // 0x183258: 0xaba300a3  swl         $v1, 0xA3($sp)
    ctx->pc = 0x183258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18325c:
    // 0x18325c: 0xbba300a0  swr         $v1, 0xA0($sp)
    ctx->pc = 0x18325cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_183260:
    // 0x183260: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x183260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_183264:
    // 0x183264: 0x24482850  addiu       $t0, $v0, 0x2850
    ctx->pc = 0x183264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 10320));
label_183268:
    // 0x183268: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x183268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18326c:
    // 0x18326c: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x18326cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_183270:
    // 0x183270: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x183270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183274:
    // 0x183274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183278:
    // 0x183278: 0x250b0010  addiu       $t3, $t0, 0x10
    ctx->pc = 0x183278u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_18327c:
    // 0x18327c: 0x250a0020  addiu       $t2, $t0, 0x20
    ctx->pc = 0x18327cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_183280:
    // 0x183280: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x183280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_183284:
    // 0x183284: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x183284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_183288:
    // 0x183288: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x183288u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_18328c:
    // 0x18328c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x18328cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_183290:
    // 0x183290: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x183290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_183294:
    // 0x183294: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x183294u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_183298:
    // 0x183298: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x183298u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_18329c:
    // 0x18329c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x18329cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1832a0:
    // 0x1832a0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x1832a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1832a4:
    // 0x1832a4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x1832a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1832a8:
    // 0x1832a8: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x1832a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1832ac:
    // 0x1832ac: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1832acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1832b0:
    // 0x1832b0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1832b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1832b4:
    // 0x1832b4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1832b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1832b8:
    // 0x1832b8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1832b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1832bc:
    // 0x1832bc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1832bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1832c0:
    // 0x1832c0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1832c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1832c4:
    // 0x1832c4: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1832c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1832c8:
    // 0x1832c8: 0x6bac00c7  ldl         $t4, 0xC7($sp)
    ctx->pc = 0x1832c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_1832cc:
    // 0x1832cc: 0x6fac00c0  ldr         $t4, 0xC0($sp)
    ctx->pc = 0x1832ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_1832d0:
    // 0x1832d0: 0x8fad00c8  lw          $t5, 0xC8($sp)
    ctx->pc = 0x1832d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1832d4:
    // 0x1832d4: 0xb08cfffb  sdl         $t4, -0x5($a0)
    ctx->pc = 0x1832d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1832d8:
    // 0x1832d8: 0xb48cfff4  sdr         $t4, -0xC($a0)
    ctx->pc = 0x1832d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1832dc:
    // 0x1832dc: 0xac8dfffc  sw          $t5, -0x4($a0)
    ctx->pc = 0x1832dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 13));
label_1832e0:
    // 0x1832e0: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1832e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_1832e4:
    // 0x1832e4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1832e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1832e8:
    // 0x1832e8: 0x93a300a1  lbu         $v1, 0xA1($sp)
    ctx->pc = 0x1832e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
label_1832ec:
    // 0x1832ec: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1832ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1832f0:
    // 0x1832f0: 0x93a200a2  lbu         $v0, 0xA2($sp)
    ctx->pc = 0x1832f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 162)));
label_1832f4:
    // 0x1832f4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1832f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1832f8:
    // 0x1832f8: 0x93a300a3  lbu         $v1, 0xA3($sp)
    ctx->pc = 0x1832f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 163)));
label_1832fc:
    // 0x1832fc: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1832fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_183300:
    // 0x183300: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x183300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183304:
    // 0x183304: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x183304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183308:
    // 0x183308: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x183308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_18330c:
    // 0x18330c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x18330cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_183310:
    // 0x183310: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_183314:
    // 0x183314: 0xd9650000  lqc2        $vf5, 0x0($t3)
    ctx->pc = 0x183314u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_183318:
    // 0x183318: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x183318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_18331c:
    // 0x18331c: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x18331cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_183320:
    // 0x183320: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x183320u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_183324:
    // 0x183324: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x183324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_183328:
    // 0x183328: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x183328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_18332c:
    // 0x18332c: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x18332cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_183330:
    // 0x183330: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x183330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_183334:
    // 0x183334: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x183334u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_183338:
    // 0x183338: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x183338u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18333c:
    // 0x18333c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x18333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183340:
    // 0x183340: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x183340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183344:
    // 0x183344: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x183344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_183348:
    // 0x183348: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x183348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_18334c:
    // 0x18334c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x18334cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_183350:
    // 0x183350: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x183350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_183354:
    // 0x183354: 0x6bac00c7  ldl         $t4, 0xC7($sp)
    ctx->pc = 0x183354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_183358:
    // 0x183358: 0x6fac00c0  ldr         $t4, 0xC0($sp)
    ctx->pc = 0x183358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_18335c:
    // 0x18335c: 0x8fad00c8  lw          $t5, 0xC8($sp)
    ctx->pc = 0x18335cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_183360:
    // 0x183360: 0xb08cfffb  sdl         $t4, -0x5($a0)
    ctx->pc = 0x183360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_183364:
    // 0x183364: 0xb48cfff4  sdr         $t4, -0xC($a0)
    ctx->pc = 0x183364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_183368:
    // 0x183368: 0xac8dfffc  sw          $t5, -0x4($a0)
    ctx->pc = 0x183368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 13));
label_18336c:
    // 0x18336c: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x18336cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_183370:
    // 0x183370: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x183370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_183374:
    // 0x183374: 0x93a300a1  lbu         $v1, 0xA1($sp)
    ctx->pc = 0x183374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
label_183378:
    // 0x183378: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x183378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_18337c:
    // 0x18337c: 0x93a200a2  lbu         $v0, 0xA2($sp)
    ctx->pc = 0x18337cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 162)));
label_183380:
    // 0x183380: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x183380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_183384:
    // 0x183384: 0x93a300a3  lbu         $v1, 0xA3($sp)
    ctx->pc = 0x183384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 163)));
label_183388:
    // 0x183388: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x183388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_18338c:
    // 0x18338c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x18338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183390:
    // 0x183390: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x183390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183394:
    // 0x183394: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x183394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_183398:
    // 0x183398: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x183398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_18339c:
    // 0x18339c: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x18339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_1833a0:
    // 0x1833a0: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x1833a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1833a4:
    // 0x1833a4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1833a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1833a8:
    // 0x1833a8: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x1833a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_1833ac:
    // 0x1833ac: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1833acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1833b0:
    // 0x1833b0: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x1833b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_1833b4:
    // 0x1833b4: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1833b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1833b8:
    // 0x1833b8: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x1833b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1833bc:
    // 0x1833bc: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x1833bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1833c0:
    // 0x1833c0: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x1833c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1833c4:
    // 0x1833c4: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1833c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1833c8:
    // 0x1833c8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1833c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1833cc:
    // 0x1833cc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1833ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1833d0:
    // 0x1833d0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1833d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1833d4:
    // 0x1833d4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1833d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1833d8:
    // 0x1833d8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1833d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1833dc:
    // 0x1833dc: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1833dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1833e0:
    // 0x1833e0: 0x6bac00c7  ldl         $t4, 0xC7($sp)
    ctx->pc = 0x1833e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_1833e4:
    // 0x1833e4: 0x6fac00c0  ldr         $t4, 0xC0($sp)
    ctx->pc = 0x1833e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_1833e8:
    // 0x1833e8: 0x8fad00c8  lw          $t5, 0xC8($sp)
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1833ec:
    // 0x1833ec: 0xb08cfffb  sdl         $t4, -0x5($a0)
    ctx->pc = 0x1833ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1833f0:
    // 0x1833f0: 0xb48cfff4  sdr         $t4, -0xC($a0)
    ctx->pc = 0x1833f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1833f4:
    // 0x1833f4: 0xac8dfffc  sw          $t5, -0x4($a0)
    ctx->pc = 0x1833f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 13));
label_1833f8:
    // 0x1833f8: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1833f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_1833fc:
    // 0x1833fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1833fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_183400:
    // 0x183400: 0x93a300a1  lbu         $v1, 0xA1($sp)
    ctx->pc = 0x183400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
label_183404:
    // 0x183404: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x183404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_183408:
    // 0x183408: 0x93a200a2  lbu         $v0, 0xA2($sp)
    ctx->pc = 0x183408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 162)));
label_18340c:
    // 0x18340c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x18340cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_183410:
    // 0x183410: 0x93a300a3  lbu         $v1, 0xA3($sp)
    ctx->pc = 0x183410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 163)));
label_183414:
    // 0x183414: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x183414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_183418:
    // 0x183418: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x183418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18341c:
    // 0x18341c: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x18341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183420:
    // 0x183420: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x183420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_183424:
    // 0x183424: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x183424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_183428:
    // 0x183428: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_18342c:
    // 0x18342c: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x18342cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_183430:
    // 0x183430: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x183430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_183434:
    // 0x183434: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x183434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_183438:
    // 0x183438: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x183438u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_18343c:
    // 0x18343c: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x18343cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_183440:
    // 0x183440: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x183440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_183444:
    // 0x183444: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x183444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_183448:
    // 0x183448: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x183448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_18344c:
    // 0x18344c: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x18344cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_183450:
    // 0x183450: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x183450u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_183454:
    // 0x183454: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x183454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183458:
    // 0x183458: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x183458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18345c:
    // 0x18345c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x18345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_183460:
    // 0x183460: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x183460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_183464:
    // 0x183464: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x183464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_183468:
    // 0x183468: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x183468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_18346c:
    // 0x18346c: 0x6bac00c7  ldl         $t4, 0xC7($sp)
    ctx->pc = 0x18346cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_183470:
    // 0x183470: 0x6fac00c0  ldr         $t4, 0xC0($sp)
    ctx->pc = 0x183470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_183474:
    // 0x183474: 0x8fad00c8  lw          $t5, 0xC8($sp)
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_183478:
    // 0x183478: 0xb08cfffb  sdl         $t4, -0x5($a0)
    ctx->pc = 0x183478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18347c:
    // 0x18347c: 0xb48cfff4  sdr         $t4, -0xC($a0)
    ctx->pc = 0x18347cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_183480:
    // 0x183480: 0xac8dfffc  sw          $t5, -0x4($a0)
    ctx->pc = 0x183480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 13));
label_183484:
    // 0x183484: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x183484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_183488:
    // 0x183488: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x183488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_18348c:
    // 0x18348c: 0x93a300a1  lbu         $v1, 0xA1($sp)
    ctx->pc = 0x18348cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
label_183490:
    // 0x183490: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x183490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_183494:
    // 0x183494: 0x93a200a2  lbu         $v0, 0xA2($sp)
    ctx->pc = 0x183494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 162)));
label_183498:
    // 0x183498: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x183498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_18349c:
    // 0x18349c: 0x93a300a3  lbu         $v1, 0xA3($sp)
    ctx->pc = 0x18349cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 163)));
label_1834a0:
    // 0x1834a0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1834a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1834a4:
    // 0x1834a4: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x1834a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1834a8:
    // 0x1834a8: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x1834a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1834ac:
    // 0x1834ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1834acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1834b0:
    // 0x1834b0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1834b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1834b4:
    // 0x1834b4: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x1834b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1834b8:
    // 0x1834b8: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1834b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1834bc:
    // 0x1834bc: 0x10c0ff72  beqz        $a2, . + 4 + (-0x8E << 2)
label_1834c0:
    if (ctx->pc == 0x1834C0u) {
        ctx->pc = 0x1834C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834BCu;
        // 0x1834c0: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834C4u;
        goto label_1834c4;
    }
    ctx->pc = 0x1834BCu;
    {
        const bool branch_taken_0x1834bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834BCu;
        // 0x1834c0: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834bc) {
            ctx->pc = 0x183288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183288;
        }
    }
    ctx->pc = 0x1834C4u;
label_1834c4:
    // 0x1834c4: 0xc066196  jal         func_198658
label_1834c8:
    if (ctx->pc == 0x1834C8u) {
        ctx->pc = 0x1834C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834C4u;
        // 0x1834c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834CCu;
        goto label_1834cc;
    }
    ctx->pc = 0x1834C4u;
    SET_GPR_U32(ctx, 31, 0x1834CCu);
    ctx->pc = 0x1834C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834C4u;
    // 0x1834c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198658u, 0x1834C4u, 0x1834CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834CCu;
label_1834cc:
    // 0x1834cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1834ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1834d0:
    // 0x1834d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1834d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1834d4:
    // 0x1834d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1834d8:
    // 0x1834d8: 0xc1293ca  jal         func_4A4F28
label_1834dc:
    if (ctx->pc == 0x1834DCu) {
        ctx->pc = 0x1834DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834D8u;
        // 0x1834dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834E0u;
        goto label_1834e0;
    }
    ctx->pc = 0x1834D8u;
    SET_GPR_U32(ctx, 31, 0x1834E0u);
    ctx->pc = 0x1834DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834D8u;
    // 0x1834dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4F28u, 0x1834D8u, 0x1834E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834E0u;
label_1834e0:
    // 0x1834e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1834e4:
    if (ctx->pc == 0x1834E4u) {
        ctx->pc = 0x1834E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834E0u;
        // 0x1834e4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834E8u;
        goto label_1834e8;
    }
    ctx->pc = 0x1834E0u;
    {
        const bool branch_taken_0x1834e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834E0u;
        // 0x1834e4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834e0) {
            ctx->pc = 0x183500u;
            goto label_183500;
        }
    }
    ctx->pc = 0x1834E8u;
label_1834e8:
    // 0x1834e8: 0xc12927a  jal         func_4A49E8
label_1834ec:
    if (ctx->pc == 0x1834ECu) {
        ctx->pc = 0x1834ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834E8u;
        // 0x1834ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834F0u;
        goto label_1834f0;
    }
    ctx->pc = 0x1834E8u;
    SET_GPR_U32(ctx, 31, 0x1834F0u);
    ctx->pc = 0x1834ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834E8u;
    // 0x1834ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A49E8u, 0x1834E8u, 0x1834F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834F0u;
label_1834f0:
    // 0x1834f0: 0xc1293f4  jal         func_4A4FD0
label_1834f4:
    if (ctx->pc == 0x1834F4u) {
        ctx->pc = 0x1834F8u;
        goto label_1834f8;
    }
    ctx->pc = 0x1834F0u;
    SET_GPR_U32(ctx, 31, 0x1834F8u);
    ctx->pc = 0x4A4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4FD0u, 0x1834F0u, 0x1834F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834F8u;
label_1834f8:
    // 0x1834f8: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1834f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1834fc:
    // 0x1834fc: 0x0  nop
    ctx->pc = 0x1834fcu;
    // NOP
label_183500:
    // 0x183500: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x183500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_183504:
    // 0x183504: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x183504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_183508:
    // 0x183508: 0x3e00008  jr          $ra
label_18350c:
    if (ctx->pc == 0x18350Cu) {
        ctx->pc = 0x18350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183508u;
        // 0x18350c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183510u;
        goto label_fallthrough_0x183508;
    }
    ctx->pc = 0x183508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183508u;
        // 0x18350c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x183508:
    ctx->pc = 0x183510u;
}

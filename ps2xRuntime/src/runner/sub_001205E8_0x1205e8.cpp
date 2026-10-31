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

// Function: sub_001205E8
// Address: 0x1205e8 - 0x1207b0
void sub_001205E8_0x1205e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001205E8_0x1205e8");
#endif

    switch (ctx->pc) {
        case 0x1205e8u: goto label_1205e8;
        case 0x1205ecu: goto label_1205ec;
        case 0x1205f0u: goto label_1205f0;
        case 0x1205f4u: goto label_1205f4;
        case 0x1205f8u: goto label_1205f8;
        case 0x1205fcu: goto label_1205fc;
        case 0x120600u: goto label_120600;
        case 0x120604u: goto label_120604;
        case 0x120608u: goto label_120608;
        case 0x12060cu: goto label_12060c;
        case 0x120610u: goto label_120610;
        case 0x120614u: goto label_120614;
        case 0x120618u: goto label_120618;
        case 0x12061cu: goto label_12061c;
        case 0x120620u: goto label_120620;
        case 0x120624u: goto label_120624;
        case 0x120628u: goto label_120628;
        case 0x12062cu: goto label_12062c;
        case 0x120630u: goto label_120630;
        case 0x120634u: goto label_120634;
        case 0x120638u: goto label_120638;
        case 0x12063cu: goto label_12063c;
        case 0x120640u: goto label_120640;
        case 0x120644u: goto label_120644;
        case 0x120648u: goto label_120648;
        case 0x12064cu: goto label_12064c;
        case 0x120650u: goto label_120650;
        case 0x120654u: goto label_120654;
        case 0x120658u: goto label_120658;
        case 0x12065cu: goto label_12065c;
        case 0x120660u: goto label_120660;
        case 0x120664u: goto label_120664;
        case 0x120668u: goto label_120668;
        case 0x12066cu: goto label_12066c;
        case 0x120670u: goto label_120670;
        case 0x120674u: goto label_120674;
        case 0x120678u: goto label_120678;
        case 0x12067cu: goto label_12067c;
        case 0x120680u: goto label_120680;
        case 0x120684u: goto label_120684;
        case 0x120688u: goto label_120688;
        case 0x12068cu: goto label_12068c;
        case 0x120690u: goto label_120690;
        case 0x120694u: goto label_120694;
        case 0x120698u: goto label_120698;
        case 0x12069cu: goto label_12069c;
        case 0x1206a0u: goto label_1206a0;
        case 0x1206a4u: goto label_1206a4;
        case 0x1206a8u: goto label_1206a8;
        case 0x1206acu: goto label_1206ac;
        case 0x1206b0u: goto label_1206b0;
        case 0x1206b4u: goto label_1206b4;
        case 0x1206b8u: goto label_1206b8;
        case 0x1206bcu: goto label_1206bc;
        case 0x1206c0u: goto label_1206c0;
        case 0x1206c4u: goto label_1206c4;
        case 0x1206c8u: goto label_1206c8;
        case 0x1206ccu: goto label_1206cc;
        case 0x1206d0u: goto label_1206d0;
        case 0x1206d4u: goto label_1206d4;
        case 0x1206d8u: goto label_1206d8;
        case 0x1206dcu: goto label_1206dc;
        case 0x1206e0u: goto label_1206e0;
        case 0x1206e4u: goto label_1206e4;
        case 0x1206e8u: goto label_1206e8;
        case 0x1206ecu: goto label_1206ec;
        case 0x1206f0u: goto label_1206f0;
        case 0x1206f4u: goto label_1206f4;
        case 0x1206f8u: goto label_1206f8;
        case 0x1206fcu: goto label_1206fc;
        case 0x120700u: goto label_120700;
        case 0x120704u: goto label_120704;
        case 0x120708u: goto label_120708;
        case 0x12070cu: goto label_12070c;
        case 0x120710u: goto label_120710;
        case 0x120714u: goto label_120714;
        case 0x120718u: goto label_120718;
        case 0x12071cu: goto label_12071c;
        case 0x120720u: goto label_120720;
        case 0x120724u: goto label_120724;
        case 0x120728u: goto label_120728;
        case 0x12072cu: goto label_12072c;
        case 0x120730u: goto label_120730;
        case 0x120734u: goto label_120734;
        case 0x120738u: goto label_120738;
        case 0x12073cu: goto label_12073c;
        case 0x120740u: goto label_120740;
        case 0x120744u: goto label_120744;
        case 0x120748u: goto label_120748;
        case 0x12074cu: goto label_12074c;
        case 0x120750u: goto label_120750;
        case 0x120754u: goto label_120754;
        case 0x120758u: goto label_120758;
        case 0x12075cu: goto label_12075c;
        case 0x120760u: goto label_120760;
        case 0x120764u: goto label_120764;
        case 0x120768u: goto label_120768;
        case 0x12076cu: goto label_12076c;
        case 0x120770u: goto label_120770;
        case 0x120774u: goto label_120774;
        case 0x120778u: goto label_120778;
        case 0x12077cu: goto label_12077c;
        case 0x120780u: goto label_120780;
        case 0x120784u: goto label_120784;
        case 0x120788u: goto label_120788;
        case 0x12078cu: goto label_12078c;
        case 0x120790u: goto label_120790;
        case 0x120794u: goto label_120794;
        case 0x120798u: goto label_120798;
        case 0x12079cu: goto label_12079c;
        case 0x1207a0u: goto label_1207a0;
        case 0x1207a4u: goto label_1207a4;
        case 0x1207a8u: goto label_1207a8;
        case 0x1207acu: goto label_1207ac;
        default: break;
    }

    ctx->pc = 0x1205e8u;

label_1205e8:
    // 0x1205e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1205e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1205ec:
    // 0x1205ec: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1205ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1205f0:
    // 0x1205f0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1205f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1205f4:
    // 0x1205f4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1205f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1205f8:
    // 0x1205f8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1205f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1205fc:
    // 0x1205fc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1205fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_120600:
    // 0x120600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x120600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120604:
    // 0x120604: 0x45010063  bc1t        . + 4 + (0x63 << 2)
label_120608:
    if (ctx->pc == 0x120608u) {
        ctx->pc = 0x120608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120604u;
        // 0x120608: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12060Cu;
        goto label_12060c;
    }
    ctx->pc = 0x120604u;
    {
        const bool branch_taken_0x120604 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x120608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120604u;
        // 0x120608: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120604) {
            ctx->pc = 0x120794u;
            goto label_120794;
        }
    }
    ctx->pc = 0x12060Cu;
label_12060c:
    // 0x12060c: 0xe64c01a0  swc1        $f12, 0x1A0($s2)
    ctx->pc = 0x12060cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_120610:
    // 0x120610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120614:
    // 0x120614: 0x8e4601e0  lw          $a2, 0x1E0($s2)
    ctx->pc = 0x120614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_120618:
    // 0x120618: 0x26500200  addiu       $s0, $s2, 0x200
    ctx->pc = 0x120618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_12061c:
    // 0x12061c: 0x26510180  addiu       $s1, $s2, 0x180
    ctx->pc = 0x12061cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_120620:
    // 0x120620: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x120620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_120624:
    // 0x120624: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x120624u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_120628:
    // 0x120628: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x120628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_12062c:
    // 0x12062c: 0x60f809  jalr        $v1
label_120630:
    if (ctx->pc == 0x120630u) {
        ctx->pc = 0x120630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12062Cu;
        // 0x120630: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120634u;
        goto label_120634;
    }
    ctx->pc = 0x12062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x120634u);
        ctx->pc = 0x120630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12062Cu;
        // 0x120630: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12062Cu, 0x120634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120634u;
label_120634:
    // 0x120634: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x120634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_120638:
    // 0x120638: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x120638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12063c:
    // 0x12063c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120640:
    // 0x120640: 0x26460220  addiu       $a2, $s2, 0x220
    ctx->pc = 0x120640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_120644:
    // 0x120644: 0xc136b18  jal         func_4DAC60
label_120648:
    if (ctx->pc == 0x120648u) {
        ctx->pc = 0x120648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120644u;
        // 0x120648: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12064Cu;
        goto label_12064c;
    }
    ctx->pc = 0x120644u;
    SET_GPR_U32(ctx, 31, 0x12064Cu);
    ctx->pc = 0x120648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120644u;
    // 0x120648: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x120644u, 0x12064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12064Cu;
label_12064c:
    // 0x12064c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12064cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_120650:
    // 0x120650: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_120654:
    // 0x120654: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x120654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_120658:
    // 0x120658: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x120658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12065c:
    // 0x12065c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12065cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120660:
    // 0x120660: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x120660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120664:
    // 0x120664: 0x7e420180  sq          $v0, 0x180($s2)
    ctx->pc = 0x120664u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
label_120668:
    // 0x120668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12066c:
    // 0x12066c: 0xc0cda80  jal         func_336A00
label_120670:
    if (ctx->pc == 0x120670u) {
        ctx->pc = 0x120670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12066Cu;
        // 0x120670: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120674u;
        goto label_120674;
    }
    ctx->pc = 0x12066Cu;
    SET_GPR_U32(ctx, 31, 0x120674u);
    ctx->pc = 0x120670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12066Cu;
    // 0x120670: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x12066Cu, 0x120674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120674u;
label_120674:
    // 0x120674: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120678:
    // 0x120678: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x120678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12067c:
    // 0x12067c: 0x244217a0  addiu       $v0, $v0, 0x17A0
    ctx->pc = 0x12067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
label_120680:
    // 0x120680: 0x246317b0  addiu       $v1, $v1, 0x17B0
    ctx->pc = 0x120680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6064));
label_120684:
    // 0x120684: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x120684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_120688:
    // 0x120688: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x120688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_12068c:
    // 0x12068c: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x12068cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_120690:
    // 0x120690: 0x248417c0  addiu       $a0, $a0, 0x17C0
    ctx->pc = 0x120690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6080));
label_120694:
    // 0x120694: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x120694u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_120698:
    // 0x120698: 0x24c617d0  addiu       $a2, $a2, 0x17D0
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6096));
label_12069c:
    // 0x12069c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12069cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1206a0:
    // 0x1206a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1206a4:
    // 0x1206a4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1206a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1206a8:
    // 0x1206a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1206a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1206ac:
    // 0x1206ac: 0xc64c0210  lwc1        $f12, 0x210($s2)
    ctx->pc = 0x1206acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1206b0:
    // 0x1206b0: 0x24a51760  addiu       $a1, $a1, 0x1760
    ctx->pc = 0x1206b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5984));
label_1206b4:
    // 0x1206b4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1206b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1206b8:
    // 0x1206b8: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x1206b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
label_1206bc:
    // 0x1206bc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x1206bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_1206c0:
    // 0x1206c0: 0xc136b24  jal         func_4DAC90
label_1206c4:
    if (ctx->pc == 0x1206C4u) {
        ctx->pc = 0x1206C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206C0u;
        // 0x1206c4: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1206C8u;
        goto label_1206c8;
    }
    ctx->pc = 0x1206C0u;
    SET_GPR_U32(ctx, 31, 0x1206C8u);
    ctx->pc = 0x1206C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206C0u;
    // 0x1206c4: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1206C0u, 0x1206C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206C8u;
label_1206c8:
    // 0x1206c8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1206c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1206cc:
    // 0x1206cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1206d0:
    // 0x1206d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1206d4:
    // 0x1206d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1206d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1206d8:
    // 0x1206d8: 0xc136b30  jal         func_4DACC0
label_1206dc:
    if (ctx->pc == 0x1206DCu) {
        ctx->pc = 0x1206DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206D8u;
        // 0x1206dc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1206E0u;
        goto label_1206e0;
    }
    ctx->pc = 0x1206D8u;
    SET_GPR_U32(ctx, 31, 0x1206E0u);
    ctx->pc = 0x1206DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206D8u;
    // 0x1206dc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x1206D8u, 0x1206E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206E0u;
label_1206e0:
    // 0x1206e0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1206e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1206e4:
    // 0x1206e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1206e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1206e8:
    // 0x1206e8: 0xc6410214  lwc1        $f1, 0x214($s2)
    ctx->pc = 0x1206e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1206ec:
    // 0x1206ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1206ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1206f0:
    // 0x1206f0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1206f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1206f4:
    // 0x1206f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1206f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1206f8:
    // 0x1206f8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1206f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1206fc:
    // 0x1206fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1206fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_120700:
    // 0x120700: 0xc136b18  jal         func_4DAC60
label_120704:
    if (ctx->pc == 0x120704u) {
        ctx->pc = 0x120704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120700u;
        // 0x120704: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120708u;
        goto label_120708;
    }
    ctx->pc = 0x120700u;
    SET_GPR_U32(ctx, 31, 0x120708u);
    ctx->pc = 0x120704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120700u;
    // 0x120704: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x120700u, 0x120708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120708u;
label_120708:
    // 0x120708: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x120708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12070c:
    // 0x12070c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_120710:
    // 0x120710: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x120710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120714:
    // 0x120714: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x120714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120718:
    // 0x120718: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x120718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_12071c:
    // 0x12071c: 0xc136afa  jal         func_4DABE8
label_120720:
    if (ctx->pc == 0x120720u) {
        ctx->pc = 0x120720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12071Cu;
        // 0x120720: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120724u;
        goto label_120724;
    }
    ctx->pc = 0x12071Cu;
    SET_GPR_U32(ctx, 31, 0x120724u);
    ctx->pc = 0x120720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12071Cu;
    // 0x120720: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12071Cu, 0x120724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120724u;
label_120724:
    // 0x120724: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x120724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_120728:
    // 0x120728: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12072c:
    // 0x12072c: 0xc136b30  jal         func_4DACC0
label_120730:
    if (ctx->pc == 0x120730u) {
        ctx->pc = 0x120730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12072Cu;
        // 0x120730: 0x264501f0  addiu       $a1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120734u;
        goto label_120734;
    }
    ctx->pc = 0x12072Cu;
    SET_GPR_U32(ctx, 31, 0x120734u);
    ctx->pc = 0x120730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12072Cu;
    // 0x120730: 0x264501f0  addiu       $a1, $s2, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x12072Cu, 0x120734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120734u;
label_120734:
    // 0x120734: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x120734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_120738:
    // 0x120738: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x120738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12073c:
    // 0x12073c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12073cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120740:
    // 0x120740: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x120740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120744:
    // 0x120744: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x120744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_120748:
    // 0x120748: 0xc136b18  jal         func_4DAC60
label_12074c:
    if (ctx->pc == 0x12074Cu) {
        ctx->pc = 0x12074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120748u;
        // 0x12074c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120750u;
        goto label_120750;
    }
    ctx->pc = 0x120748u;
    SET_GPR_U32(ctx, 31, 0x120750u);
    ctx->pc = 0x12074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120748u;
    // 0x12074c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x120748u, 0x120750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120750u;
label_120750:
    // 0x120750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120754:
    // 0x120754: 0xc0484a6  jal         func_121298
label_120758:
    if (ctx->pc == 0x120758u) {
        ctx->pc = 0x120758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120754u;
        // 0x120758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12075Cu;
        goto label_12075c;
    }
    ctx->pc = 0x120754u;
    SET_GPR_U32(ctx, 31, 0x12075Cu);
    ctx->pc = 0x120758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120754u;
    // 0x120758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x120754u, 0x12075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12075Cu;
label_12075c:
    // 0x12075c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_120760:
    // 0x120760: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x120760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120764:
    // 0x120764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120768:
    // 0x120768: 0xc0cdc0a  jal         func_337028
label_12076c:
    if (ctx->pc == 0x12076Cu) {
        ctx->pc = 0x12076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120768u;
        // 0x12076c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120770u;
        goto label_120770;
    }
    ctx->pc = 0x120768u;
    SET_GPR_U32(ctx, 31, 0x120770u);
    ctx->pc = 0x12076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120768u;
    // 0x12076c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x120768u, 0x120770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120770u;
label_120770:
    // 0x120770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_120774:
    if (ctx->pc == 0x120774u) {
        ctx->pc = 0x120774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120770u;
        // 0x120774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120778u;
        goto label_120778;
    }
    ctx->pc = 0x120770u;
    {
        const bool branch_taken_0x120770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120770u;
        // 0x120774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120770) {
            ctx->pc = 0x120788u;
            goto label_120788;
        }
    }
    ctx->pc = 0x120778u;
label_120778:
    // 0x120778: 0xc0cd972  jal         func_3365C8
label_12077c:
    if (ctx->pc == 0x12077Cu) {
        ctx->pc = 0x12077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120778u;
        // 0x12077c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120780u;
        goto label_120780;
    }
    ctx->pc = 0x120778u;
    SET_GPR_U32(ctx, 31, 0x120780u);
    ctx->pc = 0x12077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120778u;
    // 0x12077c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x120778u, 0x120780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120780u;
label_120780:
    // 0x120780: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x120780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_120784:
    // 0x120784: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x120784u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_120788:
    // 0x120788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12078c:
    // 0x12078c: 0xc04828c  jal         func_120A30
label_120790:
    if (ctx->pc == 0x120790u) {
        ctx->pc = 0x120790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12078Cu;
        // 0x120790: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120794u;
        goto label_120794;
    }
    ctx->pc = 0x12078Cu;
    SET_GPR_U32(ctx, 31, 0x120794u);
    ctx->pc = 0x120790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12078Cu;
    // 0x120790: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x12078Cu, 0x120794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120794u;
label_120794:
    // 0x120794: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x120794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_120798:
    // 0x120798: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x120798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12079c:
    // 0x12079c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x12079cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1207a0:
    // 0x1207a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1207a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1207a4:
    // 0x1207a4: 0x3e00008  jr          $ra
label_1207a8:
    if (ctx->pc == 0x1207A8u) {
        ctx->pc = 0x1207A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A4u;
        // 0x1207a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207ACu;
        goto label_1207ac;
    }
    ctx->pc = 0x1207A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1207A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A4u;
        // 0x1207a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1207A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1207ACu;
label_1207ac:
    // 0x1207ac: 0x0  nop
    ctx->pc = 0x1207acu;
    // NOP
    ctx->pc = 0x1207b0u;
}

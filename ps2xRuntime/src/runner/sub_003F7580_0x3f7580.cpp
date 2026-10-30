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

// Function: sub_003F7580
// Address: 0x3f7580 - 0x3f7780
void sub_003F7580_0x3f7580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7580_0x3f7580");
#endif

    switch (ctx->pc) {
        case 0x3f7580u: goto label_3f7580;
        case 0x3f7584u: goto label_3f7584;
        case 0x3f7588u: goto label_3f7588;
        case 0x3f758cu: goto label_3f758c;
        case 0x3f7590u: goto label_3f7590;
        case 0x3f7594u: goto label_3f7594;
        case 0x3f7598u: goto label_3f7598;
        case 0x3f759cu: goto label_3f759c;
        case 0x3f75a0u: goto label_3f75a0;
        case 0x3f75a4u: goto label_3f75a4;
        case 0x3f75a8u: goto label_3f75a8;
        case 0x3f75acu: goto label_3f75ac;
        case 0x3f75b0u: goto label_3f75b0;
        case 0x3f75b4u: goto label_3f75b4;
        case 0x3f75b8u: goto label_3f75b8;
        case 0x3f75bcu: goto label_3f75bc;
        case 0x3f75c0u: goto label_3f75c0;
        case 0x3f75c4u: goto label_3f75c4;
        case 0x3f75c8u: goto label_3f75c8;
        case 0x3f75ccu: goto label_3f75cc;
        case 0x3f75d0u: goto label_3f75d0;
        case 0x3f75d4u: goto label_3f75d4;
        case 0x3f75d8u: goto label_3f75d8;
        case 0x3f75dcu: goto label_3f75dc;
        case 0x3f75e0u: goto label_3f75e0;
        case 0x3f75e4u: goto label_3f75e4;
        case 0x3f75e8u: goto label_3f75e8;
        case 0x3f75ecu: goto label_3f75ec;
        case 0x3f75f0u: goto label_3f75f0;
        case 0x3f75f4u: goto label_3f75f4;
        case 0x3f75f8u: goto label_3f75f8;
        case 0x3f75fcu: goto label_3f75fc;
        case 0x3f7600u: goto label_3f7600;
        case 0x3f7604u: goto label_3f7604;
        case 0x3f7608u: goto label_3f7608;
        case 0x3f760cu: goto label_3f760c;
        case 0x3f7610u: goto label_3f7610;
        case 0x3f7614u: goto label_3f7614;
        case 0x3f7618u: goto label_3f7618;
        case 0x3f761cu: goto label_3f761c;
        case 0x3f7620u: goto label_3f7620;
        case 0x3f7624u: goto label_3f7624;
        case 0x3f7628u: goto label_3f7628;
        case 0x3f762cu: goto label_3f762c;
        case 0x3f7630u: goto label_3f7630;
        case 0x3f7634u: goto label_3f7634;
        case 0x3f7638u: goto label_3f7638;
        case 0x3f763cu: goto label_3f763c;
        case 0x3f7640u: goto label_3f7640;
        case 0x3f7644u: goto label_3f7644;
        case 0x3f7648u: goto label_3f7648;
        case 0x3f764cu: goto label_3f764c;
        case 0x3f7650u: goto label_3f7650;
        case 0x3f7654u: goto label_3f7654;
        case 0x3f7658u: goto label_3f7658;
        case 0x3f765cu: goto label_3f765c;
        case 0x3f7660u: goto label_3f7660;
        case 0x3f7664u: goto label_3f7664;
        case 0x3f7668u: goto label_3f7668;
        case 0x3f766cu: goto label_3f766c;
        case 0x3f7670u: goto label_3f7670;
        case 0x3f7674u: goto label_3f7674;
        case 0x3f7678u: goto label_3f7678;
        case 0x3f767cu: goto label_3f767c;
        case 0x3f7680u: goto label_3f7680;
        case 0x3f7684u: goto label_3f7684;
        case 0x3f7688u: goto label_3f7688;
        case 0x3f768cu: goto label_3f768c;
        case 0x3f7690u: goto label_3f7690;
        case 0x3f7694u: goto label_3f7694;
        case 0x3f7698u: goto label_3f7698;
        case 0x3f769cu: goto label_3f769c;
        case 0x3f76a0u: goto label_3f76a0;
        case 0x3f76a4u: goto label_3f76a4;
        case 0x3f76a8u: goto label_3f76a8;
        case 0x3f76acu: goto label_3f76ac;
        case 0x3f76b0u: goto label_3f76b0;
        case 0x3f76b4u: goto label_3f76b4;
        case 0x3f76b8u: goto label_3f76b8;
        case 0x3f76bcu: goto label_3f76bc;
        case 0x3f76c0u: goto label_3f76c0;
        case 0x3f76c4u: goto label_3f76c4;
        case 0x3f76c8u: goto label_3f76c8;
        case 0x3f76ccu: goto label_3f76cc;
        case 0x3f76d0u: goto label_3f76d0;
        case 0x3f76d4u: goto label_3f76d4;
        case 0x3f76d8u: goto label_3f76d8;
        case 0x3f76dcu: goto label_3f76dc;
        case 0x3f76e0u: goto label_3f76e0;
        case 0x3f76e4u: goto label_3f76e4;
        case 0x3f76e8u: goto label_3f76e8;
        case 0x3f76ecu: goto label_3f76ec;
        case 0x3f76f0u: goto label_3f76f0;
        case 0x3f76f4u: goto label_3f76f4;
        case 0x3f76f8u: goto label_3f76f8;
        case 0x3f76fcu: goto label_3f76fc;
        case 0x3f7700u: goto label_3f7700;
        case 0x3f7704u: goto label_3f7704;
        case 0x3f7708u: goto label_3f7708;
        case 0x3f770cu: goto label_3f770c;
        case 0x3f7710u: goto label_3f7710;
        case 0x3f7714u: goto label_3f7714;
        case 0x3f7718u: goto label_3f7718;
        case 0x3f771cu: goto label_3f771c;
        case 0x3f7720u: goto label_3f7720;
        case 0x3f7724u: goto label_3f7724;
        case 0x3f7728u: goto label_3f7728;
        case 0x3f772cu: goto label_3f772c;
        case 0x3f7730u: goto label_3f7730;
        case 0x3f7734u: goto label_3f7734;
        case 0x3f7738u: goto label_3f7738;
        case 0x3f773cu: goto label_3f773c;
        case 0x3f7740u: goto label_3f7740;
        case 0x3f7744u: goto label_3f7744;
        case 0x3f7748u: goto label_3f7748;
        case 0x3f774cu: goto label_3f774c;
        case 0x3f7750u: goto label_3f7750;
        case 0x3f7754u: goto label_3f7754;
        case 0x3f7758u: goto label_3f7758;
        case 0x3f775cu: goto label_3f775c;
        case 0x3f7760u: goto label_3f7760;
        case 0x3f7764u: goto label_3f7764;
        case 0x3f7768u: goto label_3f7768;
        case 0x3f776cu: goto label_3f776c;
        case 0x3f7770u: goto label_3f7770;
        case 0x3f7774u: goto label_3f7774;
        case 0x3f7778u: goto label_3f7778;
        case 0x3f777cu: goto label_3f777c;
        default: break;
    }

    ctx->pc = 0x3f7580u;

label_3f7580:
    // 0x3f7580: 0x27bdf6e0  addiu       $sp, $sp, -0x920
    ctx->pc = 0x3f7580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964960));
label_3f7584:
    // 0x3f7584: 0x7fb00910  sq          $s0, 0x910($sp)
    ctx->pc = 0x3f7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 16));
label_3f7588:
    // 0x3f7588: 0x7fb10900  sq          $s1, 0x900($sp)
    ctx->pc = 0x3f7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 17));
label_3f758c:
    // 0x3f758c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f758cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7590:
    // 0x3f7590: 0x7fb208f0  sq          $s2, 0x8F0($sp)
    ctx->pc = 0x3f7590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 18));
label_3f7594:
    // 0x3f7594: 0x7fb308e0  sq          $s3, 0x8E0($sp)
    ctx->pc = 0x3f7594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 19));
label_3f7598:
    // 0x3f7598: 0x7fb408d0  sq          $s4, 0x8D0($sp)
    ctx->pc = 0x3f7598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 20));
label_3f759c:
    // 0x3f759c: 0xffbf08c0  sd          $ra, 0x8C0($sp)
    ctx->pc = 0x3f759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2240), GPR_U64(ctx, 31));
label_3f75a0:
    // 0x3f75a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f75a4:
    // 0x3f75a4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f75a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f75a8:
    // 0x3f75a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f75ac:
    // 0x3f75ac: 0x40f809  jalr        $v0
label_3f75b0:
    if (ctx->pc == 0x3F75B0u) {
        ctx->pc = 0x3F75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75ACu;
        // 0x3f75b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F75B4u;
        goto label_3f75b4;
    }
    ctx->pc = 0x3F75ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F75B4u);
        ctx->pc = 0x3F75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75ACu;
        // 0x3f75b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F75ACu, 0x3F75B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F75B4u;
label_3f75b4:
    // 0x3f75b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f75b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f75b8:
    // 0x3f75b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f75b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f75bc:
    // 0x3f75bc: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3f75bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3f75c0:
    // 0x3f75c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f75c4:
    // 0x3f75c4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3f75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f75c8:
    // 0x3f75c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f75cc:
    // 0x3f75cc: 0x0  nop
    ctx->pc = 0x3f75ccu;
    // NOP
label_3f75d0:
    // 0x3f75d0: 0x0  nop
    ctx->pc = 0x3f75d0u;
    // NOP
label_3f75d4:
    // 0x3f75d4: 0x0  nop
    ctx->pc = 0x3f75d4u;
    // NOP
label_3f75d8:
    // 0x3f75d8: 0x0  nop
    ctx->pc = 0x3f75d8u;
    // NOP
label_3f75dc:
    // 0x3f75dc: 0x0  nop
    ctx->pc = 0x3f75dcu;
    // NOP
label_3f75e0:
    // 0x3f75e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f75e4:
    if (ctx->pc == 0x3F75E4u) {
        ctx->pc = 0x3F75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75E0u;
        // 0x3f75e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F75E8u;
        goto label_3f75e8;
    }
    ctx->pc = 0x3F75E0u;
    {
        const bool branch_taken_0x3f75e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75E0u;
        // 0x3f75e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f75e0) {
            ctx->pc = 0x3F75D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f75d0;
        }
    }
    ctx->pc = 0x3F75E8u;
label_3f75e8:
    // 0x3f75e8: 0xc138ddc  jal         func_4E3770
label_3f75ec:
    if (ctx->pc == 0x3F75ECu) {
        ctx->pc = 0x3F75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75E8u;
        // 0x3f75ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F75F0u;
        goto label_3f75f0;
    }
    ctx->pc = 0x3F75E8u;
    SET_GPR_U32(ctx, 31, 0x3F75F0u);
    ctx->pc = 0x3F75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F75E8u;
    // 0x3f75ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F75E8u, 0x3F75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F75F0u;
label_3f75f0:
    // 0x3f75f0: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f75f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f75f4:
    // 0x3f75f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f75f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f75f8:
    // 0x3f75f8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3f75f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3f75fc:
    // 0x3f75fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f75fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7600:
    // 0x3f7600: 0xc0e94a0  jal         func_3A5280
label_3f7604:
    if (ctx->pc == 0x3F7604u) {
        ctx->pc = 0x3F7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7600u;
        // 0x3f7604: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7608u;
        goto label_3f7608;
    }
    ctx->pc = 0x3F7600u;
    SET_GPR_U32(ctx, 31, 0x3F7608u);
    ctx->pc = 0x3F7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7600u;
    // 0x3f7604: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F7600u, 0x3F7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7608u;
label_3f7608:
    // 0x3f7608: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3f760c:
    if (ctx->pc == 0x3F760Cu) {
        ctx->pc = 0x3F760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7608u;
        // 0x3f760c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7610u;
        goto label_3f7610;
    }
    ctx->pc = 0x3F7608u;
    {
        const bool branch_taken_0x3f7608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7608) {
            ctx->pc = 0x3F760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7608u;
            // 0x3f760c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7628u;
            goto label_3f7628;
        }
    }
    ctx->pc = 0x3F7610u;
label_3f7610:
    // 0x3f7610: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f7614:
    // 0x3f7614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f7614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f7618:
    // 0x3f7618: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3f7618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3f761c:
    // 0x3f761c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x3f761cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3f7620:
    // 0x3f7620: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3f7624:
    if (ctx->pc == 0x3F7624u) {
        ctx->pc = 0x3F7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7620u;
        // 0x3f7624: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7628u;
        goto label_3f7628;
    }
    ctx->pc = 0x3F7620u;
    {
        const bool branch_taken_0x3f7620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7620) {
            ctx->pc = 0x3F7624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7620u;
            // 0x3f7624: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7628u;
            goto label_3f7628;
        }
    }
    ctx->pc = 0x3F7628u;
label_3f7628:
    // 0x3f7628: 0x1660004c  bnez        $s3, . + 4 + (0x4C << 2)
label_3f762c:
    if (ctx->pc == 0x3F762Cu) {
        ctx->pc = 0x3F762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7628u;
        // 0x3f762c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7630u;
        goto label_3f7630;
    }
    ctx->pc = 0x3F7628u;
    {
        const bool branch_taken_0x3f7628 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7628u;
        // 0x3f762c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7628) {
            ctx->pc = 0x3F775Cu;
            goto label_3f775c;
        }
    }
    ctx->pc = 0x3F7630u;
label_3f7630:
    // 0x3f7630: 0xc0e9694  jal         func_3A5A50
label_3f7634:
    if (ctx->pc == 0x3F7634u) {
        ctx->pc = 0x3F7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7630u;
        // 0x3f7634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7638u;
        goto label_3f7638;
    }
    ctx->pc = 0x3F7630u;
    SET_GPR_U32(ctx, 31, 0x3F7638u);
    ctx->pc = 0x3F7634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7630u;
    // 0x3f7634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F7630u, 0x3F7638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7638u;
label_3f7638:
    // 0x3f7638: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3f763c:
    if (ctx->pc == 0x3F763Cu) {
        ctx->pc = 0x3F763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7638u;
        // 0x3f763c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7640u;
        goto label_3f7640;
    }
    ctx->pc = 0x3F7638u;
    {
        const bool branch_taken_0x3f7638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7638u;
        // 0x3f763c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7638) {
            ctx->pc = 0x3F7758u;
            goto label_3f7758;
        }
    }
    ctx->pc = 0x3F7640u;
label_3f7640:
    // 0x3f7640: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x3f7640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
label_3f7644:
    // 0x3f7644: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x3f7644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_3f7648:
    // 0x3f7648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f7648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f764c:
    // 0x3f764c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3f764cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3f7650:
    // 0x3f7650: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x3f7650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
label_3f7654:
    // 0x3f7654: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x3f7654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_3f7658:
    // 0x3f7658: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f7658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f765c:
    // 0x3f765c: 0xc0cd518  jal         func_335460
label_3f7660:
    if (ctx->pc == 0x3F7660u) {
        ctx->pc = 0x3F7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F765Cu;
        // 0x3f7660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7664u;
        goto label_3f7664;
    }
    ctx->pc = 0x3F765Cu;
    SET_GPR_U32(ctx, 31, 0x3F7664u);
    ctx->pc = 0x3F7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F765Cu;
    // 0x3f7660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F765Cu, 0x3F7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7664u;
label_3f7664:
    // 0x3f7664: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3f7664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3f7668:
    // 0x3f7668: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f7668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f766c:
    // 0x3f766c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f766cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7670:
    // 0x3f7670: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3f7670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3f7674:
    // 0x3f7674: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3f7674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3f7678:
    // 0x3f7678: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3f7678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f767c:
    // 0x3f767c: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3f767cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3f7680:
    // 0x3f7680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7684:
    // 0x3f7684: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x3f7684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3f7688:
    // 0x3f7688: 0xe7a0043c  swc1        $f0, 0x43C($sp)
    ctx->pc = 0x3f7688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3f768c:
    // 0x3f768c: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3f768cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3f7690:
    // 0x3f7690: 0xc0cd4ee  jal         func_3353B8
label_3f7694:
    if (ctx->pc == 0x3F7694u) {
        ctx->pc = 0x3F7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7690u;
        // 0x3f7694: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7698u;
        goto label_3f7698;
    }
    ctx->pc = 0x3F7690u;
    SET_GPR_U32(ctx, 31, 0x3F7698u);
    ctx->pc = 0x3F7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7690u;
    // 0x3f7694: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F7690u, 0x3F7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7698u;
label_3f7698:
    // 0x3f7698: 0x7ba40410  lq          $a0, 0x410($sp)
    ctx->pc = 0x3f7698u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f769c:
    // 0x3f769c: 0x3c032c2c  lui         $v1, 0x2C2C
    ctx->pc = 0x3f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11308 << 16));
label_3f76a0:
    // 0x3f76a0: 0x34632cf0  ori         $v1, $v1, 0x2CF0
    ctx->pc = 0x3f76a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11504);
label_3f76a4:
    // 0x3f76a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3f76a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3f76a8:
    // 0x3f76a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f76a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f76ac:
    // 0x3f76ac: 0x7fa40430  sq          $a0, 0x430($sp)
    ctx->pc = 0x3f76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 4));
label_3f76b0:
    // 0x3f76b0: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3f76b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3f76b4:
    // 0x3f76b4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3f76b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3f76b8:
    // 0x3f76b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f76b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f76bc:
    // 0x3f76bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f76bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f76c0:
    // 0x3f76c0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3f76c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f76c4:
    // 0x3f76c4: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3f76c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3f76c8:
    // 0x3f76c8: 0x26316868  addiu       $s1, $s1, 0x6868
    ctx->pc = 0x3f76c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26728));
label_3f76cc:
    // 0x3f76cc: 0xc0cd518  jal         func_335460
label_3f76d0:
    if (ctx->pc == 0x3F76D0u) {
        ctx->pc = 0x3F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F76CCu;
        // 0x3f76d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F76D4u;
        goto label_3f76d4;
    }
    ctx->pc = 0x3F76CCu;
    SET_GPR_U32(ctx, 31, 0x3F76D4u);
    ctx->pc = 0x3F76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F76CCu;
    // 0x3f76d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F76CCu, 0x3F76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F76D4u;
label_3f76d4:
    // 0x3f76d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f76d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f76d8:
    // 0x3f76d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f76d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f76dc:
    // 0x3f76dc: 0x27a20870  addiu       $v0, $sp, 0x870
    ctx->pc = 0x3f76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3f76e0:
    // 0x3f76e0: 0xe7a00878  swc1        $f0, 0x878($sp)
    ctx->pc = 0x3f76e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2168), bits); }
label_3f76e4:
    // 0x3f76e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f76e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f76e8:
    // 0x3f76e8: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x3f76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_3f76ec:
    // 0x3f76ec: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x3f76ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f76f0:
    // 0x3f76f0: 0xafa00874  sw          $zero, 0x874($sp)
    ctx->pc = 0x3f76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 0));
label_3f76f4:
    // 0x3f76f4: 0x240d007d  addiu       $t5, $zero, 0x7D
    ctx->pc = 0x3f76f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_3f76f8:
    // 0x3f76f8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x3f76f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f76fc:
    // 0x3f76fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f76fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f7700:
    // 0x3f7700: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3f7700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3f7704:
    // 0x3f7704: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3f7704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3f7708:
    // 0x3f7708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f7708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f770c:
    // 0x3f770c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7710:
    // 0x3f7710: 0x7ba30870  lq          $v1, 0x870($sp)
    ctx->pc = 0x3f7710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3f7714:
    // 0x3f7714: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3f7714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3f7718:
    // 0x3f7718: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3f7718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3f771c:
    // 0x3f771c: 0x27a80880  addiu       $t0, $sp, 0x880
    ctx->pc = 0x3f771cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3f7720:
    // 0x3f7720: 0x27a90890  addiu       $t1, $sp, 0x890
    ctx->pc = 0x3f7720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3f7724:
    // 0x3f7724: 0x27aa08a0  addiu       $t2, $sp, 0x8A0
    ctx->pc = 0x3f7724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3f7728:
    // 0x3f7728: 0x27ab08b0  addiu       $t3, $sp, 0x8B0
    ctx->pc = 0x3f7728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_3f772c:
    // 0x3f772c: 0x7fa30850  sq          $v1, 0x850($sp)
    ctx->pc = 0x3f772cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 3));
label_3f7730:
    // 0x3f7730: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3f7730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3f7734:
    // 0x3f7734: 0xe7a00880  swc1        $f0, 0x880($sp)
    ctx->pc = 0x3f7734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2176), bits); }
label_3f7738:
    // 0x3f7738: 0xafac0890  sw          $t4, 0x890($sp)
    ctx->pc = 0x3f7738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 12));
label_3f773c:
    // 0x3f773c: 0xafb408a0  sw          $s4, 0x8A0($sp)
    ctx->pc = 0x3f773cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 20));
label_3f7740:
    // 0x3f7740: 0xafad08b0  sw          $t5, 0x8B0($sp)
    ctx->pc = 0x3f7740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2224), GPR_U32(ctx, 13));
label_3f7744:
    // 0x3f7744: 0xc0ea084  jal         func_3A8210
label_3f7748:
    if (ctx->pc == 0x3F7748u) {
        ctx->pc = 0x3F7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7744u;
        // 0x3f7748: 0x7fa30860  sq          $v1, 0x860($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F774Cu;
        goto label_3f774c;
    }
    ctx->pc = 0x3F7744u;
    SET_GPR_U32(ctx, 31, 0x3F774Cu);
    ctx->pc = 0x3F7748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7744u;
    // 0x3f7748: 0x7fa30860  sq          $v1, 0x860($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F7744u, 0x3F774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F774Cu;
label_3f774c:
    // 0x3f774c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7750:
    // 0x3f7750: 0xc0f15bc  jal         func_3C56F0
label_3f7754:
    if (ctx->pc == 0x3F7754u) {
        ctx->pc = 0x3F7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7750u;
        // 0x3f7754: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7758u;
        goto label_3f7758;
    }
    ctx->pc = 0x3F7750u;
    SET_GPR_U32(ctx, 31, 0x3F7758u);
    ctx->pc = 0x3F7754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7750u;
    // 0x3f7754: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F7750u, 0x3F7758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7758u;
label_3f7758:
    // 0x3f7758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f7758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f775c:
    // 0x3f775c: 0x7bb00910  lq          $s0, 0x910($sp)
    ctx->pc = 0x3f775cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3f7760:
    // 0x3f7760: 0x7bb10900  lq          $s1, 0x900($sp)
    ctx->pc = 0x3f7760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3f7764:
    // 0x3f7764: 0x7bb208f0  lq          $s2, 0x8F0($sp)
    ctx->pc = 0x3f7764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3f7768:
    // 0x3f7768: 0x7bb308e0  lq          $s3, 0x8E0($sp)
    ctx->pc = 0x3f7768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f776c:
    // 0x3f776c: 0x7bb408d0  lq          $s4, 0x8D0($sp)
    ctx->pc = 0x3f776cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3f7770:
    // 0x3f7770: 0xdfbf08c0  ld          $ra, 0x8C0($sp)
    ctx->pc = 0x3f7770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2240)));
label_3f7774:
    // 0x3f7774: 0x3e00008  jr          $ra
label_3f7778:
    if (ctx->pc == 0x3F7778u) {
        ctx->pc = 0x3F7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7774u;
        // 0x3f7778: 0x27bd0920  addiu       $sp, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F777Cu;
        goto label_3f777c;
    }
    ctx->pc = 0x3F7774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7774u;
        // 0x3f7778: 0x27bd0920  addiu       $sp, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F777Cu;
label_3f777c:
    // 0x3f777c: 0x0  nop
    ctx->pc = 0x3f777cu;
    // NOP
    ctx->pc = 0x3f7780u;
}

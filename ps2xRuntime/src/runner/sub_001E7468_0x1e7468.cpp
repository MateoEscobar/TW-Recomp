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

// Function: sub_001E7468
// Address: 0x1e7468 - 0x1e7750
void sub_001E7468_0x1e7468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7468_0x1e7468");
#endif

    switch (ctx->pc) {
        case 0x1e7468u: goto label_1e7468;
        case 0x1e746cu: goto label_1e746c;
        case 0x1e7470u: goto label_1e7470;
        case 0x1e7474u: goto label_1e7474;
        case 0x1e7478u: goto label_1e7478;
        case 0x1e747cu: goto label_1e747c;
        case 0x1e7480u: goto label_1e7480;
        case 0x1e7484u: goto label_1e7484;
        case 0x1e7488u: goto label_1e7488;
        case 0x1e748cu: goto label_1e748c;
        case 0x1e7490u: goto label_1e7490;
        case 0x1e7494u: goto label_1e7494;
        case 0x1e7498u: goto label_1e7498;
        case 0x1e749cu: goto label_1e749c;
        case 0x1e74a0u: goto label_1e74a0;
        case 0x1e74a4u: goto label_1e74a4;
        case 0x1e74a8u: goto label_1e74a8;
        case 0x1e74acu: goto label_1e74ac;
        case 0x1e74b0u: goto label_1e74b0;
        case 0x1e74b4u: goto label_1e74b4;
        case 0x1e74b8u: goto label_1e74b8;
        case 0x1e74bcu: goto label_1e74bc;
        case 0x1e74c0u: goto label_1e74c0;
        case 0x1e74c4u: goto label_1e74c4;
        case 0x1e74c8u: goto label_1e74c8;
        case 0x1e74ccu: goto label_1e74cc;
        case 0x1e74d0u: goto label_1e74d0;
        case 0x1e74d4u: goto label_1e74d4;
        case 0x1e74d8u: goto label_1e74d8;
        case 0x1e74dcu: goto label_1e74dc;
        case 0x1e74e0u: goto label_1e74e0;
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74e8u: goto label_1e74e8;
        case 0x1e74ecu: goto label_1e74ec;
        case 0x1e74f0u: goto label_1e74f0;
        case 0x1e74f4u: goto label_1e74f4;
        case 0x1e74f8u: goto label_1e74f8;
        case 0x1e74fcu: goto label_1e74fc;
        case 0x1e7500u: goto label_1e7500;
        case 0x1e7504u: goto label_1e7504;
        case 0x1e7508u: goto label_1e7508;
        case 0x1e750cu: goto label_1e750c;
        case 0x1e7510u: goto label_1e7510;
        case 0x1e7514u: goto label_1e7514;
        case 0x1e7518u: goto label_1e7518;
        case 0x1e751cu: goto label_1e751c;
        case 0x1e7520u: goto label_1e7520;
        case 0x1e7524u: goto label_1e7524;
        case 0x1e7528u: goto label_1e7528;
        case 0x1e752cu: goto label_1e752c;
        case 0x1e7530u: goto label_1e7530;
        case 0x1e7534u: goto label_1e7534;
        case 0x1e7538u: goto label_1e7538;
        case 0x1e753cu: goto label_1e753c;
        case 0x1e7540u: goto label_1e7540;
        case 0x1e7544u: goto label_1e7544;
        case 0x1e7548u: goto label_1e7548;
        case 0x1e754cu: goto label_1e754c;
        case 0x1e7550u: goto label_1e7550;
        case 0x1e7554u: goto label_1e7554;
        case 0x1e7558u: goto label_1e7558;
        case 0x1e755cu: goto label_1e755c;
        case 0x1e7560u: goto label_1e7560;
        case 0x1e7564u: goto label_1e7564;
        case 0x1e7568u: goto label_1e7568;
        case 0x1e756cu: goto label_1e756c;
        case 0x1e7570u: goto label_1e7570;
        case 0x1e7574u: goto label_1e7574;
        case 0x1e7578u: goto label_1e7578;
        case 0x1e757cu: goto label_1e757c;
        case 0x1e7580u: goto label_1e7580;
        case 0x1e7584u: goto label_1e7584;
        case 0x1e7588u: goto label_1e7588;
        case 0x1e758cu: goto label_1e758c;
        case 0x1e7590u: goto label_1e7590;
        case 0x1e7594u: goto label_1e7594;
        case 0x1e7598u: goto label_1e7598;
        case 0x1e759cu: goto label_1e759c;
        case 0x1e75a0u: goto label_1e75a0;
        case 0x1e75a4u: goto label_1e75a4;
        case 0x1e75a8u: goto label_1e75a8;
        case 0x1e75acu: goto label_1e75ac;
        case 0x1e75b0u: goto label_1e75b0;
        case 0x1e75b4u: goto label_1e75b4;
        case 0x1e75b8u: goto label_1e75b8;
        case 0x1e75bcu: goto label_1e75bc;
        case 0x1e75c0u: goto label_1e75c0;
        case 0x1e75c4u: goto label_1e75c4;
        case 0x1e75c8u: goto label_1e75c8;
        case 0x1e75ccu: goto label_1e75cc;
        case 0x1e75d0u: goto label_1e75d0;
        case 0x1e75d4u: goto label_1e75d4;
        case 0x1e75d8u: goto label_1e75d8;
        case 0x1e75dcu: goto label_1e75dc;
        case 0x1e75e0u: goto label_1e75e0;
        case 0x1e75e4u: goto label_1e75e4;
        case 0x1e75e8u: goto label_1e75e8;
        case 0x1e75ecu: goto label_1e75ec;
        case 0x1e75f0u: goto label_1e75f0;
        case 0x1e75f4u: goto label_1e75f4;
        case 0x1e75f8u: goto label_1e75f8;
        case 0x1e75fcu: goto label_1e75fc;
        case 0x1e7600u: goto label_1e7600;
        case 0x1e7604u: goto label_1e7604;
        case 0x1e7608u: goto label_1e7608;
        case 0x1e760cu: goto label_1e760c;
        case 0x1e7610u: goto label_1e7610;
        case 0x1e7614u: goto label_1e7614;
        case 0x1e7618u: goto label_1e7618;
        case 0x1e761cu: goto label_1e761c;
        case 0x1e7620u: goto label_1e7620;
        case 0x1e7624u: goto label_1e7624;
        case 0x1e7628u: goto label_1e7628;
        case 0x1e762cu: goto label_1e762c;
        case 0x1e7630u: goto label_1e7630;
        case 0x1e7634u: goto label_1e7634;
        case 0x1e7638u: goto label_1e7638;
        case 0x1e763cu: goto label_1e763c;
        case 0x1e7640u: goto label_1e7640;
        case 0x1e7644u: goto label_1e7644;
        case 0x1e7648u: goto label_1e7648;
        case 0x1e764cu: goto label_1e764c;
        case 0x1e7650u: goto label_1e7650;
        case 0x1e7654u: goto label_1e7654;
        case 0x1e7658u: goto label_1e7658;
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7660u: goto label_1e7660;
        case 0x1e7664u: goto label_1e7664;
        case 0x1e7668u: goto label_1e7668;
        case 0x1e766cu: goto label_1e766c;
        case 0x1e7670u: goto label_1e7670;
        case 0x1e7674u: goto label_1e7674;
        case 0x1e7678u: goto label_1e7678;
        case 0x1e767cu: goto label_1e767c;
        case 0x1e7680u: goto label_1e7680;
        case 0x1e7684u: goto label_1e7684;
        case 0x1e7688u: goto label_1e7688;
        case 0x1e768cu: goto label_1e768c;
        case 0x1e7690u: goto label_1e7690;
        case 0x1e7694u: goto label_1e7694;
        case 0x1e7698u: goto label_1e7698;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76a0u: goto label_1e76a0;
        case 0x1e76a4u: goto label_1e76a4;
        case 0x1e76a8u: goto label_1e76a8;
        case 0x1e76acu: goto label_1e76ac;
        case 0x1e76b0u: goto label_1e76b0;
        case 0x1e76b4u: goto label_1e76b4;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e76c0u: goto label_1e76c0;
        case 0x1e76c4u: goto label_1e76c4;
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76ccu: goto label_1e76cc;
        case 0x1e76d0u: goto label_1e76d0;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76d8u: goto label_1e76d8;
        case 0x1e76dcu: goto label_1e76dc;
        case 0x1e76e0u: goto label_1e76e0;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76ecu: goto label_1e76ec;
        case 0x1e76f0u: goto label_1e76f0;
        case 0x1e76f4u: goto label_1e76f4;
        case 0x1e76f8u: goto label_1e76f8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7700u: goto label_1e7700;
        case 0x1e7704u: goto label_1e7704;
        case 0x1e7708u: goto label_1e7708;
        case 0x1e770cu: goto label_1e770c;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7714u: goto label_1e7714;
        case 0x1e7718u: goto label_1e7718;
        case 0x1e771cu: goto label_1e771c;
        case 0x1e7720u: goto label_1e7720;
        case 0x1e7724u: goto label_1e7724;
        case 0x1e7728u: goto label_1e7728;
        case 0x1e772cu: goto label_1e772c;
        case 0x1e7730u: goto label_1e7730;
        case 0x1e7734u: goto label_1e7734;
        case 0x1e7738u: goto label_1e7738;
        case 0x1e773cu: goto label_1e773c;
        case 0x1e7740u: goto label_1e7740;
        case 0x1e7744u: goto label_1e7744;
        case 0x1e7748u: goto label_1e7748;
        case 0x1e774cu: goto label_1e774c;
        default: break;
    }

    ctx->pc = 0x1e7468u;

label_1e7468:
    // 0x1e7468: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e7468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e746c:
    // 0x1e746c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e7470:
    // 0x1e7470: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e7470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e7474:
    // 0x1e7474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7478:
    // 0x1e7478: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e747c:
    // 0x1e747c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1e747cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1e7480:
    // 0x1e7480: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1e7480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1e7484:
    // 0x1e7484: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1e7484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1e7488:
    // 0x1e7488: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x1e7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_1e748c:
    // 0x1e748c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1e7490:
    if (ctx->pc == 0x1E7490u) {
        ctx->pc = 0x1E7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E748Cu;
        // 0x1e7490: 0x7a2201f0  lq          $v0, 0x1F0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7494u;
        goto label_1e7494;
    }
    ctx->pc = 0x1E748Cu;
    {
        const bool branch_taken_0x1e748c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e748c) {
            ctx->pc = 0x1E7490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E748Cu;
            // 0x1e7490: 0x7a2201f0  lq          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E74B8u;
            goto label_1e74b8;
        }
    }
    ctx->pc = 0x1E7494u;
label_1e7494:
    // 0x1e7494: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e7494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e7498:
    // 0x1e7498: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e749c:
    // 0x1e749c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e74a0:
    // 0x1e74a0: 0x40f809  jalr        $v0
label_1e74a4:
    if (ctx->pc == 0x1E74A4u) {
        ctx->pc = 0x1E74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74A0u;
        // 0x1e74a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74A8u;
        goto label_1e74a8;
    }
    ctx->pc = 0x1E74A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E74A8u);
        ctx->pc = 0x1E74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74A0u;
        // 0x1e74a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E74A0u, 0x1E74A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E74A8u;
label_1e74a8:
    // 0x1e74a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e74ac:
    // 0x1e74ac: 0x1443009f  bne         $v0, $v1, . + 4 + (0x9F << 2)
label_1e74b0:
    if (ctx->pc == 0x1E74B0u) {
        ctx->pc = 0x1E74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74ACu;
        // 0x1e74b0: 0xae22020c  sw          $v0, 0x20C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74B4u;
        goto label_1e74b4;
    }
    ctx->pc = 0x1E74ACu;
    {
        const bool branch_taken_0x1e74ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74ACu;
        // 0x1e74b0: 0xae22020c  sw          $v0, 0x20C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74ac) {
            ctx->pc = 0x1E772Cu;
            goto label_1e772c;
        }
    }
    ctx->pc = 0x1E74B4u;
label_1e74b4:
    // 0x1e74b4: 0x7a2201f0  lq          $v0, 0x1F0($s1)
    ctx->pc = 0x1e74b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
label_1e74b8:
    // 0x1e74b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e74b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e74bc:
    // 0x1e74bc: 0xc6210414  lwc1        $f1, 0x414($s1)
    ctx->pc = 0x1e74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e74c0:
    // 0x1e74c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e74c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e74c4:
    // 0x1e74c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e74c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e74c8:
    // 0x1e74c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e74cc:
    // 0x1e74cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e74d0:
    // 0x1e74d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e74d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e74d4:
    // 0x1e74d4: 0xc06e4dc  jal         func_1B9370
label_1e74d8:
    if (ctx->pc == 0x1E74D8u) {
        ctx->pc = 0x1E74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74D4u;
        // 0x1e74d8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74DCu;
        goto label_1e74dc;
    }
    ctx->pc = 0x1E74D4u;
    SET_GPR_U32(ctx, 31, 0x1E74DCu);
    ctx->pc = 0x1E74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74D4u;
    // 0x1e74d8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E74D4u, 0x1E74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74DCu;
label_1e74dc:
    // 0x1e74dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e74e0:
    // 0x1e74e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e74e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e74e4:
    // 0x1e74e4: 0xc06e4ea  jal         func_1B93A8
label_1e74e8:
    if (ctx->pc == 0x1E74E8u) {
        ctx->pc = 0x1E74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74E4u;
        // 0x1e74e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74ECu;
        goto label_1e74ec;
    }
    ctx->pc = 0x1E74E4u;
    SET_GPR_U32(ctx, 31, 0x1E74ECu);
    ctx->pc = 0x1E74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74E4u;
    // 0x1e74e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1E74E4u, 0x1E74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74ECu;
label_1e74ec:
    // 0x1e74ec: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1e74ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e74f0:
    // 0x1e74f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e74f4:
    // 0x1e74f4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e74f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e74f8:
    // 0x1e74f8: 0xc621041c  lwc1        $f1, 0x41C($s1)
    ctx->pc = 0x1e74f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e74fc:
    // 0x1e74fc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e74fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1e7500:
    // 0x1e7500: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e7500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e7504:
    // 0x1e7504: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e7504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e7508:
    // 0x1e7508: 0xc6270424  lwc1        $f7, 0x424($s1)
    ctx->pc = 0x1e7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e750c:
    // 0x1e750c: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
label_1e7510:
    // 0x1e7510: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e7510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1e7514:
    // 0x1e7514: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e7514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e7518:
    // 0x1e7518: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x1e7518u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e751c:
    // 0x1e751c: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x1e751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e7520:
    // 0x1e7520: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1e7520u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1e7524:
    // 0x1e7524: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1e7524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7528:
    // 0x1e7528: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1e7528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
label_1e752c:
    // 0x1e752c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e752cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1e7530:
    // 0x1e7530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7534:
    // 0x1e7534: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1e7534u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_1e7538:
    // 0x1e7538: 0xc6260418  lwc1        $f6, 0x418($s1)
    ctx->pc = 0x1e7538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e753c:
    // 0x1e753c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1e753cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1e7540:
    // 0x1e7540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e7544:
    // 0x1e7544: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e7544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e7548:
    // 0x1e7548: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e7548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1e754c:
    // 0x1e754c: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1e754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1e7550:
    // 0x1e7550: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x1e7550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_1e7554:
    // 0x1e7554: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1e7554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e7558:
    // 0x1e7558: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e7558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e755c:
    // 0x1e755c: 0x46060d00  add.s       $f20, $f1, $f6
    ctx->pc = 0x1e755cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_1e7560:
    // 0x1e7560: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e7564:
    // 0x1e7564: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1e7564u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1e7568:
    // 0x1e7568: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_1e756c:
    if (ctx->pc == 0x1E756Cu) {
        ctx->pc = 0x1E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7568u;
        // 0x1e756c: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7570u;
        goto label_1e7570;
    }
    ctx->pc = 0x1E7568u;
    {
        const bool branch_taken_0x1e7568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7568u;
        // 0x1e756c: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7568) {
            ctx->pc = 0x1E75ACu;
            goto label_1e75ac;
        }
    }
    ctx->pc = 0x1E7570u;
label_1e7570:
    // 0x1e7570: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1e7570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_1e7574:
    // 0x1e7574: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1e7574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1e7578:
    // 0x1e7578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e757c:
    // 0x1e757c: 0x0  nop
    ctx->pc = 0x1e757cu;
    // NOP
label_1e7580:
    // 0x1e7580: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e7580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7584:
    // 0x1e7584: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1e7584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_1e7588:
    // 0x1e7588: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e758c:
    // 0x1e758c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e758cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7590:
    // 0x1e7590: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1e7594:
    if (ctx->pc == 0x1E7594u) {
        ctx->pc = 0x1E7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7590u;
        // 0x1e7594: 0xe6200420  swc1        $f0, 0x420($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7598u;
        goto label_1e7598;
    }
    ctx->pc = 0x1E7590u;
    {
        const bool branch_taken_0x1e7590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7590) {
            ctx->pc = 0x1E7594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7590u;
            // 0x1e7594: 0xe6200420  swc1        $f0, 0x420($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E75ACu;
            goto label_1e75ac;
        }
    }
    ctx->pc = 0x1E7598u;
label_1e7598:
    // 0x1e7598: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1e7598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1e759c:
    // 0x1e759c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e759cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e75a0:
    // 0x1e75a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e75a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e75a4:
    // 0x1e75a4: 0x0  nop
    ctx->pc = 0x1e75a4u;
    // NOP
label_1e75a8:
    // 0x1e75a8: 0xe6200420  swc1        $f0, 0x420($s1)
    ctx->pc = 0x1e75a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
label_1e75ac:
    // 0x1e75ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e75acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e75b0:
    // 0x1e75b0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e75b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1e75b4:
    // 0x1e75b4: 0x26300210  addiu       $s0, $s1, 0x210
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_1e75b8:
    // 0x1e75b8: 0xc6220420  lwc1        $f2, 0x420($s1)
    ctx->pc = 0x1e75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e75bc:
    // 0x1e75bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e75bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e75c0:
    // 0x1e75c0: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x1e75c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1e75c4:
    // 0x1e75c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e75c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e75c8:
    // 0x1e75c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e75c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e75cc:
    // 0x1e75cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e75ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e75d0:
    // 0x1e75d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e75d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e75d4:
    // 0x1e75d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e75d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e75d8:
    // 0x1e75d8: 0xc068818  jal         func_1A2060
label_1e75dc:
    if (ctx->pc == 0x1E75DCu) {
        ctx->pc = 0x1E75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75D8u;
        // 0x1e75dc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E75E0u;
        goto label_1e75e0;
    }
    ctx->pc = 0x1E75D8u;
    SET_GPR_U32(ctx, 31, 0x1E75E0u);
    ctx->pc = 0x1E75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75D8u;
    // 0x1e75dc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E75D8u, 0x1E75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75E0u;
label_1e75e0:
    // 0x1e75e0: 0xc06e552  jal         func_1B9548
label_1e75e4:
    if (ctx->pc == 0x1E75E4u) {
        ctx->pc = 0x1E75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75E0u;
        // 0x1e75e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E75E8u;
        goto label_1e75e8;
    }
    ctx->pc = 0x1E75E0u;
    SET_GPR_U32(ctx, 31, 0x1E75E8u);
    ctx->pc = 0x1E75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75E0u;
    // 0x1e75e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E75E0u, 0x1E75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75E8u;
label_1e75e8:
    // 0x1e75e8: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x1e75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1e75ec:
    // 0x1e75ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e75f0:
    // 0x1e75f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e75f4:
    if (ctx->pc == 0x1E75F4u) {
        ctx->pc = 0x1E75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75F0u;
        // 0x1e75f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E75F8u;
        goto label_1e75f8;
    }
    ctx->pc = 0x1E75F0u;
    {
        const bool branch_taken_0x1e75f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75F0u;
        // 0x1e75f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75f0) {
            ctx->pc = 0x1E7604u;
            goto label_1e7604;
        }
    }
    ctx->pc = 0x1E75F8u;
label_1e75f8:
    // 0x1e75f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e75f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e75fc:
    // 0x1e75fc: 0xc06898e  jal         func_1A2638
label_1e7600:
    if (ctx->pc == 0x1E7600u) {
        ctx->pc = 0x1E7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75FCu;
        // 0x1e7600: 0x9045f2c4  lbu         $a1, -0xD3C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7604u;
        goto label_1e7604;
    }
    ctx->pc = 0x1E75FCu;
    SET_GPR_U32(ctx, 31, 0x1E7604u);
    ctx->pc = 0x1E7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75FCu;
    // 0x1e7600: 0x9045f2c4  lbu         $a1, -0xD3C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E75FCu, 0x1E7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7604u;
label_1e7604:
    // 0x1e7604: 0xc06886e  jal         func_1A21B8
label_1e7608:
    if (ctx->pc == 0x1E7608u) {
        ctx->pc = 0x1E7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7604u;
        // 0x1e7608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E760Cu;
        goto label_1e760c;
    }
    ctx->pc = 0x1E7604u;
    SET_GPR_U32(ctx, 31, 0x1E760Cu);
    ctx->pc = 0x1E7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7604u;
    // 0x1e7608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E7604u, 0x1E760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E760Cu;
label_1e760c:
    // 0x1e760c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7610:
    // 0x1e7610: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1e7610u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1e7614:
    // 0x1e7614: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e7614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e7618:
    // 0x1e7618: 0xc068848  jal         func_1A2120
label_1e761c:
    if (ctx->pc == 0x1E761Cu) {
        ctx->pc = 0x1E761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7618u;
        // 0x1e761c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7620u;
        goto label_1e7620;
    }
    ctx->pc = 0x1E7618u;
    SET_GPR_U32(ctx, 31, 0x1E7620u);
    ctx->pc = 0x1E761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7618u;
    // 0x1e761c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E7618u, 0x1E7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7620u;
label_1e7620:
    // 0x1e7620: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1e7620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1e7624:
    // 0x1e7624: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e7628:
    // 0x1e7628: 0x8e240200  lw          $a0, 0x200($s1)
    ctx->pc = 0x1e7628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1e762c:
    // 0x1e762c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e7630:
    // 0x1e7630: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_1e7634:
    if (ctx->pc == 0x1E7634u) {
        ctx->pc = 0x1E7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7630u;
        // 0x1e7634: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7638u;
        goto label_1e7638;
    }
    ctx->pc = 0x1E7630u;
    {
        const bool branch_taken_0x1e7630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7630u;
        // 0x1e7634: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7630) {
            ctx->pc = 0x1E7670u;
            goto label_1e7670;
        }
    }
    ctx->pc = 0x1E7638u;
label_1e7638:
    // 0x1e7638: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e763c:
    // 0x1e763c: 0xc6220428  lwc1        $f2, 0x428($s1)
    ctx->pc = 0x1e763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e7640:
    // 0x1e7640: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1e7640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1e7644:
    // 0x1e7644: 0xc623042c  lwc1        $f3, 0x42C($s1)
    ctx->pc = 0x1e7644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e7648:
    // 0x1e7648: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e764c:
    // 0x1e764c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e7650:
    // 0x1e7650: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e7650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e7654:
    // 0x1e7654: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e7658:
    // 0x1e7658: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e765c:
    // 0x1e765c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e765cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e7660:
    // 0x1e7660: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1e7660u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e7664:
    // 0x1e7664: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e7668:
    // 0x1e7668: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e766c:
    if (ctx->pc == 0x1E766Cu) {
        ctx->pc = 0x1E766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7668u;
        // 0x1e766c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7670u;
        goto label_1e7670;
    }
    ctx->pc = 0x1E7668u;
    {
        const bool branch_taken_0x1e7668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7668u;
        // 0x1e766c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7668) {
            ctx->pc = 0x1E76ECu;
            goto label_1e76ec;
        }
    }
    ctx->pc = 0x1E7670u;
label_1e7670:
    // 0x1e7670: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e7674:
    // 0x1e7674: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
label_1e7678:
    if (ctx->pc == 0x1E7678u) {
        ctx->pc = 0x1E7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7674u;
        // 0x1e7678: 0xc6200428  lwc1        $f0, 0x428($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E767Cu;
        goto label_1e767c;
    }
    ctx->pc = 0x1E7674u;
    {
        const bool branch_taken_0x1e7674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7674) {
            ctx->pc = 0x1E7678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7674u;
            // 0x1e7678: 0xc6200428  lwc1        $f0, 0x428($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E76C0u;
            goto label_1e76c0;
        }
    }
    ctx->pc = 0x1E767Cu;
label_1e767c:
    // 0x1e767c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1e7680:
    if (ctx->pc == 0x1E7680u) {
        ctx->pc = 0x1E7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E767Cu;
        // 0x1e7680: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7684u;
        goto label_1e7684;
    }
    ctx->pc = 0x1E767Cu;
    {
        const bool branch_taken_0x1e767c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E767Cu;
        // 0x1e7680: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e767c) {
            ctx->pc = 0x1E76BCu;
            goto label_1e76bc;
        }
    }
    ctx->pc = 0x1E7684u;
label_1e7684:
    // 0x1e7684: 0x4616a8c2  mul.s       $f3, $f21, $f22
    ctx->pc = 0x1e7684u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_1e7688:
    // 0x1e7688: 0xc6240428  lwc1        $f4, 0x428($s1)
    ctx->pc = 0x1e7688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e768c:
    // 0x1e768c: 0xc621042c  lwc1        $f1, 0x42C($s1)
    ctx->pc = 0x1e768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7690:
    // 0x1e7690: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e7690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1e7694:
    // 0x1e7694: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e7694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e7698:
    // 0x1e7698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e769c:
    // 0x1e769c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e769cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e76a0:
    // 0x1e76a0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e76a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1e76a4:
    // 0x1e76a4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e76a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e76a8:
    // 0x1e76a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e76a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e76ac:
    // 0x1e76ac: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1e76acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e76b0:
    // 0x1e76b0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e76b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e76b4:
    // 0x1e76b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e76b8:
    if (ctx->pc == 0x1E76B8u) {
        ctx->pc = 0x1E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76B4u;
        // 0x1e76b8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E76BCu;
        goto label_1e76bc;
    }
    ctx->pc = 0x1E76B4u;
    {
        const bool branch_taken_0x1e76b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76B4u;
        // 0x1e76b8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76b4) {
            ctx->pc = 0x1E76ECu;
            goto label_1e76ec;
        }
    }
    ctx->pc = 0x1E76BCu;
label_1e76bc:
    // 0x1e76bc: 0xc6200428  lwc1        $f0, 0x428($s1)
    ctx->pc = 0x1e76bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e76c0:
    // 0x1e76c0: 0xc623042c  lwc1        $f3, 0x42C($s1)
    ctx->pc = 0x1e76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e76c4:
    // 0x1e76c4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e76c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76c8:
    // 0x1e76c8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e76c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e76cc:
    // 0x1e76cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e76ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e76d0:
    // 0x1e76d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e76d4:
    // 0x1e76d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e76d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e76d8:
    // 0x1e76d8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1e76d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e76dc:
    // 0x1e76dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e76e0:
    // 0x1e76e0: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1e76e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e76e4:
    // 0x1e76e4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e76e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e76e8:
    // 0x1e76e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e76e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e76ec:
    // 0x1e76ec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e76ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e76f0:
    // 0x1e76f0: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x1e76f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_1e76f4:
    // 0x1e76f4: 0xc6210414  lwc1        $f1, 0x414($s1)
    ctx->pc = 0x1e76f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76f8:
    // 0x1e76f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e76f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e76fc:
    // 0x1e76fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e76fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7700:
    // 0x1e7700: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7704:
    // 0x1e7704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e7704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e7708:
    // 0x1e7708: 0xc068818  jal         func_1A2060
label_1e770c:
    if (ctx->pc == 0x1E770Cu) {
        ctx->pc = 0x1E770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7708u;
        // 0x1e770c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7710u;
        goto label_1e7710;
    }
    ctx->pc = 0x1E7708u;
    SET_GPR_U32(ctx, 31, 0x1E7710u);
    ctx->pc = 0x1E770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7708u;
    // 0x1e770c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E7708u, 0x1E7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7710u;
label_1e7710:
    // 0x1e7710: 0xc62c0410  lwc1        $f12, 0x410($s1)
    ctx->pc = 0x1e7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e7714:
    // 0x1e7714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7718:
    // 0x1e7718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e771c:
    // 0x1e771c: 0xc068848  jal         func_1A2120
label_1e7720:
    if (ctx->pc == 0x1E7720u) {
        ctx->pc = 0x1E7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E771Cu;
        // 0x1e7720: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7724u;
        goto label_1e7724;
    }
    ctx->pc = 0x1E771Cu;
    SET_GPR_U32(ctx, 31, 0x1E7724u);
    ctx->pc = 0x1E7720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E771Cu;
    // 0x1e7720: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E771Cu, 0x1E7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7724u;
label_1e7724:
    // 0x1e7724: 0xc06886e  jal         func_1A21B8
label_1e7728:
    if (ctx->pc == 0x1E7728u) {
        ctx->pc = 0x1E7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7724u;
        // 0x1e7728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E772Cu;
        goto label_1e772c;
    }
    ctx->pc = 0x1E7724u;
    SET_GPR_U32(ctx, 31, 0x1E772Cu);
    ctx->pc = 0x1E7728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7724u;
    // 0x1e7728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E7724u, 0x1E772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E772Cu;
label_1e772c:
    // 0x1e772c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e772cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e7730:
    // 0x1e7730: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e7730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e7734:
    // 0x1e7734: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e7734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e7738:
    // 0x1e7738: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1e7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e773c:
    // 0x1e773c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1e773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e7740:
    // 0x1e7740: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1e7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e7744:
    // 0x1e7744: 0x3e00008  jr          $ra
label_1e7748:
    if (ctx->pc == 0x1E7748u) {
        ctx->pc = 0x1E7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7744u;
        // 0x1e7748: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E774Cu;
        goto label_1e774c;
    }
    ctx->pc = 0x1E7744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7744u;
        // 0x1e7748: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E774Cu;
label_1e774c:
    // 0x1e774c: 0x0  nop
    ctx->pc = 0x1e774cu;
    // NOP
    ctx->pc = 0x1e7750u;
}

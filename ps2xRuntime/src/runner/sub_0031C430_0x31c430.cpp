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

// Function: sub_0031C430
// Address: 0x31c430 - 0x31c698
void sub_0031C430_0x31c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C430_0x31c430");
#endif

    switch (ctx->pc) {
        case 0x31c430u: goto label_31c430;
        case 0x31c434u: goto label_31c434;
        case 0x31c438u: goto label_31c438;
        case 0x31c43cu: goto label_31c43c;
        case 0x31c440u: goto label_31c440;
        case 0x31c444u: goto label_31c444;
        case 0x31c448u: goto label_31c448;
        case 0x31c44cu: goto label_31c44c;
        case 0x31c450u: goto label_31c450;
        case 0x31c454u: goto label_31c454;
        case 0x31c458u: goto label_31c458;
        case 0x31c45cu: goto label_31c45c;
        case 0x31c460u: goto label_31c460;
        case 0x31c464u: goto label_31c464;
        case 0x31c468u: goto label_31c468;
        case 0x31c46cu: goto label_31c46c;
        case 0x31c470u: goto label_31c470;
        case 0x31c474u: goto label_31c474;
        case 0x31c478u: goto label_31c478;
        case 0x31c47cu: goto label_31c47c;
        case 0x31c480u: goto label_31c480;
        case 0x31c484u: goto label_31c484;
        case 0x31c488u: goto label_31c488;
        case 0x31c48cu: goto label_31c48c;
        case 0x31c490u: goto label_31c490;
        case 0x31c494u: goto label_31c494;
        case 0x31c498u: goto label_31c498;
        case 0x31c49cu: goto label_31c49c;
        case 0x31c4a0u: goto label_31c4a0;
        case 0x31c4a4u: goto label_31c4a4;
        case 0x31c4a8u: goto label_31c4a8;
        case 0x31c4acu: goto label_31c4ac;
        case 0x31c4b0u: goto label_31c4b0;
        case 0x31c4b4u: goto label_31c4b4;
        case 0x31c4b8u: goto label_31c4b8;
        case 0x31c4bcu: goto label_31c4bc;
        case 0x31c4c0u: goto label_31c4c0;
        case 0x31c4c4u: goto label_31c4c4;
        case 0x31c4c8u: goto label_31c4c8;
        case 0x31c4ccu: goto label_31c4cc;
        case 0x31c4d0u: goto label_31c4d0;
        case 0x31c4d4u: goto label_31c4d4;
        case 0x31c4d8u: goto label_31c4d8;
        case 0x31c4dcu: goto label_31c4dc;
        case 0x31c4e0u: goto label_31c4e0;
        case 0x31c4e4u: goto label_31c4e4;
        case 0x31c4e8u: goto label_31c4e8;
        case 0x31c4ecu: goto label_31c4ec;
        case 0x31c4f0u: goto label_31c4f0;
        case 0x31c4f4u: goto label_31c4f4;
        case 0x31c4f8u: goto label_31c4f8;
        case 0x31c4fcu: goto label_31c4fc;
        case 0x31c500u: goto label_31c500;
        case 0x31c504u: goto label_31c504;
        case 0x31c508u: goto label_31c508;
        case 0x31c50cu: goto label_31c50c;
        case 0x31c510u: goto label_31c510;
        case 0x31c514u: goto label_31c514;
        case 0x31c518u: goto label_31c518;
        case 0x31c51cu: goto label_31c51c;
        case 0x31c520u: goto label_31c520;
        case 0x31c524u: goto label_31c524;
        case 0x31c528u: goto label_31c528;
        case 0x31c52cu: goto label_31c52c;
        case 0x31c530u: goto label_31c530;
        case 0x31c534u: goto label_31c534;
        case 0x31c538u: goto label_31c538;
        case 0x31c53cu: goto label_31c53c;
        case 0x31c540u: goto label_31c540;
        case 0x31c544u: goto label_31c544;
        case 0x31c548u: goto label_31c548;
        case 0x31c54cu: goto label_31c54c;
        case 0x31c550u: goto label_31c550;
        case 0x31c554u: goto label_31c554;
        case 0x31c558u: goto label_31c558;
        case 0x31c55cu: goto label_31c55c;
        case 0x31c560u: goto label_31c560;
        case 0x31c564u: goto label_31c564;
        case 0x31c568u: goto label_31c568;
        case 0x31c56cu: goto label_31c56c;
        case 0x31c570u: goto label_31c570;
        case 0x31c574u: goto label_31c574;
        case 0x31c578u: goto label_31c578;
        case 0x31c57cu: goto label_31c57c;
        case 0x31c580u: goto label_31c580;
        case 0x31c584u: goto label_31c584;
        case 0x31c588u: goto label_31c588;
        case 0x31c58cu: goto label_31c58c;
        case 0x31c590u: goto label_31c590;
        case 0x31c594u: goto label_31c594;
        case 0x31c598u: goto label_31c598;
        case 0x31c59cu: goto label_31c59c;
        case 0x31c5a0u: goto label_31c5a0;
        case 0x31c5a4u: goto label_31c5a4;
        case 0x31c5a8u: goto label_31c5a8;
        case 0x31c5acu: goto label_31c5ac;
        case 0x31c5b0u: goto label_31c5b0;
        case 0x31c5b4u: goto label_31c5b4;
        case 0x31c5b8u: goto label_31c5b8;
        case 0x31c5bcu: goto label_31c5bc;
        case 0x31c5c0u: goto label_31c5c0;
        case 0x31c5c4u: goto label_31c5c4;
        case 0x31c5c8u: goto label_31c5c8;
        case 0x31c5ccu: goto label_31c5cc;
        case 0x31c5d0u: goto label_31c5d0;
        case 0x31c5d4u: goto label_31c5d4;
        case 0x31c5d8u: goto label_31c5d8;
        case 0x31c5dcu: goto label_31c5dc;
        case 0x31c5e0u: goto label_31c5e0;
        case 0x31c5e4u: goto label_31c5e4;
        case 0x31c5e8u: goto label_31c5e8;
        case 0x31c5ecu: goto label_31c5ec;
        case 0x31c5f0u: goto label_31c5f0;
        case 0x31c5f4u: goto label_31c5f4;
        case 0x31c5f8u: goto label_31c5f8;
        case 0x31c5fcu: goto label_31c5fc;
        case 0x31c600u: goto label_31c600;
        case 0x31c604u: goto label_31c604;
        case 0x31c608u: goto label_31c608;
        case 0x31c60cu: goto label_31c60c;
        case 0x31c610u: goto label_31c610;
        case 0x31c614u: goto label_31c614;
        case 0x31c618u: goto label_31c618;
        case 0x31c61cu: goto label_31c61c;
        case 0x31c620u: goto label_31c620;
        case 0x31c624u: goto label_31c624;
        case 0x31c628u: goto label_31c628;
        case 0x31c62cu: goto label_31c62c;
        case 0x31c630u: goto label_31c630;
        case 0x31c634u: goto label_31c634;
        case 0x31c638u: goto label_31c638;
        case 0x31c63cu: goto label_31c63c;
        case 0x31c640u: goto label_31c640;
        case 0x31c644u: goto label_31c644;
        case 0x31c648u: goto label_31c648;
        case 0x31c64cu: goto label_31c64c;
        case 0x31c650u: goto label_31c650;
        case 0x31c654u: goto label_31c654;
        case 0x31c658u: goto label_31c658;
        case 0x31c65cu: goto label_31c65c;
        case 0x31c660u: goto label_31c660;
        case 0x31c664u: goto label_31c664;
        case 0x31c668u: goto label_31c668;
        case 0x31c66cu: goto label_31c66c;
        case 0x31c670u: goto label_31c670;
        case 0x31c674u: goto label_31c674;
        case 0x31c678u: goto label_31c678;
        case 0x31c67cu: goto label_31c67c;
        case 0x31c680u: goto label_31c680;
        case 0x31c684u: goto label_31c684;
        case 0x31c688u: goto label_31c688;
        case 0x31c68cu: goto label_31c68c;
        case 0x31c690u: goto label_31c690;
        case 0x31c694u: goto label_31c694;
        default: break;
    }

    ctx->pc = 0x31c430u;

label_31c430:
    // 0x31c430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31c434:
    // 0x31c434: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31c434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_31c438:
    // 0x31c438: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31c43c:
    // 0x31c43c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
label_31c440:
    // 0x31c440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c444:
    // 0x31c444: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31c448:
    // 0x31c448: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31c44c:
    // 0x31c44c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31c450:
    // 0x31c450: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31c450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31c454:
    // 0x31c454: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31c458:
    // 0x31c458: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31c458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31c45c:
    // 0x31c45c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31c460:
    // 0x31c460: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x31c460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31c464:
    // 0x31c464: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x31c464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_31c468:
    // 0x31c468: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x31c468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31c46c:
    // 0x31c46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31c470:
    // 0x31c470: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31c470u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_31c474:
    // 0x31c474: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31c474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_31c478:
    // 0x31c478: 0x26140020  addiu       $s4, $s0, 0x20
    ctx->pc = 0x31c478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_31c47c:
    // 0x31c47c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_31c480:
    // 0x31c480: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x31c480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_31c484:
    // 0x31c484: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31c484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_31c488:
    // 0x31c488: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31c488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_31c48c:
    // 0x31c48c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_31c490:
    // 0x31c490: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31c490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_31c494:
    // 0x31c494: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_31c498:
    // 0x31c498: 0xc0c1a3e  jal         func_3068F8
label_31c49c:
    if (ctx->pc == 0x31C49Cu) {
        ctx->pc = 0x31C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C498u;
        // 0x31c49c: 0xae0b0008  sw          $t3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C4A0u;
        goto label_31c4a0;
    }
    ctx->pc = 0x31C498u;
    SET_GPR_U32(ctx, 31, 0x31C4A0u);
    ctx->pc = 0x31C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C498u;
    // 0x31c49c: 0xae0b0008  sw          $t3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31C498u, 0x31C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4A0u;
label_31c4a0:
    // 0x31c4a0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_31c4a4:
    // 0x31c4a4: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x31c4a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_31c4a8:
    // 0x31c4a8: 0x24423f20  addiu       $v0, $v0, 0x3F20
    ctx->pc = 0x31c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
label_31c4ac:
    // 0x31c4ac: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x31c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_31c4b0:
    // 0x31c4b0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_31c4b4:
    // 0x31c4b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31c4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c4b8:
    // 0x31c4b8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x31c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_31c4bc:
    // 0x31c4bc: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x31c4bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31c4c0:
    // 0x31c4c0: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x31c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
label_31c4c4:
    // 0x31c4c4: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x31c4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
label_31c4c8:
    // 0x31c4c8: 0xa200003e  sb          $zero, 0x3E($s0)
    ctx->pc = 0x31c4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
label_31c4cc:
    // 0x31c4cc: 0x0  nop
    ctx->pc = 0x31c4ccu;
    // NOP
label_31c4d0:
    // 0x31c4d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31c4d4:
    // 0x31c4d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31c4d8:
    // 0x31c4d8: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x31c4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_31c4dc:
    // 0x31c4dc: 0x0  nop
    ctx->pc = 0x31c4dcu;
    // NOP
label_31c4e0:
    // 0x31c4e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_31c4e4:
    if (ctx->pc == 0x31C4E4u) {
        ctx->pc = 0x31C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4E0u;
        // 0x31c4e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C4E8u;
        goto label_31c4e8;
    }
    ctx->pc = 0x31C4E0u;
    {
        const bool branch_taken_0x31c4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4E0u;
        // 0x31c4e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4e0) {
            ctx->pc = 0x31C4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c4d0;
        }
    }
    ctx->pc = 0x31C4E8u;
label_31c4e8:
    // 0x31c4e8: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
label_31c4ec:
    if (ctx->pc == 0x31C4ECu) {
        ctx->pc = 0x31C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4E8u;
        // 0x31c4ec: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C4F0u;
        goto label_31c4f0;
    }
    ctx->pc = 0x31C4E8u;
    {
        const bool branch_taken_0x31c4e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c4e8) {
            ctx->pc = 0x31C4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C4E8u;
            // 0x31c4ec: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C514u;
            goto label_31c514;
        }
    }
    ctx->pc = 0x31C4F0u;
label_31c4f0:
    // 0x31c4f0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_31c4f4:
    if (ctx->pc == 0x31C4F4u) {
        ctx->pc = 0x31C4F8u;
        goto label_31c4f8;
    }
    ctx->pc = 0x31C4F0u;
    {
        const bool branch_taken_0x31c4f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c4f0) {
            ctx->pc = 0x31C508u;
            goto label_31c508;
        }
    }
    ctx->pc = 0x31C4F8u;
label_31c4f8:
    // 0x31c4f8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_31c4fc:
    if (ctx->pc == 0x31C4FCu) {
        ctx->pc = 0x31C500u;
        goto label_31c500;
    }
    ctx->pc = 0x31C4F8u;
    {
        const bool branch_taken_0x31c4f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c4f8) {
            ctx->pc = 0x31C508u;
            goto label_31c508;
        }
    }
    ctx->pc = 0x31C500u;
label_31c500:
    // 0x31c500: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
label_31c504:
    if (ctx->pc == 0x31C504u) {
        ctx->pc = 0x31C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C500u;
        // 0x31c504: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C508u;
        goto label_31c508;
    }
    ctx->pc = 0x31C500u;
    {
        const bool branch_taken_0x31c500 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C500u;
        // 0x31c504: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c500) {
            ctx->pc = 0x31C63Cu;
            goto label_31c63c;
        }
    }
    ctx->pc = 0x31C508u;
label_31c508:
    // 0x31c508: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_31c50c:
    if (ctx->pc == 0x31C50Cu) {
        ctx->pc = 0x31C510u;
        goto label_31c510;
    }
    ctx->pc = 0x31C508u;
    {
        const bool branch_taken_0x31c508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c508) {
            ctx->pc = 0x31C554u;
            goto label_31c554;
        }
    }
    ctx->pc = 0x31C510u;
label_31c510:
    // 0x31c510: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_31c514:
    // 0x31c514: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31c518:
    if (ctx->pc == 0x31C518u) {
        ctx->pc = 0x31C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C514u;
        // 0x31c518: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C51Cu;
        goto label_31c51c;
    }
    ctx->pc = 0x31C514u;
    {
        const bool branch_taken_0x31c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C514u;
        // 0x31c518: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c514) {
            ctx->pc = 0x31C554u;
            goto label_31c554;
        }
    }
    ctx->pc = 0x31C51Cu;
label_31c51c:
    // 0x31c51c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c520:
    // 0x31c520: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x31c520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_31c524:
    // 0x31c524: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x31c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31c528:
    // 0x31c528: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x31c528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_31c52c:
    // 0x31c52c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x31c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31c530:
    // 0x31c530: 0x40f809  jalr        $v0
label_31c534:
    if (ctx->pc == 0x31C534u) {
        ctx->pc = 0x31C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C530u;
        // 0x31c534: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C538u;
        goto label_31c538;
    }
    ctx->pc = 0x31C530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C538u);
        ctx->pc = 0x31C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C530u;
        // 0x31c534: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C530u, 0x31C538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C538u;
label_31c538:
    // 0x31c538: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x31c538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_31c53c:
    // 0x31c53c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31c540:
    // 0x31c540: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31c540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31c544:
    // 0x31c544: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31c544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31c548:
    // 0x31c548: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x31c548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
label_31c54c:
    // 0x31c54c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x31c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_31c550:
    // 0x31c550: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31c550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_31c554:
    // 0x31c554: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_31c558:
    if (ctx->pc == 0x31C558u) {
        ctx->pc = 0x31C55Cu;
        goto label_31c55c;
    }
    ctx->pc = 0x31C554u;
    {
        const bool branch_taken_0x31c554 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c554) {
            ctx->pc = 0x31C5A0u;
            goto label_31c5a0;
        }
    }
    ctx->pc = 0x31C55Cu;
label_31c55c:
    // 0x31c55c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x31c55cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_31c560:
    // 0x31c560: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31c564:
    if (ctx->pc == 0x31C564u) {
        ctx->pc = 0x31C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C560u;
        // 0x31c564: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C568u;
        goto label_31c568;
    }
    ctx->pc = 0x31C560u;
    {
        const bool branch_taken_0x31c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C560u;
        // 0x31c564: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c560) {
            ctx->pc = 0x31C5A0u;
            goto label_31c5a0;
        }
    }
    ctx->pc = 0x31C568u;
label_31c568:
    // 0x31c568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31c56c:
    // 0x31c56c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x31c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_31c570:
    // 0x31c570: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x31c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31c574:
    // 0x31c574: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x31c574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_31c578:
    // 0x31c578: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x31c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31c57c:
    // 0x31c57c: 0x40f809  jalr        $v0
label_31c580:
    if (ctx->pc == 0x31C580u) {
        ctx->pc = 0x31C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C57Cu;
        // 0x31c580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C584u;
        goto label_31c584;
    }
    ctx->pc = 0x31C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C584u);
        ctx->pc = 0x31C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C57Cu;
        // 0x31c580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C57Cu, 0x31C584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C584u;
label_31c584:
    // 0x31c584: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x31c584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_31c588:
    // 0x31c588: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31c58c:
    // 0x31c58c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31c590:
    // 0x31c590: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31c590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31c594:
    // 0x31c594: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x31c594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
label_31c598:
    // 0x31c598: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x31c598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_31c59c:
    // 0x31c59c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_31c5a0:
    // 0x31c5a0: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_31c5a4:
    if (ctx->pc == 0x31C5A4u) {
        ctx->pc = 0x31C5A8u;
        goto label_31c5a8;
    }
    ctx->pc = 0x31C5A0u;
    {
        const bool branch_taken_0x31c5a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c5a0) {
            ctx->pc = 0x31C5ECu;
            goto label_31c5ec;
        }
    }
    ctx->pc = 0x31C5A8u;
label_31c5a8:
    // 0x31c5a8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x31c5a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_31c5ac:
    // 0x31c5ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31c5b0:
    if (ctx->pc == 0x31C5B0u) {
        ctx->pc = 0x31C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ACu;
        // 0x31c5b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5B4u;
        goto label_31c5b4;
    }
    ctx->pc = 0x31C5ACu;
    {
        const bool branch_taken_0x31c5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ACu;
        // 0x31c5b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5ac) {
            ctx->pc = 0x31C5ECu;
            goto label_31c5ec;
        }
    }
    ctx->pc = 0x31C5B4u;
label_31c5b4:
    // 0x31c5b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31c5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31c5b8:
    // 0x31c5b8: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x31c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_31c5bc:
    // 0x31c5bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x31c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31c5c0:
    // 0x31c5c0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x31c5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_31c5c4:
    // 0x31c5c4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x31c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31c5c8:
    // 0x31c5c8: 0x40f809  jalr        $v0
label_31c5cc:
    if (ctx->pc == 0x31C5CCu) {
        ctx->pc = 0x31C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5C8u;
        // 0x31c5cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5D0u;
        goto label_31c5d0;
    }
    ctx->pc = 0x31C5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C5D0u);
        ctx->pc = 0x31C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5C8u;
        // 0x31c5cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C5C8u, 0x31C5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C5D0u;
label_31c5d0:
    // 0x31c5d0: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x31c5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_31c5d4:
    // 0x31c5d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31c5d8:
    // 0x31c5d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31c5dc:
    // 0x31c5dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31c5e0:
    // 0x31c5e0: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x31c5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
label_31c5e4:
    // 0x31c5e4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x31c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_31c5e8:
    // 0x31c5e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_31c5ec:
    // 0x31c5ec: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
label_31c5f0:
    if (ctx->pc == 0x31C5F0u) {
        ctx->pc = 0x31C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ECu;
        // 0x31c5f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5F4u;
        goto label_31c5f4;
    }
    ctx->pc = 0x31C5ECu;
    {
        const bool branch_taken_0x31c5ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5ECu;
        // 0x31c5f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5ec) {
            ctx->pc = 0x31C670u;
            goto label_31c670;
        }
    }
    ctx->pc = 0x31C5F4u;
label_31c5f4:
    // 0x31c5f4: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_31c5f8:
    // 0x31c5f8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_31c5fc:
    if (ctx->pc == 0x31C5FCu) {
        ctx->pc = 0x31C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5F8u;
        // 0x31c5fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C600u;
        goto label_31c600;
    }
    ctx->pc = 0x31C5F8u;
    {
        const bool branch_taken_0x31c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5F8u;
        // 0x31c5fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5f8) {
            ctx->pc = 0x31C66Cu;
            goto label_31c66c;
        }
    }
    ctx->pc = 0x31C600u;
label_31c600:
    // 0x31c600: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31c600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31c604:
    // 0x31c604: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x31c604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_31c608:
    // 0x31c608: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x31c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31c60c:
    // 0x31c60c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x31c60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_31c610:
    // 0x31c610: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x31c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31c614:
    // 0x31c614: 0x40f809  jalr        $v0
label_31c618:
    if (ctx->pc == 0x31C618u) {
        ctx->pc = 0x31C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C614u;
        // 0x31c618: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C61Cu;
        goto label_31c61c;
    }
    ctx->pc = 0x31C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C61Cu);
        ctx->pc = 0x31C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C614u;
        // 0x31c618: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C614u, 0x31C61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C61Cu;
label_31c61c:
    // 0x31c61c: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x31c61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_31c620:
    // 0x31c620: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31c624:
    // 0x31c624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31c628:
    // 0x31c628: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31c628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31c62c:
    // 0x31c62c: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x31c62cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
label_31c630:
    // 0x31c630: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x31c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_31c634:
    // 0x31c634: 0x1000000d  b           . + 4 + (0xD << 2)
label_31c638:
    if (ctx->pc == 0x31C638u) {
        ctx->pc = 0x31C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C634u;
        // 0x31c638: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C63Cu;
        goto label_31c63c;
    }
    ctx->pc = 0x31C634u;
    {
        const bool branch_taken_0x31c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C634u;
        // 0x31c638: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c634) {
            ctx->pc = 0x31C66Cu;
            goto label_31c66c;
        }
    }
    ctx->pc = 0x31C63Cu;
label_31c63c:
    // 0x31c63c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31c63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31c640:
    // 0x31c640: 0x244613a8  addiu       $a2, $v0, 0x13A8
    ctx->pc = 0x31c640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5032));
label_31c644:
    // 0x31c644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31c644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c648:
    // 0x31c648: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x31c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31c64c:
    // 0x31c64c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31c650:
    // 0x31c650: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x31c650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_31c654:
    // 0x31c654: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x31c654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_31c658:
    // 0x31c658: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x31c658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_31c65c:
    // 0x31c65c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_31c660:
    if (ctx->pc == 0x31C660u) {
        ctx->pc = 0x31C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C65Cu;
        // 0x31c660: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C664u;
        goto label_31c664;
    }
    ctx->pc = 0x31C65Cu;
    {
        const bool branch_taken_0x31c65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C65Cu;
        // 0x31c660: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c65c) {
            ctx->pc = 0x31C648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c648;
        }
    }
    ctx->pc = 0x31C664u;
label_31c664:
    // 0x31c664: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31c668:
    // 0x31c668: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x31c668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_31c66c:
    // 0x31c66c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31c66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c670:
    // 0x31c670: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31c670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31c674:
    // 0x31c674: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31c674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31c678:
    // 0x31c678: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31c678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31c67c:
    // 0x31c67c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31c67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31c680:
    // 0x31c680: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31c680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31c684:
    // 0x31c684: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31c684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31c688:
    // 0x31c688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31c68c:
    // 0x31c68c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x31c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31c690:
    // 0x31c690: 0x3e00008  jr          $ra
label_31c694:
    if (ctx->pc == 0x31C694u) {
        ctx->pc = 0x31C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C690u;
        // 0x31c694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C698u;
        goto label_fallthrough_0x31c690;
    }
    ctx->pc = 0x31C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C690u;
        // 0x31c694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31c690:
    ctx->pc = 0x31C698u;
}

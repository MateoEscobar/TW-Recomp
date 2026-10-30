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

// Function: sub_00399428
// Address: 0x399428 - 0x3996a0
void sub_00399428_0x399428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399428_0x399428");
#endif

    switch (ctx->pc) {
        case 0x399428u: goto label_399428;
        case 0x39942cu: goto label_39942c;
        case 0x399430u: goto label_399430;
        case 0x399434u: goto label_399434;
        case 0x399438u: goto label_399438;
        case 0x39943cu: goto label_39943c;
        case 0x399440u: goto label_399440;
        case 0x399444u: goto label_399444;
        case 0x399448u: goto label_399448;
        case 0x39944cu: goto label_39944c;
        case 0x399450u: goto label_399450;
        case 0x399454u: goto label_399454;
        case 0x399458u: goto label_399458;
        case 0x39945cu: goto label_39945c;
        case 0x399460u: goto label_399460;
        case 0x399464u: goto label_399464;
        case 0x399468u: goto label_399468;
        case 0x39946cu: goto label_39946c;
        case 0x399470u: goto label_399470;
        case 0x399474u: goto label_399474;
        case 0x399478u: goto label_399478;
        case 0x39947cu: goto label_39947c;
        case 0x399480u: goto label_399480;
        case 0x399484u: goto label_399484;
        case 0x399488u: goto label_399488;
        case 0x39948cu: goto label_39948c;
        case 0x399490u: goto label_399490;
        case 0x399494u: goto label_399494;
        case 0x399498u: goto label_399498;
        case 0x39949cu: goto label_39949c;
        case 0x3994a0u: goto label_3994a0;
        case 0x3994a4u: goto label_3994a4;
        case 0x3994a8u: goto label_3994a8;
        case 0x3994acu: goto label_3994ac;
        case 0x3994b0u: goto label_3994b0;
        case 0x3994b4u: goto label_3994b4;
        case 0x3994b8u: goto label_3994b8;
        case 0x3994bcu: goto label_3994bc;
        case 0x3994c0u: goto label_3994c0;
        case 0x3994c4u: goto label_3994c4;
        case 0x3994c8u: goto label_3994c8;
        case 0x3994ccu: goto label_3994cc;
        case 0x3994d0u: goto label_3994d0;
        case 0x3994d4u: goto label_3994d4;
        case 0x3994d8u: goto label_3994d8;
        case 0x3994dcu: goto label_3994dc;
        case 0x3994e0u: goto label_3994e0;
        case 0x3994e4u: goto label_3994e4;
        case 0x3994e8u: goto label_3994e8;
        case 0x3994ecu: goto label_3994ec;
        case 0x3994f0u: goto label_3994f0;
        case 0x3994f4u: goto label_3994f4;
        case 0x3994f8u: goto label_3994f8;
        case 0x3994fcu: goto label_3994fc;
        case 0x399500u: goto label_399500;
        case 0x399504u: goto label_399504;
        case 0x399508u: goto label_399508;
        case 0x39950cu: goto label_39950c;
        case 0x399510u: goto label_399510;
        case 0x399514u: goto label_399514;
        case 0x399518u: goto label_399518;
        case 0x39951cu: goto label_39951c;
        case 0x399520u: goto label_399520;
        case 0x399524u: goto label_399524;
        case 0x399528u: goto label_399528;
        case 0x39952cu: goto label_39952c;
        case 0x399530u: goto label_399530;
        case 0x399534u: goto label_399534;
        case 0x399538u: goto label_399538;
        case 0x39953cu: goto label_39953c;
        case 0x399540u: goto label_399540;
        case 0x399544u: goto label_399544;
        case 0x399548u: goto label_399548;
        case 0x39954cu: goto label_39954c;
        case 0x399550u: goto label_399550;
        case 0x399554u: goto label_399554;
        case 0x399558u: goto label_399558;
        case 0x39955cu: goto label_39955c;
        case 0x399560u: goto label_399560;
        case 0x399564u: goto label_399564;
        case 0x399568u: goto label_399568;
        case 0x39956cu: goto label_39956c;
        case 0x399570u: goto label_399570;
        case 0x399574u: goto label_399574;
        case 0x399578u: goto label_399578;
        case 0x39957cu: goto label_39957c;
        case 0x399580u: goto label_399580;
        case 0x399584u: goto label_399584;
        case 0x399588u: goto label_399588;
        case 0x39958cu: goto label_39958c;
        case 0x399590u: goto label_399590;
        case 0x399594u: goto label_399594;
        case 0x399598u: goto label_399598;
        case 0x39959cu: goto label_39959c;
        case 0x3995a0u: goto label_3995a0;
        case 0x3995a4u: goto label_3995a4;
        case 0x3995a8u: goto label_3995a8;
        case 0x3995acu: goto label_3995ac;
        case 0x3995b0u: goto label_3995b0;
        case 0x3995b4u: goto label_3995b4;
        case 0x3995b8u: goto label_3995b8;
        case 0x3995bcu: goto label_3995bc;
        case 0x3995c0u: goto label_3995c0;
        case 0x3995c4u: goto label_3995c4;
        case 0x3995c8u: goto label_3995c8;
        case 0x3995ccu: goto label_3995cc;
        case 0x3995d0u: goto label_3995d0;
        case 0x3995d4u: goto label_3995d4;
        case 0x3995d8u: goto label_3995d8;
        case 0x3995dcu: goto label_3995dc;
        case 0x3995e0u: goto label_3995e0;
        case 0x3995e4u: goto label_3995e4;
        case 0x3995e8u: goto label_3995e8;
        case 0x3995ecu: goto label_3995ec;
        case 0x3995f0u: goto label_3995f0;
        case 0x3995f4u: goto label_3995f4;
        case 0x3995f8u: goto label_3995f8;
        case 0x3995fcu: goto label_3995fc;
        case 0x399600u: goto label_399600;
        case 0x399604u: goto label_399604;
        case 0x399608u: goto label_399608;
        case 0x39960cu: goto label_39960c;
        case 0x399610u: goto label_399610;
        case 0x399614u: goto label_399614;
        case 0x399618u: goto label_399618;
        case 0x39961cu: goto label_39961c;
        case 0x399620u: goto label_399620;
        case 0x399624u: goto label_399624;
        case 0x399628u: goto label_399628;
        case 0x39962cu: goto label_39962c;
        case 0x399630u: goto label_399630;
        case 0x399634u: goto label_399634;
        case 0x399638u: goto label_399638;
        case 0x39963cu: goto label_39963c;
        case 0x399640u: goto label_399640;
        case 0x399644u: goto label_399644;
        case 0x399648u: goto label_399648;
        case 0x39964cu: goto label_39964c;
        case 0x399650u: goto label_399650;
        case 0x399654u: goto label_399654;
        case 0x399658u: goto label_399658;
        case 0x39965cu: goto label_39965c;
        case 0x399660u: goto label_399660;
        case 0x399664u: goto label_399664;
        case 0x399668u: goto label_399668;
        case 0x39966cu: goto label_39966c;
        case 0x399670u: goto label_399670;
        case 0x399674u: goto label_399674;
        case 0x399678u: goto label_399678;
        case 0x39967cu: goto label_39967c;
        case 0x399680u: goto label_399680;
        case 0x399684u: goto label_399684;
        case 0x399688u: goto label_399688;
        case 0x39968cu: goto label_39968c;
        case 0x399690u: goto label_399690;
        case 0x399694u: goto label_399694;
        case 0x399698u: goto label_399698;
        case 0x39969cu: goto label_39969c;
        default: break;
    }

    ctx->pc = 0x399428u;

label_399428:
    // 0x399428: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x399428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_39942c:
    // 0x39942c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x39942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_399430:
    // 0x399430: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x399430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_399434:
    // 0x399434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x399434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_399438:
    // 0x399438: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x399438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_39943c:
    // 0x39943c: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x39943cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_399440:
    // 0x399440: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x399440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_399444:
    // 0x399444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x399444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_399448:
    // 0x399448: 0x96040024  lhu         $a0, 0x24($s0)
    ctx->pc = 0x399448u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_39944c:
    // 0x39944c: 0x1093008d  beq         $a0, $s3, . + 4 + (0x8D << 2)
label_399450:
    if (ctx->pc == 0x399450u) {
        ctx->pc = 0x399450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39944Cu;
        // 0x399450: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399454u;
        goto label_399454;
    }
    ctx->pc = 0x39944Cu;
    {
        const bool branch_taken_0x39944c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x399450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39944Cu;
        // 0x399450: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39944c) {
            ctx->pc = 0x399684u;
            goto label_399684;
        }
    }
    ctx->pc = 0x399454u;
label_399454:
    // 0x399454: 0xc0e404c  jal         func_390130
label_399458:
    if (ctx->pc == 0x399458u) {
        ctx->pc = 0x399458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399454u;
        // 0x399458: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39945Cu;
        goto label_39945c;
    }
    ctx->pc = 0x399454u;
    SET_GPR_U32(ctx, 31, 0x39945Cu);
    ctx->pc = 0x399458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399454u;
    // 0x399458: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x399454u, 0x39945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39945Cu;
label_39945c:
    // 0x39945c: 0xc0e57ce  jal         func_395F38
label_399460:
    if (ctx->pc == 0x399460u) {
        ctx->pc = 0x399460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39945Cu;
        // 0x399460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399464u;
        goto label_399464;
    }
    ctx->pc = 0x39945Cu;
    SET_GPR_U32(ctx, 31, 0x399464u);
    ctx->pc = 0x399460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39945Cu;
    // 0x399460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39945Cu, 0x399464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399464u;
label_399464:
    // 0x399464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x399464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399468:
    // 0x399468: 0x52200087  beql        $s1, $zero, . + 4 + (0x87 << 2)
label_39946c:
    if (ctx->pc == 0x39946Cu) {
        ctx->pc = 0x39946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399468u;
        // 0x39946c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399470u;
        goto label_399470;
    }
    ctx->pc = 0x399468u;
    {
        const bool branch_taken_0x399468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x399468) {
            ctx->pc = 0x39946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399468u;
            // 0x39946c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399688u;
            goto label_399688;
        }
    }
    ctx->pc = 0x399470u;
label_399470:
    // 0x399470: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x399470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_399474:
    // 0x399474: 0x21482  srl         $v0, $v0, 18
    ctx->pc = 0x399474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
label_399478:
    // 0x399478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39947c:
    // 0x39947c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_399480:
    if (ctx->pc == 0x399480u) {
        ctx->pc = 0x399480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39947Cu;
        // 0x399480: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399484u;
        goto label_399484;
    }
    ctx->pc = 0x39947Cu;
    {
        const bool branch_taken_0x39947c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39947c) {
            ctx->pc = 0x399480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39947Cu;
            // 0x399480: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3994E8u;
            goto label_3994e8;
        }
    }
    ctx->pc = 0x399484u;
label_399484:
    // 0x399484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x399484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399488:
    // 0x399488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x399488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39948c:
    // 0x39948c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x39948cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_399490:
    // 0x399490: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x399490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_399494:
    // 0x399494: 0x60f809  jalr        $v1
label_399498:
    if (ctx->pc == 0x399498u) {
        ctx->pc = 0x399498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399494u;
        // 0x399498: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39949Cu;
        goto label_39949c;
    }
    ctx->pc = 0x399494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39949Cu);
        ctx->pc = 0x399498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399494u;
        // 0x399498: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399494u, 0x39949Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39949Cu;
label_39949c:
    // 0x39949c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x39949cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3994a0:
    // 0x3994a0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x3994a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3994a4:
    // 0x3994a4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3994a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3994a8:
    // 0x3994a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3994a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3994ac:
    // 0x3994ac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3994acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3994b0:
    // 0x3994b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3994b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3994b4:
    // 0x3994b4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3994b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3994b8:
    // 0x3994b8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3994b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3994bc:
    // 0x3994bc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3994bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3994c0:
    // 0x3994c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3994c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3994c4:
    // 0x3994c4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x3994c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3994c8:
    // 0x3994c8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3994c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3994cc:
    // 0x3994cc: 0xc13cf1c  jal         func_4F3C70
label_3994d0:
    if (ctx->pc == 0x3994D0u) {
        ctx->pc = 0x3994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994CCu;
        // 0x3994d0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3994D4u;
        goto label_3994d4;
    }
    ctx->pc = 0x3994CCu;
    SET_GPR_U32(ctx, 31, 0x3994D4u);
    ctx->pc = 0x3994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3994CCu;
    // 0x3994d0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C70u, 0x3994CCu, 0x3994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3994D4u;
label_3994d4:
    // 0x3994d4: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x3994d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3994d8:
    // 0x3994d8: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x3994d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3994dc:
    // 0x3994dc: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x3994dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3994e0:
    // 0x3994e0: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x3994e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3994e4:
    // 0x3994e4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3994e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3994e8:
    // 0x3994e8: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x3994e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_3994ec:
    // 0x3994ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3994ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3994f0:
    // 0x3994f0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_3994f4:
    // 0x3994f4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3994f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3994f8:
    // 0x3994f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3994f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3994fc:
    // 0x3994fc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3994fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_399500:
    // 0x399500: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399504:
    // 0x399504: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x399504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
label_399508:
    // 0x399508: 0xa6130024  sh          $s3, 0x24($s0)
    ctx->pc = 0x399508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 19));
label_39950c:
    // 0x39950c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399510:
    // 0x399510: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x399510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_399514:
    // 0x399514: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x399514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_399518:
    // 0x399518: 0x40f809  jalr        $v0
label_39951c:
    if (ctx->pc == 0x39951Cu) {
        ctx->pc = 0x39951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399518u;
        // 0x39951c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399520u;
        goto label_399520;
    }
    ctx->pc = 0x399518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399520u);
        ctx->pc = 0x39951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399518u;
        // 0x39951c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399518u, 0x399520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399520u;
label_399520:
    // 0x399520: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x399520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_399524:
    // 0x399524: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x399524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
label_399528:
    // 0x399528: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x399528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_39952c:
    // 0x39952c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399530:
    // 0x399530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x399530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_399534:
    // 0x399534: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x399534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_399538:
    // 0x399538: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x399538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_39953c:
    // 0x39953c: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x39953cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
label_399540:
    // 0x399540: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x399540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_399544:
    // 0x399544: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x399544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_399548:
    // 0x399548: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x399548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_39954c:
    // 0x39954c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x39954cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_399550:
    // 0x399550: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x399550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_399554:
    // 0x399554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399558:
    // 0x399558: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x399558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_39955c:
    // 0x39955c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39955cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_399560:
    // 0x399560: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x399560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
label_399564:
    // 0x399564: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x399564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_399568:
    // 0x399568: 0xc0e5408  jal         func_395020
label_39956c:
    if (ctx->pc == 0x39956Cu) {
        ctx->pc = 0x39956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399568u;
        // 0x39956c: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399570u;
        goto label_399570;
    }
    ctx->pc = 0x399568u;
    SET_GPR_U32(ctx, 31, 0x399570u);
    ctx->pc = 0x39956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399568u;
    // 0x39956c: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395020u, 0x399568u, 0x399570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399570u;
label_399570:
    // 0x399570: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_399574:
    if (ctx->pc == 0x399574u) {
        ctx->pc = 0x399574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399570u;
        // 0x399574: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399578u;
        goto label_399578;
    }
    ctx->pc = 0x399570u;
    {
        const bool branch_taken_0x399570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x399570) {
            ctx->pc = 0x399574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399570u;
            // 0x399574: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399588u;
            goto label_399588;
        }
    }
    ctx->pc = 0x399578u;
label_399578:
    // 0x399578: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x399578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_39957c:
    // 0x39957c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x39957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_399580:
    // 0x399580: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x399580u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_399584:
    // 0x399584: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x399584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_399588:
    // 0x399588: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x399588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
label_39958c:
    // 0x39958c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39958cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_399590:
    // 0x399590: 0x122580  sll         $a0, $s2, 22
    ctx->pc = 0x399590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 22));
label_399594:
    // 0x399594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x399594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_399598:
    // 0x399598: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39959c:
    // 0x39959c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x39959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3995a0:
    // 0x3995a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3995a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3995a4:
    // 0x3995a4: 0xc0e5408  jal         func_395020
label_3995a8:
    if (ctx->pc == 0x3995A8u) {
        ctx->pc = 0x3995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995A4u;
        // 0x3995a8: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995ACu;
        goto label_3995ac;
    }
    ctx->pc = 0x3995A4u;
    SET_GPR_U32(ctx, 31, 0x3995ACu);
    ctx->pc = 0x3995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995A4u;
    // 0x3995a8: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395020u, 0x3995A4u, 0x3995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995ACu;
label_3995ac:
    // 0x3995ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3995b0:
    if (ctx->pc == 0x3995B0u) {
        ctx->pc = 0x3995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995ACu;
        // 0x3995b0: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995B4u;
        goto label_3995b4;
    }
    ctx->pc = 0x3995ACu;
    {
        const bool branch_taken_0x3995ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995ACu;
        // 0x3995b0: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995ac) {
            ctx->pc = 0x3995C0u;
            goto label_3995c0;
        }
    }
    ctx->pc = 0x3995B4u;
label_3995b4:
    // 0x3995b4: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x3995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_3995b8:
    // 0x3995b8: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3995b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3995bc:
    // 0x3995bc: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x3995bcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3995c0:
    // 0x3995c0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_3995c4:
    // 0x3995c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3995c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3995c8:
    // 0x3995c8: 0x1225c0  sll         $a0, $s2, 23
    ctx->pc = 0x3995c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 23));
label_3995cc:
    // 0x3995cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3995ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3995d0:
    // 0x3995d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3995d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3995d4:
    // 0x3995d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3995d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3995d8:
    // 0x3995d8: 0x8ca42c04  lw          $a0, 0x2C04($a1)
    ctx->pc = 0x3995d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11268)));
label_3995dc:
    // 0x3995dc: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3995dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_3995e0:
    // 0x3995e0: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x3995e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_3995e4:
    // 0x3995e4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3995e8:
    // 0x3995e8: 0xc0e44cc  jal         func_391330
label_3995ec:
    if (ctx->pc == 0x3995ECu) {
        ctx->pc = 0x3995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995E8u;
        // 0x3995ec: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3995F0u;
        goto label_3995f0;
    }
    ctx->pc = 0x3995E8u;
    SET_GPR_U32(ctx, 31, 0x3995F0u);
    ctx->pc = 0x3995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995E8u;
    // 0x3995ec: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3995E8u, 0x3995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995F0u;
label_3995f0:
    // 0x3995f0: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x3995f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_3995f4:
    // 0x3995f4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3995f8:
    // 0x3995f8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_3995fc:
    if (ctx->pc == 0x3995FCu) {
        ctx->pc = 0x3995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995F8u;
        // 0x3995fc: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399600u;
        goto label_399600;
    }
    ctx->pc = 0x3995F8u;
    {
        const bool branch_taken_0x3995f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3995f8) {
            ctx->pc = 0x3995FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995F8u;
            // 0x3995fc: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39963Cu;
            goto label_39963c;
        }
    }
    ctx->pc = 0x399600u;
label_399600:
    // 0x399600: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x399600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399604:
    // 0x399604: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x399604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_399608:
    // 0x399608: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x399608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39960c:
    // 0x39960c: 0x40f809  jalr        $v0
label_399610:
    if (ctx->pc == 0x399610u) {
        ctx->pc = 0x399610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39960Cu;
        // 0x399610: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399614u;
        goto label_399614;
    }
    ctx->pc = 0x39960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399614u);
        ctx->pc = 0x399610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39960Cu;
        // 0x399610: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39960Cu, 0x399614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399614u;
label_399614:
    // 0x399614: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x399614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_399618:
    // 0x399618: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x399618u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_39961c:
    // 0x39961c: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x39961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
label_399620:
    // 0x399620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399624:
    // 0x399624: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x399624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_399628:
    // 0x399628: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x399628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_39962c:
    // 0x39962c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x39962cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_399630:
    // 0x399630: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x399630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_399634:
    // 0x399634: 0x10000005  b           . + 4 + (0x5 << 2)
label_399638:
    if (ctx->pc == 0x399638u) {
        ctx->pc = 0x399638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399634u;
        // 0x399638: 0xae040024  sw          $a0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39963Cu;
        goto label_39963c;
    }
    ctx->pc = 0x399634u;
    {
        const bool branch_taken_0x399634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399634u;
        // 0x399638: 0xae040024  sw          $a0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399634) {
            ctx->pc = 0x39964Cu;
            goto label_39964c;
        }
    }
    ctx->pc = 0x39963Cu;
label_39963c:
    // 0x39963c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x39963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_399640:
    // 0x399640: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x399640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_399644:
    // 0x399644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x399644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_399648:
    // 0x399648: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x399648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_39964c:
    // 0x39964c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x39964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_399650:
    // 0x399650: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_399654:
    if (ctx->pc == 0x399654u) {
        ctx->pc = 0x399654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399650u;
        // 0x399654: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399658u;
        goto label_399658;
    }
    ctx->pc = 0x399650u;
    {
        const bool branch_taken_0x399650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399650u;
        // 0x399654: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399650) {
            ctx->pc = 0x39965Cu;
            goto label_39965c;
        }
    }
    ctx->pc = 0x399658u;
label_399658:
    // 0x399658: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x399658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39965c:
    // 0x39965c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x39965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_399660:
    // 0x399660: 0x3c03c3ff  lui         $v1, 0xC3FF
    ctx->pc = 0x399660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50175 << 16));
label_399664:
    // 0x399664: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x399664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_399668:
    // 0x399668: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x399668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_39966c:
    // 0x39966c: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x39966cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
label_399670:
    // 0x399670: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x399670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_399674:
    // 0x399674: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x399674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_399678:
    // 0x399678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39967c:
    // 0x39967c: 0xc0e46c2  jal         func_391B08
label_399680:
    if (ctx->pc == 0x399680u) {
        ctx->pc = 0x399680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39967Cu;
        // 0x399680: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399684u;
        goto label_399684;
    }
    ctx->pc = 0x39967Cu;
    SET_GPR_U32(ctx, 31, 0x399684u);
    ctx->pc = 0x399680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39967Cu;
    // 0x399680: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391B08u, 0x39967Cu, 0x399684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399684u;
label_399684:
    // 0x399684: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x399684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_399688:
    // 0x399688: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x399688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39968c:
    // 0x39968c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x39968cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_399690:
    // 0x399690: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x399690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_399694:
    // 0x399694: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x399694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_399698:
    // 0x399698: 0x3e00008  jr          $ra
label_39969c:
    if (ctx->pc == 0x39969Cu) {
        ctx->pc = 0x39969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399698u;
        // 0x39969c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3996A0u;
        goto label_fallthrough_0x399698;
    }
    ctx->pc = 0x399698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399698u;
        // 0x39969c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399698:
    ctx->pc = 0x3996A0u;
}

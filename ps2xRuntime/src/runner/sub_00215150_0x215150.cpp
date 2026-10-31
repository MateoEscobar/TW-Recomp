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

// Function: sub_00215150
// Address: 0x215150 - 0x215490
void sub_00215150_0x215150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215150_0x215150");
#endif

    switch (ctx->pc) {
        case 0x215150u: goto label_215150;
        case 0x215154u: goto label_215154;
        case 0x215158u: goto label_215158;
        case 0x21515cu: goto label_21515c;
        case 0x215160u: goto label_215160;
        case 0x215164u: goto label_215164;
        case 0x215168u: goto label_215168;
        case 0x21516cu: goto label_21516c;
        case 0x215170u: goto label_215170;
        case 0x215174u: goto label_215174;
        case 0x215178u: goto label_215178;
        case 0x21517cu: goto label_21517c;
        case 0x215180u: goto label_215180;
        case 0x215184u: goto label_215184;
        case 0x215188u: goto label_215188;
        case 0x21518cu: goto label_21518c;
        case 0x215190u: goto label_215190;
        case 0x215194u: goto label_215194;
        case 0x215198u: goto label_215198;
        case 0x21519cu: goto label_21519c;
        case 0x2151a0u: goto label_2151a0;
        case 0x2151a4u: goto label_2151a4;
        case 0x2151a8u: goto label_2151a8;
        case 0x2151acu: goto label_2151ac;
        case 0x2151b0u: goto label_2151b0;
        case 0x2151b4u: goto label_2151b4;
        case 0x2151b8u: goto label_2151b8;
        case 0x2151bcu: goto label_2151bc;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151c4u: goto label_2151c4;
        case 0x2151c8u: goto label_2151c8;
        case 0x2151ccu: goto label_2151cc;
        case 0x2151d0u: goto label_2151d0;
        case 0x2151d4u: goto label_2151d4;
        case 0x2151d8u: goto label_2151d8;
        case 0x2151dcu: goto label_2151dc;
        case 0x2151e0u: goto label_2151e0;
        case 0x2151e4u: goto label_2151e4;
        case 0x2151e8u: goto label_2151e8;
        case 0x2151ecu: goto label_2151ec;
        case 0x2151f0u: goto label_2151f0;
        case 0x2151f4u: goto label_2151f4;
        case 0x2151f8u: goto label_2151f8;
        case 0x2151fcu: goto label_2151fc;
        case 0x215200u: goto label_215200;
        case 0x215204u: goto label_215204;
        case 0x215208u: goto label_215208;
        case 0x21520cu: goto label_21520c;
        case 0x215210u: goto label_215210;
        case 0x215214u: goto label_215214;
        case 0x215218u: goto label_215218;
        case 0x21521cu: goto label_21521c;
        case 0x215220u: goto label_215220;
        case 0x215224u: goto label_215224;
        case 0x215228u: goto label_215228;
        case 0x21522cu: goto label_21522c;
        case 0x215230u: goto label_215230;
        case 0x215234u: goto label_215234;
        case 0x215238u: goto label_215238;
        case 0x21523cu: goto label_21523c;
        case 0x215240u: goto label_215240;
        case 0x215244u: goto label_215244;
        case 0x215248u: goto label_215248;
        case 0x21524cu: goto label_21524c;
        case 0x215250u: goto label_215250;
        case 0x215254u: goto label_215254;
        case 0x215258u: goto label_215258;
        case 0x21525cu: goto label_21525c;
        case 0x215260u: goto label_215260;
        case 0x215264u: goto label_215264;
        case 0x215268u: goto label_215268;
        case 0x21526cu: goto label_21526c;
        case 0x215270u: goto label_215270;
        case 0x215274u: goto label_215274;
        case 0x215278u: goto label_215278;
        case 0x21527cu: goto label_21527c;
        case 0x215280u: goto label_215280;
        case 0x215284u: goto label_215284;
        case 0x215288u: goto label_215288;
        case 0x21528cu: goto label_21528c;
        case 0x215290u: goto label_215290;
        case 0x215294u: goto label_215294;
        case 0x215298u: goto label_215298;
        case 0x21529cu: goto label_21529c;
        case 0x2152a0u: goto label_2152a0;
        case 0x2152a4u: goto label_2152a4;
        case 0x2152a8u: goto label_2152a8;
        case 0x2152acu: goto label_2152ac;
        case 0x2152b0u: goto label_2152b0;
        case 0x2152b4u: goto label_2152b4;
        case 0x2152b8u: goto label_2152b8;
        case 0x2152bcu: goto label_2152bc;
        case 0x2152c0u: goto label_2152c0;
        case 0x2152c4u: goto label_2152c4;
        case 0x2152c8u: goto label_2152c8;
        case 0x2152ccu: goto label_2152cc;
        case 0x2152d0u: goto label_2152d0;
        case 0x2152d4u: goto label_2152d4;
        case 0x2152d8u: goto label_2152d8;
        case 0x2152dcu: goto label_2152dc;
        case 0x2152e0u: goto label_2152e0;
        case 0x2152e4u: goto label_2152e4;
        case 0x2152e8u: goto label_2152e8;
        case 0x2152ecu: goto label_2152ec;
        case 0x2152f0u: goto label_2152f0;
        case 0x2152f4u: goto label_2152f4;
        case 0x2152f8u: goto label_2152f8;
        case 0x2152fcu: goto label_2152fc;
        case 0x215300u: goto label_215300;
        case 0x215304u: goto label_215304;
        case 0x215308u: goto label_215308;
        case 0x21530cu: goto label_21530c;
        case 0x215310u: goto label_215310;
        case 0x215314u: goto label_215314;
        case 0x215318u: goto label_215318;
        case 0x21531cu: goto label_21531c;
        case 0x215320u: goto label_215320;
        case 0x215324u: goto label_215324;
        case 0x215328u: goto label_215328;
        case 0x21532cu: goto label_21532c;
        case 0x215330u: goto label_215330;
        case 0x215334u: goto label_215334;
        case 0x215338u: goto label_215338;
        case 0x21533cu: goto label_21533c;
        case 0x215340u: goto label_215340;
        case 0x215344u: goto label_215344;
        case 0x215348u: goto label_215348;
        case 0x21534cu: goto label_21534c;
        case 0x215350u: goto label_215350;
        case 0x215354u: goto label_215354;
        case 0x215358u: goto label_215358;
        case 0x21535cu: goto label_21535c;
        case 0x215360u: goto label_215360;
        case 0x215364u: goto label_215364;
        case 0x215368u: goto label_215368;
        case 0x21536cu: goto label_21536c;
        case 0x215370u: goto label_215370;
        case 0x215374u: goto label_215374;
        case 0x215378u: goto label_215378;
        case 0x21537cu: goto label_21537c;
        case 0x215380u: goto label_215380;
        case 0x215384u: goto label_215384;
        case 0x215388u: goto label_215388;
        case 0x21538cu: goto label_21538c;
        case 0x215390u: goto label_215390;
        case 0x215394u: goto label_215394;
        case 0x215398u: goto label_215398;
        case 0x21539cu: goto label_21539c;
        case 0x2153a0u: goto label_2153a0;
        case 0x2153a4u: goto label_2153a4;
        case 0x2153a8u: goto label_2153a8;
        case 0x2153acu: goto label_2153ac;
        case 0x2153b0u: goto label_2153b0;
        case 0x2153b4u: goto label_2153b4;
        case 0x2153b8u: goto label_2153b8;
        case 0x2153bcu: goto label_2153bc;
        case 0x2153c0u: goto label_2153c0;
        case 0x2153c4u: goto label_2153c4;
        case 0x2153c8u: goto label_2153c8;
        case 0x2153ccu: goto label_2153cc;
        case 0x2153d0u: goto label_2153d0;
        case 0x2153d4u: goto label_2153d4;
        case 0x2153d8u: goto label_2153d8;
        case 0x2153dcu: goto label_2153dc;
        case 0x2153e0u: goto label_2153e0;
        case 0x2153e4u: goto label_2153e4;
        case 0x2153e8u: goto label_2153e8;
        case 0x2153ecu: goto label_2153ec;
        case 0x2153f0u: goto label_2153f0;
        case 0x2153f4u: goto label_2153f4;
        case 0x2153f8u: goto label_2153f8;
        case 0x2153fcu: goto label_2153fc;
        case 0x215400u: goto label_215400;
        case 0x215404u: goto label_215404;
        case 0x215408u: goto label_215408;
        case 0x21540cu: goto label_21540c;
        case 0x215410u: goto label_215410;
        case 0x215414u: goto label_215414;
        case 0x215418u: goto label_215418;
        case 0x21541cu: goto label_21541c;
        case 0x215420u: goto label_215420;
        case 0x215424u: goto label_215424;
        case 0x215428u: goto label_215428;
        case 0x21542cu: goto label_21542c;
        case 0x215430u: goto label_215430;
        case 0x215434u: goto label_215434;
        case 0x215438u: goto label_215438;
        case 0x21543cu: goto label_21543c;
        case 0x215440u: goto label_215440;
        case 0x215444u: goto label_215444;
        case 0x215448u: goto label_215448;
        case 0x21544cu: goto label_21544c;
        case 0x215450u: goto label_215450;
        case 0x215454u: goto label_215454;
        case 0x215458u: goto label_215458;
        case 0x21545cu: goto label_21545c;
        case 0x215460u: goto label_215460;
        case 0x215464u: goto label_215464;
        case 0x215468u: goto label_215468;
        case 0x21546cu: goto label_21546c;
        case 0x215470u: goto label_215470;
        case 0x215474u: goto label_215474;
        case 0x215478u: goto label_215478;
        case 0x21547cu: goto label_21547c;
        case 0x215480u: goto label_215480;
        case 0x215484u: goto label_215484;
        case 0x215488u: goto label_215488;
        case 0x21548cu: goto label_21548c;
        default: break;
    }

    ctx->pc = 0x215150u;

label_215150:
    // 0x215150: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_215154:
    // 0x215154: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215158:
    // 0x215158: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x215158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
label_21515c:
    // 0x21515c: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x21515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
label_215160:
    // 0x215160: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x215160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
label_215164:
    // 0x215164: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x215164u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215168:
    // 0x215168: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x215168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
label_21516c:
    // 0x21516c: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x21516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
label_215170:
    // 0x215170: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x215170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
label_215174:
    // 0x215174: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x215174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
label_215178:
    // 0x215178: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x215178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
label_21517c:
    // 0x21517c: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x21517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
label_215180:
    // 0x215180: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x215180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
label_215184:
    // 0x215184: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x215184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_215188:
    // 0x215188: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x215188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21518c:
    // 0x21518c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x21518cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_215190:
    // 0x215190: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x215190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_215194:
    // 0x215194: 0x40f809  jalr        $v0
label_215198:
    if (ctx->pc == 0x215198u) {
        ctx->pc = 0x215198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215194u;
        // 0x215198: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21519Cu;
        goto label_21519c;
    }
    ctx->pc = 0x215194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21519Cu);
        ctx->pc = 0x215198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215194u;
        // 0x215198: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215194u, 0x21519Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21519Cu;
label_21519c:
    // 0x21519c: 0x8fc30094  lw          $v1, 0x94($fp)
    ctx->pc = 0x21519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 148)));
label_2151a0:
    // 0x2151a0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x2151a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_2151a4:
    // 0x2151a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2151a8:
    // 0x2151a8: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
label_2151ac:
    // 0x2151ac: 0xafa301b4  sw          $v1, 0x1B4($sp)
    ctx->pc = 0x2151acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
label_2151b0:
    // 0x2151b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2151b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2151b4:
    // 0x2151b4: 0xafc200a8  sw          $v0, 0xA8($fp)
    ctx->pc = 0x2151b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 2));
label_2151b8:
    // 0x2151b8: 0x8fc30060  lw          $v1, 0x60($fp)
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_2151bc:
    // 0x2151bc: 0xa3c000ac  sb          $zero, 0xAC($fp)
    ctx->pc = 0x2151bcu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 172), (uint8_t)GPR_U32(ctx, 0));
label_2151c0:
    // 0x2151c0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2151c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2151c4:
    // 0x2151c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2151c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2151c8:
    // 0x2151c8: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x2151c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_2151cc:
    // 0x2151cc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2151ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2151d0:
    // 0x2151d0: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x2151d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
label_2151d4:
    // 0x2151d4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2151d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2151d8:
    // 0x2151d8: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x2151d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
label_2151dc:
    // 0x2151dc: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2151dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_2151e0:
    // 0x2151e0: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x2151e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_2151e4:
    // 0x2151e4: 0xc108c14  jal         func_423050
label_2151e8:
    if (ctx->pc == 0x2151E8u) {
        ctx->pc = 0x2151E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151E4u;
        // 0x2151e8: 0xafa201b8  sw          $v0, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2151ECu;
        goto label_2151ec;
    }
    ctx->pc = 0x2151E4u;
    SET_GPR_U32(ctx, 31, 0x2151ECu);
    ctx->pc = 0x2151E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151E4u;
    // 0x2151e8: 0xafa201b8  sw          $v0, 0x1B8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423050u, 0x2151E4u, 0x2151ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151ECu;
label_2151ec:
    // 0x2151ec: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2151ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2151f0:
    // 0x2151f0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2151f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_2151f4:
    // 0x2151f4: 0x8fc3009c  lw          $v1, 0x9C($fp)
    ctx->pc = 0x2151f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 156)));
label_2151f8:
    // 0x2151f8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2151f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_2151fc:
    // 0x2151fc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2151fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_215200:
    // 0x215200: 0x27a601a4  addiu       $a2, $sp, 0x1A4
    ctx->pc = 0x215200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_215204:
    // 0x215204: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_215208:
    // 0x215208: 0x27a701a8  addiu       $a3, $sp, 0x1A8
    ctx->pc = 0x215208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_21520c:
    // 0x21520c: 0xafd0009c  sw          $s0, 0x9C($fp)
    ctx->pc = 0x21520cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 156), GPR_U32(ctx, 16));
label_215210:
    // 0x215210: 0xc109176  jal         func_4245D8
label_215214:
    if (ctx->pc == 0x215214u) {
        ctx->pc = 0x215214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215210u;
        // 0x215214: 0x27a801ac  addiu       $t0, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215218u;
        goto label_215218;
    }
    ctx->pc = 0x215210u;
    SET_GPR_U32(ctx, 31, 0x215218u);
    ctx->pc = 0x215214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215210u;
    // 0x215214: 0x27a801ac  addiu       $t0, $sp, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4245D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4245D8u, 0x215210u, 0x215218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215218u;
label_215218:
    // 0x215218: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x215218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_21521c:
    // 0x21521c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_215220:
    if (ctx->pc == 0x215220u) {
        ctx->pc = 0x215220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21521Cu;
        // 0x215220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215224u;
        goto label_215224;
    }
    ctx->pc = 0x21521Cu;
    {
        const bool branch_taken_0x21521c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21521Cu;
        // 0x215220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21521c) {
            ctx->pc = 0x215238u;
            goto label_215238;
        }
    }
    ctx->pc = 0x215224u;
label_215224:
    // 0x215224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215228:
    // 0x215228: 0x0  nop
    ctx->pc = 0x215228u;
    // NOP
label_21522c:
    // 0x21522c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21522cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_215230:
    // 0x215230: 0x10000008  b           . + 4 + (0x8 << 2)
label_215234:
    if (ctx->pc == 0x215234u) {
        ctx->pc = 0x215234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215230u;
        // 0x215234: 0x8fa201ac  lw          $v0, 0x1AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215238u;
        goto label_215238;
    }
    ctx->pc = 0x215230u;
    {
        const bool branch_taken_0x215230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215230u;
        // 0x215234: 0x8fa201ac  lw          $v0, 0x1AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215230) {
            ctx->pc = 0x215254u;
            goto label_215254;
        }
    }
    ctx->pc = 0x215238u;
label_215238:
    // 0x215238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21523c:
    // 0x21523c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_215240:
    // 0x215240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215244:
    // 0x215244: 0x0  nop
    ctx->pc = 0x215244u;
    // NOP
label_215248:
    // 0x215248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x215248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21524c:
    // 0x21524c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21524cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_215250:
    // 0x215250: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_215254:
    // 0x215254: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_215258:
    if (ctx->pc == 0x215258u) {
        ctx->pc = 0x215258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215254u;
        // 0x215258: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21525Cu;
        goto label_21525c;
    }
    ctx->pc = 0x215254u;
    {
        const bool branch_taken_0x215254 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215254u;
        // 0x215258: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215254) {
            ctx->pc = 0x215270u;
            goto label_215270;
        }
    }
    ctx->pc = 0x21525Cu;
label_21525c:
    // 0x21525c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21525cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215260:
    // 0x215260: 0x0  nop
    ctx->pc = 0x215260u;
    // NOP
label_215264:
    // 0x215264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215268:
    // 0x215268: 0x10000007  b           . + 4 + (0x7 << 2)
label_21526c:
    if (ctx->pc == 0x21526Cu) {
        ctx->pc = 0x215270u;
        goto label_215270;
    }
    ctx->pc = 0x215268u;
    {
        const bool branch_taken_0x215268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215268) {
            ctx->pc = 0x215288u;
            goto label_215288;
        }
    }
    ctx->pc = 0x215270u;
label_215270:
    // 0x215270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_215274:
    // 0x215274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x215274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_215278:
    // 0x215278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21527c:
    // 0x21527c: 0x0  nop
    ctx->pc = 0x21527cu;
    // NOP
label_215280:
    // 0x215280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215284:
    // 0x215284: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215288:
    // 0x215288: 0x0  nop
    ctx->pc = 0x215288u;
    // NOP
label_21528c:
    // 0x21528c: 0x0  nop
    ctx->pc = 0x21528cu;
    // NOP
label_215290:
    // 0x215290: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x215290u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_215294:
    // 0x215294: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x215294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_215298:
    // 0x215298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21529c:
    // 0x21529c: 0xc10b1c6  jal         func_42C718
label_2152a0:
    if (ctx->pc == 0x2152A0u) {
        ctx->pc = 0x2152A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21529Cu;
        // 0x2152a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152A4u;
        goto label_2152a4;
    }
    ctx->pc = 0x21529Cu;
    SET_GPR_U32(ctx, 31, 0x2152A4u);
    ctx->pc = 0x2152A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21529Cu;
    // 0x2152a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x21529Cu, 0x2152A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152A4u;
label_2152a4:
    // 0x2152a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2152a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2152a8:
    // 0x2152a8: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2152a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_2152ac:
    // 0x2152ac: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x2152acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_2152b0:
    // 0x2152b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2152b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2152b4:
    // 0x2152b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2152b8:
    // 0x2152b8: 0xc0853d6  jal         func_214F58
label_2152bc:
    if (ctx->pc == 0x2152BCu) {
        ctx->pc = 0x2152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152B8u;
        // 0x2152bc: 0x8fa601bc  lw          $a2, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152C0u;
        goto label_2152c0;
    }
    ctx->pc = 0x2152B8u;
    SET_GPR_U32(ctx, 31, 0x2152C0u);
    ctx->pc = 0x2152BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152B8u;
    // 0x2152bc: 0x8fa601bc  lw          $a2, 0x1BC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214F58u, 0x2152B8u, 0x2152C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152C0u;
label_2152c0:
    // 0x2152c0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2152c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2152c4:
    // 0x2152c4: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2152c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2152c8:
    // 0x2152c8: 0x24489f38  addiu       $t0, $v0, -0x60C8
    ctx->pc = 0x2152c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942520));
label_2152cc:
    // 0x2152cc: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x2152ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2152d0:
    // 0x2152d0: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x2152d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2152d4:
    // 0x2152d4: 0x81060008  lb          $a2, 0x8($t0)
    ctx->pc = 0x2152d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_2152d8:
    // 0x2152d8: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x2152d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2152dc:
    // 0x2152dc: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x2152dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2152e0:
    // 0x2152e0: 0xa3a60078  sb          $a2, 0x78($sp)
    ctx->pc = 0x2152e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 6));
label_2152e4:
    // 0x2152e4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2152e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2152e8:
    // 0x2152e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2152e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2152ec:
    // 0x2152ec: 0x24689f48  addiu       $t0, $v1, -0x60B8
    ctx->pc = 0x2152ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942536));
label_2152f0:
    // 0x2152f0: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x2152f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2152f4:
    // 0x2152f4: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x2152f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2152f8:
    // 0x2152f8: 0x81060008  lb          $a2, 0x8($t0)
    ctx->pc = 0x2152f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_2152fc:
    // 0x2152fc: 0xb3a50187  sdl         $a1, 0x187($sp)
    ctx->pc = 0x2152fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_215300:
    // 0x215300: 0xb7a50180  sdr         $a1, 0x180($sp)
    ctx->pc = 0x215300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_215304:
    // 0x215304: 0xa3a60188  sb          $a2, 0x188($sp)
    ctx->pc = 0x215304u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 6));
label_215308:
    // 0x215308: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_21530c:
    // 0x21530c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21530cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_215310:
    // 0x215310: 0x24879f58  addiu       $a3, $a0, -0x60A8
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942552));
label_215314:
    // 0x215314: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x215314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_215318:
    // 0x215318: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x215318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_21531c:
    // 0x21531c: 0x80e30008  lb          $v1, 0x8($a3)
    ctx->pc = 0x21531cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_215320:
    // 0x215320: 0xb3a20197  sdl         $v0, 0x197($sp)
    ctx->pc = 0x215320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_215324:
    // 0x215324: 0xb7a20190  sdr         $v0, 0x190($sp)
    ctx->pc = 0x215324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_215328:
    // 0x215328: 0xa3a30198  sb          $v1, 0x198($sp)
    ctx->pc = 0x215328u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 408), (uint8_t)GPR_U32(ctx, 3));
label_21532c:
    // 0x21532c: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x21532cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_215330:
    // 0x215330: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_215334:
    // 0x215334: 0x27b10180  addiu       $s1, $sp, 0x180
    ctx->pc = 0x215334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_215338:
    // 0x215338: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x215338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_21533c:
    // 0x21533c: 0x27b70190  addiu       $s7, $sp, 0x190
    ctx->pc = 0x21533cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_215340:
    // 0x215340: 0x24a59f68  addiu       $a1, $a1, -0x6098
    ctx->pc = 0x215340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942568));
label_215344:
    // 0x215344: 0x25089f70  addiu       $t0, $t0, -0x6090
    ctx->pc = 0x215344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942576));
label_215348:
    // 0x215348: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x215348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_21534c:
    // 0x21534c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x21534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_215350:
    // 0x215350: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_215354:
    // 0x215354: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x215354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_215358:
    // 0x215358: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x215358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_21535c:
    // 0x21535c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21535cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215360:
    // 0x215360: 0x2409009e  addiu       $t1, $zero, 0x9E
    ctx->pc = 0x215360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_215364:
    // 0x215364: 0x40f809  jalr        $v0
label_215368:
    if (ctx->pc == 0x215368u) {
        ctx->pc = 0x215368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215364u;
        // 0x215368: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21536Cu;
        goto label_21536c;
    }
    ctx->pc = 0x215364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21536Cu);
        ctx->pc = 0x215368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215364u;
        // 0x215368: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215364u, 0x21536Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21536Cu;
label_21536c:
    // 0x21536c: 0xafc20090  sw          $v0, 0x90($fp)
    ctx->pc = 0x21536cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 144), GPR_U32(ctx, 2));
label_215370:
    // 0x215370: 0xc067b9c  jal         func_19EE70
label_215374:
    if (ctx->pc == 0x215374u) {
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215378u;
        goto label_215378;
    }
    ctx->pc = 0x215370u;
    SET_GPR_U32(ctx, 31, 0x215378u);
    ctx->pc = 0x215374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215370u;
    // 0x215374: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215370u, 0x215378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215378u;
label_215378:
    // 0x215378: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x215378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21537c:
    // 0x21537c: 0xc067b9c  jal         func_19EE70
label_215380:
    if (ctx->pc == 0x215380u) {
        ctx->pc = 0x215380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21537Cu;
        // 0x215380: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215384u;
        goto label_215384;
    }
    ctx->pc = 0x21537Cu;
    SET_GPR_U32(ctx, 31, 0x215384u);
    ctx->pc = 0x215380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21537Cu;
    // 0x215380: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x21537Cu, 0x215384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215384u;
label_215384:
    // 0x215384: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x215384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215388:
    // 0x215388: 0xc067b9c  jal         func_19EE70
label_21538c:
    if (ctx->pc == 0x21538Cu) {
        ctx->pc = 0x21538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215388u;
        // 0x21538c: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215390u;
        goto label_215390;
    }
    ctx->pc = 0x215388u;
    SET_GPR_U32(ctx, 31, 0x215390u);
    ctx->pc = 0x21538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215388u;
    // 0x21538c: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215388u, 0x215390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215390u;
label_215390:
    // 0x215390: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x215390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215394:
    // 0x215394: 0xc067b9c  jal         func_19EE70
label_215398:
    if (ctx->pc == 0x215398u) {
        ctx->pc = 0x215398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215394u;
        // 0x215398: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21539Cu;
        goto label_21539c;
    }
    ctx->pc = 0x215394u;
    SET_GPR_U32(ctx, 31, 0x21539Cu);
    ctx->pc = 0x215398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215394u;
    // 0x215398: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x215394u, 0x21539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21539Cu;
label_21539c:
    // 0x21539c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21539cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2153a0:
    // 0x2153a0: 0xc067b9c  jal         func_19EE70
label_2153a4:
    if (ctx->pc == 0x2153A4u) {
        ctx->pc = 0x2153A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153A0u;
        // 0x2153a4: 0x24040062  addiu       $a0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153A8u;
        goto label_2153a8;
    }
    ctx->pc = 0x2153A0u;
    SET_GPR_U32(ctx, 31, 0x2153A8u);
    ctx->pc = 0x2153A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2153A0u;
    // 0x2153a4: 0x24040062  addiu       $a0, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2153A0u, 0x2153A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153A8u;
label_2153a8:
    // 0x2153a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2153a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2153ac:
    // 0x2153ac: 0xc067b9c  jal         func_19EE70
label_2153b0:
    if (ctx->pc == 0x2153B0u) {
        ctx->pc = 0x2153B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153ACu;
        // 0x2153b0: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153B4u;
        goto label_2153b4;
    }
    ctx->pc = 0x2153ACu;
    SET_GPR_U32(ctx, 31, 0x2153B4u);
    ctx->pc = 0x2153B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2153ACu;
    // 0x2153b0: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2153ACu, 0x2153B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153B4u;
label_2153b4:
    // 0x2153b4: 0x8faf01a8  lw          $t7, 0x1A8($sp)
    ctx->pc = 0x2153b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2153b8:
    // 0x2153b8: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x2153b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2153bc:
    // 0x2153bc: 0x8fae01ac  lw          $t6, 0x1AC($sp)
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2153c0:
    // 0x2153c0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2153c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2153c4:
    // 0x2153c4: 0x8fa801b4  lw          $t0, 0x1B4($sp)
    ctx->pc = 0x2153c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_2153c8:
    // 0x2153c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2153c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2153cc:
    // 0x2153cc: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x2153ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_2153d0:
    // 0x2153d0: 0x1ee2026  xor         $a0, $t7, $t6
    ctx->pc = 0x2153d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
label_2153d4:
    // 0x2153d4: 0x8fab01a0  lw          $t3, 0x1A0($sp)
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2153d8:
    // 0x2153d8: 0x224600b  movn        $t4, $s1, $a0
    ctx->pc = 0x2153d8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 17));
label_2153dc:
    // 0x2153dc: 0x8fad01a4  lw          $t5, 0x1A4($sp)
    ctx->pc = 0x2153dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_2153e0:
    // 0x2153e0: 0x1033026  xor         $a2, $t0, $v1
    ctx->pc = 0x2153e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_2153e4:
    // 0x2153e4: 0x8fc40090  lw          $a0, 0x90($fp)
    ctx->pc = 0x2153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 144)));
label_2153e8:
    // 0x2153e8: 0x226280b  movn        $a1, $s1, $a2
    ctx->pc = 0x2153e8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2153ec:
    // 0x2153ec: 0x16d1826  xor         $v1, $t3, $t5
    ctx->pc = 0x2153ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 13));
label_2153f0:
    // 0x2153f0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2153f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_2153f4:
    // 0x2153f4: 0x2e3500b  movn        $t2, $s7, $v1
    ctx->pc = 0x2153f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 23));
label_2153f8:
    // 0x2153f8: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2153fc:
    // 0x2153fc: 0x8fa801b8  lw          $t0, 0x1B8($sp)
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_215400:
    // 0x215400: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_215404:
    // 0x215404: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x215404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_215408:
    // 0x215408: 0x38e30064  xori        $v1, $a3, 0x64
    ctx->pc = 0x215408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)100);
label_21540c:
    // 0x21540c: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x21540cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
label_215410:
    // 0x215410: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x215410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215414:
    // 0x215414: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_215418:
    // 0x215418: 0x223480b  movn        $t1, $s1, $v1
    ctx->pc = 0x215418u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 17));
label_21541c:
    // 0x21541c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x21541cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_215420:
    // 0x215420: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x215420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_215424:
    // 0x215424: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x215424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_215428:
    // 0x215428: 0x24c69f98  addiu       $a2, $a2, -0x6068
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942616));
label_21542c:
    // 0x21542c: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x21542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
label_215430:
    // 0x215430: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x215430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_215434:
    // 0x215434: 0x8faa01b0  lw          $t2, 0x1B0($sp)
    ctx->pc = 0x215434u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_215438:
    // 0x215438: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x215438u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21543c:
    // 0x21543c: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x21543cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
label_215440:
    // 0x215440: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_215444:
    // 0x215444: 0xafb30038  sw          $s3, 0x38($sp)
    ctx->pc = 0x215444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
label_215448:
    // 0x215448: 0xafad0030  sw          $t5, 0x30($sp)
    ctx->pc = 0x215448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 13));
label_21544c:
    // 0x21544c: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x21544cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
label_215450:
    // 0x215450: 0xafaf0048  sw          $t7, 0x48($sp)
    ctx->pc = 0x215450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 15));
label_215454:
    // 0x215454: 0xafae0050  sw          $t6, 0x50($sp)
    ctx->pc = 0x215454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 14));
label_215458:
    // 0x215458: 0xc10ca04  jal         func_432810
label_21545c:
    if (ctx->pc == 0x21545Cu) {
        ctx->pc = 0x21545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215458u;
        // 0x21545c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215460u;
        goto label_215460;
    }
    ctx->pc = 0x215458u;
    SET_GPR_U32(ctx, 31, 0x215460u);
    ctx->pc = 0x21545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215458u;
    // 0x21545c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x215458u, 0x215460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215460u;
label_215460:
    // 0x215460: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x215460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_215464:
    // 0x215464: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x215464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_215468:
    // 0x215468: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x215468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_21546c:
    // 0x21546c: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x21546cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_215470:
    // 0x215470: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x215470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_215474:
    // 0x215474: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x215474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_215478:
    // 0x215478: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x215478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_21547c:
    // 0x21547c: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x21547cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_215480:
    // 0x215480: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x215480u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_215484:
    // 0x215484: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x215484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_215488:
    // 0x215488: 0x3e00008  jr          $ra
label_21548c:
    if (ctx->pc == 0x21548Cu) {
        ctx->pc = 0x21548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215488u;
        // 0x21548c: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215490u;
        goto label_fallthrough_0x215488;
    }
    ctx->pc = 0x215488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215488u;
        // 0x21548c: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x215488:
    ctx->pc = 0x215490u;
}

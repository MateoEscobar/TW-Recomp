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

// Function: sub_002395A0
// Address: 0x2395a0 - 0x239788
void sub_002395A0_0x2395a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002395A0_0x2395a0");
#endif

    switch (ctx->pc) {
        case 0x2395a0u: goto label_2395a0;
        case 0x2395a4u: goto label_2395a4;
        case 0x2395a8u: goto label_2395a8;
        case 0x2395acu: goto label_2395ac;
        case 0x2395b0u: goto label_2395b0;
        case 0x2395b4u: goto label_2395b4;
        case 0x2395b8u: goto label_2395b8;
        case 0x2395bcu: goto label_2395bc;
        case 0x2395c0u: goto label_2395c0;
        case 0x2395c4u: goto label_2395c4;
        case 0x2395c8u: goto label_2395c8;
        case 0x2395ccu: goto label_2395cc;
        case 0x2395d0u: goto label_2395d0;
        case 0x2395d4u: goto label_2395d4;
        case 0x2395d8u: goto label_2395d8;
        case 0x2395dcu: goto label_2395dc;
        case 0x2395e0u: goto label_2395e0;
        case 0x2395e4u: goto label_2395e4;
        case 0x2395e8u: goto label_2395e8;
        case 0x2395ecu: goto label_2395ec;
        case 0x2395f0u: goto label_2395f0;
        case 0x2395f4u: goto label_2395f4;
        case 0x2395f8u: goto label_2395f8;
        case 0x2395fcu: goto label_2395fc;
        case 0x239600u: goto label_239600;
        case 0x239604u: goto label_239604;
        case 0x239608u: goto label_239608;
        case 0x23960cu: goto label_23960c;
        case 0x239610u: goto label_239610;
        case 0x239614u: goto label_239614;
        case 0x239618u: goto label_239618;
        case 0x23961cu: goto label_23961c;
        case 0x239620u: goto label_239620;
        case 0x239624u: goto label_239624;
        case 0x239628u: goto label_239628;
        case 0x23962cu: goto label_23962c;
        case 0x239630u: goto label_239630;
        case 0x239634u: goto label_239634;
        case 0x239638u: goto label_239638;
        case 0x23963cu: goto label_23963c;
        case 0x239640u: goto label_239640;
        case 0x239644u: goto label_239644;
        case 0x239648u: goto label_239648;
        case 0x23964cu: goto label_23964c;
        case 0x239650u: goto label_239650;
        case 0x239654u: goto label_239654;
        case 0x239658u: goto label_239658;
        case 0x23965cu: goto label_23965c;
        case 0x239660u: goto label_239660;
        case 0x239664u: goto label_239664;
        case 0x239668u: goto label_239668;
        case 0x23966cu: goto label_23966c;
        case 0x239670u: goto label_239670;
        case 0x239674u: goto label_239674;
        case 0x239678u: goto label_239678;
        case 0x23967cu: goto label_23967c;
        case 0x239680u: goto label_239680;
        case 0x239684u: goto label_239684;
        case 0x239688u: goto label_239688;
        case 0x23968cu: goto label_23968c;
        case 0x239690u: goto label_239690;
        case 0x239694u: goto label_239694;
        case 0x239698u: goto label_239698;
        case 0x23969cu: goto label_23969c;
        case 0x2396a0u: goto label_2396a0;
        case 0x2396a4u: goto label_2396a4;
        case 0x2396a8u: goto label_2396a8;
        case 0x2396acu: goto label_2396ac;
        case 0x2396b0u: goto label_2396b0;
        case 0x2396b4u: goto label_2396b4;
        case 0x2396b8u: goto label_2396b8;
        case 0x2396bcu: goto label_2396bc;
        case 0x2396c0u: goto label_2396c0;
        case 0x2396c4u: goto label_2396c4;
        case 0x2396c8u: goto label_2396c8;
        case 0x2396ccu: goto label_2396cc;
        case 0x2396d0u: goto label_2396d0;
        case 0x2396d4u: goto label_2396d4;
        case 0x2396d8u: goto label_2396d8;
        case 0x2396dcu: goto label_2396dc;
        case 0x2396e0u: goto label_2396e0;
        case 0x2396e4u: goto label_2396e4;
        case 0x2396e8u: goto label_2396e8;
        case 0x2396ecu: goto label_2396ec;
        case 0x2396f0u: goto label_2396f0;
        case 0x2396f4u: goto label_2396f4;
        case 0x2396f8u: goto label_2396f8;
        case 0x2396fcu: goto label_2396fc;
        case 0x239700u: goto label_239700;
        case 0x239704u: goto label_239704;
        case 0x239708u: goto label_239708;
        case 0x23970cu: goto label_23970c;
        case 0x239710u: goto label_239710;
        case 0x239714u: goto label_239714;
        case 0x239718u: goto label_239718;
        case 0x23971cu: goto label_23971c;
        case 0x239720u: goto label_239720;
        case 0x239724u: goto label_239724;
        case 0x239728u: goto label_239728;
        case 0x23972cu: goto label_23972c;
        case 0x239730u: goto label_239730;
        case 0x239734u: goto label_239734;
        case 0x239738u: goto label_239738;
        case 0x23973cu: goto label_23973c;
        case 0x239740u: goto label_239740;
        case 0x239744u: goto label_239744;
        case 0x239748u: goto label_239748;
        case 0x23974cu: goto label_23974c;
        case 0x239750u: goto label_239750;
        case 0x239754u: goto label_239754;
        case 0x239758u: goto label_239758;
        case 0x23975cu: goto label_23975c;
        case 0x239760u: goto label_239760;
        case 0x239764u: goto label_239764;
        case 0x239768u: goto label_239768;
        case 0x23976cu: goto label_23976c;
        case 0x239770u: goto label_239770;
        case 0x239774u: goto label_239774;
        case 0x239778u: goto label_239778;
        case 0x23977cu: goto label_23977c;
        case 0x239780u: goto label_239780;
        case 0x239784u: goto label_239784;
        default: break;
    }

    ctx->pc = 0x2395a0u;

label_2395a0:
    // 0x2395a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2395a4:
    // 0x2395a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2395a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2395a8:
    // 0x2395a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2395a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2395ac:
    // 0x2395ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2395acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2395b0:
    // 0x2395b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2395b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2395b4:
    // 0x2395b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2395b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2395b8:
    // 0x2395b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2395b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2395bc:
    // 0x2395bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2395bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2395c0:
    // 0x2395c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2395c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2395c4:
    // 0x2395c4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2395c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2395c8:
    // 0x2395c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2395c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2395cc:
    // 0x2395cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2395ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2395d0:
    // 0x2395d0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2395d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2395d4:
    // 0x2395d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2395d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2395d8:
    // 0x2395d8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2395d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2395dc:
    // 0x2395dc: 0xc0e4060  jal         func_390180
label_2395e0:
    if (ctx->pc == 0x2395E0u) {
        ctx->pc = 0x2395E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395DCu;
        // 0x2395e0: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395E4u;
        goto label_2395e4;
    }
    ctx->pc = 0x2395DCu;
    SET_GPR_U32(ctx, 31, 0x2395E4u);
    ctx->pc = 0x2395E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395DCu;
    // 0x2395e0: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2395DCu, 0x2395E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395E4u;
label_2395e4:
    // 0x2395e4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2395e8:
    if (ctx->pc == 0x2395E8u) {
        ctx->pc = 0x2395ECu;
        goto label_2395ec;
    }
    ctx->pc = 0x2395E4u;
    {
        const bool branch_taken_0x2395e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2395e4) {
            ctx->pc = 0x2396C8u;
            goto label_2396c8;
        }
    }
    ctx->pc = 0x2395ECu;
label_2395ec:
    // 0x2395ec: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_2395f0:
    if (ctx->pc == 0x2395F0u) {
        ctx->pc = 0x2395F4u;
        goto label_2395f4;
    }
    ctx->pc = 0x2395ECu;
    {
        const bool branch_taken_0x2395ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2395ec) {
            ctx->pc = 0x2396C8u;
            goto label_2396c8;
        }
    }
    ctx->pc = 0x2395F4u;
label_2395f4:
    // 0x2395f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2395f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2395f8:
    // 0x2395f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2395f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2395fc:
    // 0x2395fc: 0xc0e409a  jal         func_390268
label_239600:
    if (ctx->pc == 0x239600u) {
        ctx->pc = 0x239600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395FCu;
        // 0x239600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239604u;
        goto label_239604;
    }
    ctx->pc = 0x2395FCu;
    SET_GPR_U32(ctx, 31, 0x239604u);
    ctx->pc = 0x239600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395FCu;
    // 0x239600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2395FCu, 0x239604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239604u;
label_239604:
    // 0x239604: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x239604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239608:
    // 0x239608: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x239608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_23960c:
    // 0x23960c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_239610:
    // 0x239610: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x239610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_239614:
    // 0x239614: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x239614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_239618:
    // 0x239618: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x239618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_23961c:
    // 0x23961c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_239620:
    // 0x239620: 0xc050fda  jal         func_143F68
label_239624:
    if (ctx->pc == 0x239624u) {
        ctx->pc = 0x239624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239620u;
        // 0x239624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239628u;
        goto label_239628;
    }
    ctx->pc = 0x239620u;
    SET_GPR_U32(ctx, 31, 0x239628u);
    ctx->pc = 0x239624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239620u;
    // 0x239624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x239620u, 0x239628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239628u;
label_239628:
    // 0x239628: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23962c:
    // 0x23962c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23962cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239630:
    // 0x239630: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_239634:
    // 0x239634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239638:
    // 0x239638: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23963c:
    // 0x23963c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23963cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_239640:
    // 0x239640: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x239640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_239644:
    // 0x239644: 0x40f809  jalr        $v0
label_239648:
    if (ctx->pc == 0x239648u) {
        ctx->pc = 0x239648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239644u;
        // 0x239648: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23964Cu;
        goto label_23964c;
    }
    ctx->pc = 0x239644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23964Cu);
        ctx->pc = 0x239648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239644u;
        // 0x239648: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239644u, 0x23964Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23964Cu;
label_23964c:
    // 0x23964c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23964cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239650:
    // 0x239650: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x239650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239654:
    // 0x239654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239658:
    // 0x239658: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x239658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23965c:
    // 0x23965c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23965cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239660:
    // 0x239660: 0xc0879a6  jal         func_21E698
label_239664:
    if (ctx->pc == 0x239664u) {
        ctx->pc = 0x239664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239660u;
        // 0x239664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239668u;
        goto label_239668;
    }
    ctx->pc = 0x239660u;
    SET_GPR_U32(ctx, 31, 0x239668u);
    ctx->pc = 0x239664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239660u;
    // 0x239664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x239660u, 0x239668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239668u;
label_239668:
    // 0x239668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23966c:
    // 0x23966c: 0xc043d5e  jal         func_10F578
label_239670:
    if (ctx->pc == 0x239670u) {
        ctx->pc = 0x239670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23966Cu;
        // 0x239670: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239674u;
        goto label_239674;
    }
    ctx->pc = 0x23966Cu;
    SET_GPR_U32(ctx, 31, 0x239674u);
    ctx->pc = 0x239670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23966Cu;
    // 0x239670: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x23966Cu, 0x239674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239674u;
label_239674:
    // 0x239674: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_239678:
    if (ctx->pc == 0x239678u) {
        ctx->pc = 0x239678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239674u;
        // 0x239678: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23967Cu;
        goto label_23967c;
    }
    ctx->pc = 0x239674u;
    {
        const bool branch_taken_0x239674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239674u;
        // 0x239678: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239674) {
            ctx->pc = 0x239760u;
            goto label_239760;
        }
    }
    ctx->pc = 0x23967Cu;
label_23967c:
    // 0x23967c: 0xc0e4060  jal         func_390180
label_239680:
    if (ctx->pc == 0x239680u) {
        ctx->pc = 0x239680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23967Cu;
        // 0x239680: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239684u;
        goto label_239684;
    }
    ctx->pc = 0x23967Cu;
    SET_GPR_U32(ctx, 31, 0x239684u);
    ctx->pc = 0x239680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23967Cu;
    // 0x239680: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23967Cu, 0x239684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239684u;
label_239684:
    // 0x239684: 0xc0e896e  jal         func_3A25B8
label_239688:
    if (ctx->pc == 0x239688u) {
        ctx->pc = 0x239688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239684u;
        // 0x239688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23968Cu;
        goto label_23968c;
    }
    ctx->pc = 0x239684u;
    SET_GPR_U32(ctx, 31, 0x23968Cu);
    ctx->pc = 0x239688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239684u;
    // 0x239688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x239684u, 0x23968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23968Cu;
label_23968c:
    // 0x23968c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23968cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239690:
    // 0x239690: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_239694:
    if (ctx->pc == 0x239694u) {
        ctx->pc = 0x239694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239690u;
        // 0x239694: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239698u;
        goto label_239698;
    }
    ctx->pc = 0x239690u;
    {
        const bool branch_taken_0x239690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239690) {
            ctx->pc = 0x239694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239690u;
            // 0x239694: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239760u;
            goto label_239760;
        }
    }
    ctx->pc = 0x239698u;
label_239698:
    // 0x239698: 0xc043d5e  jal         func_10F578
label_23969c:
    if (ctx->pc == 0x23969Cu) {
        ctx->pc = 0x23969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239698u;
        // 0x23969c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396A0u;
        goto label_2396a0;
    }
    ctx->pc = 0x239698u;
    SET_GPR_U32(ctx, 31, 0x2396A0u);
    ctx->pc = 0x23969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239698u;
    // 0x23969c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x239698u, 0x2396A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396A0u;
label_2396a0:
    // 0x2396a0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2396a4:
    if (ctx->pc == 0x2396A4u) {
        ctx->pc = 0x2396A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396A0u;
        // 0x2396a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396A8u;
        goto label_2396a8;
    }
    ctx->pc = 0x2396A0u;
    {
        const bool branch_taken_0x2396a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396A0u;
        // 0x2396a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396a0) {
            ctx->pc = 0x23975Cu;
            goto label_23975c;
        }
    }
    ctx->pc = 0x2396A8u;
label_2396a8:
    // 0x2396a8: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x2396a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2396ac:
    // 0x2396ac: 0x26a40284  addiu       $a0, $s5, 0x284
    ctx->pc = 0x2396acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
label_2396b0:
    // 0x2396b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2396b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2396b4:
    // 0x2396b4: 0x24c601f4  addiu       $a2, $a2, 0x1F4
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 500));
label_2396b8:
    // 0x2396b8: 0xc0a6800  jal         func_29A000
label_2396bc:
    if (ctx->pc == 0x2396BCu) {
        ctx->pc = 0x2396BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396B8u;
        // 0x2396bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396C0u;
        goto label_2396c0;
    }
    ctx->pc = 0x2396B8u;
    SET_GPR_U32(ctx, 31, 0x2396C0u);
    ctx->pc = 0x2396BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396B8u;
    // 0x2396bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2396B8u, 0x2396C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396C0u;
label_2396c0:
    // 0x2396c0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2396c4:
    if (ctx->pc == 0x2396C4u) {
        ctx->pc = 0x2396C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C0u;
        // 0x2396c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396C8u;
        goto label_2396c8;
    }
    ctx->pc = 0x2396C0u;
    {
        const bool branch_taken_0x2396c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C0u;
        // 0x2396c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396c0) {
            ctx->pc = 0x239760u;
            goto label_239760;
        }
    }
    ctx->pc = 0x2396C8u;
label_2396c8:
    // 0x2396c8: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_2396cc:
    if (ctx->pc == 0x2396CCu) {
        ctx->pc = 0x2396CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C8u;
        // 0x2396cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396D0u;
        goto label_2396d0;
    }
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C8u;
        // 0x2396cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x23975Cu;
            goto label_23975c;
        }
    }
    ctx->pc = 0x2396D0u;
label_2396d0:
    // 0x2396d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2396d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2396d4:
    // 0x2396d4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2396d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2396d8:
    // 0x2396d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2396d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2396dc:
    // 0x2396dc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2396e0:
    // 0x2396e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2396e4:
    // 0x2396e4: 0x40f809  jalr        $v0
label_2396e8:
    if (ctx->pc == 0x2396E8u) {
        ctx->pc = 0x2396E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396E4u;
        // 0x2396e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396ECu;
        goto label_2396ec;
    }
    ctx->pc = 0x2396E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2396ECu);
        ctx->pc = 0x2396E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396E4u;
        // 0x2396e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2396E4u, 0x2396ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2396ECu;
label_2396ec:
    // 0x2396ec: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2396f0:
    if (ctx->pc == 0x2396F0u) {
        ctx->pc = 0x2396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396ECu;
        // 0x2396f0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396F4u;
        goto label_2396f4;
    }
    ctx->pc = 0x2396ECu;
    {
        const bool branch_taken_0x2396ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396ec) {
            ctx->pc = 0x2396F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396ECu;
            // 0x2396f0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239760u;
            goto label_239760;
        }
    }
    ctx->pc = 0x2396F4u;
label_2396f4:
    // 0x2396f4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_2396f8:
    if (ctx->pc == 0x2396F8u) {
        ctx->pc = 0x2396F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396F4u;
        // 0x2396f8: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396FCu;
        goto label_2396fc;
    }
    ctx->pc = 0x2396F4u;
    {
        const bool branch_taken_0x2396f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396F4u;
        // 0x2396f8: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396f4) {
            ctx->pc = 0x23973Cu;
            goto label_23973c;
        }
    }
    ctx->pc = 0x2396FCu;
label_2396fc:
    // 0x2396fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2396fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239700:
    // 0x239700: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_239704:
    // 0x239704: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_239708:
    // 0x239708: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x239708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_23970c:
    // 0x23970c: 0x60f809  jalr        $v1
label_239710:
    if (ctx->pc == 0x239710u) {
        ctx->pc = 0x239710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23970Cu;
        // 0x239710: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239714u;
        goto label_239714;
    }
    ctx->pc = 0x23970Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x239714u);
        ctx->pc = 0x239710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23970Cu;
        // 0x239710: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23970Cu, 0x239714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239714u;
label_239714:
    // 0x239714: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x239714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_239718:
    // 0x239718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23971c:
    // 0x23971c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23971cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239720:
    // 0x239720: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x239720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_239724:
    // 0x239724: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_239728:
    // 0x239728: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x239728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_23972c:
    // 0x23972c: 0x60f809  jalr        $v1
label_239730:
    if (ctx->pc == 0x239730u) {
        ctx->pc = 0x239730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23972Cu;
        // 0x239730: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239734u;
        goto label_239734;
    }
    ctx->pc = 0x23972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x239734u);
        ctx->pc = 0x239730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23972Cu;
        // 0x239730: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23972Cu, 0x239734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239734u;
label_239734:
    // 0x239734: 0x1000000a  b           . + 4 + (0xA << 2)
label_239738:
    if (ctx->pc == 0x239738u) {
        ctx->pc = 0x239738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239734u;
        // 0x239738: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23973Cu;
        goto label_23973c;
    }
    ctx->pc = 0x239734u;
    {
        const bool branch_taken_0x239734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239734u;
        // 0x239738: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239734) {
            ctx->pc = 0x239760u;
            goto label_239760;
        }
    }
    ctx->pc = 0x23973Cu;
label_23973c:
    // 0x23973c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_239740:
    // 0x239740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239744:
    // 0x239744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239748:
    // 0x239748: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23974c:
    // 0x23974c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x23974cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_239750:
    // 0x239750: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x239750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_239754:
    // 0x239754: 0x60f809  jalr        $v1
label_239758:
    if (ctx->pc == 0x239758u) {
        ctx->pc = 0x239758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239754u;
        // 0x239758: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23975Cu;
        goto label_23975c;
    }
    ctx->pc = 0x239754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23975Cu);
        ctx->pc = 0x239758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239754u;
        // 0x239758: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239754u, 0x23975Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23975Cu;
label_23975c:
    // 0x23975c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23975cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_239760:
    // 0x239760: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x239760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_239764:
    // 0x239764: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x239764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_239768:
    // 0x239768: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x239768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23976c:
    // 0x23976c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x23976cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239770:
    // 0x239770: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x239770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239774:
    // 0x239774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239778:
    // 0x239778: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x239778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23977c:
    // 0x23977c: 0x3e00008  jr          $ra
label_239780:
    if (ctx->pc == 0x239780u) {
        ctx->pc = 0x239780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23977Cu;
        // 0x239780: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239784u;
        goto label_239784;
    }
    ctx->pc = 0x23977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23977Cu;
        // 0x239780: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23977Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239784u;
label_239784:
    // 0x239784: 0x0  nop
    ctx->pc = 0x239784u;
    // NOP
    ctx->pc = 0x239788u;
}

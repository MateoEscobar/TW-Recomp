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

// Function: sub_001048A0
// Address: 0x1048a0 - 0x104a38
void sub_001048A0_0x1048a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001048A0_0x1048a0");
#endif

    switch (ctx->pc) {
        case 0x1048a0u: goto label_1048a0;
        case 0x1048a4u: goto label_1048a4;
        case 0x1048a8u: goto label_1048a8;
        case 0x1048acu: goto label_1048ac;
        case 0x1048b0u: goto label_1048b0;
        case 0x1048b4u: goto label_1048b4;
        case 0x1048b8u: goto label_1048b8;
        case 0x1048bcu: goto label_1048bc;
        case 0x1048c0u: goto label_1048c0;
        case 0x1048c4u: goto label_1048c4;
        case 0x1048c8u: goto label_1048c8;
        case 0x1048ccu: goto label_1048cc;
        case 0x1048d0u: goto label_1048d0;
        case 0x1048d4u: goto label_1048d4;
        case 0x1048d8u: goto label_1048d8;
        case 0x1048dcu: goto label_1048dc;
        case 0x1048e0u: goto label_1048e0;
        case 0x1048e4u: goto label_1048e4;
        case 0x1048e8u: goto label_1048e8;
        case 0x1048ecu: goto label_1048ec;
        case 0x1048f0u: goto label_1048f0;
        case 0x1048f4u: goto label_1048f4;
        case 0x1048f8u: goto label_1048f8;
        case 0x1048fcu: goto label_1048fc;
        case 0x104900u: goto label_104900;
        case 0x104904u: goto label_104904;
        case 0x104908u: goto label_104908;
        case 0x10490cu: goto label_10490c;
        case 0x104910u: goto label_104910;
        case 0x104914u: goto label_104914;
        case 0x104918u: goto label_104918;
        case 0x10491cu: goto label_10491c;
        case 0x104920u: goto label_104920;
        case 0x104924u: goto label_104924;
        case 0x104928u: goto label_104928;
        case 0x10492cu: goto label_10492c;
        case 0x104930u: goto label_104930;
        case 0x104934u: goto label_104934;
        case 0x104938u: goto label_104938;
        case 0x10493cu: goto label_10493c;
        case 0x104940u: goto label_104940;
        case 0x104944u: goto label_104944;
        case 0x104948u: goto label_104948;
        case 0x10494cu: goto label_10494c;
        case 0x104950u: goto label_104950;
        case 0x104954u: goto label_104954;
        case 0x104958u: goto label_104958;
        case 0x10495cu: goto label_10495c;
        case 0x104960u: goto label_104960;
        case 0x104964u: goto label_104964;
        case 0x104968u: goto label_104968;
        case 0x10496cu: goto label_10496c;
        case 0x104970u: goto label_104970;
        case 0x104974u: goto label_104974;
        case 0x104978u: goto label_104978;
        case 0x10497cu: goto label_10497c;
        case 0x104980u: goto label_104980;
        case 0x104984u: goto label_104984;
        case 0x104988u: goto label_104988;
        case 0x10498cu: goto label_10498c;
        case 0x104990u: goto label_104990;
        case 0x104994u: goto label_104994;
        case 0x104998u: goto label_104998;
        case 0x10499cu: goto label_10499c;
        case 0x1049a0u: goto label_1049a0;
        case 0x1049a4u: goto label_1049a4;
        case 0x1049a8u: goto label_1049a8;
        case 0x1049acu: goto label_1049ac;
        case 0x1049b0u: goto label_1049b0;
        case 0x1049b4u: goto label_1049b4;
        case 0x1049b8u: goto label_1049b8;
        case 0x1049bcu: goto label_1049bc;
        case 0x1049c0u: goto label_1049c0;
        case 0x1049c4u: goto label_1049c4;
        case 0x1049c8u: goto label_1049c8;
        case 0x1049ccu: goto label_1049cc;
        case 0x1049d0u: goto label_1049d0;
        case 0x1049d4u: goto label_1049d4;
        case 0x1049d8u: goto label_1049d8;
        case 0x1049dcu: goto label_1049dc;
        case 0x1049e0u: goto label_1049e0;
        case 0x1049e4u: goto label_1049e4;
        case 0x1049e8u: goto label_1049e8;
        case 0x1049ecu: goto label_1049ec;
        case 0x1049f0u: goto label_1049f0;
        case 0x1049f4u: goto label_1049f4;
        case 0x1049f8u: goto label_1049f8;
        case 0x1049fcu: goto label_1049fc;
        case 0x104a00u: goto label_104a00;
        case 0x104a04u: goto label_104a04;
        case 0x104a08u: goto label_104a08;
        case 0x104a0cu: goto label_104a0c;
        case 0x104a10u: goto label_104a10;
        case 0x104a14u: goto label_104a14;
        case 0x104a18u: goto label_104a18;
        case 0x104a1cu: goto label_104a1c;
        case 0x104a20u: goto label_104a20;
        case 0x104a24u: goto label_104a24;
        case 0x104a28u: goto label_104a28;
        case 0x104a2cu: goto label_104a2c;
        case 0x104a30u: goto label_104a30;
        case 0x104a34u: goto label_104a34;
        default: break;
    }

    ctx->pc = 0x1048a0u;

label_1048a0:
    // 0x1048a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1048a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1048a4:
    // 0x1048a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1048a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1048a8:
    // 0x1048a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1048a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1048ac:
    // 0x1048ac: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1048b0:
    // 0x1048b0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1048b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1048b4:
    // 0x1048b4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1048b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1048b8:
    // 0x1048b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1048b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1048bc:
    // 0x1048bc: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x1048bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_1048c0:
    // 0x1048c0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1048c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1048c4:
    // 0x1048c4: 0x24a56928  addiu       $a1, $a1, 0x6928
    ctx->pc = 0x1048c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26920));
label_1048c8:
    // 0x1048c8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1048c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1048cc:
    // 0x1048cc: 0x25086940  addiu       $t0, $t0, 0x6940
    ctx->pc = 0x1048ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26944));
label_1048d0:
    // 0x1048d0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1048d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1048d4:
    // 0x1048d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1048d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1048d8:
    // 0x1048d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1048d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1048dc:
    // 0x1048dc: 0x2457a898  addiu       $s7, $v0, -0x5768
    ctx->pc = 0x1048dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944920));
label_1048e0:
    // 0x1048e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1048e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1048e4:
    // 0x1048e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1048e8:
    // 0x1048e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1048e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1048ec:
    // 0x1048ec: 0x24090054  addiu       $t1, $zero, 0x54
    ctx->pc = 0x1048ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1048f0:
    // 0x1048f0: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x1048f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1048f4:
    // 0x1048f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1048f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1048f8:
    // 0x1048f8: 0x3c16005a  lui         $s6, 0x5A
    ctx->pc = 0x1048f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)90 << 16));
label_1048fc:
    // 0x1048fc: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x1048fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
label_104900:
    // 0x104900: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x104900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_104904:
    // 0x104904: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x104904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_104908:
    // 0x104908: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x104908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10490c:
    // 0x10490c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x10490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_104910:
    // 0x104910: 0x40f809  jalr        $v0
label_104914:
    if (ctx->pc == 0x104914u) {
        ctx->pc = 0x104914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104910u;
        // 0x104914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104918u;
        goto label_104918;
    }
    ctx->pc = 0x104910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104918u);
        ctx->pc = 0x104914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104910u;
        // 0x104914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104910u, 0x104918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104918u;
label_104918:
    // 0x104918: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x104918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10491c:
    // 0x10491c: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
label_104920:
    if (ctx->pc == 0x104920u) {
        ctx->pc = 0x104920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10491Cu;
        // 0x104920: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104924u;
        goto label_104924;
    }
    ctx->pc = 0x10491Cu;
    {
        const bool branch_taken_0x10491c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x104920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10491Cu;
        // 0x104920: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10491c) {
            ctx->pc = 0x1049F8u;
            goto label_1049f8;
        }
    }
    ctx->pc = 0x104924u;
label_104924:
    // 0x104924: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x104924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_104928:
    // 0x104928: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x104928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_10492c:
    // 0x10492c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10492cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_104930:
    // 0x104930: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x104930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_104934:
    // 0x104934: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x104934u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_104938:
    // 0x104938: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
label_10493c:
    // 0x10493c: 0x261068f8  addiu       $s0, $s0, 0x68F8
    ctx->pc = 0x10493cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26872));
label_104940:
    // 0x104940: 0x26316900  addiu       $s1, $s1, 0x6900
    ctx->pc = 0x104940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26880));
label_104944:
    // 0x104944: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x104944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_104948:
    // 0x104948: 0x24066540  addiu       $a2, $zero, 0x6540
    ctx->pc = 0x104948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25920));
label_10494c:
    // 0x10494c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104950:
    // 0x104950: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_104954:
    // 0x104954: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x104954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_104958:
    // 0x104958: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x104958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10495c:
    // 0x10495c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_104960:
    // 0x104960: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x104960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_104964:
    // 0x104964: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_104968:
    // 0x104968: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x104968u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10496c:
    // 0x10496c: 0x40f809  jalr        $v0
label_104970:
    if (ctx->pc == 0x104970u) {
        ctx->pc = 0x104970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10496Cu;
        // 0x104970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104974u;
        goto label_104974;
    }
    ctx->pc = 0x10496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104974u);
        ctx->pc = 0x104970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10496Cu;
        // 0x104970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10496Cu, 0x104974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104974u;
label_104974:
    // 0x104974: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x104974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_104978:
    // 0x104978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x104978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10497c:
    // 0x10497c: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x10497cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_104980:
    // 0x104980: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x104980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104984:
    // 0x104984: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x104984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_104988:
    // 0x104988: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x104988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10498c:
    // 0x10498c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x10498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_104990:
    // 0x104990: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x104990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_104994:
    // 0x104994: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x104994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_104998:
    // 0x104998: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x104998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10499c:
    // 0x10499c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x10499cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1049a0:
    // 0x1049a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1049a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1049a4:
    // 0x1049a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1049a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1049a8:
    // 0x1049a8: 0x40f809  jalr        $v0
label_1049ac:
    if (ctx->pc == 0x1049ACu) {
        ctx->pc = 0x1049ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049A8u;
        // 0x1049ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1049B0u;
        goto label_1049b0;
    }
    ctx->pc = 0x1049A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1049B0u);
        ctx->pc = 0x1049ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049A8u;
        // 0x1049ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1049A8u, 0x1049B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1049B0u;
label_1049b0:
    // 0x1049b0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1049b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1049b4:
    // 0x1049b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1049b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1049b8:
    // 0x1049b8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1049bc:
    if (ctx->pc == 0x1049BCu) {
        ctx->pc = 0x1049BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049B8u;
        // 0x1049bc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1049C0u;
        goto label_1049c0;
    }
    ctx->pc = 0x1049B8u;
    {
        const bool branch_taken_0x1049b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049B8u;
        // 0x1049bc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049b8) {
            ctx->pc = 0x1049F4u;
            goto label_1049f4;
        }
    }
    ctx->pc = 0x1049C0u;
label_1049c0:
    // 0x1049c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1049c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1049c4:
    // 0x1049c4: 0x0  nop
    ctx->pc = 0x1049c4u;
    // NOP
label_1049c8:
    // 0x1049c8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1049cc:
    // 0x1049cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1049d0:
    // 0x1049d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1049d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1049d4:
    // 0x1049d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1049d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1049d8:
    // 0x1049d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1049d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1049dc:
    // 0x1049dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1049e0:
    // 0x1049e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1049e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1049e4:
    // 0x1049e4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1049e8:
    // 0x1049e8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1049e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1049ec:
    // 0x1049ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1049f0:
    if (ctx->pc == 0x1049F0u) {
        ctx->pc = 0x1049F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049ECu;
        // 0x1049f0: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1049F4u;
        goto label_1049f4;
    }
    ctx->pc = 0x1049ECu;
    {
        const bool branch_taken_0x1049ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1049F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049ECu;
        // 0x1049f0: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049ec) {
            ctx->pc = 0x1049C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1049c8;
        }
    }
    ctx->pc = 0x1049F4u;
label_1049f4:
    // 0x1049f4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1049f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1049f8:
    // 0x1049f8: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x1049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
label_1049fc:
    // 0x1049fc: 0xc040080  jal         func_100200
label_104a00:
    if (ctx->pc == 0x104A00u) {
        ctx->pc = 0x104A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049FCu;
        // 0x104a00: 0x26c48420  addiu       $a0, $s6, -0x7BE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104A04u;
        goto label_104a04;
    }
    ctx->pc = 0x1049FCu;
    SET_GPR_U32(ctx, 31, 0x104A04u);
    ctx->pc = 0x104A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049FCu;
    // 0x104a00: 0x26c48420  addiu       $a0, $s6, -0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100200u, 0x1049FCu, 0x104A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A04u;
label_104a04:
    // 0x104a04: 0xc040080  jal         func_100200
label_104a08:
    if (ctx->pc == 0x104A08u) {
        ctx->pc = 0x104A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A04u;
        // 0x104a08: 0x26a4d040  addiu       $a0, $s5, -0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104A0Cu;
        goto label_104a0c;
    }
    ctx->pc = 0x104A04u;
    SET_GPR_U32(ctx, 31, 0x104A0Cu);
    ctx->pc = 0x104A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A04u;
    // 0x104a08: 0x26a4d040  addiu       $a0, $s5, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100200u, 0x104A04u, 0x104A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A0Cu;
label_104a0c:
    // 0x104a0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x104a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_104a10:
    // 0x104a10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x104a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_104a14:
    // 0x104a14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x104a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_104a18:
    // 0x104a18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x104a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_104a1c:
    // 0x104a1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x104a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_104a20:
    // 0x104a20: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x104a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_104a24:
    // 0x104a24: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x104a24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_104a28:
    // 0x104a28: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x104a28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_104a2c:
    // 0x104a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104a30:
    // 0x104a30: 0x3e00008  jr          $ra
label_104a34:
    if (ctx->pc == 0x104A34u) {
        ctx->pc = 0x104A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A30u;
        // 0x104a34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104A38u;
        goto label_fallthrough_0x104a30;
    }
    ctx->pc = 0x104A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A30u;
        // 0x104a34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104a30:
    ctx->pc = 0x104A38u;
}

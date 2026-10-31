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

// Function: sub_003FE6B8
// Address: 0x3fe6b8 - 0x3fe9c0
void sub_003FE6B8_0x3fe6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE6B8_0x3fe6b8");
#endif

    switch (ctx->pc) {
        case 0x3fe6b8u: goto label_3fe6b8;
        case 0x3fe6bcu: goto label_3fe6bc;
        case 0x3fe6c0u: goto label_3fe6c0;
        case 0x3fe6c4u: goto label_3fe6c4;
        case 0x3fe6c8u: goto label_3fe6c8;
        case 0x3fe6ccu: goto label_3fe6cc;
        case 0x3fe6d0u: goto label_3fe6d0;
        case 0x3fe6d4u: goto label_3fe6d4;
        case 0x3fe6d8u: goto label_3fe6d8;
        case 0x3fe6dcu: goto label_3fe6dc;
        case 0x3fe6e0u: goto label_3fe6e0;
        case 0x3fe6e4u: goto label_3fe6e4;
        case 0x3fe6e8u: goto label_3fe6e8;
        case 0x3fe6ecu: goto label_3fe6ec;
        case 0x3fe6f0u: goto label_3fe6f0;
        case 0x3fe6f4u: goto label_3fe6f4;
        case 0x3fe6f8u: goto label_3fe6f8;
        case 0x3fe6fcu: goto label_3fe6fc;
        case 0x3fe700u: goto label_3fe700;
        case 0x3fe704u: goto label_3fe704;
        case 0x3fe708u: goto label_3fe708;
        case 0x3fe70cu: goto label_3fe70c;
        case 0x3fe710u: goto label_3fe710;
        case 0x3fe714u: goto label_3fe714;
        case 0x3fe718u: goto label_3fe718;
        case 0x3fe71cu: goto label_3fe71c;
        case 0x3fe720u: goto label_3fe720;
        case 0x3fe724u: goto label_3fe724;
        case 0x3fe728u: goto label_3fe728;
        case 0x3fe72cu: goto label_3fe72c;
        case 0x3fe730u: goto label_3fe730;
        case 0x3fe734u: goto label_3fe734;
        case 0x3fe738u: goto label_3fe738;
        case 0x3fe73cu: goto label_3fe73c;
        case 0x3fe740u: goto label_3fe740;
        case 0x3fe744u: goto label_3fe744;
        case 0x3fe748u: goto label_3fe748;
        case 0x3fe74cu: goto label_3fe74c;
        case 0x3fe750u: goto label_3fe750;
        case 0x3fe754u: goto label_3fe754;
        case 0x3fe758u: goto label_3fe758;
        case 0x3fe75cu: goto label_3fe75c;
        case 0x3fe760u: goto label_3fe760;
        case 0x3fe764u: goto label_3fe764;
        case 0x3fe768u: goto label_3fe768;
        case 0x3fe76cu: goto label_3fe76c;
        case 0x3fe770u: goto label_3fe770;
        case 0x3fe774u: goto label_3fe774;
        case 0x3fe778u: goto label_3fe778;
        case 0x3fe77cu: goto label_3fe77c;
        case 0x3fe780u: goto label_3fe780;
        case 0x3fe784u: goto label_3fe784;
        case 0x3fe788u: goto label_3fe788;
        case 0x3fe78cu: goto label_3fe78c;
        case 0x3fe790u: goto label_3fe790;
        case 0x3fe794u: goto label_3fe794;
        case 0x3fe798u: goto label_3fe798;
        case 0x3fe79cu: goto label_3fe79c;
        case 0x3fe7a0u: goto label_3fe7a0;
        case 0x3fe7a4u: goto label_3fe7a4;
        case 0x3fe7a8u: goto label_3fe7a8;
        case 0x3fe7acu: goto label_3fe7ac;
        case 0x3fe7b0u: goto label_3fe7b0;
        case 0x3fe7b4u: goto label_3fe7b4;
        case 0x3fe7b8u: goto label_3fe7b8;
        case 0x3fe7bcu: goto label_3fe7bc;
        case 0x3fe7c0u: goto label_3fe7c0;
        case 0x3fe7c4u: goto label_3fe7c4;
        case 0x3fe7c8u: goto label_3fe7c8;
        case 0x3fe7ccu: goto label_3fe7cc;
        case 0x3fe7d0u: goto label_3fe7d0;
        case 0x3fe7d4u: goto label_3fe7d4;
        case 0x3fe7d8u: goto label_3fe7d8;
        case 0x3fe7dcu: goto label_3fe7dc;
        case 0x3fe7e0u: goto label_3fe7e0;
        case 0x3fe7e4u: goto label_3fe7e4;
        case 0x3fe7e8u: goto label_3fe7e8;
        case 0x3fe7ecu: goto label_3fe7ec;
        case 0x3fe7f0u: goto label_3fe7f0;
        case 0x3fe7f4u: goto label_3fe7f4;
        case 0x3fe7f8u: goto label_3fe7f8;
        case 0x3fe7fcu: goto label_3fe7fc;
        case 0x3fe800u: goto label_3fe800;
        case 0x3fe804u: goto label_3fe804;
        case 0x3fe808u: goto label_3fe808;
        case 0x3fe80cu: goto label_3fe80c;
        case 0x3fe810u: goto label_3fe810;
        case 0x3fe814u: goto label_3fe814;
        case 0x3fe818u: goto label_3fe818;
        case 0x3fe81cu: goto label_3fe81c;
        case 0x3fe820u: goto label_3fe820;
        case 0x3fe824u: goto label_3fe824;
        case 0x3fe828u: goto label_3fe828;
        case 0x3fe82cu: goto label_3fe82c;
        case 0x3fe830u: goto label_3fe830;
        case 0x3fe834u: goto label_3fe834;
        case 0x3fe838u: goto label_3fe838;
        case 0x3fe83cu: goto label_3fe83c;
        case 0x3fe840u: goto label_3fe840;
        case 0x3fe844u: goto label_3fe844;
        case 0x3fe848u: goto label_3fe848;
        case 0x3fe84cu: goto label_3fe84c;
        case 0x3fe850u: goto label_3fe850;
        case 0x3fe854u: goto label_3fe854;
        case 0x3fe858u: goto label_3fe858;
        case 0x3fe85cu: goto label_3fe85c;
        case 0x3fe860u: goto label_3fe860;
        case 0x3fe864u: goto label_3fe864;
        case 0x3fe868u: goto label_3fe868;
        case 0x3fe86cu: goto label_3fe86c;
        case 0x3fe870u: goto label_3fe870;
        case 0x3fe874u: goto label_3fe874;
        case 0x3fe878u: goto label_3fe878;
        case 0x3fe87cu: goto label_3fe87c;
        case 0x3fe880u: goto label_3fe880;
        case 0x3fe884u: goto label_3fe884;
        case 0x3fe888u: goto label_3fe888;
        case 0x3fe88cu: goto label_3fe88c;
        case 0x3fe890u: goto label_3fe890;
        case 0x3fe894u: goto label_3fe894;
        case 0x3fe898u: goto label_3fe898;
        case 0x3fe89cu: goto label_3fe89c;
        case 0x3fe8a0u: goto label_3fe8a0;
        case 0x3fe8a4u: goto label_3fe8a4;
        case 0x3fe8a8u: goto label_3fe8a8;
        case 0x3fe8acu: goto label_3fe8ac;
        case 0x3fe8b0u: goto label_3fe8b0;
        case 0x3fe8b4u: goto label_3fe8b4;
        case 0x3fe8b8u: goto label_3fe8b8;
        case 0x3fe8bcu: goto label_3fe8bc;
        case 0x3fe8c0u: goto label_3fe8c0;
        case 0x3fe8c4u: goto label_3fe8c4;
        case 0x3fe8c8u: goto label_3fe8c8;
        case 0x3fe8ccu: goto label_3fe8cc;
        case 0x3fe8d0u: goto label_3fe8d0;
        case 0x3fe8d4u: goto label_3fe8d4;
        case 0x3fe8d8u: goto label_3fe8d8;
        case 0x3fe8dcu: goto label_3fe8dc;
        case 0x3fe8e0u: goto label_3fe8e0;
        case 0x3fe8e4u: goto label_3fe8e4;
        case 0x3fe8e8u: goto label_3fe8e8;
        case 0x3fe8ecu: goto label_3fe8ec;
        case 0x3fe8f0u: goto label_3fe8f0;
        case 0x3fe8f4u: goto label_3fe8f4;
        case 0x3fe8f8u: goto label_3fe8f8;
        case 0x3fe8fcu: goto label_3fe8fc;
        case 0x3fe900u: goto label_3fe900;
        case 0x3fe904u: goto label_3fe904;
        case 0x3fe908u: goto label_3fe908;
        case 0x3fe90cu: goto label_3fe90c;
        case 0x3fe910u: goto label_3fe910;
        case 0x3fe914u: goto label_3fe914;
        case 0x3fe918u: goto label_3fe918;
        case 0x3fe91cu: goto label_3fe91c;
        case 0x3fe920u: goto label_3fe920;
        case 0x3fe924u: goto label_3fe924;
        case 0x3fe928u: goto label_3fe928;
        case 0x3fe92cu: goto label_3fe92c;
        case 0x3fe930u: goto label_3fe930;
        case 0x3fe934u: goto label_3fe934;
        case 0x3fe938u: goto label_3fe938;
        case 0x3fe93cu: goto label_3fe93c;
        case 0x3fe940u: goto label_3fe940;
        case 0x3fe944u: goto label_3fe944;
        case 0x3fe948u: goto label_3fe948;
        case 0x3fe94cu: goto label_3fe94c;
        case 0x3fe950u: goto label_3fe950;
        case 0x3fe954u: goto label_3fe954;
        case 0x3fe958u: goto label_3fe958;
        case 0x3fe95cu: goto label_3fe95c;
        case 0x3fe960u: goto label_3fe960;
        case 0x3fe964u: goto label_3fe964;
        case 0x3fe968u: goto label_3fe968;
        case 0x3fe96cu: goto label_3fe96c;
        case 0x3fe970u: goto label_3fe970;
        case 0x3fe974u: goto label_3fe974;
        case 0x3fe978u: goto label_3fe978;
        case 0x3fe97cu: goto label_3fe97c;
        case 0x3fe980u: goto label_3fe980;
        case 0x3fe984u: goto label_3fe984;
        case 0x3fe988u: goto label_3fe988;
        case 0x3fe98cu: goto label_3fe98c;
        case 0x3fe990u: goto label_3fe990;
        case 0x3fe994u: goto label_3fe994;
        case 0x3fe998u: goto label_3fe998;
        case 0x3fe99cu: goto label_3fe99c;
        case 0x3fe9a0u: goto label_3fe9a0;
        case 0x3fe9a4u: goto label_3fe9a4;
        case 0x3fe9a8u: goto label_3fe9a8;
        case 0x3fe9acu: goto label_3fe9ac;
        case 0x3fe9b0u: goto label_3fe9b0;
        case 0x3fe9b4u: goto label_3fe9b4;
        case 0x3fe9b8u: goto label_3fe9b8;
        case 0x3fe9bcu: goto label_3fe9bc;
        default: break;
    }

    ctx->pc = 0x3fe6b8u;

label_3fe6b8:
    // 0x3fe6b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3fe6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3fe6bc:
    // 0x3fe6bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3fe6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3fe6c0:
    // 0x3fe6c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3fe6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3fe6c4:
    // 0x3fe6c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3fe6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fe6c8:
    // 0x3fe6c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3fe6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3fe6cc:
    // 0x3fe6cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fe6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fe6d0:
    // 0x3fe6d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3fe6d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fe6d4:
    // 0x3fe6d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fe6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fe6d8:
    // 0x3fe6d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3fe6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3fe6dc:
    // 0x3fe6dc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3fe6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3fe6e0:
    // 0x3fe6e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fe6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3fe6e4:
    // 0x3fe6e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3fe6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3fe6e8:
    // 0x3fe6e8: 0xc0ea12a  jal         func_3A84A8
label_3fe6ec:
    if (ctx->pc == 0x3FE6ECu) {
        ctx->pc = 0x3FE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE6E8u;
        // 0x3fe6ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE6F0u;
        goto label_3fe6f0;
    }
    ctx->pc = 0x3FE6E8u;
    SET_GPR_U32(ctx, 31, 0x3FE6F0u);
    ctx->pc = 0x3FE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE6E8u;
    // 0x3fe6ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FE6E8u, 0x3FE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE6F0u;
label_3fe6f0:
    // 0x3fe6f0: 0xc0ea14c  jal         func_3A8530
label_3fe6f4:
    if (ctx->pc == 0x3FE6F4u) {
        ctx->pc = 0x3FE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE6F0u;
        // 0x3fe6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE6F8u;
        goto label_3fe6f8;
    }
    ctx->pc = 0x3FE6F0u;
    SET_GPR_U32(ctx, 31, 0x3FE6F8u);
    ctx->pc = 0x3FE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE6F0u;
    // 0x3fe6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FE6F0u, 0x3FE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE6F8u;
label_3fe6f8:
    // 0x3fe6f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fe6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fe6fc:
    // 0x3fe6fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3fe6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3fe700:
    // 0x3fe700: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3fe700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3fe704:
    // 0x3fe704: 0x40f809  jalr        $v0
label_3fe708:
    if (ctx->pc == 0x3FE708u) {
        ctx->pc = 0x3FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE704u;
        // 0x3fe708: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE70Cu;
        goto label_3fe70c;
    }
    ctx->pc = 0x3FE704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FE70Cu);
        ctx->pc = 0x3FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE704u;
        // 0x3fe708: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE704u, 0x3FE70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE70Cu;
label_3fe70c:
    // 0x3fe70c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3fe70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3fe710:
    // 0x3fe710: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_3fe714:
    if (ctx->pc == 0x3FE714u) {
        ctx->pc = 0x3FE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE710u;
        // 0x3fe714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE718u;
        goto label_3fe718;
    }
    ctx->pc = 0x3FE710u;
    {
        const bool branch_taken_0x3fe710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE710u;
        // 0x3fe714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe710) {
            ctx->pc = 0x3FE980u;
            goto label_3fe980;
        }
    }
    ctx->pc = 0x3FE718u;
label_3fe718:
    // 0x3fe718: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3fe718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3fe71c:
    // 0x3fe71c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3fe71cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3fe720:
    // 0x3fe720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe724:
    // 0x3fe724: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3fe724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3fe728:
    // 0x3fe728: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fe728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3fe72c:
    // 0x3fe72c: 0xc0e8630  jal         func_3A18C0
label_3fe730:
    if (ctx->pc == 0x3FE730u) {
        ctx->pc = 0x3FE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE72Cu;
        // 0x3fe730: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE734u;
        goto label_3fe734;
    }
    ctx->pc = 0x3FE72Cu;
    SET_GPR_U32(ctx, 31, 0x3FE734u);
    ctx->pc = 0x3FE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE72Cu;
    // 0x3fe730: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3FE72Cu, 0x3FE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE734u;
label_3fe734:
    // 0x3fe734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fe734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fe738:
    // 0x3fe738: 0xc0e8616  jal         func_3A1858
label_3fe73c:
    if (ctx->pc == 0x3FE73Cu) {
        ctx->pc = 0x3FE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE738u;
        // 0x3fe73c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE740u;
        goto label_3fe740;
    }
    ctx->pc = 0x3FE738u;
    SET_GPR_U32(ctx, 31, 0x3FE740u);
    ctx->pc = 0x3FE73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE738u;
    // 0x3fe73c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3FE738u, 0x3FE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE740u;
label_3fe740:
    // 0x3fe740: 0x1220008a  beqz        $s1, . + 4 + (0x8A << 2)
label_3fe744:
    if (ctx->pc == 0x3FE744u) {
        ctx->pc = 0x3FE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE740u;
        // 0x3fe744: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE748u;
        goto label_3fe748;
    }
    ctx->pc = 0x3FE740u;
    {
        const bool branch_taken_0x3fe740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE740u;
        // 0x3fe744: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe740) {
            ctx->pc = 0x3FE96Cu;
            goto label_3fe96c;
        }
    }
    ctx->pc = 0x3FE748u;
label_3fe748:
    // 0x3fe748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fe748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe74c:
    // 0x3fe74c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fe74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fe750:
    // 0x3fe750: 0xc0e911e  jal         func_3A4478
label_3fe754:
    if (ctx->pc == 0x3FE754u) {
        ctx->pc = 0x3FE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE750u;
        // 0x3fe754: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE758u;
        goto label_3fe758;
    }
    ctx->pc = 0x3FE750u;
    SET_GPR_U32(ctx, 31, 0x3FE758u);
    ctx->pc = 0x3FE754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE750u;
    // 0x3fe754: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FE750u, 0x3FE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE758u;
label_3fe758:
    // 0x3fe758: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fe758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fe75c:
    // 0x3fe75c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3fe75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fe760:
    // 0x3fe760: 0xc136b30  jal         func_4DACC0
label_3fe764:
    if (ctx->pc == 0x3FE764u) {
        ctx->pc = 0x3FE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE760u;
        // 0x3fe764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE768u;
        goto label_3fe768;
    }
    ctx->pc = 0x3FE760u;
    SET_GPR_U32(ctx, 31, 0x3FE768u);
    ctx->pc = 0x3FE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE760u;
    // 0x3fe764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3FE760u, 0x3FE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE768u;
label_3fe768:
    // 0x3fe768: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3fe768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fe76c:
    // 0x3fe76c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3fe76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fe770:
    // 0x3fe770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fe770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fe774:
    // 0x3fe774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fe774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fe778:
    // 0x3fe778: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3fe778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3fe77c:
    // 0x3fe77c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3fe77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3fe780:
    // 0x3fe780: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3fe780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fe784:
    // 0x3fe784: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3fe784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3fe788:
    // 0x3fe788: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3fe788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3fe78c:
    // 0x3fe78c: 0x60f809  jalr        $v1
label_3fe790:
    if (ctx->pc == 0x3FE790u) {
        ctx->pc = 0x3FE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE78Cu;
        // 0x3fe790: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE794u;
        goto label_3fe794;
    }
    ctx->pc = 0x3FE78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FE794u);
        ctx->pc = 0x3FE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE78Cu;
        // 0x3fe790: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE78Cu, 0x3FE794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE794u;
label_3fe794:
    // 0x3fe794: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3fe794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fe798:
    // 0x3fe798: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3fe798u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_3fe79c:
    // 0x3fe79c: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3fe79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_3fe7a0:
    // 0x3fe7a0: 0xc0e44cc  jal         func_391330
label_3fe7a4:
    if (ctx->pc == 0x3FE7A4u) {
        ctx->pc = 0x3FE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7A0u;
        // 0x3fe7a4: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE7A8u;
        goto label_3fe7a8;
    }
    ctx->pc = 0x3FE7A0u;
    SET_GPR_U32(ctx, 31, 0x3FE7A8u);
    ctx->pc = 0x3FE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE7A0u;
    // 0x3fe7a4: 0x8e5000c4  lw          $s0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3FE7A0u, 0x3FE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE7A8u;
label_3fe7a8:
    // 0x3fe7a8: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x3fe7a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_3fe7ac:
    // 0x3fe7ac: 0x3c022a26  lui         $v0, 0x2A26
    ctx->pc = 0x3fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10790 << 16));
label_3fe7b0:
    // 0x3fe7b0: 0x34423bb3  ori         $v0, $v0, 0x3BB3
    ctx->pc = 0x3fe7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15283);
label_3fe7b4:
    // 0x3fe7b4: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_3fe7b8:
    if (ctx->pc == 0x3FE7B8u) {
        ctx->pc = 0x3FE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7B4u;
        // 0x3fe7b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE7BCu;
        goto label_3fe7bc;
    }
    ctx->pc = 0x3FE7B4u;
    {
        const bool branch_taken_0x3fe7b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7B4u;
        // 0x3fe7b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe7b4) {
            ctx->pc = 0x3FE7FCu;
            goto label_3fe7fc;
        }
    }
    ctx->pc = 0x3FE7BCu;
label_3fe7bc:
    // 0x3fe7bc: 0x3c028c6f  lui         $v0, 0x8C6F
    ctx->pc = 0x3fe7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35951 << 16));
label_3fe7c0:
    // 0x3fe7c0: 0x3442bfe3  ori         $v0, $v0, 0xBFE3
    ctx->pc = 0x3fe7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49123);
label_3fe7c4:
    // 0x3fe7c4: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_3fe7c8:
    if (ctx->pc == 0x3FE7C8u) {
        ctx->pc = 0x3FE7CCu;
        goto label_3fe7cc;
    }
    ctx->pc = 0x3FE7C4u;
    {
        const bool branch_taken_0x3fe7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7c4) {
            ctx->pc = 0x3FE7FCu;
            goto label_3fe7fc;
        }
    }
    ctx->pc = 0x3FE7CCu;
label_3fe7cc:
    // 0x3fe7cc: 0x3c029bab  lui         $v0, 0x9BAB
    ctx->pc = 0x3fe7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39851 << 16));
label_3fe7d0:
    // 0x3fe7d0: 0x3442b2c7  ori         $v0, $v0, 0xB2C7
    ctx->pc = 0x3fe7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45767);
label_3fe7d4:
    // 0x3fe7d4: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_3fe7d8:
    if (ctx->pc == 0x3FE7D8u) {
        ctx->pc = 0x3FE7DCu;
        goto label_3fe7dc;
    }
    ctx->pc = 0x3FE7D4u;
    {
        const bool branch_taken_0x3fe7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fe7d4) {
            ctx->pc = 0x3FE7FCu;
            goto label_3fe7fc;
        }
    }
    ctx->pc = 0x3FE7DCu;
label_3fe7dc:
    // 0x3fe7dc: 0x3c028768  lui         $v0, 0x8768
    ctx->pc = 0x3fe7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34664 << 16));
label_3fe7e0:
    // 0x3fe7e0: 0x344290dd  ori         $v0, $v0, 0x90DD
    ctx->pc = 0x3fe7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37085);
label_3fe7e4:
    // 0x3fe7e4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3fe7e8:
    if (ctx->pc == 0x3FE7E8u) {
        ctx->pc = 0x3FE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7E4u;
        // 0x3fe7e8: 0x3c0239b7  lui         $v0, 0x39B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14775 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE7ECu;
        goto label_3fe7ec;
    }
    ctx->pc = 0x3FE7E4u;
    {
        const bool branch_taken_0x3fe7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7E4u;
        // 0x3fe7e8: 0x3c0239b7  lui         $v0, 0x39B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe7e4) {
            ctx->pc = 0x3FE7FCu;
            goto label_3fe7fc;
        }
    }
    ctx->pc = 0x3FE7ECu;
label_3fe7ec:
    // 0x3fe7ec: 0x3442cc9a  ori         $v0, $v0, 0xCC9A
    ctx->pc = 0x3fe7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52378);
label_3fe7f0:
    // 0x3fe7f0: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
label_3fe7f4:
    if (ctx->pc == 0x3FE7F4u) {
        ctx->pc = 0x3FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7F0u;
        // 0x3fe7f4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE7F8u;
        goto label_3fe7f8;
    }
    ctx->pc = 0x3FE7F0u;
    {
        const bool branch_taken_0x3fe7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7F0u;
        // 0x3fe7f4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe7f0) {
            ctx->pc = 0x3FE848u;
            goto label_3fe848;
        }
    }
    ctx->pc = 0x3FE7F8u;
label_3fe7f8:
    // 0x3fe7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fe7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe7fc:
    // 0x3fe7fc: 0xc0e911e  jal         func_3A4478
label_3fe800:
    if (ctx->pc == 0x3FE800u) {
        ctx->pc = 0x3FE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE7FCu;
        // 0x3fe800: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE804u;
        goto label_3fe804;
    }
    ctx->pc = 0x3FE7FCu;
    SET_GPR_U32(ctx, 31, 0x3FE804u);
    ctx->pc = 0x3FE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE7FCu;
    // 0x3fe800: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FE7FCu, 0x3FE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE804u;
label_3fe804:
    // 0x3fe804: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fe804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe808:
    // 0x3fe808: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3fe808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3fe80c:
    // 0x3fe80c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fe80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fe810:
    // 0x3fe810: 0x24a51720  addiu       $a1, $a1, 0x1720
    ctx->pc = 0x3fe810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_3fe814:
    // 0x3fe814: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3fe814u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3fe818:
    // 0x3fe818: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fe818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fe81c:
    // 0x3fe81c: 0x3c01c1c9  lui         $at, 0xC1C9
    ctx->pc = 0x3fe81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49609 << 16));
label_3fe820:
    // 0x3fe820: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fe820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fe824:
    // 0x3fe824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe828:
    // 0x3fe828: 0x24710078  addiu       $s1, $v1, 0x78
    ctx->pc = 0x3fe828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_3fe82c:
    // 0x3fe82c: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x3fe82cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3fe830:
    // 0x3fe830: 0xc136b24  jal         func_4DAC90
label_3fe834:
    if (ctx->pc == 0x3FE834u) {
        ctx->pc = 0x3FE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE830u;
        // 0x3fe834: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE838u;
        goto label_3fe838;
    }
    ctx->pc = 0x3FE830u;
    SET_GPR_U32(ctx, 31, 0x3FE838u);
    ctx->pc = 0x3FE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE830u;
    // 0x3fe834: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE830u, 0x3FE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE838u;
label_3fe838:
    // 0x3fe838: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3fe838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fe83c:
    // 0x3fe83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe840:
    // 0x3fe840: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3fe844:
    if (ctx->pc == 0x3FE844u) {
        ctx->pc = 0x3FE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE840u;
        // 0x3fe844: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE848u;
        goto label_3fe848;
    }
    ctx->pc = 0x3FE840u;
    {
        const bool branch_taken_0x3fe840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE840u;
        // 0x3fe844: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe840) {
            ctx->pc = 0x3FE940u;
            goto label_3fe940;
        }
    }
    ctx->pc = 0x3FE848u;
label_3fe848:
    // 0x3fe848: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fe848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fe84c:
    // 0x3fe84c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3fe84cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fe850:
    // 0x3fe850: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fe850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fe854:
    // 0x3fe854: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fe854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fe858:
    // 0x3fe858: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3fe858u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3fe85c:
    // 0x3fe85c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3fe85cu;
    // VWAITQ (Q already resolved in this runtime)
label_3fe860:
    // 0x3fe860: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3fe860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fe864:
    // 0x3fe864: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3fe864u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3fe868:
    // 0x3fe868: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3fe868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fe86c:
    // 0x3fe86c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3fe86cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fe870:
    // 0x3fe870: 0x0  nop
    ctx->pc = 0x3fe870u;
    // NOP
label_3fe874:
    // 0x3fe874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fe874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fe878:
    // 0x3fe878: 0x0  nop
    ctx->pc = 0x3fe878u;
    // NOP
label_3fe87c:
    // 0x3fe87c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_3fe880:
    if (ctx->pc == 0x3FE880u) {
        ctx->pc = 0x3FE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE87Cu;
        // 0x3fe880: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE884u;
        goto label_3fe884;
    }
    ctx->pc = 0x3FE87Cu;
    {
        const bool branch_taken_0x3fe87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE87Cu;
        // 0x3fe880: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe87c) {
            ctx->pc = 0x3FE958u;
            goto label_3fe958;
        }
    }
    ctx->pc = 0x3FE884u;
label_3fe884:
    // 0x3fe884: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3fe884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3fe888:
    // 0x3fe888: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3fe888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3fe88c:
    // 0x3fe88c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3fe890:
    if (ctx->pc == 0x3FE890u) {
        ctx->pc = 0x3FE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE88Cu;
        // 0x3fe890: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE894u;
        goto label_3fe894;
    }
    ctx->pc = 0x3FE88Cu;
    {
        const bool branch_taken_0x3fe88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE88Cu;
        // 0x3fe890: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe88c) {
            ctx->pc = 0x3FE8D0u;
            goto label_3fe8d0;
        }
    }
    ctx->pc = 0x3FE894u;
label_3fe894:
    // 0x3fe894: 0xc0e911e  jal         func_3A4478
label_3fe898:
    if (ctx->pc == 0x3FE898u) {
        ctx->pc = 0x3FE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE894u;
        // 0x3fe898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE89Cu;
        goto label_3fe89c;
    }
    ctx->pc = 0x3FE894u;
    SET_GPR_U32(ctx, 31, 0x3FE89Cu);
    ctx->pc = 0x3FE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE894u;
    // 0x3fe898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FE894u, 0x3FE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE89Cu;
label_3fe89c:
    // 0x3fe89c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fe89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe8a0:
    // 0x3fe8a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3fe8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3fe8a4:
    // 0x3fe8a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fe8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fe8a8:
    // 0x3fe8a8: 0x24a51720  addiu       $a1, $a1, 0x1720
    ctx->pc = 0x3fe8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_3fe8ac:
    // 0x3fe8ac: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3fe8acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3fe8b0:
    // 0x3fe8b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fe8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fe8b4:
    // 0x3fe8b4: 0x3c01c149  lui         $at, 0xC149
    ctx->pc = 0x3fe8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49481 << 16));
label_3fe8b8:
    // 0x3fe8b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fe8b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fe8bc:
    // 0x3fe8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe8c0:
    // 0x3fe8c0: 0x24710078  addiu       $s1, $v1, 0x78
    ctx->pc = 0x3fe8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_3fe8c4:
    // 0x3fe8c4: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x3fe8c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3fe8c8:
    // 0x3fe8c8: 0x10000018  b           . + 4 + (0x18 << 2)
label_3fe8cc:
    if (ctx->pc == 0x3FE8CCu) {
        ctx->pc = 0x3FE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE8C8u;
        // 0x3fe8cc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE8D0u;
        goto label_3fe8d0;
    }
    ctx->pc = 0x3FE8C8u;
    {
        const bool branch_taken_0x3fe8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE8C8u;
        // 0x3fe8cc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe8c8) {
            ctx->pc = 0x3FE92Cu;
            goto label_3fe92c;
        }
    }
    ctx->pc = 0x3FE8D0u;
label_3fe8d0:
    // 0x3fe8d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fe8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe8d4:
    // 0x3fe8d4: 0xc0e911e  jal         func_3A4478
label_3fe8d8:
    if (ctx->pc == 0x3FE8D8u) {
        ctx->pc = 0x3FE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE8D4u;
        // 0x3fe8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE8DCu;
        goto label_3fe8dc;
    }
    ctx->pc = 0x3FE8D4u;
    SET_GPR_U32(ctx, 31, 0x3FE8DCu);
    ctx->pc = 0x3FE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE8D4u;
    // 0x3fe8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FE8D4u, 0x3FE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE8DCu;
label_3fe8dc:
    // 0x3fe8dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fe8dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe8e0:
    // 0x3fe8e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3fe8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3fe8e4:
    // 0x3fe8e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fe8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fe8e8:
    // 0x3fe8e8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3fe8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3fe8ec:
    // 0x3fe8ec: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3fe8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3fe8f0:
    // 0x3fe8f0: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x3fe8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_3fe8f4:
    // 0x3fe8f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe8f8:
    // 0x3fe8f8: 0x24710078  addiu       $s1, $v1, 0x78
    ctx->pc = 0x3fe8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_3fe8fc:
    // 0x3fe8fc: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x3fe8fcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3fe900:
    // 0x3fe900: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x3fe900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
label_3fe904:
    // 0x3fe904: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fe904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fe908:
    // 0x3fe908: 0xc0cd518  jal         func_335460
label_3fe90c:
    if (ctx->pc == 0x3FE90Cu) {
        ctx->pc = 0x3FE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE908u;
        // 0x3fe90c: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE910u;
        goto label_3fe910;
    }
    ctx->pc = 0x3FE908u;
    SET_GPR_U32(ctx, 31, 0x3FE910u);
    ctx->pc = 0x3FE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE908u;
    // 0x3fe90c: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FE908u, 0x3FE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE910u;
label_3fe910:
    // 0x3fe910: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3fe910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3fe914:
    // 0x3fe914: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3fe914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3fe918:
    // 0x3fe918: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fe918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fe91c:
    // 0x3fe91c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3fe91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3fe920:
    // 0x3fe920: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x3fe920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_3fe924:
    // 0x3fe924: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fe924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fe928:
    // 0x3fe928: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x3fe928u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3fe92c:
    // 0x3fe92c: 0xc136b24  jal         func_4DAC90
label_3fe930:
    if (ctx->pc == 0x3FE930u) {
        ctx->pc = 0x3FE934u;
        goto label_3fe934;
    }
    ctx->pc = 0x3FE92Cu;
    SET_GPR_U32(ctx, 31, 0x3FE934u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FE92Cu, 0x3FE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE934u;
label_3fe934:
    // 0x3fe934: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3fe934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fe938:
    // 0x3fe938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fe938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fe93c:
    // 0x3fe93c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fe93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fe940:
    // 0x3fe940: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3fe940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3fe944:
    // 0x3fe944: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3fe944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3fe948:
    // 0x3fe948: 0x40f809  jalr        $v0
label_3fe94c:
    if (ctx->pc == 0x3FE94Cu) {
        ctx->pc = 0x3FE950u;
        goto label_3fe950;
    }
    ctx->pc = 0x3FE948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FE950u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE948u, 0x3FE950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FE950u;
label_3fe950:
    // 0x3fe950: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fe954:
    if (ctx->pc == 0x3FE954u) {
        ctx->pc = 0x3FE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE950u;
        // 0x3fe954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE958u;
        goto label_3fe958;
    }
    ctx->pc = 0x3FE950u;
    {
        const bool branch_taken_0x3fe950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE950u;
        // 0x3fe954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe950) {
            ctx->pc = 0x3FE970u;
            goto label_3fe970;
        }
    }
    ctx->pc = 0x3FE958u;
label_3fe958:
    // 0x3fe958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fe958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fe95c:
    // 0x3fe95c: 0xc0e911e  jal         func_3A4478
label_3fe960:
    if (ctx->pc == 0x3FE960u) {
        ctx->pc = 0x3FE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE95Cu;
        // 0x3fe960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE964u;
        goto label_3fe964;
    }
    ctx->pc = 0x3FE95Cu;
    SET_GPR_U32(ctx, 31, 0x3FE964u);
    ctx->pc = 0x3FE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE95Cu;
    // 0x3fe960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FE95Cu, 0x3FE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE964u;
label_3fe964:
    // 0x3fe964: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fe964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fe968:
    // 0x3fe968: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3fe968u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3fe96c:
    // 0x3fe96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe970:
    // 0x3fe970: 0xc0e862e  jal         func_3A18B8
label_3fe974:
    if (ctx->pc == 0x3FE974u) {
        ctx->pc = 0x3FE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE970u;
        // 0x3fe974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE978u;
        goto label_3fe978;
    }
    ctx->pc = 0x3FE970u;
    SET_GPR_U32(ctx, 31, 0x3FE978u);
    ctx->pc = 0x3FE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE970u;
    // 0x3fe974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3FE970u, 0x3FE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE978u;
label_3fe978:
    // 0x3fe978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fe978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fe97c:
    // 0x3fe97c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x3fe97cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_3fe980:
    // 0x3fe980: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3fe980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3fe984:
    // 0x3fe984: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3fe984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3fe988:
    // 0x3fe988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3fe988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3fe98c:
    // 0x3fe98c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3fe98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fe990:
    // 0x3fe990: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fe990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3fe994:
    // 0x3fe994: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3fe994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fe998:
    // 0x3fe998: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3fe99c:
    // 0x3fe99c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x3fe99cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_3fe9a0:
    // 0x3fe9a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3fe9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3fe9a4:
    // 0x3fe9a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3fe9a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3fe9a8:
    // 0x3fe9a8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3fe9a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fe9ac:
    // 0x3fe9ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fe9acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fe9b0:
    // 0x3fe9b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3fe9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3fe9b4:
    // 0x3fe9b4: 0x3e00008  jr          $ra
label_3fe9b8:
    if (ctx->pc == 0x3FE9B8u) {
        ctx->pc = 0x3FE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE9B4u;
        // 0x3fe9b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE9BCu;
        goto label_3fe9bc;
    }
    ctx->pc = 0x3FE9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE9B4u;
        // 0x3fe9b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE9BCu;
label_3fe9bc:
    // 0x3fe9bc: 0x0  nop
    ctx->pc = 0x3fe9bcu;
    // NOP
    ctx->pc = 0x3fe9c0u;
}

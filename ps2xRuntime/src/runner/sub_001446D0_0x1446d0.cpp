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

// Function: sub_001446D0
// Address: 0x1446d0 - 0x1448c8
void sub_001446D0_0x1446d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001446D0_0x1446d0");
#endif

    switch (ctx->pc) {
        case 0x1446d0u: goto label_1446d0;
        case 0x1446d4u: goto label_1446d4;
        case 0x1446d8u: goto label_1446d8;
        case 0x1446dcu: goto label_1446dc;
        case 0x1446e0u: goto label_1446e0;
        case 0x1446e4u: goto label_1446e4;
        case 0x1446e8u: goto label_1446e8;
        case 0x1446ecu: goto label_1446ec;
        case 0x1446f0u: goto label_1446f0;
        case 0x1446f4u: goto label_1446f4;
        case 0x1446f8u: goto label_1446f8;
        case 0x1446fcu: goto label_1446fc;
        case 0x144700u: goto label_144700;
        case 0x144704u: goto label_144704;
        case 0x144708u: goto label_144708;
        case 0x14470cu: goto label_14470c;
        case 0x144710u: goto label_144710;
        case 0x144714u: goto label_144714;
        case 0x144718u: goto label_144718;
        case 0x14471cu: goto label_14471c;
        case 0x144720u: goto label_144720;
        case 0x144724u: goto label_144724;
        case 0x144728u: goto label_144728;
        case 0x14472cu: goto label_14472c;
        case 0x144730u: goto label_144730;
        case 0x144734u: goto label_144734;
        case 0x144738u: goto label_144738;
        case 0x14473cu: goto label_14473c;
        case 0x144740u: goto label_144740;
        case 0x144744u: goto label_144744;
        case 0x144748u: goto label_144748;
        case 0x14474cu: goto label_14474c;
        case 0x144750u: goto label_144750;
        case 0x144754u: goto label_144754;
        case 0x144758u: goto label_144758;
        case 0x14475cu: goto label_14475c;
        case 0x144760u: goto label_144760;
        case 0x144764u: goto label_144764;
        case 0x144768u: goto label_144768;
        case 0x14476cu: goto label_14476c;
        case 0x144770u: goto label_144770;
        case 0x144774u: goto label_144774;
        case 0x144778u: goto label_144778;
        case 0x14477cu: goto label_14477c;
        case 0x144780u: goto label_144780;
        case 0x144784u: goto label_144784;
        case 0x144788u: goto label_144788;
        case 0x14478cu: goto label_14478c;
        case 0x144790u: goto label_144790;
        case 0x144794u: goto label_144794;
        case 0x144798u: goto label_144798;
        case 0x14479cu: goto label_14479c;
        case 0x1447a0u: goto label_1447a0;
        case 0x1447a4u: goto label_1447a4;
        case 0x1447a8u: goto label_1447a8;
        case 0x1447acu: goto label_1447ac;
        case 0x1447b0u: goto label_1447b0;
        case 0x1447b4u: goto label_1447b4;
        case 0x1447b8u: goto label_1447b8;
        case 0x1447bcu: goto label_1447bc;
        case 0x1447c0u: goto label_1447c0;
        case 0x1447c4u: goto label_1447c4;
        case 0x1447c8u: goto label_1447c8;
        case 0x1447ccu: goto label_1447cc;
        case 0x1447d0u: goto label_1447d0;
        case 0x1447d4u: goto label_1447d4;
        case 0x1447d8u: goto label_1447d8;
        case 0x1447dcu: goto label_1447dc;
        case 0x1447e0u: goto label_1447e0;
        case 0x1447e4u: goto label_1447e4;
        case 0x1447e8u: goto label_1447e8;
        case 0x1447ecu: goto label_1447ec;
        case 0x1447f0u: goto label_1447f0;
        case 0x1447f4u: goto label_1447f4;
        case 0x1447f8u: goto label_1447f8;
        case 0x1447fcu: goto label_1447fc;
        case 0x144800u: goto label_144800;
        case 0x144804u: goto label_144804;
        case 0x144808u: goto label_144808;
        case 0x14480cu: goto label_14480c;
        case 0x144810u: goto label_144810;
        case 0x144814u: goto label_144814;
        case 0x144818u: goto label_144818;
        case 0x14481cu: goto label_14481c;
        case 0x144820u: goto label_144820;
        case 0x144824u: goto label_144824;
        case 0x144828u: goto label_144828;
        case 0x14482cu: goto label_14482c;
        case 0x144830u: goto label_144830;
        case 0x144834u: goto label_144834;
        case 0x144838u: goto label_144838;
        case 0x14483cu: goto label_14483c;
        case 0x144840u: goto label_144840;
        case 0x144844u: goto label_144844;
        case 0x144848u: goto label_144848;
        case 0x14484cu: goto label_14484c;
        case 0x144850u: goto label_144850;
        case 0x144854u: goto label_144854;
        case 0x144858u: goto label_144858;
        case 0x14485cu: goto label_14485c;
        case 0x144860u: goto label_144860;
        case 0x144864u: goto label_144864;
        case 0x144868u: goto label_144868;
        case 0x14486cu: goto label_14486c;
        case 0x144870u: goto label_144870;
        case 0x144874u: goto label_144874;
        case 0x144878u: goto label_144878;
        case 0x14487cu: goto label_14487c;
        case 0x144880u: goto label_144880;
        case 0x144884u: goto label_144884;
        case 0x144888u: goto label_144888;
        case 0x14488cu: goto label_14488c;
        case 0x144890u: goto label_144890;
        case 0x144894u: goto label_144894;
        case 0x144898u: goto label_144898;
        case 0x14489cu: goto label_14489c;
        case 0x1448a0u: goto label_1448a0;
        case 0x1448a4u: goto label_1448a4;
        case 0x1448a8u: goto label_1448a8;
        case 0x1448acu: goto label_1448ac;
        case 0x1448b0u: goto label_1448b0;
        case 0x1448b4u: goto label_1448b4;
        case 0x1448b8u: goto label_1448b8;
        case 0x1448bcu: goto label_1448bc;
        case 0x1448c0u: goto label_1448c0;
        case 0x1448c4u: goto label_1448c4;
        default: break;
    }

    ctx->pc = 0x1446d0u;

label_1446d0:
    // 0x1446d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1446d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1446d4:
    // 0x1446d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1446d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1446d8:
    // 0x1446d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1446d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1446dc:
    // 0x1446dc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1446dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_1446e0:
    // 0x1446e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1446e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1446e4:
    // 0x1446e4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1446e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1446e8:
    // 0x1446e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1446e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1446ec:
    // 0x1446ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1446ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1446f0:
    // 0x1446f0: 0xc10ac08  jal         func_42B020
label_1446f4:
    if (ctx->pc == 0x1446F4u) {
        ctx->pc = 0x1446F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446F0u;
        // 0x1446f4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446F8u;
        goto label_1446f8;
    }
    ctx->pc = 0x1446F0u;
    SET_GPR_U32(ctx, 31, 0x1446F8u);
    ctx->pc = 0x1446F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446F0u;
    // 0x1446f4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B020u, 0x1446F0u, 0x1446F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446F8u;
label_1446f8:
    // 0x1446f8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1446f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1446fc:
    // 0x1446fc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1446fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_144700:
    // 0x144700: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x144700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_144704:
    // 0x144704: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x144704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_144708:
    // 0x144708: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x144708u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_14470c:
    // 0x14470c: 0x244b9be0  addiu       $t3, $v0, -0x6420
    ctx->pc = 0x14470cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
label_144710:
    // 0x144710: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x144710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_144714:
    // 0x144714: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x144714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_144718:
    // 0x144718: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x144718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14471c:
    // 0x14471c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x14471cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144720:
    // 0x144720: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x144720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144724:
    // 0x144724: 0x2484d5f8  addiu       $a0, $a0, -0x2A08
    ctx->pc = 0x144724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956536));
label_144728:
    // 0x144728: 0x24a59be8  addiu       $a1, $a1, -0x6418
    ctx->pc = 0x144728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941672));
label_14472c:
    // 0x14472c: 0x24c69bf8  addiu       $a2, $a2, -0x6408
    ctx->pc = 0x14472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941688));
label_144730:
    // 0x144730: 0xc10ca28  jal         func_4328A0
label_144734:
    if (ctx->pc == 0x144734u) {
        ctx->pc = 0x144734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144730u;
        // 0x144734: 0x24e79c08  addiu       $a3, $a3, -0x63F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144738u;
        goto label_144738;
    }
    ctx->pc = 0x144730u;
    SET_GPR_U32(ctx, 31, 0x144738u);
    ctx->pc = 0x144734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144730u;
    // 0x144734: 0x24e79c08  addiu       $a3, $a3, -0x63F8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x144730u, 0x144738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144738u;
label_144738:
    // 0x144738: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x144738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_14473c:
    // 0x14473c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14473cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_144740:
    // 0x144740: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x144740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_144744:
    // 0x144744: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x144744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_144748:
    // 0x144748: 0x24e7b6e8  addiu       $a3, $a3, -0x4918
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948584));
label_14474c:
    // 0x14474c: 0x24a59c18  addiu       $a1, $a1, -0x63E8
    ctx->pc = 0x14474cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941720));
label_144750:
    // 0x144750: 0x2484d6f8  addiu       $a0, $a0, -0x2908
    ctx->pc = 0x144750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956792));
label_144754:
    // 0x144754: 0xc10ca28  jal         func_4328A0
label_144758:
    if (ctx->pc == 0x144758u) {
        ctx->pc = 0x144758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144754u;
        // 0x144758: 0x24c6b6e0  addiu       $a2, $a2, -0x4920 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14475Cu;
        goto label_14475c;
    }
    ctx->pc = 0x144754u;
    SET_GPR_U32(ctx, 31, 0x14475Cu);
    ctx->pc = 0x144758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144754u;
    // 0x144758: 0x24c6b6e0  addiu       $a2, $a2, -0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x144754u, 0x14475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14475Cu;
label_14475c:
    // 0x14475c: 0xc05837e  jal         func_160DF8
label_144760:
    if (ctx->pc == 0x144760u) {
        ctx->pc = 0x144760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14475Cu;
        // 0x144760: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144764u;
        goto label_144764;
    }
    ctx->pc = 0x14475Cu;
    SET_GPR_U32(ctx, 31, 0x144764u);
    ctx->pc = 0x144760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14475Cu;
    // 0x144760: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DF8u, 0x14475Cu, 0x144764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144764u;
label_144764:
    // 0x144764: 0x8e6447c4  lw          $a0, 0x47C4($s3)
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_144768:
    // 0x144768: 0x26525560  addiu       $s2, $s2, 0x5560
    ctx->pc = 0x144768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21856));
label_14476c:
    // 0x14476c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14476cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_144770:
    // 0x144770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x144770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144774:
    // 0x144774: 0x24a59c28  addiu       $a1, $a1, -0x63D8
    ctx->pc = 0x144774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941736));
label_144778:
    // 0x144778: 0xc1036ee  jal         func_40DBB8
label_14477c:
    if (ctx->pc == 0x14477Cu) {
        ctx->pc = 0x14477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144778u;
        // 0x14477c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144780u;
        goto label_144780;
    }
    ctx->pc = 0x144778u;
    SET_GPR_U32(ctx, 31, 0x144780u);
    ctx->pc = 0x14477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144778u;
    // 0x14477c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DBB8u, 0x144778u, 0x144780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144780u;
label_144780:
    // 0x144780: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x144780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_144784:
    // 0x144784: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x144784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_144788:
    // 0x144788: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14478c:
    // 0x14478c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x14478cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_144790:
    // 0x144790: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x144790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_144794:
    // 0x144794: 0x60f809  jalr        $v1
label_144798:
    if (ctx->pc == 0x144798u) {
        ctx->pc = 0x144798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144794u;
        // 0x144798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14479Cu;
        goto label_14479c;
    }
    ctx->pc = 0x144794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14479Cu);
        ctx->pc = 0x144798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144794u;
        // 0x144798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144794u, 0x14479Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14479Cu;
label_14479c:
    // 0x14479c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x14479cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_1447a0:
    // 0x1447a0: 0xc072af0  jal         func_1CABC0
label_1447a4:
    if (ctx->pc == 0x1447A4u) {
        ctx->pc = 0x1447A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447A0u;
        // 0x1447a4: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447A8u;
        goto label_1447a8;
    }
    ctx->pc = 0x1447A0u;
    SET_GPR_U32(ctx, 31, 0x1447A8u);
    ctx->pc = 0x1447A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447A0u;
    // 0x1447a4: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CABC0u, 0x1447A0u, 0x1447A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447A8u;
label_1447a8:
    // 0x1447a8: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x1447a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1447ac:
    // 0x1447ac: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x1447acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_1447b0:
    // 0x1447b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1447b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1447b4:
    // 0x1447b4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1447b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1447b8:
    // 0x1447b8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1447b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1447bc:
    // 0x1447bc: 0x60f809  jalr        $v1
label_1447c0:
    if (ctx->pc == 0x1447C0u) {
        ctx->pc = 0x1447C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447BCu;
        // 0x1447c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447C4u;
        goto label_1447c4;
    }
    ctx->pc = 0x1447BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1447C4u);
        ctx->pc = 0x1447C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447BCu;
        // 0x1447c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447BCu, 0x1447C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1447C4u;
label_1447c4:
    // 0x1447c4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1447c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1447c8:
    // 0x1447c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1447c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1447cc:
    // 0x1447cc: 0xc10aa4e  jal         func_42A938
label_1447d0:
    if (ctx->pc == 0x1447D0u) {
        ctx->pc = 0x1447D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447CCu;
        // 0x1447d0: 0x24849c30  addiu       $a0, $a0, -0x63D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447D4u;
        goto label_1447d4;
    }
    ctx->pc = 0x1447CCu;
    SET_GPR_U32(ctx, 31, 0x1447D4u);
    ctx->pc = 0x1447D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447CCu;
    // 0x1447d0: 0x24849c30  addiu       $a0, $a0, -0x63D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A938u, 0x1447CCu, 0x1447D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447D4u;
label_1447d4:
    // 0x1447d4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1447d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1447d8:
    // 0x1447d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1447d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1447dc:
    // 0x1447dc: 0xc10aa4e  jal         func_42A938
label_1447e0:
    if (ctx->pc == 0x1447E0u) {
        ctx->pc = 0x1447E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447DCu;
        // 0x1447e0: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447E4u;
        goto label_1447e4;
    }
    ctx->pc = 0x1447DCu;
    SET_GPR_U32(ctx, 31, 0x1447E4u);
    ctx->pc = 0x1447E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447DCu;
    // 0x1447e0: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A938u, 0x1447DCu, 0x1447E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447E4u;
label_1447e4:
    // 0x1447e4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1447e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1447e8:
    // 0x1447e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1447e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1447ec:
    // 0x1447ec: 0xc10aa4e  jal         func_42A938
label_1447f0:
    if (ctx->pc == 0x1447F0u) {
        ctx->pc = 0x1447F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447ECu;
        // 0x1447f0: 0x24849c40  addiu       $a0, $a0, -0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447F4u;
        goto label_1447f4;
    }
    ctx->pc = 0x1447ECu;
    SET_GPR_U32(ctx, 31, 0x1447F4u);
    ctx->pc = 0x1447F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447ECu;
    // 0x1447f0: 0x24849c40  addiu       $a0, $a0, -0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A938u, 0x1447ECu, 0x1447F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447F4u;
label_1447f4:
    // 0x1447f4: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x1447f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1447f8:
    // 0x1447f8: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x1447f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_1447fc:
    // 0x1447fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1447fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_144800:
    // 0x144800: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x144800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_144804:
    // 0x144804: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_144808:
    // 0x144808: 0x60f809  jalr        $v1
label_14480c:
    if (ctx->pc == 0x14480Cu) {
        ctx->pc = 0x14480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144808u;
        // 0x14480c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144810u;
        goto label_144810;
    }
    ctx->pc = 0x144808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144810u);
        ctx->pc = 0x14480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144808u;
        // 0x14480c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144808u, 0x144810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144810u;
label_144810:
    // 0x144810: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_144814:
    // 0x144814: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x144814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_144818:
    // 0x144818: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14481c:
    // 0x14481c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x14481cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_144820:
    // 0x144820: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x144820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_144824:
    // 0x144824: 0x60f809  jalr        $v1
label_144828:
    if (ctx->pc == 0x144828u) {
        ctx->pc = 0x144828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144824u;
        // 0x144828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14482Cu;
        goto label_14482c;
    }
    ctx->pc = 0x144824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14482Cu);
        ctx->pc = 0x144828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144824u;
        // 0x144828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144824u, 0x14482Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14482Cu;
label_14482c:
    // 0x14482c: 0x8e6447c4  lw          $a0, 0x47C4($s3)
    ctx->pc = 0x14482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_144830:
    // 0x144830: 0xc103d6e  jal         func_40F5B8
label_144834:
    if (ctx->pc == 0x144834u) {
        ctx->pc = 0x144834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144830u;
        // 0x144834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144838u;
        goto label_144838;
    }
    ctx->pc = 0x144830u;
    SET_GPR_U32(ctx, 31, 0x144838u);
    ctx->pc = 0x144834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144830u;
    // 0x144834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F5B8u, 0x144830u, 0x144838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144838u;
label_144838:
    // 0x144838: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x144838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_14483c:
    // 0x14483c: 0xc05797a  jal         func_15E5E8
label_144840:
    if (ctx->pc == 0x144840u) {
        ctx->pc = 0x144840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14483Cu;
        // 0x144840: 0x24845d90  addiu       $a0, $a0, 0x5D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144844u;
        goto label_144844;
    }
    ctx->pc = 0x14483Cu;
    SET_GPR_U32(ctx, 31, 0x144844u);
    ctx->pc = 0x144840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14483Cu;
    // 0x144840: 0x24845d90  addiu       $a0, $a0, 0x5D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x14483Cu, 0x144844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144844u;
label_144844:
    // 0x144844: 0xc05689c  jal         func_15A270
label_144848:
    if (ctx->pc == 0x144848u) {
        ctx->pc = 0x144848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144844u;
        // 0x144848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14484Cu;
        goto label_14484c;
    }
    ctx->pc = 0x144844u;
    SET_GPR_U32(ctx, 31, 0x14484Cu);
    ctx->pc = 0x144848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144844u;
    // 0x144848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A270u, 0x144844u, 0x14484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14484Cu;
label_14484c:
    // 0x14484c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14484cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_144850:
    // 0x144850: 0xc05797a  jal         func_15E5E8
label_144854:
    if (ctx->pc == 0x144854u) {
        ctx->pc = 0x144854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144850u;
        // 0x144854: 0x24845810  addiu       $a0, $a0, 0x5810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144858u;
        goto label_144858;
    }
    ctx->pc = 0x144850u;
    SET_GPR_U32(ctx, 31, 0x144858u);
    ctx->pc = 0x144854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144850u;
    // 0x144854: 0x24845810  addiu       $a0, $a0, 0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x144850u, 0x144858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144858u;
label_144858:
    // 0x144858: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_14485c:
    // 0x14485c: 0x8c655024  lw          $a1, 0x5024($v1)
    ctx->pc = 0x14485cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20516)));
label_144860:
    // 0x144860: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x144860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_144864:
    // 0x144864: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x144864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_144868:
    // 0x144868: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x144868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_14486c:
    // 0x14486c: 0x60f809  jalr        $v1
label_144870:
    if (ctx->pc == 0x144870u) {
        ctx->pc = 0x144870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14486Cu;
        // 0x144870: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144874u;
        goto label_144874;
    }
    ctx->pc = 0x14486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144874u);
        ctx->pc = 0x144870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14486Cu;
        // 0x144870: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14486Cu, 0x144874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144874u;
label_144874:
    // 0x144874: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x144874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_144878:
    // 0x144878: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x144878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14487c:
    // 0x14487c: 0xc1062f2  jal         func_418BC8
label_144880:
    if (ctx->pc == 0x144880u) {
        ctx->pc = 0x144880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14487Cu;
        // 0x144880: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144884u;
        goto label_144884;
    }
    ctx->pc = 0x14487Cu;
    SET_GPR_U32(ctx, 31, 0x144884u);
    ctx->pc = 0x144880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14487Cu;
    // 0x144880: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418BC8u, 0x14487Cu, 0x144884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144884u;
label_144884:
    // 0x144884: 0xc055e18  jal         func_157860
label_144888:
    if (ctx->pc == 0x144888u) {
        ctx->pc = 0x144888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144884u;
        // 0x144888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14488Cu;
        goto label_14488c;
    }
    ctx->pc = 0x144884u;
    SET_GPR_U32(ctx, 31, 0x14488Cu);
    ctx->pc = 0x144888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144884u;
    // 0x144888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157860u, 0x144884u, 0x14488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14488Cu;
label_14488c:
    // 0x14488c: 0xc0579fa  jal         func_15E7E8
label_144890:
    if (ctx->pc == 0x144890u) {
        ctx->pc = 0x144894u;
        goto label_144894;
    }
    ctx->pc = 0x14488Cu;
    SET_GPR_U32(ctx, 31, 0x144894u);
    ctx->pc = 0x15E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E7E8u, 0x14488Cu, 0x144894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144894u;
label_144894:
    // 0x144894: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x144894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_144898:
    // 0x144898: 0xc05797a  jal         func_15E5E8
label_14489c:
    if (ctx->pc == 0x14489Cu) {
        ctx->pc = 0x14489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144898u;
        // 0x14489c: 0x248457e0  addiu       $a0, $a0, 0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448A0u;
        goto label_1448a0;
    }
    ctx->pc = 0x144898u;
    SET_GPR_U32(ctx, 31, 0x1448A0u);
    ctx->pc = 0x14489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144898u;
    // 0x14489c: 0x248457e0  addiu       $a0, $a0, 0x57E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x144898u, 0x1448A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448A0u;
label_1448a0:
    // 0x1448a0: 0xc0579ae  jal         func_15E6B8
label_1448a4:
    if (ctx->pc == 0x1448A4u) {
        ctx->pc = 0x1448A8u;
        goto label_1448a8;
    }
    ctx->pc = 0x1448A0u;
    SET_GPR_U32(ctx, 31, 0x1448A8u);
    ctx->pc = 0x15E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E6B8u, 0x1448A0u, 0x1448A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448A8u;
label_1448a8:
    // 0x1448a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1448a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1448ac:
    // 0x1448ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1448acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1448b0:
    // 0x1448b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1448b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1448b4:
    // 0x1448b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1448b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1448b8:
    // 0x1448b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1448b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1448bc:
    // 0x1448bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1448bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1448c0:
    // 0x1448c0: 0x3e00008  jr          $ra
label_1448c4:
    if (ctx->pc == 0x1448C4u) {
        ctx->pc = 0x1448C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448C0u;
        // 0x1448c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448C8u;
        goto label_fallthrough_0x1448c0;
    }
    ctx->pc = 0x1448C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1448C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448C0u;
        // 0x1448c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1448c0:
    ctx->pc = 0x1448C8u;
}

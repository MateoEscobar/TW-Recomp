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

// Function: sub_00399718
// Address: 0x399718 - 0x3998f0
void sub_00399718_0x399718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399718_0x399718");
#endif

    switch (ctx->pc) {
        case 0x399718u: goto label_399718;
        case 0x39971cu: goto label_39971c;
        case 0x399720u: goto label_399720;
        case 0x399724u: goto label_399724;
        case 0x399728u: goto label_399728;
        case 0x39972cu: goto label_39972c;
        case 0x399730u: goto label_399730;
        case 0x399734u: goto label_399734;
        case 0x399738u: goto label_399738;
        case 0x39973cu: goto label_39973c;
        case 0x399740u: goto label_399740;
        case 0x399744u: goto label_399744;
        case 0x399748u: goto label_399748;
        case 0x39974cu: goto label_39974c;
        case 0x399750u: goto label_399750;
        case 0x399754u: goto label_399754;
        case 0x399758u: goto label_399758;
        case 0x39975cu: goto label_39975c;
        case 0x399760u: goto label_399760;
        case 0x399764u: goto label_399764;
        case 0x399768u: goto label_399768;
        case 0x39976cu: goto label_39976c;
        case 0x399770u: goto label_399770;
        case 0x399774u: goto label_399774;
        case 0x399778u: goto label_399778;
        case 0x39977cu: goto label_39977c;
        case 0x399780u: goto label_399780;
        case 0x399784u: goto label_399784;
        case 0x399788u: goto label_399788;
        case 0x39978cu: goto label_39978c;
        case 0x399790u: goto label_399790;
        case 0x399794u: goto label_399794;
        case 0x399798u: goto label_399798;
        case 0x39979cu: goto label_39979c;
        case 0x3997a0u: goto label_3997a0;
        case 0x3997a4u: goto label_3997a4;
        case 0x3997a8u: goto label_3997a8;
        case 0x3997acu: goto label_3997ac;
        case 0x3997b0u: goto label_3997b0;
        case 0x3997b4u: goto label_3997b4;
        case 0x3997b8u: goto label_3997b8;
        case 0x3997bcu: goto label_3997bc;
        case 0x3997c0u: goto label_3997c0;
        case 0x3997c4u: goto label_3997c4;
        case 0x3997c8u: goto label_3997c8;
        case 0x3997ccu: goto label_3997cc;
        case 0x3997d0u: goto label_3997d0;
        case 0x3997d4u: goto label_3997d4;
        case 0x3997d8u: goto label_3997d8;
        case 0x3997dcu: goto label_3997dc;
        case 0x3997e0u: goto label_3997e0;
        case 0x3997e4u: goto label_3997e4;
        case 0x3997e8u: goto label_3997e8;
        case 0x3997ecu: goto label_3997ec;
        case 0x3997f0u: goto label_3997f0;
        case 0x3997f4u: goto label_3997f4;
        case 0x3997f8u: goto label_3997f8;
        case 0x3997fcu: goto label_3997fc;
        case 0x399800u: goto label_399800;
        case 0x399804u: goto label_399804;
        case 0x399808u: goto label_399808;
        case 0x39980cu: goto label_39980c;
        case 0x399810u: goto label_399810;
        case 0x399814u: goto label_399814;
        case 0x399818u: goto label_399818;
        case 0x39981cu: goto label_39981c;
        case 0x399820u: goto label_399820;
        case 0x399824u: goto label_399824;
        case 0x399828u: goto label_399828;
        case 0x39982cu: goto label_39982c;
        case 0x399830u: goto label_399830;
        case 0x399834u: goto label_399834;
        case 0x399838u: goto label_399838;
        case 0x39983cu: goto label_39983c;
        case 0x399840u: goto label_399840;
        case 0x399844u: goto label_399844;
        case 0x399848u: goto label_399848;
        case 0x39984cu: goto label_39984c;
        case 0x399850u: goto label_399850;
        case 0x399854u: goto label_399854;
        case 0x399858u: goto label_399858;
        case 0x39985cu: goto label_39985c;
        case 0x399860u: goto label_399860;
        case 0x399864u: goto label_399864;
        case 0x399868u: goto label_399868;
        case 0x39986cu: goto label_39986c;
        case 0x399870u: goto label_399870;
        case 0x399874u: goto label_399874;
        case 0x399878u: goto label_399878;
        case 0x39987cu: goto label_39987c;
        case 0x399880u: goto label_399880;
        case 0x399884u: goto label_399884;
        case 0x399888u: goto label_399888;
        case 0x39988cu: goto label_39988c;
        case 0x399890u: goto label_399890;
        case 0x399894u: goto label_399894;
        case 0x399898u: goto label_399898;
        case 0x39989cu: goto label_39989c;
        case 0x3998a0u: goto label_3998a0;
        case 0x3998a4u: goto label_3998a4;
        case 0x3998a8u: goto label_3998a8;
        case 0x3998acu: goto label_3998ac;
        case 0x3998b0u: goto label_3998b0;
        case 0x3998b4u: goto label_3998b4;
        case 0x3998b8u: goto label_3998b8;
        case 0x3998bcu: goto label_3998bc;
        case 0x3998c0u: goto label_3998c0;
        case 0x3998c4u: goto label_3998c4;
        case 0x3998c8u: goto label_3998c8;
        case 0x3998ccu: goto label_3998cc;
        case 0x3998d0u: goto label_3998d0;
        case 0x3998d4u: goto label_3998d4;
        case 0x3998d8u: goto label_3998d8;
        case 0x3998dcu: goto label_3998dc;
        case 0x3998e0u: goto label_3998e0;
        case 0x3998e4u: goto label_3998e4;
        case 0x3998e8u: goto label_3998e8;
        case 0x3998ecu: goto label_3998ec;
        default: break;
    }

    ctx->pc = 0x399718u;

label_399718:
    // 0x399718: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x399718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39971c:
    // 0x39971c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_399720:
    // 0x399720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x399720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_399724:
    // 0x399724: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x399724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_399728:
    // 0x399728: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x399728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39972c:
    // 0x39972c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_399730:
    // 0x399730: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x399730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399734:
    // 0x399734: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x399734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_399738:
    // 0x399738: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x399738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_39973c:
    // 0x39973c: 0x60f809  jalr        $v1
label_399740:
    if (ctx->pc == 0x399740u) {
        ctx->pc = 0x399740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39973Cu;
        // 0x399740: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399744u;
        goto label_399744;
    }
    ctx->pc = 0x39973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x399744u);
        ctx->pc = 0x399740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39973Cu;
        // 0x399740: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39973Cu, 0x399744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399744u;
label_399744:
    // 0x399744: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x399744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_399748:
    // 0x399748: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_39974c:
    if (ctx->pc == 0x39974Cu) {
        ctx->pc = 0x39974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399748u;
        // 0x39974c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399750u;
        goto label_399750;
    }
    ctx->pc = 0x399748u;
    {
        const bool branch_taken_0x399748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399748u;
        // 0x39974c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399748) {
            ctx->pc = 0x3997F4u;
            goto label_3997f4;
        }
    }
    ctx->pc = 0x399750u;
label_399750:
    // 0x399750: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x399750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_399754:
    // 0x399754: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x399754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_399758:
    // 0x399758: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x399758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39975c:
    // 0x39975c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_399760:
    if (ctx->pc == 0x399760u) {
        ctx->pc = 0x399760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39975Cu;
        // 0x399760: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399764u;
        goto label_399764;
    }
    ctx->pc = 0x39975Cu;
    {
        const bool branch_taken_0x39975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39975c) {
            ctx->pc = 0x399760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39975Cu;
            // 0x399760: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3997F8u;
            goto label_3997f8;
        }
    }
    ctx->pc = 0x399764u;
label_399764:
    // 0x399764: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x399764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399768:
    // 0x399768: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x399768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39976c:
    // 0x39976c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_399770:
    // 0x399770: 0x40f809  jalr        $v0
label_399774:
    if (ctx->pc == 0x399774u) {
        ctx->pc = 0x399774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399770u;
        // 0x399774: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399778u;
        goto label_399778;
    }
    ctx->pc = 0x399770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399778u);
        ctx->pc = 0x399774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399770u;
        // 0x399774: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399770u, 0x399778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399778u;
label_399778:
    // 0x399778: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x399778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39977c:
    // 0x39977c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399780:
    // 0x399780: 0xc10c313  jal         func_430C4C
label_399784:
    if (ctx->pc == 0x399784u) {
        ctx->pc = 0x399784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399780u;
        // 0x399784: 0x24a51230  addiu       $a1, $a1, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399788u;
        goto label_399788;
    }
    ctx->pc = 0x399780u;
    SET_GPR_U32(ctx, 31, 0x399788u);
    ctx->pc = 0x399784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399780u;
    // 0x399784: 0x24a51230  addiu       $a1, $a1, 0x1230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x399780u, 0x399788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399788u;
label_399788:
    // 0x399788: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_39978c:
    if (ctx->pc == 0x39978Cu) {
        ctx->pc = 0x39978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399788u;
        // 0x39978c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399790u;
        goto label_399790;
    }
    ctx->pc = 0x399788u;
    {
        const bool branch_taken_0x399788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399788u;
        // 0x39978c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399788) {
            ctx->pc = 0x3997A0u;
            goto label_3997a0;
        }
    }
    ctx->pc = 0x399790u;
label_399790:
    // 0x399790: 0xc0e858c  jal         func_3A1630
label_399794:
    if (ctx->pc == 0x399794u) {
        ctx->pc = 0x399794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399790u;
        // 0x399794: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399798u;
        goto label_399798;
    }
    ctx->pc = 0x399790u;
    SET_GPR_U32(ctx, 31, 0x399798u);
    ctx->pc = 0x399794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399790u;
    // 0x399794: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x399790u, 0x399798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399798u;
label_399798:
    // 0x399798: 0x10000004  b           . + 4 + (0x4 << 2)
label_39979c:
    if (ctx->pc == 0x39979Cu) {
        ctx->pc = 0x39979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399798u;
        // 0x39979c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997A0u;
        goto label_3997a0;
    }
    ctx->pc = 0x399798u;
    {
        const bool branch_taken_0x399798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399798u;
        // 0x39979c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399798) {
            ctx->pc = 0x3997ACu;
            goto label_3997ac;
        }
    }
    ctx->pc = 0x3997A0u;
label_3997a0:
    // 0x3997a0: 0xc0e858c  jal         func_3A1630
label_3997a4:
    if (ctx->pc == 0x3997A4u) {
        ctx->pc = 0x3997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997A0u;
        // 0x3997a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997A8u;
        goto label_3997a8;
    }
    ctx->pc = 0x3997A0u;
    SET_GPR_U32(ctx, 31, 0x3997A8u);
    ctx->pc = 0x3997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997A0u;
    // 0x3997a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3997A0u, 0x3997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997A8u;
label_3997a8:
    // 0x3997a8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3997ac:
    // 0x3997ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3997acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3997b0:
    // 0x3997b0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3997b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3997b4:
    // 0x3997b4: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x3997b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
label_3997b8:
    // 0x3997b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3997b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3997bc:
    // 0x3997bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3997bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3997c0:
    // 0x3997c0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3997c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3997c4:
    // 0x3997c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3997c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_3997c8:
    // 0x3997c8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3997c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3997cc:
    // 0x3997cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3997ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3997d0:
    // 0x3997d0: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x3997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_3997d4:
    // 0x3997d4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3997d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3997d8:
    // 0x3997d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3997dc:
    if (ctx->pc == 0x3997DCu) {
        ctx->pc = 0x3997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997D8u;
        // 0x3997dc: 0xae240054  sw          $a0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997E0u;
        goto label_3997e0;
    }
    ctx->pc = 0x3997D8u;
    {
        const bool branch_taken_0x3997d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997D8u;
        // 0x3997dc: 0xae240054  sw          $a0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997d8) {
            ctx->pc = 0x3997E8u;
            goto label_3997e8;
        }
    }
    ctx->pc = 0x3997E0u;
label_3997e0:
    // 0x3997e0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3997e4:
    if (ctx->pc == 0x3997E4u) {
        ctx->pc = 0x3997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997E0u;
        // 0x3997e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997E8u;
        goto label_3997e8;
    }
    ctx->pc = 0x3997E0u;
    {
        const bool branch_taken_0x3997e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997E0u;
        // 0x3997e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997e0) {
            ctx->pc = 0x3998DCu;
            goto label_3998dc;
        }
    }
    ctx->pc = 0x3997E8u;
label_3997e8:
    // 0x3997e8: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x3997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_3997ec:
    // 0x3997ec: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
label_3997f0:
    if (ctx->pc == 0x3997F0u) {
        ctx->pc = 0x3997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997ECu;
        // 0x3997f0: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997F4u;
        goto label_3997f4;
    }
    ctx->pc = 0x3997ECu;
    {
        const bool branch_taken_0x3997ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3997ec) {
            ctx->pc = 0x3997F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3997ECu;
            // 0x3997f0: 0xae2300cc  sw          $v1, 0xCC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3997F4u;
            goto label_3997f4;
        }
    }
    ctx->pc = 0x3997F4u;
label_3997f4:
    // 0x3997f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3997f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3997f8:
    // 0x3997f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3997f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3997fc:
    // 0x3997fc: 0x8ca247c4  lw          $v0, 0x47C4($a1)
    ctx->pc = 0x3997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18372)));
label_399800:
    // 0x399800: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x399800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_399804:
    // 0x399804: 0xc0e87c0  jal         func_3A1F00
label_399808:
    if (ctx->pc == 0x399808u) {
        ctx->pc = 0x399808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399804u;
        // 0x399808: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39980Cu;
        goto label_39980c;
    }
    ctx->pc = 0x399804u;
    SET_GPR_U32(ctx, 31, 0x39980Cu);
    ctx->pc = 0x399808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399804u;
    // 0x399808: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x399804u, 0x39980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39980Cu;
label_39980c:
    // 0x39980c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x39980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_399810:
    // 0x399810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x399810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_399814:
    // 0x399814: 0x0  nop
    ctx->pc = 0x399814u;
    // NOP
label_399818:
    // 0x399818: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x399818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39981c:
    // 0x39981c: 0x0  nop
    ctx->pc = 0x39981cu;
    // NOP
label_399820:
    // 0x399820: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_399824:
    if (ctx->pc == 0x399824u) {
        ctx->pc = 0x399824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399820u;
        // 0x399824: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x399828u;
        goto label_399828;
    }
    ctx->pc = 0x399820u;
    {
        const bool branch_taken_0x399820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x399824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399820u;
        // 0x399824: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x399820) {
            ctx->pc = 0x3998D8u;
            goto label_3998d8;
        }
    }
    ctx->pc = 0x399828u;
label_399828:
    // 0x399828: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x399828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39982c:
    // 0x39982c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x39982cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_399830:
    // 0x399830: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x399830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_399834:
    // 0x399834: 0x0  nop
    ctx->pc = 0x399834u;
    // NOP
label_399838:
    // 0x399838: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x399838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39983c:
    // 0x39983c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x39983cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_399840:
    // 0x399840: 0x0  nop
    ctx->pc = 0x399840u;
    // NOP
label_399844:
    // 0x399844: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_399848:
    if (ctx->pc == 0x399848u) {
        ctx->pc = 0x399848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399844u;
        // 0x399848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39984Cu;
        goto label_39984c;
    }
    ctx->pc = 0x399844u;
    {
        const bool branch_taken_0x399844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x399848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399844u;
        // 0x399848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399844) {
            ctx->pc = 0x3998DCu;
            goto label_3998dc;
        }
    }
    ctx->pc = 0x39984Cu;
label_39984c:
    // 0x39984c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399850:
    // 0x399850: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x399850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_399854:
    // 0x399854: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x399854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_399858:
    // 0x399858: 0x40f809  jalr        $v0
label_39985c:
    if (ctx->pc == 0x39985Cu) {
        ctx->pc = 0x39985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399858u;
        // 0x39985c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399860u;
        goto label_399860;
    }
    ctx->pc = 0x399858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399860u);
        ctx->pc = 0x39985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399858u;
        // 0x39985c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399858u, 0x399860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399860u;
label_399860:
    // 0x399860: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x399860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_399864:
    // 0x399864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x399864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399868:
    // 0x399868: 0xc10d74c  jal         func_435D30
label_39986c:
    if (ctx->pc == 0x39986Cu) {
        ctx->pc = 0x39986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399868u;
        // 0x39986c: 0x24a51240  addiu       $a1, $a1, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399870u;
        goto label_399870;
    }
    ctx->pc = 0x399868u;
    SET_GPR_U32(ctx, 31, 0x399870u);
    ctx->pc = 0x39986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399868u;
    // 0x39986c: 0x24a51240  addiu       $a1, $a1, 0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x399868u, 0x399870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399870u;
label_399870:
    // 0x399870: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_399874:
    if (ctx->pc == 0x399874u) {
        ctx->pc = 0x399874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399870u;
        // 0x399874: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399878u;
        goto label_399878;
    }
    ctx->pc = 0x399870u;
    {
        const bool branch_taken_0x399870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399870u;
        // 0x399874: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399870) {
            ctx->pc = 0x3998B8u;
            goto label_3998b8;
        }
    }
    ctx->pc = 0x399878u;
label_399878:
    // 0x399878: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x399878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39987c:
    // 0x39987c: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x39987cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_399880:
    // 0x399880: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x399880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_399884:
    // 0x399884: 0x60f809  jalr        $v1
label_399888:
    if (ctx->pc == 0x399888u) {
        ctx->pc = 0x399888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399884u;
        // 0x399888: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39988Cu;
        goto label_39988c;
    }
    ctx->pc = 0x399884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39988Cu);
        ctx->pc = 0x399888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399884u;
        // 0x399888: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399884u, 0x39988Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39988Cu;
label_39988c:
    // 0x39988c: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x39988cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_399890:
    // 0x399890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x399890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_399894:
    // 0x399894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x399894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_399898:
    // 0x399898: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x399898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39989c:
    // 0x39989c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x39989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3998a0:
    // 0x3998a0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x3998a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3998a4:
    // 0x3998a4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x3998a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_3998a8:
    // 0x3998a8: 0x60f809  jalr        $v1
label_3998ac:
    if (ctx->pc == 0x3998ACu) {
        ctx->pc = 0x3998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998A8u;
        // 0x3998ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998B0u;
        goto label_3998b0;
    }
    ctx->pc = 0x3998A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3998B0u);
        ctx->pc = 0x3998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998A8u;
        // 0x3998ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3998A8u, 0x3998B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3998B0u;
label_3998b0:
    // 0x3998b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3998b4:
    if (ctx->pc == 0x3998B4u) {
        ctx->pc = 0x3998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998B0u;
        // 0x3998b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998B8u;
        goto label_3998b8;
    }
    ctx->pc = 0x3998B0u;
    {
        const bool branch_taken_0x3998b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998B0u;
        // 0x3998b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3998b0) {
            ctx->pc = 0x3998DCu;
            goto label_3998dc;
        }
    }
    ctx->pc = 0x3998B8u;
label_3998b8:
    // 0x3998b8: 0xc0e8b48  jal         func_3A2D20
label_3998bc:
    if (ctx->pc == 0x3998BCu) {
        ctx->pc = 0x3998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998B8u;
        // 0x3998bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998C0u;
        goto label_3998c0;
    }
    ctx->pc = 0x3998B8u;
    SET_GPR_U32(ctx, 31, 0x3998C0u);
    ctx->pc = 0x3998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998B8u;
    // 0x3998bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3998B8u, 0x3998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998C0u;
label_3998c0:
    // 0x3998c0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3998c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3998c4:
    // 0x3998c4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x3998c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3998c8:
    // 0x3998c8: 0xc0e8b80  jal         func_3A2E00
label_3998cc:
    if (ctx->pc == 0x3998CCu) {
        ctx->pc = 0x3998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998C8u;
        // 0x3998cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998D0u;
        goto label_3998d0;
    }
    ctx->pc = 0x3998C8u;
    SET_GPR_U32(ctx, 31, 0x3998D0u);
    ctx->pc = 0x3998CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998C8u;
    // 0x3998cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3998C8u, 0x3998D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998D0u;
label_3998d0:
    // 0x3998d0: 0xc0e8b50  jal         func_3A2D40
label_3998d4:
    if (ctx->pc == 0x3998D4u) {
        ctx->pc = 0x3998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998D0u;
        // 0x3998d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998D8u;
        goto label_3998d8;
    }
    ctx->pc = 0x3998D0u;
    SET_GPR_U32(ctx, 31, 0x3998D8u);
    ctx->pc = 0x3998D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998D0u;
    // 0x3998d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3998D0u, 0x3998D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998D8u;
label_3998d8:
    // 0x3998d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3998dc:
    // 0x3998dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3998dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3998e0:
    // 0x3998e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3998e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3998e4:
    // 0x3998e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3998e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3998e8:
    // 0x3998e8: 0x3e00008  jr          $ra
label_3998ec:
    if (ctx->pc == 0x3998ECu) {
        ctx->pc = 0x3998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998E8u;
        // 0x3998ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998F0u;
        goto label_fallthrough_0x3998e8;
    }
    ctx->pc = 0x3998E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998E8u;
        // 0x3998ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3998E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3998e8:
    ctx->pc = 0x3998F0u;
}

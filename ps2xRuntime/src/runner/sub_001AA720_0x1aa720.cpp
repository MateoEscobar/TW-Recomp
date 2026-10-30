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

// Function: sub_001AA720
// Address: 0x1aa720 - 0x1aa950
void sub_001AA720_0x1aa720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA720_0x1aa720");
#endif

    switch (ctx->pc) {
        case 0x1aa784u: goto label_1aa784;
        case 0x1aa790u: goto label_1aa790;
        case 0x1aa7acu: goto label_1aa7ac;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa80cu: goto label_1aa80c;
        case 0x1aa81cu: goto label_1aa81c;
        case 0x1aa82cu: goto label_1aa82c;
        case 0x1aa838u: goto label_1aa838;
        case 0x1aa848u: goto label_1aa848;
        case 0x1aa854u: goto label_1aa854;
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8e4u: goto label_1aa8e4;
        case 0x1aa90cu: goto label_1aa90c;
        case 0x1aa920u: goto label_1aa920;
        default: break;
    }

    ctx->pc = 0x1aa720u;

    // 0x1aa720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1aa724: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1aa724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1aa728: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1aa728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1aa72c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa72cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa730: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1aa730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1aa734: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1aa734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1aa738: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1aa738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1aa73c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa740: 0x8e420a98  lw          $v0, 0xA98($s2)
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2712)));
    // 0x1aa744: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1AA744u;
    {
        const bool branch_taken_0x1aa744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA744u;
        // 0x1aa748: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa744) {
            ctx->pc = 0x1AA930u;
            goto label_1aa930;
        }
    }
    ctx->pc = 0x1AA74Cu;
    // 0x1aa74c: 0x6600069  bltz        $s3, . + 4 + (0x69 << 2)
    ctx->pc = 0x1AA74Cu;
    {
        const bool branch_taken_0x1aa74c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1AA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA74Cu;
        // 0x1aa750: 0x2a62000e  slti        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa74c) {
            ctx->pc = 0x1AA8F4u;
            goto label_1aa8f4;
        }
    }
    ctx->pc = 0x1AA754u;
    // 0x1aa754: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA754u;
    {
        const bool branch_taken_0x1aa754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA754u;
        // 0x1aa758: 0x26420450  addiu       $v0, $s2, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa754) {
            ctx->pc = 0x1AA770u;
            goto label_1aa770;
        }
    }
    ctx->pc = 0x1AA75Cu;
    // 0x1aa75c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1aa75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1aa760: 0x12620058  beq         $s3, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1AA760u;
    {
        const bool branch_taken_0x1aa760 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA760u;
        // 0x1aa764: 0x26420450  addiu       $v0, $s2, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa760) {
            ctx->pc = 0x1AA8C4u;
            goto label_1aa8c4;
        }
    }
    ctx->pc = 0x1AA768u;
    // 0x1aa768: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1AA768u;
    {
        const bool branch_taken_0x1aa768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA768u;
        // 0x1aa76c: 0x8c430434  lw          $v1, 0x434($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa768) {
            ctx->pc = 0x1AA8FCu;
            goto label_1aa8fc;
        }
    }
    ctx->pc = 0x1AA770u;
label_1aa770:
    // 0x1aa770: 0x8c500068  lw          $s0, 0x68($v0)
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1aa774: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA774u;
    {
        const bool branch_taken_0x1aa774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA774u;
        // 0x1aa778: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa774) {
            ctx->pc = 0x1AA798u;
            goto label_1aa798;
        }
    }
    ctx->pc = 0x1AA77Cu;
    // 0x1aa77c: 0xc06a88e  jal         func_1AA238
    ctx->pc = 0x1AA77Cu;
    SET_GPR_U32(ctx, 31, 0x1AA784u);
    ctx->pc = 0x1AA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA77Cu;
    // 0x1aa780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA238u, 0x1AA77Cu, 0x1AA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA784u;
label_1aa784:
    // 0x1aa784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa788: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1AA788u;
    SET_GPR_U32(ctx, 31, 0x1AA790u);
    ctx->pc = 0x1AA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA788u;
    // 0x1aa78c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1AA788u, 0x1AA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA790u;
label_1aa790:
    // 0x1aa790: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1AA790u;
    {
        const bool branch_taken_0x1aa790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa790) {
            ctx->pc = 0x1AA794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA790u;
            // 0x1aa794: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA924u;
            goto label_1aa924;
        }
    }
    ctx->pc = 0x1AA798u;
label_1aa798:
    // 0x1aa798: 0x8e220434  lw          $v0, 0x434($s1)
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x1aa79c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA79Cu;
    {
        const bool branch_taken_0x1aa79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA79Cu;
        // 0x1aa7a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa79c) {
            ctx->pc = 0x1AA7B0u;
            goto label_1aa7b0;
        }
    }
    ctx->pc = 0x1AA7A4u;
    // 0x1aa7a4: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1AA7A4u;
    SET_GPR_U32(ctx, 31, 0x1AA7ACu);
    ctx->pc = 0x1AA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7A4u;
    // 0x1aa7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1AA7A4u, 0x1AA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7ACu;
label_1aa7ac:
    // 0x1aa7ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aa7b0:
    // 0x1aa7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa7b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa7b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1aa7b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7c0: 0x2442d370  addiu       $v0, $v0, -0x2C90
    ctx->pc = 0x1aa7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x1aa7c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aa7c8: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1aa7cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa7d0: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1aa7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa7d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa7d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aa7dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aa7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7e0: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1aa7e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa7e4: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1AA7E4u;
    SET_GPR_U32(ctx, 31, 0x1AA7ECu);
    ctx->pc = 0x1AA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7E4u;
    // 0x1aa7e8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1AA7E4u, 0x1AA7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7ECu;
label_1aa7ec:
    // 0x1aa7ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa7f0: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AA7F0u;
    {
        const bool branch_taken_0x1aa7f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa7f0) {
            ctx->pc = 0x1AA824u;
            goto label_1aa824;
        }
    }
    ctx->pc = 0x1AA7F8u;
    // 0x1aa7f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1aa7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1aa7fc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA7FCu;
    {
        const bool branch_taken_0x1aa7fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa7fc) {
            ctx->pc = 0x1AA824u;
            goto label_1aa824;
        }
    }
    ctx->pc = 0x1AA804u;
    // 0x1aa804: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1AA804u;
    SET_GPR_U32(ctx, 31, 0x1AA80Cu);
    ctx->pc = 0x1AA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA804u;
    // 0x1aa808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1AA804u, 0x1AA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA80Cu;
label_1aa80c:
    // 0x1aa80c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1aa80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1aa810: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1aa814: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1AA814u;
    SET_GPR_U32(ctx, 31, 0x1AA81Cu);
    ctx->pc = 0x1AA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA814u;
    // 0x1aa818: 0x2484e990  addiu       $a0, $a0, -0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1AA814u, 0x1AA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA81Cu;
label_1aa81c:
    // 0x1aa81c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AA81Cu;
    {
        const bool branch_taken_0x1aa81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA81Cu;
        // 0x1aa820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa81c) {
            ctx->pc = 0x1AA858u;
            goto label_1aa858;
        }
    }
    ctx->pc = 0x1AA824u;
label_1aa824:
    // 0x1aa824: 0xc06a88e  jal         func_1AA238
    ctx->pc = 0x1AA824u;
    SET_GPR_U32(ctx, 31, 0x1AA82Cu);
    ctx->pc = 0x1AA828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA824u;
    // 0x1aa828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA238u, 0x1AA824u, 0x1AA82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA82Cu;
label_1aa82c:
    // 0x1aa82c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa830: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1AA830u;
    SET_GPR_U32(ctx, 31, 0x1AA838u);
    ctx->pc = 0x1AA834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA830u;
    // 0x1aa834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1AA830u, 0x1AA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA838u;
label_1aa838:
    // 0x1aa838: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1aa838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x1aa83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aa83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa840: 0xc06a88e  jal         func_1AA238
    ctx->pc = 0x1AA840u;
    SET_GPR_U32(ctx, 31, 0x1AA848u);
    ctx->pc = 0x1AA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA840u;
    // 0x1aa844: 0x2610e990  addiu       $s0, $s0, -0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA238u, 0x1AA840u, 0x1AA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA848u;
label_1aa848:
    // 0x1aa848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa84c: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1AA84Cu;
    SET_GPR_U32(ctx, 31, 0x1AA854u);
    ctx->pc = 0x1AA850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA84Cu;
    // 0x1aa850: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1AA84Cu, 0x1AA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA854u;
label_1aa854:
    // 0x1aa854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa858:
    // 0x1aa858: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x1AA858u;
    SET_GPR_U32(ctx, 31, 0x1AA860u);
    ctx->pc = 0x1AA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA858u;
    // 0x1aa85c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1AA858u, 0x1AA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA860u;
label_1aa860:
    // 0x1aa860: 0x26500890  addiu       $s0, $s2, 0x890
    ctx->pc = 0x1aa860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    // 0x1aa864: 0x2682d370  addiu       $v0, $s4, -0x2C90
    ctx->pc = 0x1aa864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955888));
    // 0x1aa868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa86c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa870: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1aa874: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1aa874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aa878: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1aa878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1aa87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa880: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aa884: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa888: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aa888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa88c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1aa88cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa890: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1aa890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa894: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1AA894u;
    SET_GPR_U32(ctx, 31, 0x1AA89Cu);
    ctx->pc = 0x1AA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA894u;
    // 0x1aa898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1AA894u, 0x1AA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA89Cu;
label_1aa89c:
    // 0x1aa89c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1AA89Cu;
    SET_GPR_U32(ctx, 31, 0x1AA8A4u);
    ctx->pc = 0x1AA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA89Cu;
    // 0x1aa8a0: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1AA89Cu, 0x1AA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8A4u;
label_1aa8a4:
    // 0x1aa8a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8a8: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1AA8A8u;
    SET_GPR_U32(ctx, 31, 0x1AA8B0u);
    ctx->pc = 0x1AA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8A8u;
    // 0x1aa8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1AA8A8u, 0x1AA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8B0u;
label_1aa8b0:
    // 0x1aa8b0: 0x8e420a9c  lw          $v0, 0xA9C($s2)
    ctx->pc = 0x1aa8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2716)));
    // 0x1aa8b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa8b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1aa8bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1AA8BCu;
    {
        const bool branch_taken_0x1aa8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8BCu;
        // 0x1aa8c0: 0xae430a9c  sw          $v1, 0xA9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8bc) {
            ctx->pc = 0x1AA920u;
            goto label_1aa920;
        }
    }
    ctx->pc = 0x1AA8C4u;
label_1aa8c4:
    // 0x1aa8c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1aa8c8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1aa8cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1AA8CCu;
    SET_GPR_U32(ctx, 31, 0x1AA8D4u);
    ctx->pc = 0x1AA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8CCu;
    // 0x1aa8d0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AA8CCu, 0x1AA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8D4u;
label_1aa8d4:
    // 0x1aa8d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA8D4u;
    {
        const bool branch_taken_0x1aa8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8D4u;
        // 0x1aa8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8d4) {
            ctx->pc = 0x1AA8F4u;
            goto label_1aa8f4;
        }
    }
    ctx->pc = 0x1AA8DCu;
    // 0x1aa8dc: 0xc087502  jal         func_21D408
    ctx->pc = 0x1AA8DCu;
    SET_GPR_U32(ctx, 31, 0x1AA8E4u);
    ctx->pc = 0x1AA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8DCu;
    // 0x1aa8e0: 0x26510450  addiu       $s1, $s2, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1AA8DCu, 0x1AA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8E4u;
label_1aa8e4:
    // 0x1aa8e4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1aa8e8: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x1aa8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
    // 0x1aa8ec: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA8ECu;
    {
        const bool branch_taken_0x1aa8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8ec) {
            ctx->pc = 0x1AA8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8ECu;
            // 0x1aa8f0: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA924u;
            goto label_1aa924;
        }
    }
    ctx->pc = 0x1AA8F4u;
label_1aa8f4:
    // 0x1aa8f4: 0x26420450  addiu       $v0, $s2, 0x450
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
    // 0x1aa8f8: 0x8c430434  lw          $v1, 0x434($v0)
    ctx->pc = 0x1aa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1076)));
label_1aa8fc:
    // 0x1aa8fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA8FCu;
    {
        const bool branch_taken_0x1aa8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8FCu;
        // 0x1aa900: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8fc) {
            ctx->pc = 0x1AA90Cu;
            goto label_1aa90c;
        }
    }
    ctx->pc = 0x1AA904u;
    // 0x1aa904: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1AA904u;
    SET_GPR_U32(ctx, 31, 0x1AA90Cu);
    ctx->pc = 0x1AA908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA904u;
    // 0x1aa908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1AA904u, 0x1AA90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA90Cu;
label_1aa90c:
    // 0x1aa90c: 0x8e42089c  lw          $v0, 0x89C($s2)
    ctx->pc = 0x1aa90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    // 0x1aa910: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA910u;
    {
        const bool branch_taken_0x1aa910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa910) {
            ctx->pc = 0x1AA914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA910u;
            // 0x1aa914: 0x8e420a94  lw          $v0, 0xA94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA924u;
            goto label_1aa924;
        }
    }
    ctx->pc = 0x1AA918u;
    // 0x1aa918: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1AA918u;
    SET_GPR_U32(ctx, 31, 0x1AA920u);
    ctx->pc = 0x1AA91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA918u;
    // 0x1aa91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1AA918u, 0x1AA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA920u;
label_1aa920:
    // 0x1aa920: 0x8e420a94  lw          $v0, 0xA94($s2)
    ctx->pc = 0x1aa920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2708)));
label_1aa924:
    // 0x1aa924: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aa924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1aa928: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1aa928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1aa92c: 0xae530aa0  sw          $s3, 0xAA0($s2)
    ctx->pc = 0x1aa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2720), GPR_U32(ctx, 19));
label_1aa930:
    // 0x1aa930: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1aa930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aa934: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1aa934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aa938: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1aa938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa93c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1aa93cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa940: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1aa940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa948: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA948u;
        // 0x1aa94c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA950u;
}

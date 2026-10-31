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

// Function: sub_0015F760
// Address: 0x15f760 - 0x15f830
void sub_0015F760_0x15f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F760_0x15f760");
#endif

    switch (ctx->pc) {
        case 0x15f760u: goto label_15f760;
        case 0x15f764u: goto label_15f764;
        case 0x15f768u: goto label_15f768;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f770u: goto label_15f770;
        case 0x15f774u: goto label_15f774;
        case 0x15f778u: goto label_15f778;
        case 0x15f77cu: goto label_15f77c;
        case 0x15f780u: goto label_15f780;
        case 0x15f784u: goto label_15f784;
        case 0x15f788u: goto label_15f788;
        case 0x15f78cu: goto label_15f78c;
        case 0x15f790u: goto label_15f790;
        case 0x15f794u: goto label_15f794;
        case 0x15f798u: goto label_15f798;
        case 0x15f79cu: goto label_15f79c;
        case 0x15f7a0u: goto label_15f7a0;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7a8u: goto label_15f7a8;
        case 0x15f7acu: goto label_15f7ac;
        case 0x15f7b0u: goto label_15f7b0;
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f7b8u: goto label_15f7b8;
        case 0x15f7bcu: goto label_15f7bc;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7c4u: goto label_15f7c4;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7ccu: goto label_15f7cc;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f7d4u: goto label_15f7d4;
        case 0x15f7d8u: goto label_15f7d8;
        case 0x15f7dcu: goto label_15f7dc;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f7e8u: goto label_15f7e8;
        case 0x15f7ecu: goto label_15f7ec;
        case 0x15f7f0u: goto label_15f7f0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f7f8u: goto label_15f7f8;
        case 0x15f7fcu: goto label_15f7fc;
        case 0x15f800u: goto label_15f800;
        case 0x15f804u: goto label_15f804;
        case 0x15f808u: goto label_15f808;
        case 0x15f80cu: goto label_15f80c;
        case 0x15f810u: goto label_15f810;
        case 0x15f814u: goto label_15f814;
        case 0x15f818u: goto label_15f818;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f820u: goto label_15f820;
        case 0x15f824u: goto label_15f824;
        case 0x15f828u: goto label_15f828;
        case 0x15f82cu: goto label_15f82c;
        default: break;
    }

    ctx->pc = 0x15f760u;

label_15f760:
    // 0x15f760: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f764:
    // 0x15f764: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15f768:
    // 0x15f768: 0x8c42c7a8  lw          $v0, -0x3858($v0)
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952872)));
label_15f76c:
    // 0x15f76c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15f770:
    // 0x15f770: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_15f774:
    if (ctx->pc == 0x15F774u) {
        ctx->pc = 0x15F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F770u;
        // 0x15f774: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F778u;
        goto label_15f778;
    }
    ctx->pc = 0x15F770u;
    {
        const bool branch_taken_0x15f770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F770u;
        // 0x15f774: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f770) {
            ctx->pc = 0x15F794u;
            goto label_15f794;
        }
    }
    ctx->pc = 0x15F778u;
label_15f778:
    // 0x15f778: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15f77c:
    // 0x15f77c: 0x8c436d70  lw          $v1, 0x6D70($v0)
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28016)));
label_15f780:
    // 0x15f780: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_15f784:
    if (ctx->pc == 0x15F784u) {
        ctx->pc = 0x15F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F780u;
        // 0x15f784: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F788u;
        goto label_15f788;
    }
    ctx->pc = 0x15F780u;
    {
        const bool branch_taken_0x15f780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F780u;
        // 0x15f784: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f780) {
            ctx->pc = 0x15F78Cu;
            goto label_15f78c;
        }
    }
    ctx->pc = 0x15F788u;
label_15f788:
    // 0x15f788: 0x240400cc  addiu       $a0, $zero, 0xCC
    ctx->pc = 0x15f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_15f78c:
    // 0x15f78c: 0xc067b9c  jal         func_19EE70
label_15f790:
    if (ctx->pc == 0x15F790u) {
        ctx->pc = 0x15F794u;
        goto label_15f794;
    }
    ctx->pc = 0x15F78Cu;
    SET_GPR_U32(ctx, 31, 0x15F794u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15F78Cu, 0x15F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F794u;
label_15f794:
    // 0x15f794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f798:
    // 0x15f798: 0xc067b9c  jal         func_19EE70
label_15f79c:
    if (ctx->pc == 0x15F79Cu) {
        ctx->pc = 0x15F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F798u;
        // 0x15f79c: 0x240400c9  addiu       $a0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7A0u;
        goto label_15f7a0;
    }
    ctx->pc = 0x15F798u;
    SET_GPR_U32(ctx, 31, 0x15F7A0u);
    ctx->pc = 0x15F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F798u;
    // 0x15f79c: 0x240400c9  addiu       $a0, $zero, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15F798u, 0x15F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7A0u;
label_15f7a0:
    // 0x15f7a0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_15f7a4:
    // 0x15f7a4: 0xc067b9c  jal         func_19EE70
label_15f7a8:
    if (ctx->pc == 0x15F7A8u) {
        ctx->pc = 0x15F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7A4u;
        // 0x15f7a8: 0x240400cb  addiu       $a0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7ACu;
        goto label_15f7ac;
    }
    ctx->pc = 0x15F7A4u;
    SET_GPR_U32(ctx, 31, 0x15F7ACu);
    ctx->pc = 0x15F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F7A4u;
    // 0x15f7a8: 0x240400cb  addiu       $a0, $zero, 0xCB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15F7A4u, 0x15F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7ACu;
label_15f7ac:
    // 0x15f7ac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15f7b0:
    // 0x15f7b0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15f7b4:
    // 0x15f7b4: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15f7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15f7b8:
    // 0x15f7b8: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15f7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15f7bc:
    // 0x15f7bc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15f7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15f7c0:
    // 0x15f7c0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15f7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15f7c4:
    // 0x15f7c4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15f7c8:
    // 0x15f7c8: 0x244cfcd8  addiu       $t4, $v0, -0x328
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966488));
label_15f7cc:
    // 0x15f7cc: 0x69830007  ldl         $v1, 0x7($t4)
    ctx->pc = 0x15f7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15f7d0:
    // 0x15f7d0: 0x6d830000  ldr         $v1, 0x0($t4)
    ctx->pc = 0x15f7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15f7d4:
    // 0x15f7d4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x15f7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15f7d8:
    // 0x15f7d8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x15f7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15f7dc:
    // 0x15f7dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f7e0:
    // 0x15f7e0: 0x24846830  addiu       $a0, $a0, 0x6830
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
label_15f7e4:
    // 0x15f7e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15f7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15f7e8:
    // 0x15f7e8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15f7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15f7ec:
    // 0x15f7ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f7f0:
    // 0x15f7f0: 0xc071c4a  jal         func_1C7128
label_15f7f4:
    if (ctx->pc == 0x15F7F4u) {
        ctx->pc = 0x15F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7F0u;
        // 0x15f7f4: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7F8u;
        goto label_15f7f8;
    }
    ctx->pc = 0x15F7F0u;
    SET_GPR_U32(ctx, 31, 0x15F7F8u);
    ctx->pc = 0x15F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F7F0u;
    // 0x15f7f4: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15F7F0u, 0x15F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7F8u;
label_15f7f8:
    // 0x15f7f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f7fc:
    // 0x15f7fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f800:
    // 0x15f800: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15f804:
    // 0x15f804: 0xac60c7ac  sw          $zero, -0x3854($v1)
    ctx->pc = 0x15f804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 0));
label_15f808:
    // 0x15f808: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15f80c:
    // 0x15f80c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15f810:
    // 0x15f810: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15f814:
    // 0x15f814: 0x60f809  jalr        $v1
label_15f818:
    if (ctx->pc == 0x15F818u) {
        ctx->pc = 0x15F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F814u;
        // 0x15f818: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F81Cu;
        goto label_15f81c;
    }
    ctx->pc = 0x15F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F81Cu);
        ctx->pc = 0x15F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F814u;
        // 0x15f818: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F814u, 0x15F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F81Cu;
label_15f81c:
    // 0x15f81c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15f81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f820:
    // 0x15f820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15f820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f824:
    // 0x15f824: 0x3e00008  jr          $ra
label_15f828:
    if (ctx->pc == 0x15F828u) {
        ctx->pc = 0x15F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F824u;
        // 0x15f828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F82Cu;
        goto label_15f82c;
    }
    ctx->pc = 0x15F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F824u;
        // 0x15f828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F82Cu;
label_15f82c:
    // 0x15f82c: 0x0  nop
    ctx->pc = 0x15f82cu;
    // NOP
    ctx->pc = 0x15f830u;
}

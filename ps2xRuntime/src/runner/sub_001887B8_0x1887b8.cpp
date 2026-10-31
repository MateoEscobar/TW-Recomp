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

// Function: sub_001887B8
// Address: 0x1887b8 - 0x188878
void sub_001887B8_0x1887b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001887B8_0x1887b8");
#endif

    switch (ctx->pc) {
        case 0x1887b8u: goto label_1887b8;
        case 0x1887bcu: goto label_1887bc;
        case 0x1887c0u: goto label_1887c0;
        case 0x1887c4u: goto label_1887c4;
        case 0x1887c8u: goto label_1887c8;
        case 0x1887ccu: goto label_1887cc;
        case 0x1887d0u: goto label_1887d0;
        case 0x1887d4u: goto label_1887d4;
        case 0x1887d8u: goto label_1887d8;
        case 0x1887dcu: goto label_1887dc;
        case 0x1887e0u: goto label_1887e0;
        case 0x1887e4u: goto label_1887e4;
        case 0x1887e8u: goto label_1887e8;
        case 0x1887ecu: goto label_1887ec;
        case 0x1887f0u: goto label_1887f0;
        case 0x1887f4u: goto label_1887f4;
        case 0x1887f8u: goto label_1887f8;
        case 0x1887fcu: goto label_1887fc;
        case 0x188800u: goto label_188800;
        case 0x188804u: goto label_188804;
        case 0x188808u: goto label_188808;
        case 0x18880cu: goto label_18880c;
        case 0x188810u: goto label_188810;
        case 0x188814u: goto label_188814;
        case 0x188818u: goto label_188818;
        case 0x18881cu: goto label_18881c;
        case 0x188820u: goto label_188820;
        case 0x188824u: goto label_188824;
        case 0x188828u: goto label_188828;
        case 0x18882cu: goto label_18882c;
        case 0x188830u: goto label_188830;
        case 0x188834u: goto label_188834;
        case 0x188838u: goto label_188838;
        case 0x18883cu: goto label_18883c;
        case 0x188840u: goto label_188840;
        case 0x188844u: goto label_188844;
        case 0x188848u: goto label_188848;
        case 0x18884cu: goto label_18884c;
        case 0x188850u: goto label_188850;
        case 0x188854u: goto label_188854;
        case 0x188858u: goto label_188858;
        case 0x18885cu: goto label_18885c;
        case 0x188860u: goto label_188860;
        case 0x188864u: goto label_188864;
        case 0x188868u: goto label_188868;
        case 0x18886cu: goto label_18886c;
        case 0x188870u: goto label_188870;
        case 0x188874u: goto label_188874;
        default: break;
    }

    ctx->pc = 0x1887b8u;

label_1887b8:
    // 0x1887b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1887b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1887bc:
    // 0x1887bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1887bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1887c0:
    // 0x1887c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1887c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1887c4:
    // 0x1887c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1887c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1887c8:
    // 0x1887c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1887c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1887cc:
    // 0x1887cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1887ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1887d0:
    // 0x1887d0: 0x8e220c34  lw          $v0, 0xC34($s1)
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3124)));
label_1887d4:
    // 0x1887d4: 0x8e300c24  lw          $s0, 0xC24($s1)
    ctx->pc = 0x1887d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3108)));
label_1887d8:
    // 0x1887d8: 0x1050001f  beq         $v0, $s0, . + 4 + (0x1F << 2)
label_1887dc:
    if (ctx->pc == 0x1887DCu) {
        ctx->pc = 0x1887DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887D8u;
        // 0x1887dc: 0x26320c18  addiu       $s2, $s1, 0xC18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887E0u;
        goto label_1887e0;
    }
    ctx->pc = 0x1887D8u;
    {
        const bool branch_taken_0x1887d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1887DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887D8u;
        // 0x1887dc: 0x26320c18  addiu       $s2, $s1, 0xC18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887d8) {
            ctx->pc = 0x188858u;
            goto label_188858;
        }
    }
    ctx->pc = 0x1887E0u;
label_1887e0:
    // 0x1887e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1887e4:
    // 0x1887e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1887e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1887e8:
    // 0x1887e8: 0xc061f4a  jal         func_187D28
label_1887ec:
    if (ctx->pc == 0x1887ECu) {
        ctx->pc = 0x1887ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887E8u;
        // 0x1887ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887F0u;
        goto label_1887f0;
    }
    ctx->pc = 0x1887E8u;
    SET_GPR_U32(ctx, 31, 0x1887F0u);
    ctx->pc = 0x1887ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887E8u;
    // 0x1887ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x1887E8u, 0x1887F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887F0u;
label_1887f0:
    // 0x1887f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1887f4:
    if (ctx->pc == 0x1887F4u) {
        ctx->pc = 0x1887F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887F0u;
        // 0x1887f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887F8u;
        goto label_1887f8;
    }
    ctx->pc = 0x1887F0u;
    {
        const bool branch_taken_0x1887f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887F0u;
        // 0x1887f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887f0) {
            ctx->pc = 0x188850u;
            goto label_188850;
        }
    }
    ctx->pc = 0x1887F8u;
label_1887f8:
    // 0x1887f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1887f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1887fc:
    // 0x1887fc: 0xc103e14  jal         func_40F850
label_188800:
    if (ctx->pc == 0x188800u) {
        ctx->pc = 0x188800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887FCu;
        // 0x188800: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188804u;
        goto label_188804;
    }
    ctx->pc = 0x1887FCu;
    SET_GPR_U32(ctx, 31, 0x188804u);
    ctx->pc = 0x188800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887FCu;
    // 0x188800: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x1887FCu, 0x188804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188804u;
label_188804:
    // 0x188804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188808:
    // 0x188808: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x188808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18880c:
    // 0x18880c: 0x40f809  jalr        $v0
label_188810:
    if (ctx->pc == 0x188810u) {
        ctx->pc = 0x188810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18880Cu;
        // 0x188810: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188814u;
        goto label_188814;
    }
    ctx->pc = 0x18880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188814u);
        ctx->pc = 0x188810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18880Cu;
        // 0x188810: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18880Cu, 0x188814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188814u;
label_188814:
    // 0x188814: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_188818:
    // 0x188818: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x188818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18881c:
    // 0x18881c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x18881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_188820:
    // 0x188820: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_188824:
    if (ctx->pc == 0x188824u) {
        ctx->pc = 0x188824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188820u;
        // 0x188824: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188828u;
        goto label_188828;
    }
    ctx->pc = 0x188820u;
    {
        const bool branch_taken_0x188820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188820u;
        // 0x188824: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188820) {
            ctx->pc = 0x188830u;
            goto label_188830;
        }
    }
    ctx->pc = 0x188828u;
label_188828:
    // 0x188828: 0x10000003  b           . + 4 + (0x3 << 2)
label_18882c:
    if (ctx->pc == 0x18882Cu) {
        ctx->pc = 0x18882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188828u;
        // 0x18882c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188830u;
        goto label_188830;
    }
    ctx->pc = 0x188828u;
    {
        const bool branch_taken_0x188828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188828u;
        // 0x18882c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188828) {
            ctx->pc = 0x188838u;
            goto label_188838;
        }
    }
    ctx->pc = 0x188830u;
label_188830:
    // 0x188830: 0xc138cb6  jal         func_4E32D8
label_188834:
    if (ctx->pc == 0x188834u) {
        ctx->pc = 0x188834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188830u;
        // 0x188834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188838u;
        goto label_188838;
    }
    ctx->pc = 0x188830u;
    SET_GPR_U32(ctx, 31, 0x188838u);
    ctx->pc = 0x188834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188830u;
    // 0x188834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E32D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E32D8u, 0x188830u, 0x188838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188838u;
label_188838:
    // 0x188838: 0x8e230c34  lw          $v1, 0xC34($s1)
    ctx->pc = 0x188838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3124)));
label_18883c:
    // 0x18883c: 0x8e220c24  lw          $v0, 0xC24($s1)
    ctx->pc = 0x18883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3108)));
label_188840:
    // 0x188840: 0x5462ffe4  bnel        $v1, $v0, . + 4 + (-0x1C << 2)
label_188844:
    if (ctx->pc == 0x188844u) {
        ctx->pc = 0x188844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188840u;
        // 0x188844: 0x8e220c34  lw          $v0, 0xC34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188848u;
        goto label_188848;
    }
    ctx->pc = 0x188840u;
    {
        const bool branch_taken_0x188840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188840) {
            ctx->pc = 0x188844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188840u;
            // 0x188844: 0x8e220c34  lw          $v0, 0xC34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1887D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1887d4;
        }
    }
    ctx->pc = 0x188848u;
label_188848:
    // 0x188848: 0x10000004  b           . + 4 + (0x4 << 2)
label_18884c:
    if (ctx->pc == 0x18884Cu) {
        ctx->pc = 0x18884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188848u;
        // 0x18884c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188850u;
        goto label_188850;
    }
    ctx->pc = 0x188848u;
    {
        const bool branch_taken_0x188848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188848u;
        // 0x18884c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188848) {
            ctx->pc = 0x18885Cu;
            goto label_18885c;
        }
    }
    ctx->pc = 0x188850u;
label_188850:
    // 0x188850: 0x10000002  b           . + 4 + (0x2 << 2)
label_188854:
    if (ctx->pc == 0x188854u) {
        ctx->pc = 0x188854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188850u;
        // 0x188854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188858u;
        goto label_188858;
    }
    ctx->pc = 0x188850u;
    {
        const bool branch_taken_0x188850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188850u;
        // 0x188854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188850) {
            ctx->pc = 0x18885Cu;
            goto label_18885c;
        }
    }
    ctx->pc = 0x188858u;
label_188858:
    // 0x188858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18885c:
    // 0x18885c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18885cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188860:
    // 0x188860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188864:
    // 0x188864: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x188864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188868:
    // 0x188868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18886c:
    // 0x18886c: 0x3e00008  jr          $ra
label_188870:
    if (ctx->pc == 0x188870u) {
        ctx->pc = 0x188870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18886Cu;
        // 0x188870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188874u;
        goto label_188874;
    }
    ctx->pc = 0x18886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18886Cu;
        // 0x188870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18886Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188874u;
label_188874:
    // 0x188874: 0x0  nop
    ctx->pc = 0x188874u;
    // NOP
    ctx->pc = 0x188878u;
}

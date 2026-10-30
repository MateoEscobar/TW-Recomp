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

// Function: sub_004E1750
// Address: 0x4e1750 - 0x4e18a8
void sub_004E1750_0x4e1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1750_0x4e1750");
#endif

    switch (ctx->pc) {
        case 0x4e1780u: goto label_4e1780;
        case 0x4e17bcu: goto label_4e17bc;
        case 0x4e1810u: goto label_4e1810;
        case 0x4e1840u: goto label_4e1840;
        case 0x4e1878u: goto label_4e1878;
        default: break;
    }

    ctx->pc = 0x4e1750u;

    // 0x4e1750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e1754: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e1754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1758: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e1758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e175c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e1764: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e1764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1768: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e1768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e176c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E176Cu;
    {
        const bool branch_taken_0x4e176c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E176Cu;
        // 0x4e1770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e176c) {
            ctx->pc = 0x4E179Cu;
            goto label_4e179c;
        }
    }
    ctx->pc = 0x4E1774u;
    // 0x4e1774: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1778: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e1778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e177c: 0x0  nop
    ctx->pc = 0x4e177cu;
    // NOP
label_4e1780:
    // 0x4e1780: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e1780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e1784: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e1784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e1788: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E1788u;
    {
        const bool branch_taken_0x4e1788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1788) {
            ctx->pc = 0x4E178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1788u;
            // 0x4e178c: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1794u;
            goto label_4e1794;
        }
    }
    ctx->pc = 0x4E1790u;
    // 0x4e1790: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e1790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e1794:
    // 0x4e1794: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E1794u;
    {
        const bool branch_taken_0x4e1794 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1794) {
            ctx->pc = 0x4E1798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1794u;
            // 0x4e1798: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1780;
        }
    }
    ctx->pc = 0x4E179Cu;
label_4e179c:
    // 0x4e179c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E179Cu;
    {
        const bool branch_taken_0x4e179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E179Cu;
        // 0x4e17a0: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e179c) {
            ctx->pc = 0x4E1858u;
            goto label_4e1858;
        }
    }
    ctx->pc = 0x4E17A4u;
    // 0x4e17a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e17a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e17ac: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E17ACu;
    {
        const bool branch_taken_0x4e17ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17ACu;
        // 0x4e17b0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e17ac) {
            ctx->pc = 0x4E17C4u;
            goto label_4e17c4;
        }
    }
    ctx->pc = 0x4E17B4u;
    // 0x4e17b4: 0xc1384e0  jal         func_4E1380
    ctx->pc = 0x4E17B4u;
    SET_GPR_U32(ctx, 31, 0x4E17BCu);
    ctx->pc = 0x4E17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E17B4u;
    // 0x4e17b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1380u, 0x4E17B4u, 0x4E17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E17BCu;
label_4e17bc:
    // 0x4e17bc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E17BCu;
    {
        const bool branch_taken_0x4e17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17BCu;
        // 0x4e17c0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e17bc) {
            ctx->pc = 0x4E187Cu;
            goto label_4e187c;
        }
    }
    ctx->pc = 0x4E17C4u;
label_4e17c4:
    // 0x4e17c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e17c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E17C8u;
    {
        const bool branch_taken_0x4e17c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17C8u;
        // 0x4e17cc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e17c8) {
            ctx->pc = 0x4E17ECu;
            goto label_4e17ec;
        }
    }
    ctx->pc = 0x4E17D0u;
    // 0x4e17d0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e17d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e17d8: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E17D8u;
    {
        const bool branch_taken_0x4e17d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e17d8) {
            ctx->pc = 0x4E17DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17D8u;
            // 0x4e17dc: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E17F0u;
            goto label_4e17f0;
        }
    }
    ctx->pc = 0x4E17E0u;
    // 0x4e17e0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e17e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E17E4u;
    {
        const bool branch_taken_0x4e17e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E17E4u;
        // 0x4e17e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e17e4) {
            ctx->pc = 0x4E1858u;
            goto label_4e1858;
        }
    }
    ctx->pc = 0x4E17ECu;
label_4e17ec:
    // 0x4e17ec: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e17f0:
    // 0x4e17f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e17f4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E17F4u;
    {
        const bool branch_taken_0x4e17f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e17f4) {
            ctx->pc = 0x4E17F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E17F4u;
            // 0x4e17f8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1830u;
            goto label_4e1830;
        }
    }
    ctx->pc = 0x4E17FCu;
    // 0x4e17fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e17fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1800: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1804: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E1804u;
    {
        const bool branch_taken_0x4e1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1804) {
            ctx->pc = 0x4E1808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1804u;
            // 0x4e1808: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1858u;
            goto label_4e1858;
        }
    }
    ctx->pc = 0x4E180Cu;
    // 0x4e180c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e1810:
    // 0x4e1810: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1814: 0x0  nop
    ctx->pc = 0x4e1814u;
    // NOP
    // 0x4e1818: 0x0  nop
    ctx->pc = 0x4e1818u;
    // NOP
    // 0x4e181c: 0x0  nop
    ctx->pc = 0x4e181cu;
    // NOP
    // 0x4e1820: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1820u;
    {
        const bool branch_taken_0x4e1820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1820) {
            ctx->pc = 0x4E1824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1820u;
            // 0x4e1824: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1810;
        }
    }
    ctx->pc = 0x4E1828u;
    // 0x4e1828: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E1828u;
    {
        const bool branch_taken_0x4e1828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1828u;
        // 0x4e182c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1828) {
            ctx->pc = 0x4E1858u;
            goto label_4e1858;
        }
    }
    ctx->pc = 0x4E1830u;
label_4e1830:
    // 0x4e1830: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e1834: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1834u;
    {
        const bool branch_taken_0x4e1834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1834u;
        // 0x4e1838: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1834) {
            ctx->pc = 0x4E1858u;
            goto label_4e1858;
        }
    }
    ctx->pc = 0x4E183Cu;
    // 0x4e183c: 0x0  nop
    ctx->pc = 0x4e183cu;
    // NOP
label_4e1840:
    // 0x4e1840: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e1840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e1844: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e1844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e1848: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e184c: 0x0  nop
    ctx->pc = 0x4e184cu;
    // NOP
    // 0x4e1850: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1850u;
    {
        const bool branch_taken_0x4e1850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1850u;
        // 0x4e1854: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1850) {
            ctx->pc = 0x4E1840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1840;
        }
    }
    ctx->pc = 0x4E1858u;
label_4e1858:
    // 0x4e1858: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e1858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e185c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1860: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e1864: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e1864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e1868: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1868u;
    {
        const bool branch_taken_0x4e1868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1868) {
            ctx->pc = 0x4E186Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1868u;
            // 0x4e186c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E188Cu;
            goto label_4e188c;
        }
    }
    ctx->pc = 0x4E1870u;
    // 0x4e1870: 0xc1384e0  jal         func_4E1380
    ctx->pc = 0x4E1870u;
    SET_GPR_U32(ctx, 31, 0x4E1878u);
    ctx->pc = 0x4E1874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1870u;
    // 0x4e1874: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1380u, 0x4E1870u, 0x4E1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1878u;
label_4e1878:
    // 0x4e1878: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e1878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e187c:
    // 0x4e187c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1880: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e1880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e1884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E1884u;
    {
        const bool branch_taken_0x4e1884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1884u;
        // 0x4e1888: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1884) {
            ctx->pc = 0x4E1890u;
            goto label_4e1890;
        }
    }
    ctx->pc = 0x4E188Cu;
label_4e188c:
    // 0x4e188c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e188cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e1890:
    // 0x4e1890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1894: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e1894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1898: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e1898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e189c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E189Cu;
        // 0x4e18a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E189Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E18A4u;
    // 0x4e18a4: 0x0  nop
    ctx->pc = 0x4e18a4u;
    // NOP
    ctx->pc = 0x4e18a8u;
}

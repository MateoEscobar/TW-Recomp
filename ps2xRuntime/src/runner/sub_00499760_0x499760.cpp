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

// Function: sub_00499760
// Address: 0x499760 - 0x4998a0
void sub_00499760_0x499760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499760_0x499760");
#endif

    ctx->pc = 0x499760u;

    // 0x499760: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x499760u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
    // 0x499764: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x499764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x499768: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x499768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x49976c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x49976cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499770: 0x8d6404f0  lw          $a0, 0x4F0($t3)
    ctx->pc = 0x499770u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7104F0u));
    // 0x499774: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x499774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x499778: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x499778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49977c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x49977Cu;
    {
        const bool branch_taken_0x49977c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49977Cu;
        // 0x499780: 0x256804f0  addiu       $t0, $t3, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 1264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49977c) {
            ctx->pc = 0x499898u;
            goto label_499898;
        }
    }
    ctx->pc = 0x499784u;
    // 0x499784: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x499784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x499788: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x499788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x49978c: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x49978cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x499790: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x499790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x499794: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x499794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x499798: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x499798u;
    {
        const bool branch_taken_0x499798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499798) {
            ctx->pc = 0x499898u;
            goto label_499898;
        }
    }
    ctx->pc = 0x4997A0u;
    // 0x4997a0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4997a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4997a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4997a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4997a8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x4997a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4997ac: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x4997ACu;
    {
        const bool branch_taken_0x4997ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4997ac) {
            ctx->pc = 0x499898u;
            goto label_499898;
        }
    }
    ctx->pc = 0x4997B4u;
    // 0x4997b4: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x4997b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4997b8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4997bc: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x4997bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4997c0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4997C0u;
    {
        const bool branch_taken_0x4997c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4997C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4997C0u;
        // 0x4997c4: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4997c0) {
            ctx->pc = 0x499898u;
            goto label_499898;
        }
    }
    ctx->pc = 0x4997C8u;
    // 0x4997c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4997C8u;
    {
        const bool branch_taken_0x4997c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4997C8u;
        // 0x4997cc: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4997c8) {
            ctx->pc = 0x4997ECu;
            goto label_4997ec;
        }
    }
    ctx->pc = 0x4997D0u;
    // 0x4997d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4997d4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4997d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4997d8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4997dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4997e0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4997e4: 0x8d6304f0  lw          $v1, 0x4F0($t3)
    ctx->pc = 0x4997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1264)));
    // 0x4997e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4997e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4997ec:
    // 0x4997ec: 0x8d6204f0  lw          $v0, 0x4F0($t3)
    ctx->pc = 0x4997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1264)));
    // 0x4997f0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4997f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4997f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4997f8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x4997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4997fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x499800: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x499800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x499804: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x499804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x499808: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x499808u;
    {
        const bool branch_taken_0x499808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499808u;
        // 0x49980c: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499808) {
            ctx->pc = 0x499814u;
            goto label_499814;
        }
    }
    ctx->pc = 0x499810u;
    // 0x499810: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x499810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_499814:
    // 0x499814: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x499814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x499818: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x499818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x49981c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x49981cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x499820: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x499820u;
    {
        const bool branch_taken_0x499820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499820u;
        // 0x499824: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499820) {
            ctx->pc = 0x499848u;
            goto label_499848;
        }
    }
    ctx->pc = 0x499828u;
    // 0x499828: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x499828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x49982c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x49982cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x499830: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x499830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x499834: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x499834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x499838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x499838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49983c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x49983cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x499840: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x499840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x499844: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x499844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_499848:
    // 0x499848: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x499848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x49984c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x49984cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x499850: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x499850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x499854: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x499854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x499858: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x499858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x49985c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x499860: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x499860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x499864: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x499864u;
    {
        const bool branch_taken_0x499864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x499868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499864u;
        // 0x499868: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499864) {
            ctx->pc = 0x499870u;
            goto label_499870;
        }
    }
    ctx->pc = 0x49986Cu;
    // 0x49986c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x49986cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_499870:
    // 0x499870: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x499870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x499874: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x499874u;
    {
        const bool branch_taken_0x499874 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x499874) {
            ctx->pc = 0x499898u;
            goto label_499898;
        }
    }
    ctx->pc = 0x49987Cu;
    // 0x49987c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x49987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x499880: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499880u;
    {
        const bool branch_taken_0x499880 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x499884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499880u;
        // 0x499884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499880) {
            ctx->pc = 0x499898u;
            goto label_499898;
        }
    }
    ctx->pc = 0x499888u;
    // 0x499888: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x499888u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x49988c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x49988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x499890: 0x3e00008  jr          $ra
    ctx->pc = 0x499890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499890u;
        // 0x499894: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499898u;
label_499898:
    // 0x499898: 0x3e00008  jr          $ra
    ctx->pc = 0x499898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499898u;
        // 0x49989c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4998A0u;
}

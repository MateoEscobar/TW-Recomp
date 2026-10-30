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

// Function: sub_004CE910
// Address: 0x4ce910 - 0x4ceac0
void sub_004CE910_0x4ce910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE910_0x4ce910");
#endif

    switch (ctx->pc) {
        case 0x4ce9ecu: goto label_4ce9ec;
        case 0x4ce9f4u: goto label_4ce9f4;
        case 0x4cea10u: goto label_4cea10;
        case 0x4cea18u: goto label_4cea18;
        case 0x4cea44u: goto label_4cea44;
        case 0x4ceaa0u: goto label_4ceaa0;
        default: break;
    }

    ctx->pc = 0x4ce910u;

    // 0x4ce910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ce910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ce914: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ce914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce91c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4ce91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4ce920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ce920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ce924: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ce924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ce928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ce928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ce92c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ce92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ce930: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ce930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ce934: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CE934u;
    {
        const bool branch_taken_0x4ce934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE934u;
        // 0x4ce938: 0x8cf20014  lw          $s2, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce934) {
            ctx->pc = 0x4CE950u;
            goto label_4ce950;
        }
    }
    ctx->pc = 0x4CE93Cu;
    // 0x4ce93c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x4ce93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x4ce940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ce940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ce944: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4ce944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x4ce948: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x4CE948u;
    {
        const bool branch_taken_0x4ce948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE948u;
        // 0x4ce94c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce948) {
            ctx->pc = 0x4CEAA4u;
            goto label_4ceaa4;
        }
    }
    ctx->pc = 0x4CE950u;
label_4ce950:
    // 0x4ce950: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x4ce950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x4ce954: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4ce954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ce958: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x4ce958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x4ce95c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ce95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ce960: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x4ce960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x4ce964: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x4ce964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x4ce968: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x4ce968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x4ce96c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4ce96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ce970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ce970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ce974: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x4ce974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x4ce978: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4ce978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ce97c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ce97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ce980: 0x85282b  sltu        $a1, $a0, $a1
    ctx->pc = 0x4ce980u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4ce984: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CE984u;
    {
        const bool branch_taken_0x4ce984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE984u;
        // 0x4ce988: 0xae440064  sw          $a0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce984) {
            ctx->pc = 0x4CE994u;
            goto label_4ce994;
        }
    }
    ctx->pc = 0x4CE98Cu;
    // 0x4ce98c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x4ce98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x4ce990: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x4ce990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_4ce994:
    // 0x4ce994: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4ce994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x4ce998: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4ce998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ce99c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ce99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ce9a0: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x4ce9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x4ce9a4: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x4ce9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x4ce9a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4ce9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ce9ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ce9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ce9b0: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x4ce9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x4ce9b4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x4ce9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x4ce9b8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x4ce9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x4ce9bc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4ce9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4ce9c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CE9C0u;
    {
        const bool branch_taken_0x4ce9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce9c0) {
            ctx->pc = 0x4CE9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE9C0u;
            // 0x4ce9c4: 0x8e460070  lw          $a2, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE9D4u;
            goto label_4ce9d4;
        }
    }
    ctx->pc = 0x4CE9C8u;
    // 0x4ce9c8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x4ce9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x4ce9cc: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x4ce9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x4ce9d0: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x4ce9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_4ce9d4:
    // 0x4ce9d4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x4CE9D4u;
    {
        const bool branch_taken_0x4ce9d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce9d4) {
            ctx->pc = 0x4CEA3Cu;
            goto label_4cea3c;
        }
    }
    ctx->pc = 0x4CE9DCu;
    // 0x4ce9dc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x4ce9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ce9e0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4ce9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x4ce9e4: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4CE9E4u;
    SET_GPR_U32(ctx, 31, 0x4CE9ECu);
    ctx->pc = 0x4CE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE9E4u;
    // 0x4ce9e8: 0x8e50007c  lw          $s0, 0x7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4CE9E4u, 0x4CE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE9ECu;
label_4ce9ec:
    // 0x4ce9ec: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CE9ECu;
    SET_GPR_U32(ctx, 31, 0x4CE9F4u);
    ctx->pc = 0x4CE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE9ECu;
    // 0x4ce9f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CE9ECu, 0x4CE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE9F4u;
label_4ce9f4:
    // 0x4ce9f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ce9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce9f8: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x4ce9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x4ce9fc: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x4ce9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4cea00: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x4cea00u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4cea04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4cea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4cea08: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4CEA08u;
    {
        const bool branch_taken_0x4cea08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4CEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEA08u;
        // 0x4cea0c: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cea08) {
            ctx->pc = 0x4CEA3Cu;
            goto label_4cea3c;
        }
    }
    ctx->pc = 0x4CEA10u;
label_4cea10:
    // 0x4cea10: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CEA10u;
    SET_GPR_U32(ctx, 31, 0x4CEA18u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CEA10u, 0x4CEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEA18u;
label_4cea18:
    // 0x4cea18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4cea18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cea1c: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x4cea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x4cea20: 0x2331823  subu        $v1, $s1, $s3
    ctx->pc = 0x4cea20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x4cea24: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x4cea24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4cea28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4CEA28u;
    {
        const bool branch_taken_0x4cea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEA28u;
        // 0x4cea2c: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cea28) {
            ctx->pc = 0x4CEA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cea10;
        }
    }
    ctx->pc = 0x4CEA30u;
    // 0x4cea30: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x4cea30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cea34: 0x1c40fff6  bgtz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CEA34u;
    {
        const bool branch_taken_0x4cea34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4CEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEA34u;
        // 0x4cea38: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cea34) {
            ctx->pc = 0x4CEA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cea10;
        }
    }
    ctx->pc = 0x4CEA3Cu;
label_4cea3c:
    // 0x4cea3c: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x4CEA44u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CEA3Cu, 0x4CEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEA44u;
label_4cea44:
    // 0x4cea44: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x4cea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x4cea48: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x4cea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x4cea4c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4cea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cea50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4cea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4cea54: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x4cea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x4cea58: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x4cea58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
    // 0x4cea5c: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x4cea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x4cea60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEA60u;
    {
        const bool branch_taken_0x4cea60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cea60) {
            ctx->pc = 0x4CEA74u;
            goto label_4cea74;
        }
    }
    ctx->pc = 0x4CEA68u;
    // 0x4cea68: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x4cea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x4cea6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CEA6Cu;
    {
        const bool branch_taken_0x4cea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cea6c) {
            ctx->pc = 0x4CEA88u;
            goto label_4cea88;
        }
    }
    ctx->pc = 0x4CEA74u;
label_4cea74:
    // 0x4cea74: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x4cea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x4cea78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cea7c: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x4cea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x4cea80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEA80u;
    {
        const bool branch_taken_0x4cea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cea80) {
            ctx->pc = 0x4CEA94u;
            goto label_4cea94;
        }
    }
    ctx->pc = 0x4CEA88u;
label_4cea88:
    // 0x4cea88: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x4cea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x4cea8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cea90: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x4cea90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_4cea94:
    // 0x4cea94: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x4cea94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x4cea98: 0xc133be6  jal         func_4CEF98
    ctx->pc = 0x4CEA98u;
    SET_GPR_U32(ctx, 31, 0x4CEAA0u);
    ctx->pc = 0x4CEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEA98u;
    // 0x4cea9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CEF98u, 0x4CEA98u, 0x4CEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEAA0u;
label_4ceaa0:
    // 0x4ceaa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ceaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ceaa4:
    // 0x4ceaa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ceaa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ceaa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ceaa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ceaac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ceaacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ceab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ceab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ceab4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CEAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEAB4u;
        // 0x4ceab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CEAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CEABCu;
    // 0x4ceabc: 0x0  nop
    ctx->pc = 0x4ceabcu;
    // NOP
    ctx->pc = 0x4ceac0u;
}

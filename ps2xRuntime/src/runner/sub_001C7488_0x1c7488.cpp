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

// Function: sub_001C7488
// Address: 0x1c7488 - 0x1c7630
void sub_001C7488_0x1c7488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7488_0x1c7488");
#endif

    switch (ctx->pc) {
        case 0x1c74f4u: goto label_1c74f4;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7528u: goto label_1c7528;
        case 0x1c7548u: goto label_1c7548;
        case 0x1c7568u: goto label_1c7568;
        case 0x1c7590u: goto label_1c7590;
        case 0x1c75e0u: goto label_1c75e0;
        case 0x1c7610u: goto label_1c7610;
        default: break;
    }

    ctx->pc = 0x1c7488u;

    // 0x1c7488: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c748c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c7490: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c7490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c7494: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c7494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c7498: 0x24510840  addiu       $s1, $v0, 0x840
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1c749c: 0x8c430840  lw          $v1, 0x840($v0)
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600840u));
    // 0x1c74a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c74a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c74a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c74a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c74a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1c74ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1c74acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1c74b0: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C74B0u;
    {
        const bool branch_taken_0x1c74b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74B0u;
        // 0x1c74b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74b0) {
            ctx->pc = 0x1C7610u;
            goto label_1c7610;
        }
    }
    ctx->pc = 0x1C74B8u;
    // 0x1c74b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c74bc: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C74BCu;
    {
        const bool branch_taken_0x1c74bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74BCu;
        // 0x1c74c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74bc) {
            ctx->pc = 0x1C7614u;
            goto label_1c7614;
        }
    }
    ctx->pc = 0x1C74C4u;
    // 0x1c74c4: 0x80660019  lb          $a2, 0x19($v1)
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1c74c8: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C74C8u;
    {
        const bool branch_taken_0x1c74c8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74C8u;
        // 0x1c74cc: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74c8) {
            ctx->pc = 0x1C74FCu;
            goto label_1c74fc;
        }
    }
    ctx->pc = 0x1C74D0u;
    // 0x1c74d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1c74d4: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1c74d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c74d8: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1c74dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c74e0: 0x84640042  lh          $a0, 0x42($v1)
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1c74e4: 0x1080004b  beqz        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C74E4u;
    {
        const bool branch_taken_0x1c74e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74E4u;
        // 0x1c74e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74e4) {
            ctx->pc = 0x1C7614u;
            goto label_1c7614;
        }
    }
    ctx->pc = 0x1C74ECu;
    // 0x1c74ec: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1C74ECu;
    SET_GPR_U32(ctx, 31, 0x1C74F4u);
    ctx->pc = 0x1C74F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74ECu;
    // 0x1c74f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1C74ECu, 0x1C74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74F4u;
label_1c74f4:
    // 0x1c74f4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C74F4u;
    {
        const bool branch_taken_0x1c74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74F4u;
        // 0x1c74f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74f4) {
            ctx->pc = 0x1C7614u;
            goto label_1c7614;
        }
    }
    ctx->pc = 0x1C74FCu;
label_1c74fc:
    // 0x1c74fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1c7500: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7504: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1c7508: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1C7508u;
    SET_GPR_U32(ctx, 31, 0x1C7510u);
    ctx->pc = 0x1C750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7508u;
    // 0x1c750c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C7508u, 0x1C7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7510u;
label_1c7510:
    // 0x1c7510: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7510u;
    {
        const bool branch_taken_0x1c7510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7510u;
        // 0x1c7514: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7510) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C7518u;
    // 0x1c7518: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1C7518u;
    SET_GPR_U32(ctx, 31, 0x1C7520u);
    ctx->pc = 0x1C751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7518u;
    // 0x1c751c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C7518u, 0x1C7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7520u;
label_1c7520:
    // 0x1c7520: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x1C7520u;
    SET_GPR_U32(ctx, 31, 0x1C7528u);
    ctx->pc = 0x1C7524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7520u;
    // 0x1c7524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1C7520u, 0x1C7528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7528u;
label_1c7528:
    // 0x1c7528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7528u;
    {
        const bool branch_taken_0x1c7528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7528) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C7530u;
    // 0x1c7530: 0x80460019  lb          $a2, 0x19($v0)
    ctx->pc = 0x1c7530u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1c7534: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7534u;
        // 0x1c7538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C7548u;
            goto label_1c7548;
        }
    }
    ctx->pc = 0x1C753Cu;
    // 0x1c753c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7540: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1C7540u;
    SET_GPR_U32(ctx, 31, 0x1C7548u);
    ctx->pc = 0x1C7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7540u;
    // 0x1c7544: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1C7540u, 0x1C7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7548u;
label_1c7548:
    // 0x1c7548: 0x16600032  bnez        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C7548u;
    {
        const bool branch_taken_0x1c7548 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7548u;
        // 0x1c754c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7548) {
            ctx->pc = 0x1C7614u;
            goto label_1c7614;
        }
    }
    ctx->pc = 0x1C7550u;
    // 0x1c7550: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1c7554: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c7558: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1c7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1c755c: 0x24740840  addiu       $s4, $v1, 0x840
    ctx->pc = 0x1c755cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x1c7560: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1c7564: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7568:
    // 0x1c7568: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c756c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C756Cu;
    {
        const bool branch_taken_0x1c756c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c756c) {
            ctx->pc = 0x1C7570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C756Cu;
            // 0x1c7570: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C75ECu;
            goto label_1c75ec;
        }
    }
    ctx->pc = 0x1C7574u;
    // 0x1c7574: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1c7578: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1c757c: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C757Cu;
    {
        const bool branch_taken_0x1c757c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C757Cu;
        // 0x1c7580: 0x8e420840  lw          $v0, 0x840($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c757c) {
            ctx->pc = 0x1C75E8u;
            goto label_1c75e8;
        }
    }
    ctx->pc = 0x1C7584u;
    // 0x1c7584: 0xa0500019  sb          $s0, 0x19($v0)
    ctx->pc = 0x1c7584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c7588: 0xc051fd4  jal         func_147F50
    ctx->pc = 0x1C7588u;
    SET_GPR_U32(ctx, 31, 0x1C7590u);
    ctx->pc = 0x1C758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7588u;
    // 0x1c758c: 0x8e440840  lw          $a0, 0x840($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F50u, 0x1C7588u, 0x1C7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7590u;
label_1c7590:
    // 0x1c7590: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C7590u;
    {
        const bool branch_taken_0x1c7590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7590u;
        // 0x1c7594: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7590) {
            ctx->pc = 0x1C75D0u;
            goto label_1c75d0;
        }
    }
    ctx->pc = 0x1C7598u;
    // 0x1c7598: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x1c7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c759c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c759cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c75a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c75a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c75a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c75a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c75a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c75a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c75ac: 0x0  nop
    ctx->pc = 0x1c75acu;
    // NOP
    // 0x1c75b0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1C75B0u;
    {
        const bool branch_taken_0x1c75b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c75b0) {
            ctx->pc = 0x1C75B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C75B0u;
            // 0x1c75b4: 0x26440840  addiu       $a0, $s2, 0x840 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C75D4u;
            goto label_1c75d4;
        }
    }
    ctx->pc = 0x1C75B8u;
    // 0x1c75b8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c75bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c75bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c75c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c75c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c75c4: 0x0  nop
    ctx->pc = 0x1c75c4u;
    // NOP
    // 0x1c75c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C75C8u;
    {
        const bool branch_taken_0x1c75c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75C8u;
        // 0x1c75cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75c8) {
            ctx->pc = 0x1C75ECu;
            goto label_1c75ec;
        }
    }
    ctx->pc = 0x1C75D0u;
label_1c75d0:
    // 0x1c75d0: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_1c75d4:
    // 0x1c75d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75d8: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1C75D8u;
    SET_GPR_U32(ctx, 31, 0x1C75E0u);
    ctx->pc = 0x1C75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75D8u;
    // 0x1c75dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1C75D8u, 0x1C75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75E0u;
label_1c75e0:
    // 0x1c75e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C75E0u;
    {
        const bool branch_taken_0x1c75e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c75e0) {
            ctx->pc = 0x1C75F8u;
            goto label_1c75f8;
        }
    }
    ctx->pc = 0x1C75E8u;
label_1c75e8:
    // 0x1c75e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c75e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c75ec:
    // 0x1c75ec: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1c75ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c75f0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C75F0u;
    {
        const bool branch_taken_0x1c75f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75F0u;
        // 0x1c75f4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f0) {
            ctx->pc = 0x1C7568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7568;
        }
    }
    ctx->pc = 0x1C75F8u;
label_1c75f8:
    // 0x1c75f8: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C75F8u;
    {
        const bool branch_taken_0x1c75f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75F8u;
        // 0x1c75fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f8) {
            ctx->pc = 0x1C7614u;
            goto label_1c7614;
        }
    }
    ctx->pc = 0x1C7600u;
    // 0x1c7600: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x1c7600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
    // 0x1c7604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7608: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1C7608u;
    SET_GPR_U32(ctx, 31, 0x1C7610u);
    ctx->pc = 0x1C760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7608u;
    // 0x1c760c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1C7608u, 0x1C7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7610u;
label_1c7610:
    // 0x1c7610: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c7610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c7614:
    // 0x1c7614: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c7614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7618: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c761c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c761cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7620: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1c7620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7628: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7628u;
        // 0x1c762c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7630u;
}

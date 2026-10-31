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

// Function: sub_004954F0
// Address: 0x4954f0 - 0x495730
void sub_004954F0_0x4954f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004954F0_0x4954f0");
#endif

    switch (ctx->pc) {
        case 0x49553cu: goto label_49553c;
        case 0x49556cu: goto label_49556c;
        case 0x495578u: goto label_495578;
        case 0x4955a0u: goto label_4955a0;
        case 0x4955b4u: goto label_4955b4;
        case 0x4955ccu: goto label_4955cc;
        case 0x4955ecu: goto label_4955ec;
        case 0x495614u: goto label_495614;
        case 0x495620u: goto label_495620;
        case 0x495630u: goto label_495630;
        case 0x495640u: goto label_495640;
        case 0x495654u: goto label_495654;
        case 0x495660u: goto label_495660;
        case 0x4956f4u: goto label_4956f4;
        case 0x495700u: goto label_495700;
        default: break;
    }

    ctx->pc = 0x4954f0u;

    // 0x4954f0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x4954f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x4954f4: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x4954f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x4954f8: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x4954f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x4954fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4954fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495500: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x495500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x495504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x495504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495508: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x495508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x49550c: 0x27b60120  addiu       $s6, $sp, 0x120
    ctx->pc = 0x49550cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x495510: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x495510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x495514: 0x27b70124  addiu       $s7, $sp, 0x124
    ctx->pc = 0x495514u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x495518: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x495518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x49551c: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x49551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x495520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x495520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495524: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x495524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x495528: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x495528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49552c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x49552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x495530: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x495530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495534: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x495534u;
    SET_GPR_U32(ctx, 31, 0x49553Cu);
    ctx->pc = 0x495538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495534u;
    // 0x495538: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x495534u, 0x49553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49553Cu;
label_49553c:
    // 0x49553c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49553Cu;
    {
        const bool branch_taken_0x49553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49553Cu;
        // 0x495540: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49553c) {
            ctx->pc = 0x495578u;
            goto label_495578;
        }
    }
    ctx->pc = 0x495544u;
    // 0x495544: 0x3c10fffc  lui         $s0, 0xFFFC
    ctx->pc = 0x495544u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65532 << 16));
    // 0x495548: 0x3610b000  ori         $s0, $s0, 0xB000
    ctx->pc = 0x495548u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)45056);
    // 0x49554c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x49554cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x495550: 0x2e732003  sltiu       $s3, $s3, 0x2003
    ctx->pc = 0x495550u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x495554: 0x12600062  beqz        $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x495554u;
    {
        const bool branch_taken_0x495554 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x495558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495554u;
        // 0x495558: 0x8fa60120  lw          $a2, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495554) {
            ctx->pc = 0x4956E0u;
            goto label_4956e0;
        }
    }
    ctx->pc = 0x49555Cu;
    // 0x49555c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495560: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x495560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x495564: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x495564u;
    SET_GPR_U32(ctx, 31, 0x49556Cu);
    ctx->pc = 0x495568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495564u;
    // 0x495568: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x495564u, 0x49556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49556Cu;
label_49556c:
    // 0x49556c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x49556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x495570: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x495570u;
    {
        const bool branch_taken_0x495570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x495574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495570u;
        // 0x495574: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495570) {
            ctx->pc = 0x495580u;
            goto label_495580;
        }
    }
    ctx->pc = 0x495578u;
label_495578:
    // 0x495578: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x495578u;
    {
        const bool branch_taken_0x495578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495578u;
        // 0x49557c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495578) {
            ctx->pc = 0x495704u;
            goto label_495704;
        }
    }
    ctx->pc = 0x495580u;
label_495580:
    // 0x495580: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x495580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495584: 0x34425350  ori         $v0, $v0, 0x5350
    ctx->pc = 0x495584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21328);
    // 0x495588: 0x1462005e  bne         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x495588u;
    {
        const bool branch_taken_0x495588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495588u;
        // 0x49558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495588) {
            ctx->pc = 0x495704u;
            goto label_495704;
        }
    }
    ctx->pc = 0x495590u;
    // 0x495590: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x495590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x495594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x495594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495598: 0xc12a5b4  jal         func_4A96D0
    ctx->pc = 0x495598u;
    SET_GPR_U32(ctx, 31, 0x4955A0u);
    ctx->pc = 0x49559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495598u;
    // 0x49559c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A96D0u, 0x495598u, 0x4955A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955A0u;
label_4955a0:
    // 0x4955a0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4955A0u;
    {
        const bool branch_taken_0x4955a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4955A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955A0u;
        // 0x4955a4: 0x27b40090  addiu       $s4, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955a0) {
            ctx->pc = 0x495578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495578;
        }
    }
    ctx->pc = 0x4955A8u;
    // 0x4955a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4955a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4955ac: 0xc12a5b4  jal         func_4A96D0
    ctx->pc = 0x4955ACu;
    SET_GPR_U32(ctx, 31, 0x4955B4u);
    ctx->pc = 0x4955B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4955ACu;
    // 0x4955b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A96D0u, 0x4955ACu, 0x4955B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955B4u;
label_4955b4:
    // 0x4955b4: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4955B4u;
    {
        const bool branch_taken_0x4955b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4955B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955B4u;
        // 0x4955b8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955b4) {
            ctx->pc = 0x495578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495578;
        }
    }
    ctx->pc = 0x4955BCu;
    // 0x4955bc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4955bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4955c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4955c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4955c4: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x4955C4u;
    SET_GPR_U32(ctx, 31, 0x4955CCu);
    ctx->pc = 0x4955C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4955C4u;
    // 0x4955c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4955C4u, 0x4955CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955CCu;
label_4955cc:
    // 0x4955cc: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4955CCu;
    {
        const bool branch_taken_0x4955cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4955D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955CCu;
        // 0x4955d0: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955cc) {
            ctx->pc = 0x495578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495578;
        }
    }
    ctx->pc = 0x4955D4u;
    // 0x4955d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4955d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4955d8: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x4955d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4955dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4955DCu;
    {
        const bool branch_taken_0x4955dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4955E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955DCu;
        // 0x4955e0: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955dc) {
            ctx->pc = 0x495600u;
            goto label_495600;
        }
    }
    ctx->pc = 0x4955E4u;
    // 0x4955e4: 0xc125436  jal         func_4950D8
    ctx->pc = 0x4955E4u;
    SET_GPR_U32(ctx, 31, 0x4955ECu);
    ctx->pc = 0x4955E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4955E4u;
    // 0x4955e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4950D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4950D8u, 0x4955E4u, 0x4955ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955ECu;
label_4955ec:
    // 0x4955ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4955ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4955f0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x4955F0u;
    {
        const bool branch_taken_0x4955f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4955F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955F0u;
        // 0x4955f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955f0) {
            ctx->pc = 0x495628u;
            goto label_495628;
        }
    }
    ctx->pc = 0x4955F8u;
    // 0x4955f8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x4955F8u;
    {
        const bool branch_taken_0x4955f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4955FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4955F8u;
        // 0x4955fc: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4955f8) {
            ctx->pc = 0x495708u;
            goto label_495708;
        }
    }
    ctx->pc = 0x495600u;
label_495600:
    // 0x495600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495604: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x495604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x495608: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x495608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x49560c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x49560Cu;
    SET_GPR_U32(ctx, 31, 0x495614u);
    ctx->pc = 0x495610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49560Cu;
    // 0x495610: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x49560Cu, 0x495614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495614u;
label_495614:
    // 0x495614: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x495614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x495618: 0xc11f024  jal         func_47C090
    ctx->pc = 0x495618u;
    SET_GPR_U32(ctx, 31, 0x495620u);
    ctx->pc = 0x49561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495618u;
    // 0x49561c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x495618u, 0x495620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495620u;
label_495620:
    // 0x495620: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x495620u;
    {
        const bool branch_taken_0x495620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495620u;
        // 0x495624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495620) {
            ctx->pc = 0x495704u;
            goto label_495704;
        }
    }
    ctx->pc = 0x495628u;
label_495628:
    // 0x495628: 0xc122342  jal         func_488D08
    ctx->pc = 0x495628u;
    SET_GPR_U32(ctx, 31, 0x495630u);
    ctx->pc = 0x49562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495628u;
    // 0x49562c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D08u, 0x495628u, 0x495630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495630u;
label_495630:
    // 0x495630: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x495630u;
    {
        const bool branch_taken_0x495630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x495634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495630u;
        // 0x495634: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495630) {
            ctx->pc = 0x495648u;
            goto label_495648;
        }
    }
    ctx->pc = 0x495638u;
    // 0x495638: 0xc121888  jal         func_486220
    ctx->pc = 0x495638u;
    SET_GPR_U32(ctx, 31, 0x495640u);
    ctx->pc = 0x49563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495638u;
    // 0x49563c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x495638u, 0x495640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495640u;
label_495640:
    // 0x495640: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x495640u;
    {
        const bool branch_taken_0x495640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495640u;
        // 0x495644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495640) {
            ctx->pc = 0x495704u;
            goto label_495704;
        }
    }
    ctx->pc = 0x495648u;
label_495648:
    // 0x495648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49564c: 0xc12228e  jal         func_488A38
    ctx->pc = 0x49564Cu;
    SET_GPR_U32(ctx, 31, 0x495654u);
    ctx->pc = 0x495650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49564Cu;
    // 0x495650: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A38u, 0x49564Cu, 0x495654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495654u;
label_495654:
    // 0x495654: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x495654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495658: 0xc1222b6  jal         func_488AD8
    ctx->pc = 0x495658u;
    SET_GPR_U32(ctx, 31, 0x495660u);
    ctx->pc = 0x49565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495658u;
    // 0x49565c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488AD8u, 0x495658u, 0x495660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495660u;
label_495660:
    // 0x495660: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x495660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495664: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x495664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x495668: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x495668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49566c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x49566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x495670: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x495670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x495674: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x495674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x495678: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x495678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x49567c: 0x34c6f0ff  ori         $a2, $a2, 0xF0FF
    ctx->pc = 0x49567cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61695);
    // 0x495680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x495680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x495684: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x495684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x495688: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x495688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49568c: 0x34e70fff  ori         $a3, $a3, 0xFFF
    ctx->pc = 0x49568cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4095);
    // 0x495690: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x495690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
    // 0x495694: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x495694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495698: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x495698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49569c: 0x8d040050  lw          $a0, 0x50($t0)
    ctx->pc = 0x49569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4956a0: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x4956a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4956a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4956a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4956a8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4956a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4956ac: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x4956acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4956b0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4956b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4956b4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4956b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4956b8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4956b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4956bc: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x4956bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x4956c0: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x4956c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x4956c4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4956c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4956c8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x4956c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x4956cc: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x4956ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4956d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4956d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4956d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4956d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4956d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4956D8u;
    {
        const bool branch_taken_0x4956d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4956DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4956D8u;
        // 0x4956dc: 0xad020050  sw          $v0, 0x50($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4956d8) {
            ctx->pc = 0x495700u;
            goto label_495700;
        }
    }
    ctx->pc = 0x4956E0u;
label_4956e0:
    // 0x4956e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4956e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4956e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4956e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4956e8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4956e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x4956ec: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4956ECu;
    SET_GPR_U32(ctx, 31, 0x4956F4u);
    ctx->pc = 0x4956F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4956ECu;
    // 0x4956f0: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4956ECu, 0x4956F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4956F4u;
label_4956f4:
    // 0x4956f4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x4956f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x4956f8: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4956F8u;
    SET_GPR_U32(ctx, 31, 0x495700u);
    ctx->pc = 0x4956FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4956F8u;
    // 0x4956fc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4956F8u, 0x495700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495700u;
label_495700:
    // 0x495700: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x495700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_495704:
    // 0x495704: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x495704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_495708:
    // 0x495708: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x495708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x49570c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x49570cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x495710: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x495710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x495714: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x495714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x495718: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x495718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x49571c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x49571cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x495720: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x495720u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x495724: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x495724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x495728: 0x3e00008  jr          $ra
    ctx->pc = 0x495728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495728u;
        // 0x49572c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495730u;
}

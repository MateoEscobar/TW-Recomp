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

// Function: sub_00448FF8
// Address: 0x448ff8 - 0x449238
void sub_00448FF8_0x448ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448FF8_0x448ff8");
#endif

    switch (ctx->pc) {
        case 0x449050u: goto label_449050;
        case 0x449054u: goto label_449054;
        case 0x44905cu: goto label_44905c;
        case 0x449078u: goto label_449078;
        case 0x449080u: goto label_449080;
        case 0x4490c8u: goto label_4490c8;
        case 0x4490ecu: goto label_4490ec;
        case 0x449160u: goto label_449160;
        case 0x449190u: goto label_449190;
        case 0x4491c0u: goto label_4491c0;
        case 0x4491f4u: goto label_4491f4;
        case 0x44920cu: goto label_44920c;
        default: break;
    }

    ctx->pc = 0x448ff8u;

    // 0x448ff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x448ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x448ffc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x448ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x449000: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x449000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x449004: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x449004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449008: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x449008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44900c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x44900cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x449010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x449010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x449014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449018: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x449018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x44901c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x44901cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x449020: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x449020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x449024: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x449024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x449028: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x449028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x44902c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x44902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x449030: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x449030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x449034: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x449034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x449038: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x449038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x44903c: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x44903cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x449040: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x449040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x449044: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x449044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x449048: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x449048u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x44904c: 0x0  nop
    ctx->pc = 0x44904cu;
    // NOP
label_449050:
    // 0x449050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x449050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_449054:
    // 0x449054: 0xc11248e  jal         func_449238
    ctx->pc = 0x449054u;
    SET_GPR_U32(ctx, 31, 0x44905Cu);
    ctx->pc = 0x449058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449054u;
    // 0x449058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449238u, 0x449054u, 0x44905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44905Cu;
label_44905c:
    // 0x44905c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44905cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449060: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x449060u;
    {
        const bool branch_taken_0x449060 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x449064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449060u;
        // 0x449064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449060) {
            ctx->pc = 0x449054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449054;
        }
    }
    ctx->pc = 0x449068u;
    // 0x449068: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x449068u;
    {
        const bool branch_taken_0x449068 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x449068) {
            ctx->pc = 0x449050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449050;
        }
    }
    ctx->pc = 0x449070u;
    // 0x449070: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x449070u;
    SET_GPR_U32(ctx, 31, 0x449078u);
    ctx->pc = 0x449074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449070u;
    // 0x449074: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x449070u, 0x449078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449078u;
label_449078:
    // 0x449078: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x449078u;
    SET_GPR_U32(ctx, 31, 0x449080u);
    ctx->pc = 0x44907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449078u;
    // 0x44907c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x449078u, 0x449080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449080u;
label_449080:
    // 0x449080: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x449084: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x449084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x449088: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x449088u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x10000000
    // 0x44908c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x44908Cu;
    {
        const bool branch_taken_0x44908c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44908Cu;
        // 0x449090: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44908c) {
            ctx->pc = 0x449114u;
            goto label_449114;
        }
    }
    ctx->pc = 0x449094u;
    // 0x449094: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x449094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x449098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x449098u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x44909c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x44909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x4490a0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4490A0u;
    {
        const bool branch_taken_0x4490a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4490A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490A0u;
        // 0x4490a4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4490a0) {
            ctx->pc = 0x449118u;
            goto label_449118;
        }
    }
    ctx->pc = 0x4490A8u;
    // 0x4490a8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x4490a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x4490ac: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x4490acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x4490b0: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x4490b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x4490b4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x4490b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x4490b8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x4490b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x4490bc: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x4490bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x4490c0: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x4490c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x4490c4: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x4490c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_4490c8:
    // 0x4490c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4490c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4490cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4490CCu;
    {
        const bool branch_taken_0x4490cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4490cc) {
            ctx->pc = 0x4490D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4490CCu;
            // 0x4490d0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4490F0u;
            goto label_4490f0;
        }
    }
    ctx->pc = 0x4490D4u;
    // 0x4490d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4490d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4490d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4490d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4490dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4490DCu;
    {
        const bool branch_taken_0x4490dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4490dc) {
            ctx->pc = 0x4490E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4490DCu;
            // 0x4490e0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4490F0u;
            goto label_4490f0;
        }
    }
    ctx->pc = 0x4490E4u;
    // 0x4490e4: 0xc1119a0  jal         func_446680
    ctx->pc = 0x4490E4u;
    SET_GPR_U32(ctx, 31, 0x4490ECu);
    ctx->pc = 0x4490E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4490E4u;
    // 0x4490e8: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446680u, 0x4490E4u, 0x4490ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4490ECu;
label_4490ec:
    // 0x4490ec: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x4490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_4490f0:
    // 0x4490f0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4490F0u;
    {
        const bool branch_taken_0x4490f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4490f0) {
            ctx->pc = 0x449158u;
            goto label_449158;
        }
    }
    ctx->pc = 0x4490F8u;
    // 0x4490f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4490f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4490fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4490FCu;
    {
        const bool branch_taken_0x4490fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4490FCu;
        // 0x449100: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4490fc) {
            ctx->pc = 0x449118u;
            goto label_449118;
        }
    }
    ctx->pc = 0x449104u;
    // 0x449104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x449104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x449108: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x449108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x44910c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x44910Cu;
    {
        const bool branch_taken_0x44910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44910c) {
            ctx->pc = 0x4490C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4490c8;
        }
    }
    ctx->pc = 0x449114u;
label_449114:
    // 0x449114: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_449118:
    // 0x449118: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x449118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44911c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x44911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x449120: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x449120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x449124: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449124u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x449128: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x449128u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x44912c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x44912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x449130: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x449130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449134: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x449134u;
    {
        const bool branch_taken_0x449134 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x449138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449134u;
        // 0x449138: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449134) {
            ctx->pc = 0x449168u;
            goto label_449168;
        }
    }
    ctx->pc = 0x44913Cu;
    // 0x44913c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x44913cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x449140: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x449140u;
    {
        const bool branch_taken_0x449140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449140u;
        // 0x449144: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449140) {
            ctx->pc = 0x449150u;
            goto label_449150;
        }
    }
    ctx->pc = 0x449148u;
    // 0x449148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x449148u;
    {
        const bool branch_taken_0x449148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449148u;
        // 0x44914c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449148) {
            ctx->pc = 0x44916Cu;
            goto label_44916c;
        }
    }
    ctx->pc = 0x449150u;
label_449150:
    // 0x449150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x449150u;
    {
        const bool branch_taken_0x449150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449150u;
        // 0x449154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449150) {
            ctx->pc = 0x44916Cu;
            goto label_44916c;
        }
    }
    ctx->pc = 0x449158u;
label_449158:
    // 0x449158: 0xc111f1c  jal         func_447C70
    ctx->pc = 0x449158u;
    SET_GPR_U32(ctx, 31, 0x449160u);
    ctx->pc = 0x447C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447C70u, 0x449158u, 0x449160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449160u;
label_449160:
    // 0x449160: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x449160u;
    {
        const bool branch_taken_0x449160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449160u;
        // 0x449164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449160) {
            ctx->pc = 0x449194u;
            goto label_449194;
        }
    }
    ctx->pc = 0x449168u;
label_449168:
    // 0x449168: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x449168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_44916c:
    // 0x44916c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x44916cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x449170: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x449174: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x449174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x449178: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x449178u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x44917c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x44917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x449180: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x449180u;
    {
        const bool branch_taken_0x449180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449180u;
        // 0x449184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449180) {
            ctx->pc = 0x449190u;
            goto label_449190;
        }
    }
    ctx->pc = 0x449188u;
    // 0x449188: 0xc111f44  jal         func_447D10
    ctx->pc = 0x449188u;
    SET_GPR_U32(ctx, 31, 0x449190u);
    ctx->pc = 0x44918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449188u;
    // 0x44918c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447D10u, 0x449188u, 0x449190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449190u;
label_449190:
    // 0x449190: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x449190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_449194:
    // 0x449194: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x449194u;
    {
        const bool branch_taken_0x449194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449194u;
        // 0x449198: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449194) {
            ctx->pc = 0x4491B0u;
            goto label_4491b0;
        }
    }
    ctx->pc = 0x44919Cu;
    // 0x44919c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x44919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x4491a0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4491A0u;
    {
        const bool branch_taken_0x4491a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4491A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491A0u;
        // 0x4491a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491a0) {
            ctx->pc = 0x449210u;
            goto label_449210;
        }
    }
    ctx->pc = 0x4491A8u;
    // 0x4491a8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x4491a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4491ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4491acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_4491b0:
    // 0x4491b0: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x4491b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x4491b4: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x4491b4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4491b8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4491b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x4491bc: 0x0  nop
    ctx->pc = 0x4491bcu;
    // NOP
label_4491c0:
    // 0x4491c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4491c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4491c4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4491c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4491c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4491c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4491cc: 0x0  nop
    ctx->pc = 0x4491ccu;
    // NOP
    // 0x4491d0: 0x0  nop
    ctx->pc = 0x4491d0u;
    // NOP
    // 0x4491d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4491D4u;
    {
        const bool branch_taken_0x4491d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4491d4) {
            ctx->pc = 0x4491C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4491c0;
        }
    }
    ctx->pc = 0x4491DCu;
    // 0x4491dc: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x4491DCu;
    {
        const bool branch_taken_0x4491dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x4491E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491DCu;
        // 0x4491e0: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491dc) {
            ctx->pc = 0x4491F8u;
            goto label_4491f8;
        }
    }
    ctx->pc = 0x4491E4u;
    // 0x4491e4: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x4491e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x4491e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4491e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4491ec: 0xc112376  jal         func_448DD8
    ctx->pc = 0x4491ECu;
    SET_GPR_U32(ctx, 31, 0x4491F4u);
    ctx->pc = 0x4491F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4491ECu;
    // 0x4491f0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x448DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448DD8u, 0x4491ECu, 0x4491F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4491F4u;
label_4491f4:
    // 0x4491f4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x4491f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4491f8:
    // 0x4491f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4491F8u;
    {
        const bool branch_taken_0x4491f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4491FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4491F8u;
        // 0x4491fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4491f8) {
            ctx->pc = 0x44920Cu;
            goto label_44920c;
        }
    }
    ctx->pc = 0x449200u;
    // 0x449200: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x449200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x449204: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x449204u;
    SET_GPR_U32(ctx, 31, 0x44920Cu);
    ctx->pc = 0x449208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449204u;
    // 0x449208: 0x24a5e250  addiu       $a1, $a1, -0x1DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x449204u, 0x44920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44920Cu;
label_44920c:
    // 0x44920c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x44920cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_449210:
    // 0x449210: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x449210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x449214: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x449214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x449218: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x449218u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44921c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44921cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x449220: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x449220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x449224: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x449224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449228: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x449228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44922c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44922cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449230: 0x3e00008  jr          $ra
    ctx->pc = 0x449230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449230u;
        // 0x449234: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449238u;
}

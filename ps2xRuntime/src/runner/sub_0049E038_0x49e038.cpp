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

// Function: sub_0049E038
// Address: 0x49e038 - 0x49ea80
void sub_0049E038_0x49e038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E038_0x49e038");
#endif

    switch (ctx->pc) {
        case 0x49e088u: goto label_49e088;
        case 0x49e0c0u: goto label_49e0c0;
        case 0x49e148u: goto label_49e148;
        case 0x49e1b0u: goto label_49e1b0;
        case 0x49e200u: goto label_49e200;
        case 0x49e218u: goto label_49e218;
        case 0x49e2d0u: goto label_49e2d0;
        case 0x49e338u: goto label_49e338;
        case 0x49e388u: goto label_49e388;
        case 0x49e3a0u: goto label_49e3a0;
        case 0x49e440u: goto label_49e440;
        case 0x49e4d0u: goto label_49e4d0;
        case 0x49e540u: goto label_49e540;
        case 0x49e554u: goto label_49e554;
        case 0x49e598u: goto label_49e598;
        case 0x49e5e8u: goto label_49e5e8;
        case 0x49e698u: goto label_49e698;
        case 0x49e740u: goto label_49e740;
        case 0x49e7f0u: goto label_49e7f0;
        case 0x49e880u: goto label_49e880;
        case 0x49e8f8u: goto label_49e8f8;
        case 0x49e970u: goto label_49e970;
        case 0x49ea0cu: goto label_49ea0c;
        case 0x49ea1cu: goto label_49ea1c;
        case 0x49ea44u: goto label_49ea44;
        case 0x49ea54u: goto label_49ea54;
        default: break;
    }

    ctx->pc = 0x49e038u;

    // 0x49e038: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x49e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x49e03c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x49e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x49e040: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x49e040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x49e044: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49e044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e048: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x49e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x49e04c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49e04cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e050: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x49e050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x49e054: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x49e054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x49e058: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x49e058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x49e05c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x49e060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49e064: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x49e064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x49e068: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49e068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49e06c: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x49e06cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49e070: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x49E070u;
    {
        const bool branch_taken_0x49e070 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E070u;
        // 0x49e074: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e070) {
            ctx->pc = 0x49E090u;
            goto label_49e090;
        }
    }
    ctx->pc = 0x49E078u;
    // 0x49e078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e07c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e080: 0xc121902  jal         func_486408
    ctx->pc = 0x49E080u;
    SET_GPR_U32(ctx, 31, 0x49E088u);
    ctx->pc = 0x49E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E080u;
    // 0x49e084: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49E080u, 0x49E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E088u;
label_49e088:
    // 0x49e088: 0x10400273  beqz        $v0, . + 4 + (0x273 << 2)
    ctx->pc = 0x49E088u;
    {
        const bool branch_taken_0x49e088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E088u;
        // 0x49e08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e088) {
            ctx->pc = 0x49EA58u;
            goto label_49ea58;
        }
    }
    ctx->pc = 0x49E090u;
label_49e090:
    // 0x49e090: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x49e090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x49e094: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x49e098: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x49E098u;
    {
        const bool branch_taken_0x49e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e098) {
            ctx->pc = 0x49E09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E098u;
            // 0x49e09c: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E0CCu;
            goto label_49e0cc;
        }
    }
    ctx->pc = 0x49E0A0u;
    // 0x49e0a0: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x49e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x49e0a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x49e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49e0a8: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x49e0a8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49e0ac: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x49E0ACu;
    {
        const bool branch_taken_0x49e0ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e0ac) {
            ctx->pc = 0x49E0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E0ACu;
            // 0x49e0b0: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E0CCu;
            goto label_49e0cc;
        }
    }
    ctx->pc = 0x49E0B4u;
    // 0x49e0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49e0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e0b8: 0xc121922  jal         func_486488
    ctx->pc = 0x49E0B8u;
    SET_GPR_U32(ctx, 31, 0x49E0C0u);
    ctx->pc = 0x49E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E0B8u;
    // 0x49e0bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486488u, 0x49E0B8u, 0x49E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E0C0u;
label_49e0c0:
    // 0x49e0c0: 0x10400265  beqz        $v0, . + 4 + (0x265 << 2)
    ctx->pc = 0x49E0C0u;
    {
        const bool branch_taken_0x49e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E0C0u;
        // 0x49e0c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0c0) {
            ctx->pc = 0x49EA58u;
            goto label_49ea58;
        }
    }
    ctx->pc = 0x49E0C8u;
    // 0x49e0c8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x49e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_49e0cc:
    // 0x49e0cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49e0d0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x49e0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49e0d4: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x49e0d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x49e0d8: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x49E0D8u;
    {
        const bool branch_taken_0x49e0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E0D8u;
        // 0x49e0dc: 0x8e870018  lw          $a3, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0d8) {
            ctx->pc = 0x49E288u;
            goto label_49e288;
        }
    }
    ctx->pc = 0x49E0E0u;
    // 0x49e0e0: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x49e0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x49e0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E0E4u;
    {
        const bool branch_taken_0x49e0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E0E4u;
        // 0x49e0e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0e4) {
            ctx->pc = 0x49E0FCu;
            goto label_49e0fc;
        }
    }
    ctx->pc = 0x49E0ECu;
    // 0x49e0ec: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49E0ECu;
    {
        const bool branch_taken_0x49e0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49e0ec) {
            ctx->pc = 0x49E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E0ECu;
            // 0x49e0f0: 0x92230023  lbu         $v1, 0x23($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E110u;
            goto label_49e110;
        }
    }
    ctx->pc = 0x49E0F4u;
    // 0x49e0f4: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x49E0F4u;
    {
        const bool branch_taken_0x49e0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E0F4u;
        // 0x49e0f8: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e0f4) {
            ctx->pc = 0x49E9F0u;
            goto label_49e9f0;
        }
    }
    ctx->pc = 0x49E0FCu;
label_49e0fc:
    // 0x49e0fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x49e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49e100: 0x50620121  beql        $v1, $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x49E100u;
    {
        const bool branch_taken_0x49e100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49e100) {
            ctx->pc = 0x49E104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E100u;
            // 0x49e104: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E588u;
            goto label_49e588;
        }
    }
    ctx->pc = 0x49E108u;
    // 0x49e108: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x49E108u;
    {
        const bool branch_taken_0x49e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E108u;
        // 0x49e10c: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e108) {
            ctx->pc = 0x49E9F0u;
            goto label_49e9f0;
        }
    }
    ctx->pc = 0x49E110u;
label_49e110:
    // 0x49e110: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x49e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x49e114: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x49E114u;
    {
        const bool branch_taken_0x49e114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E114u;
        // 0x49e118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e114) {
            ctx->pc = 0x49E280u;
            goto label_49e280;
        }
    }
    ctx->pc = 0x49E11Cu;
    // 0x49e11c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49e11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49e120: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E120u;
    {
        const bool branch_taken_0x49e120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E120u;
        // 0x49e124: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e120) {
            ctx->pc = 0x49E138u;
            goto label_49e138;
        }
    }
    ctx->pc = 0x49E128u;
    // 0x49e128: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x49E128u;
    {
        const bool branch_taken_0x49e128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E128u;
        // 0x49e12c: 0x3c060080  lui         $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e128) {
            ctx->pc = 0x49E19Cu;
            goto label_49e19c;
        }
    }
    ctx->pc = 0x49E130u;
    // 0x49e130: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x49E130u;
    {
        const bool branch_taken_0x49e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E130u;
        // 0x49e134: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e130) {
            ctx->pc = 0x49E1F4u;
            goto label_49e1f4;
        }
    }
    ctx->pc = 0x49E138u;
label_49e138:
    // 0x49e138: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x49e138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e13c: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x49e13cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x49e140: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x49e140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49e144: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x49e144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_49e148:
    // 0x49e148: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49e148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49e14c: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x49e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49e150: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x49e150u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x49e154: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x49e154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x49e158: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x49e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x49e15c: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x49e15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x49e160: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x49e160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x49e164: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x49e164u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e168: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x49e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x49e16c: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x49e16cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E170u;
    {
        const bool branch_taken_0x49e170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E170u;
        // 0x49e174: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e170) {
            ctx->pc = 0x49E180u;
            goto label_49e180;
        }
    }
    ctx->pc = 0x49E178u;
    // 0x49e178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E178u;
    {
        const bool branch_taken_0x49e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E178u;
        // 0x49e17c: 0xa0e90003  sb          $t1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e178) {
            ctx->pc = 0x49E184u;
            goto label_49e184;
        }
    }
    ctx->pc = 0x49E180u;
label_49e180:
    // 0x49e180: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x49e180u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_49e184:
    // 0x49e184: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49e184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49e188: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x49e188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x49e18c: 0x501ffee  bgez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49E18Cu;
    {
        const bool branch_taken_0x49e18c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E18Cu;
        // 0x49e190: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e18c) {
            ctx->pc = 0x49E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e148;
        }
    }
    ctx->pc = 0x49E194u;
    // 0x49e194: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49E194u;
    {
        const bool branch_taken_0x49e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E194u;
        // 0x49e198: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e194) {
            ctx->pc = 0x49E1F4u;
            goto label_49e1f4;
        }
    }
    ctx->pc = 0x49E19Cu;
label_49e19c:
    // 0x49e19c: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x49e19cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e1a0: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x49e1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x49e1a4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x49e1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x49e1a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x49e1a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e1ac: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x49e1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_49e1b0:
    // 0x49e1b0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49e1b4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x49e1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x49e1b8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x49e1b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x49e1bc: 0x8b1824  and         $v1, $a0, $t3
    ctx->pc = 0x49e1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x49e1c0: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x49e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49e1c4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x49e1c4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x49e1c8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x49e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49e1cc: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x49e1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e1d0: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x49e1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e1d4: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x49e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e1d8: 0x50ca0001  beql        $a2, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x49E1D8u;
    {
        const bool branch_taken_0x49e1d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x49e1d8) {
            ctx->pc = 0x49E1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E1D8u;
            // 0x49e1dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E1E0u;
            goto label_49e1e0;
        }
    }
    ctx->pc = 0x49E1E0u;
label_49e1e0:
    // 0x49e1e0: 0x1812  mflo        $v1
    ctx->pc = 0x49e1e0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x49e1e4: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x49e1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e1e8: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49E1E8u;
    {
        const bool branch_taken_0x49e1e8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1E8u;
        // 0x49e1ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1e8) {
            ctx->pc = 0x49E1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e1b0;
        }
    }
    ctx->pc = 0x49E1F0u;
    // 0x49e1f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49e1f4:
    // 0x49e1f4: 0x1840020b  blez        $v0, . + 4 + (0x20B << 2)
    ctx->pc = 0x49E1F4u;
    {
        const bool branch_taken_0x49e1f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1F4u;
        // 0x49e1f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1f4) {
            ctx->pc = 0x49EA24u;
            goto label_49ea24;
        }
    }
    ctx->pc = 0x49E1FCu;
    // 0x49e1fc: 0x0  nop
    ctx->pc = 0x49e1fcu;
    // NOP
label_49e200:
    // 0x49e200: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e204: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e204u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e20c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x49e20cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e210: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x49E210u;
    {
        const bool branch_taken_0x49e210 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E210u;
        // 0x49e214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e210) {
            ctx->pc = 0x49E258u;
            goto label_49e258;
        }
    }
    ctx->pc = 0x49E218u;
label_49e218:
    // 0x49e218: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x49e218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x49e21c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x49e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x49e220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49e224: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E224u;
    {
        const bool branch_taken_0x49e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e224) {
            ctx->pc = 0x49E228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E224u;
            // 0x49e228: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E23Cu;
            goto label_49e23c;
        }
    }
    ctx->pc = 0x49E22Cu;
    // 0x49e22c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x49e22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49e230: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x49e234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E234u;
    {
        const bool branch_taken_0x49e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E234u;
        // 0x49e238: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e234) {
            ctx->pc = 0x49E240u;
            goto label_49e240;
        }
    }
    ctx->pc = 0x49E23Cu;
label_49e23c:
    // 0x49e23c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_49e240:
    // 0x49e240: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x49e240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e244: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e24c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e250: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49E250u;
    {
        const bool branch_taken_0x49e250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E250u;
        // 0x49e254: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e250) {
            ctx->pc = 0x49E218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e218;
        }
    }
    ctx->pc = 0x49E258u;
label_49e258:
    // 0x49e258: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x49e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x49e25c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x49e25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e260: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x49e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49e264: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49e268: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x49e268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x49e26c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x49e26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e270: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49E270u;
    {
        const bool branch_taken_0x49e270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E270u;
        // 0x49e274: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e270) {
            ctx->pc = 0x49E200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e200;
        }
    }
    ctx->pc = 0x49E278u;
    // 0x49e278: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x49E278u;
    {
        const bool branch_taken_0x49e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E278u;
        // 0x49e27c: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e278) {
            ctx->pc = 0x49EA28u;
            goto label_49ea28;
        }
    }
    ctx->pc = 0x49E280u;
label_49e280:
    // 0x49e280: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x49E280u;
    {
        const bool branch_taken_0x49e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E280u;
        // 0x49e284: 0x30620060  andi        $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e280) {
            ctx->pc = 0x49E9F4u;
            goto label_49e9f4;
        }
    }
    ctx->pc = 0x49E288u;
label_49e288:
    // 0x49e288: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x49e288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x49e28c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x49e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49e290: 0x30830060  andi        $v1, $a0, 0x60
    ctx->pc = 0x49e290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x49e294: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x49E294u;
    {
        const bool branch_taken_0x49e294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E294u;
        // 0x49e298: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e294) {
            ctx->pc = 0x49E408u;
            goto label_49e408;
        }
    }
    ctx->pc = 0x49E29Cu;
    // 0x49e29c: 0x146200b6  bne         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x49E29Cu;
    {
        const bool branch_taken_0x49e29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E29Cu;
        // 0x49e2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e29c) {
            ctx->pc = 0x49E578u;
            goto label_49e578;
        }
    }
    ctx->pc = 0x49E2A4u;
    // 0x49e2a4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x49e2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x49e2a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E2A8u;
    {
        const bool branch_taken_0x49e2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2A8u;
        // 0x49e2ac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2a8) {
            ctx->pc = 0x49E2C0u;
            goto label_49e2c0;
        }
    }
    ctx->pc = 0x49E2B0u;
    // 0x49e2b0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x49E2B0u;
    {
        const bool branch_taken_0x49e2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2B0u;
        // 0x49e2b4: 0x3c060080  lui         $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2b0) {
            ctx->pc = 0x49E324u;
            goto label_49e324;
        }
    }
    ctx->pc = 0x49E2B8u;
    // 0x49e2b8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x49E2B8u;
    {
        const bool branch_taken_0x49e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2B8u;
        // 0x49e2bc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2b8) {
            ctx->pc = 0x49E37Cu;
            goto label_49e37c;
        }
    }
    ctx->pc = 0x49E2C0u;
label_49e2c0:
    // 0x49e2c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x49e2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e2c4: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x49e2c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x49e2c8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x49e2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49e2cc: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x49e2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_49e2d0:
    // 0x49e2d0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49e2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49e2d4: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x49e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49e2d8: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x49e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x49e2dc: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x49e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x49e2e0: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x49e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x49e2e4: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x49e2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x49e2e8: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x49e2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x49e2ec: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x49e2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e2f0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x49e2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x49e2f4: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x49e2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e2f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E2F8u;
    {
        const bool branch_taken_0x49e2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2F8u;
        // 0x49e2fc: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2f8) {
            ctx->pc = 0x49E308u;
            goto label_49e308;
        }
    }
    ctx->pc = 0x49E300u;
    // 0x49e300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E300u;
    {
        const bool branch_taken_0x49e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E300u;
        // 0x49e304: 0xa0e90003  sb          $t1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e300) {
            ctx->pc = 0x49E30Cu;
            goto label_49e30c;
        }
    }
    ctx->pc = 0x49E308u;
label_49e308:
    // 0x49e308: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x49e308u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_49e30c:
    // 0x49e30c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49e30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49e310: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x49e310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x49e314: 0x501ffee  bgez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49E314u;
    {
        const bool branch_taken_0x49e314 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E314u;
        // 0x49e318: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e314) {
            ctx->pc = 0x49E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e2d0;
        }
    }
    ctx->pc = 0x49E31Cu;
    // 0x49e31c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49E31Cu;
    {
        const bool branch_taken_0x49e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E31Cu;
        // 0x49e320: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e31c) {
            ctx->pc = 0x49E37Cu;
            goto label_49e37c;
        }
    }
    ctx->pc = 0x49E324u;
label_49e324:
    // 0x49e324: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x49e324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e328: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x49e328u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x49e32c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x49e32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x49e330: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x49e330u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e334: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x49e334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_49e338:
    // 0x49e338: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49e338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49e33c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x49e33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x49e340: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x49e340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x49e344: 0x8b1824  and         $v1, $a0, $t3
    ctx->pc = 0x49e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x49e348: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x49e348u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49e34c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x49e34cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x49e350: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x49e350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49e354: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x49e354u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e358: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x49e358u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e35c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x49e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e360: 0x50ca0001  beql        $a2, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x49E360u;
    {
        const bool branch_taken_0x49e360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x49e360) {
            ctx->pc = 0x49E364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E360u;
            // 0x49e364: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E368u;
            goto label_49e368;
        }
    }
    ctx->pc = 0x49E368u;
label_49e368:
    // 0x49e368: 0x1812  mflo        $v1
    ctx->pc = 0x49e368u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x49e36c: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x49e36cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e370: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49E370u;
    {
        const bool branch_taken_0x49e370 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E370u;
        // 0x49e374: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e370) {
            ctx->pc = 0x49E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e338;
        }
    }
    ctx->pc = 0x49E378u;
    // 0x49e378: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49e37c:
    // 0x49e37c: 0x184001a9  blez        $v0, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x49E37Cu;
    {
        const bool branch_taken_0x49e37c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E37Cu;
        // 0x49e380: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e37c) {
            ctx->pc = 0x49EA24u;
            goto label_49ea24;
        }
    }
    ctx->pc = 0x49E384u;
    // 0x49e384: 0x0  nop
    ctx->pc = 0x49e384u;
    // NOP
label_49e388:
    // 0x49e388: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e38c: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e38cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49e390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e394: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x49e394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e398: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x49E398u;
    {
        const bool branch_taken_0x49e398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E398u;
        // 0x49e39c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e398) {
            ctx->pc = 0x49E3E0u;
            goto label_49e3e0;
        }
    }
    ctx->pc = 0x49E3A0u;
label_49e3a0:
    // 0x49e3a0: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x49e3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x49e3a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x49e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x49e3a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49e3ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E3ACu;
    {
        const bool branch_taken_0x49e3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e3ac) {
            ctx->pc = 0x49E3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E3ACu;
            // 0x49e3b0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E3C4u;
            goto label_49e3c4;
        }
    }
    ctx->pc = 0x49E3B4u;
    // 0x49e3b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x49e3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49e3b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x49e3bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E3BCu;
    {
        const bool branch_taken_0x49e3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E3BCu;
        // 0x49e3c0: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e3bc) {
            ctx->pc = 0x49E3C8u;
            goto label_49e3c8;
        }
    }
    ctx->pc = 0x49E3C4u;
label_49e3c4:
    // 0x49e3c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_49e3c8:
    // 0x49e3c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x49e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e3cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e3d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e3d4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e3d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49E3D8u;
    {
        const bool branch_taken_0x49e3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E3D8u;
        // 0x49e3dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e3d8) {
            ctx->pc = 0x49E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e3a0;
        }
    }
    ctx->pc = 0x49E3E0u;
label_49e3e0:
    // 0x49e3e0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x49e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x49e3e4: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x49e3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e3e8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x49e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49e3ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49e3f0: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x49e3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x49e3f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x49e3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e3f8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49E3F8u;
    {
        const bool branch_taken_0x49e3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E3F8u;
        // 0x49e3fc: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e3f8) {
            ctx->pc = 0x49E388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e388;
        }
    }
    ctx->pc = 0x49E400u;
    // 0x49e400: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x49E400u;
    {
        const bool branch_taken_0x49e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E400u;
        // 0x49e404: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e400) {
            ctx->pc = 0x49EA28u;
            goto label_49ea28;
        }
    }
    ctx->pc = 0x49E408u;
label_49e408:
    // 0x49e408: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x49e408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x49e40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49e410: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E410u;
    {
        const bool branch_taken_0x49e410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E410u;
        // 0x49e414: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e410) {
            ctx->pc = 0x49E428u;
            goto label_49e428;
        }
    }
    ctx->pc = 0x49E418u;
    // 0x49e418: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x49E418u;
    {
        const bool branch_taken_0x49e418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E418u;
        // 0x49e41c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e418) {
            ctx->pc = 0x49E4B4u;
            goto label_49e4b4;
        }
    }
    ctx->pc = 0x49E420u;
    // 0x49e420: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x49E420u;
    {
        const bool branch_taken_0x49e420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E420u;
        // 0x49e424: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e420) {
            ctx->pc = 0x49E534u;
            goto label_49e534;
        }
    }
    ctx->pc = 0x49E428u;
label_49e428:
    // 0x49e428: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49e42c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x49e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e430: 0x244bfde0  addiu       $t3, $v0, -0x220
    ctx->pc = 0x49e430u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
    // 0x49e434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49e434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e438: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x49e438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x49e43c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x49e43cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_49e440:
    // 0x49e440: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x49e440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
    // 0x49e444: 0x310200e7  andi        $v0, $t0, 0xE7
    ctx->pc = 0x49e444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x49e448: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x49e448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x49e44c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49e450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e454: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49e454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49e458: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49e45c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49e460: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49e460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e464: 0x419c2  srl         $v1, $a0, 7
    ctx->pc = 0x49e464u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x49e468: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x49e468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x49e46c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x49e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49e470: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x49e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49e474: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x49e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x49e478: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x49e478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x49e47c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x49e47cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e480: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x49e480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49e484: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x49e484u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e488: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E488u;
    {
        const bool branch_taken_0x49e488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E488u;
        // 0x49e48c: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e488) {
            ctx->pc = 0x49E498u;
            goto label_49e498;
        }
    }
    ctx->pc = 0x49E490u;
    // 0x49e490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E490u;
    {
        const bool branch_taken_0x49e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E490u;
        // 0x49e494: 0xa0e90003  sb          $t1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e490) {
            ctx->pc = 0x49E49Cu;
            goto label_49e49c;
        }
    }
    ctx->pc = 0x49E498u;
label_49e498:
    // 0x49e498: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x49e498u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_49e49c:
    // 0x49e49c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e4a0: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x49e4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x49e4a4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x49E4A4u;
    {
        const bool branch_taken_0x49e4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4A4u;
        // 0x49e4a8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e4a4) {
            ctx->pc = 0x49E440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e440;
        }
    }
    ctx->pc = 0x49E4ACu;
    // 0x49e4ac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x49E4ACu;
    {
        const bool branch_taken_0x49e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4ACu;
        // 0x49e4b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e4ac) {
            ctx->pc = 0x49E534u;
            goto label_49e534;
        }
    }
    ctx->pc = 0x49E4B4u;
label_49e4b4:
    // 0x49e4b4: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x49e4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x49e4b8: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x49e4b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e4bc: 0x244dfde0  addiu       $t5, $v0, -0x220
    ctx->pc = 0x49e4bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
    // 0x49e4c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49e4c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e4c4: 0x3c0cff00  lui         $t4, 0xFF00
    ctx->pc = 0x49e4c4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65280 << 16));
    // 0x49e4c8: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x49e4c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x49e4cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x49e4ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e4d0:
    // 0x49e4d0: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x49e4d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x49e4d4: 0x310300e7  andi        $v1, $t0, 0xE7
    ctx->pc = 0x49e4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x49e4d8: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x49e4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x49e4dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e4e0: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49e4e4: 0x29060100  slti        $a2, $t0, 0x100
    ctx->pc = 0x49e4e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x49e4e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49e4ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49e4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49e4f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49e4f4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x49e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x49e4f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e4fc: 0x4c2024  and         $a0, $v0, $t4
    ctx->pc = 0x49e4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x49e500: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x49e500u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49e504: 0x89001b  divu        $zero, $a0, $t1
    ctx->pc = 0x49e504u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x49e508: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x49e508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x49e50c: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x49e50cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e510: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x49e510u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e514: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x49e514u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e518: 0x512b0001  beql        $t1, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x49E518u;
    {
        const bool branch_taken_0x49e518 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        if (branch_taken_0x49e518) {
            ctx->pc = 0x49E51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E518u;
            // 0x49e51c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E520u;
            goto label_49e520;
        }
    }
    ctx->pc = 0x49E520u;
label_49e520:
    // 0x49e520: 0x2012  mflo        $a0
    ctx->pc = 0x49e520u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x49e524: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x49e524u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e528: 0x14c0ffe9  bnez        $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x49E528u;
    {
        const bool branch_taken_0x49e528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E528u;
        // 0x49e52c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e528) {
            ctx->pc = 0x49E4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e4d0;
        }
    }
    ctx->pc = 0x49E530u;
    // 0x49e530: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49e534:
    // 0x49e534: 0x1840013b  blez        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x49E534u;
    {
        const bool branch_taken_0x49e534 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E534u;
        // 0x49e538: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e534) {
            ctx->pc = 0x49EA24u;
            goto label_49ea24;
        }
    }
    ctx->pc = 0x49E53Cu;
    // 0x49e53c: 0x0  nop
    ctx->pc = 0x49e53cu;
    // NOP
label_49e540:
    // 0x49e540: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x49e540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49e544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49e548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e54c: 0xc10c190  jal         func_430640
    ctx->pc = 0x49E54Cu;
    SET_GPR_U32(ctx, 31, 0x49E554u);
    ctx->pc = 0x49E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E54Cu;
    // 0x49e550: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x49E54Cu, 0x49E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E554u;
label_49e554:
    // 0x49e554: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x49e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x49e558: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x49e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49e55c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x49e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49e560: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49e560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x49e564: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x49e564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e568: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x49E568u;
    {
        const bool branch_taken_0x49e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E568u;
        // 0x49e56c: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e568) {
            ctx->pc = 0x49E540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e540;
        }
    }
    ctx->pc = 0x49E570u;
    // 0x49e570: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x49E570u;
    {
        const bool branch_taken_0x49e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E570u;
        // 0x49e574: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e570) {
            ctx->pc = 0x49EA28u;
            goto label_49ea28;
        }
    }
    ctx->pc = 0x49E578u;
label_49e578:
    // 0x49e578: 0x10600124  beqz        $v1, . + 4 + (0x124 << 2)
    ctx->pc = 0x49E578u;
    {
        const bool branch_taken_0x49e578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e578) {
            ctx->pc = 0x49EA0Cu;
            goto label_49ea0c;
        }
    }
    ctx->pc = 0x49E580u;
    // 0x49e580: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x49E580u;
    {
        const bool branch_taken_0x49e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e580) {
            ctx->pc = 0x49E9FCu;
            goto label_49e9fc;
        }
    }
    ctx->pc = 0x49E588u;
label_49e588:
    // 0x49e588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49e588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e58c: 0x922a0023  lbu         $t2, 0x23($s1)
    ctx->pc = 0x49e58cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x49e590: 0x18400124  blez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x49E590u;
    {
        const bool branch_taken_0x49e590 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E590u;
        // 0x49e594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e590) {
            ctx->pc = 0x49EA24u;
            goto label_49ea24;
        }
    }
    ctx->pc = 0x49E598u;
label_49e598:
    // 0x49e598: 0x3143006f  andi        $v1, $t2, 0x6F
    ctx->pc = 0x49e598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)111);
    // 0x49e59c: 0x2c620046  sltiu       $v0, $v1, 0x46
    ctx->pc = 0x49e59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x49e5a0: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x49E5A0u;
    {
        const bool branch_taken_0x49e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5A0u;
        // 0x49e5a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e5a0) {
            ctx->pc = 0x49E9C4u;
            goto label_49e9c4;
        }
    }
    ctx->pc = 0x49E5A8u;
    // 0x49e5a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49e5ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49e5b0: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x49e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x49e5b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49e5b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e5bc: 0x800008  jr          $a0
    ctx->pc = 0x49E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49E5C4u: goto label_49e5c4;
            case 0x49E670u: goto label_49e670;
            case 0x49E714u: goto label_49e714;
            case 0x49E7C0u: goto label_49e7c0;
            case 0x49E864u: goto label_49e864;
            case 0x49E8DCu: goto label_49e8dc;
            case 0x49E94Cu: goto label_49e94c;
            case 0x49E9C4u: goto label_49e9c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E5BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49E5C4u;
label_49e5c4:
    // 0x49e5c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e5c8: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e5c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e5cc: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x49e5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e5d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x49e5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e5d4: 0x184000fd  blez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x49E5D4u;
    {
        const bool branch_taken_0x49e5d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5D4u;
        // 0x49e5d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e5d4) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E5DCu;
    // 0x49e5dc: 0x240cfff8  addiu       $t4, $zero, -0x8
    ctx->pc = 0x49e5dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x49e5e0: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x49e5e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49e5e4: 0x0  nop
    ctx->pc = 0x49e5e4u;
    // NOP
label_49e5e8:
    // 0x49e5e8: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x49e5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x49e5ec: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x49e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x49e5f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49e5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49e5f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E5F4u;
    {
        const bool branch_taken_0x49e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e5f4) {
            ctx->pc = 0x49E5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E5F4u;
            // 0x49e5f8: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E60Cu;
            goto label_49e60c;
        }
    }
    ctx->pc = 0x49E5FCu;
    // 0x49e5fc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49e5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e600: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49e600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49e604: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E604u;
    {
        const bool branch_taken_0x49e604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E604u;
        // 0x49e608: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e604) {
            ctx->pc = 0x49E610u;
            goto label_49e610;
        }
    }
    ctx->pc = 0x49E60Cu;
label_49e60c:
    // 0x49e60c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x49e60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_49e610:
    // 0x49e610: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x49e610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x49e614: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49e618: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x49e618u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e61c: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x49e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x49e620: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x49e620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x49e624: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x49e624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x49e628: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x49e628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49e62c: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x49e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x49e630: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x49e630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x49e634: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x49e634u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e638: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x49e638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49e63c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x49e63cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e640: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E640u;
    {
        const bool branch_taken_0x49e640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E640u;
        // 0x49e644: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e640) {
            ctx->pc = 0x49E650u;
            goto label_49e650;
        }
    }
    ctx->pc = 0x49E648u;
    // 0x49e648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E648u;
    {
        const bool branch_taken_0x49e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E648u;
        // 0x49e64c: 0xa0ca0003  sb          $t2, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e648) {
            ctx->pc = 0x49E654u;
            goto label_49e654;
        }
    }
    ctx->pc = 0x49E650u;
label_49e650:
    // 0x49e650: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x49e650u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_49e654:
    // 0x49e654: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e658: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e65c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e660: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x49E660u;
    {
        const bool branch_taken_0x49e660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E660u;
        // 0x49e664: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e660) {
            ctx->pc = 0x49E5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e5e8;
        }
    }
    ctx->pc = 0x49E668u;
    // 0x49e668: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x49E668u;
    {
        const bool branch_taken_0x49e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E668u;
        // 0x49e66c: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e668) {
            ctx->pc = 0x49E9BCu;
            goto label_49e9bc;
        }
    }
    ctx->pc = 0x49E670u;
label_49e670:
    // 0x49e670: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e674: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e674u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e678: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x49e678u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e67c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x49e67cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e680: 0x184000d2  blez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x49E680u;
    {
        const bool branch_taken_0x49e680 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E680u;
        // 0x49e684: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e680) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E688u;
    // 0x49e688: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x49e688u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x49e68c: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x49e68cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x49e690: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x49e690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x49e694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x49e694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e698:
    // 0x49e698: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x49e698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x49e69c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x49e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x49e6a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49e6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49e6a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E6A4u;
    {
        const bool branch_taken_0x49e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e6a4) {
            ctx->pc = 0x49E6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E6A4u;
            // 0x49e6a8: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E6BCu;
            goto label_49e6bc;
        }
    }
    ctx->pc = 0x49E6ACu;
    // 0x49e6ac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x49e6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49e6b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x49e6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x49e6b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E6B4u;
    {
        const bool branch_taken_0x49e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6B4u;
        // 0x49e6b8: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e6b4) {
            ctx->pc = 0x49E6C0u;
            goto label_49e6c0;
        }
    }
    ctx->pc = 0x49E6BCu;
label_49e6bc:
    // 0x49e6bc: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x49e6bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_49e6c0:
    // 0x49e6c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x49e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x49e6c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e6c8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49e6cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x49e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e6d0: 0xad1824  and         $v1, $a1, $t5
    ctx->pc = 0x49e6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x49e6d4: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x49e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x49e6d8: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x49e6d8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x49e6dc: 0x52402  srl         $a0, $a1, 16
    ctx->pc = 0x49e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x49e6e0: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x49e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e6e4: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x49e6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e6e8: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x49e6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e6ec: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x49E6ECu;
    {
        const bool branch_taken_0x49e6ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x49e6ec) {
            ctx->pc = 0x49E6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E6ECu;
            // 0x49e6f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E6F4u;
            goto label_49e6f4;
        }
    }
    ctx->pc = 0x49E6F4u;
label_49e6f4:
    // 0x49e6f4: 0x1812  mflo        $v1
    ctx->pc = 0x49e6f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x49e6f8: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x49e6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e6fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e700: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e704: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x49E704u;
    {
        const bool branch_taken_0x49e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E704u;
        // 0x49e708: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e704) {
            ctx->pc = 0x49E698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e698;
        }
    }
    ctx->pc = 0x49E70Cu;
    // 0x49e70c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x49E70Cu;
    {
        const bool branch_taken_0x49e70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E70Cu;
        // 0x49e710: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e70c) {
            ctx->pc = 0x49E9BCu;
            goto label_49e9bc;
        }
    }
    ctx->pc = 0x49E714u;
label_49e714:
    // 0x49e714: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e718: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e718u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e71c: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x49e71cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e720: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x49e720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e724: 0x184000a9  blez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x49E724u;
    {
        const bool branch_taken_0x49e724 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E724u;
        // 0x49e728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e724) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E72Cu;
    // 0x49e72c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49e730: 0x240dfff8  addiu       $t5, $zero, -0x8
    ctx->pc = 0x49e730u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x49e734: 0x244cfde0  addiu       $t4, $v0, -0x220
    ctx->pc = 0x49e734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
    // 0x49e738: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x49e738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49e73c: 0x0  nop
    ctx->pc = 0x49e73cu;
    // NOP
label_49e740:
    // 0x49e740: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x49e740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e744: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49e744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49e748: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x49e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49e74c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x49e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x49e750: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x49e750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
    // 0x49e754: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49e758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e75c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49e75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49e760: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49e760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49e764: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x49e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x49e768: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49e768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e76c: 0x221c2  srl         $a0, $v0, 7
    ctx->pc = 0x49e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x49e770: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x49e770u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x49e774: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x49e774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49e778: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x49e778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x49e77c: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x49e77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49e780: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x49e780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x49e784: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x49e784u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e788: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x49e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49e78c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x49e78cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E790u;
    {
        const bool branch_taken_0x49e790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E790u;
        // 0x49e794: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e790) {
            ctx->pc = 0x49E7A0u;
            goto label_49e7a0;
        }
    }
    ctx->pc = 0x49E798u;
    // 0x49e798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E798u;
    {
        const bool branch_taken_0x49e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E798u;
        // 0x49e79c: 0xa0ca0003  sb          $t2, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e798) {
            ctx->pc = 0x49E7A4u;
            goto label_49e7a4;
        }
    }
    ctx->pc = 0x49E7A0u;
label_49e7a0:
    // 0x49e7a0: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x49e7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_49e7a4:
    // 0x49e7a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e7a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e7ac: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e7b0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49E7B0u;
    {
        const bool branch_taken_0x49e7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7B0u;
        // 0x49e7b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e7b0) {
            ctx->pc = 0x49E740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e740;
        }
    }
    ctx->pc = 0x49E7B8u;
    // 0x49e7b8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x49E7B8u;
    {
        const bool branch_taken_0x49e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7B8u;
        // 0x49e7bc: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e7b8) {
            ctx->pc = 0x49E9BCu;
            goto label_49e9bc;
        }
    }
    ctx->pc = 0x49E7C0u;
label_49e7c0:
    // 0x49e7c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e7c4: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e7c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e7c8: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x49e7c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e7cc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x49e7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e7d0: 0x1840007e  blez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x49E7D0u;
    {
        const bool branch_taken_0x49e7d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E7D0u;
        // 0x49e7d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e7d0) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E7D8u;
    // 0x49e7d8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49e7dc: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x49e7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x49e7e0: 0x244efde0  addiu       $t6, $v0, -0x220
    ctx->pc = 0x49e7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
    // 0x49e7e4: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x49e7e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x49e7e8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x49e7e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x49e7ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x49e7ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e7f0:
    // 0x49e7f0: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x49e7f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49e7f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e7f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x49e7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x49e7fc: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x49e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x49e800: 0x30a300e7  andi        $v1, $a1, 0xE7
    ctx->pc = 0x49e800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)231);
    // 0x49e804: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x49e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x49e808: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x49e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x49e80c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e810: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49e814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49e814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49e818: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x49e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x49e81c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x49e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e820: 0xad2024  and         $a0, $a1, $t5
    ctx->pc = 0x49e820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x49e824: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x49e824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x49e828: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x49e828u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x49e82c: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x49e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x49e830: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x49e830u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e834: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x49e834u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e838: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x49e838u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e83c: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x49E83Cu;
    {
        const bool branch_taken_0x49e83c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x49e83c) {
            ctx->pc = 0x49E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E83Cu;
            // 0x49e840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E844u;
            goto label_49e844;
        }
    }
    ctx->pc = 0x49E844u;
label_49e844:
    // 0x49e844: 0x2012  mflo        $a0
    ctx->pc = 0x49e844u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x49e848: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x49e848u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e84c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e850: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e854: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x49E854u;
    {
        const bool branch_taken_0x49e854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E854u;
        // 0x49e858: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e854) {
            ctx->pc = 0x49E7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e7f0;
        }
    }
    ctx->pc = 0x49E85Cu;
    // 0x49e85c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x49E85Cu;
    {
        const bool branch_taken_0x49e85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E85Cu;
        // 0x49e860: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e85c) {
            ctx->pc = 0x49E9BCu;
            goto label_49e9bc;
        }
    }
    ctx->pc = 0x49E864u;
label_49e864:
    // 0x49e864: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e868: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e86c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x49e86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e870: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x49E870u;
    {
        const bool branch_taken_0x49e870 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E870u;
        // 0x49e874: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e870) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E878u;
    // 0x49e878: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x49e878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x49e87c: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x49e87cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_49e880:
    // 0x49e880: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49e880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e884: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x49e884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x49e888: 0x219c2  srl         $v1, $v0, 7
    ctx->pc = 0x49e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x49e88c: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x49e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x49e890: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x49e890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49e894: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x49e894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49e898: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x49e898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x49e89c: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x49e89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x49e8a0: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x49e8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e8a4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x49e8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49e8a8: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x49e8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e8ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E8ACu;
    {
        const bool branch_taken_0x49e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8ACu;
        // 0x49e8b0: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8ac) {
            ctx->pc = 0x49E8BCu;
            goto label_49e8bc;
        }
    }
    ctx->pc = 0x49E8B4u;
    // 0x49e8b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E8B4u;
    {
        const bool branch_taken_0x49e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8B4u;
        // 0x49e8b8: 0xa0c90003  sb          $t1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8b4) {
            ctx->pc = 0x49E8C0u;
            goto label_49e8c0;
        }
    }
    ctx->pc = 0x49E8BCu;
label_49e8bc:
    // 0x49e8bc: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x49e8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_49e8c0:
    // 0x49e8c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e8c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e8c8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e8cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x49E8CCu;
    {
        const bool branch_taken_0x49e8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8CCu;
        // 0x49e8d0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8cc) {
            ctx->pc = 0x49E880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e880;
        }
    }
    ctx->pc = 0x49E8D4u;
    // 0x49e8d4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x49E8D4u;
    {
        const bool branch_taken_0x49e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8D4u;
        // 0x49e8d8: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8d4) {
            ctx->pc = 0x49E9BCu;
            goto label_49e9bc;
        }
    }
    ctx->pc = 0x49E8DCu;
label_49e8dc:
    // 0x49e8dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e8e0: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e8e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e8e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x49e8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e8e8: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x49E8E8u;
    {
        const bool branch_taken_0x49e8e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E8E8u;
        // 0x49e8ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e8e8) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E8F0u;
    // 0x49e8f0: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x49e8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x49e8f4: 0x0  nop
    ctx->pc = 0x49e8f4u;
    // NOP
label_49e8f8:
    // 0x49e8f8: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x49e8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x49e8fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e900: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x49e900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e904: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x49e904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x49e908: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x49e908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x49e90c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49e90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49e910: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x49e910u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x49e914: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x49e914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49e918: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x49e918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x49e91c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49e91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49e920: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x49e920u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x49e924: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x49e924u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49e928: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x49e928u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e92c: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x49e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e930: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x49e930u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e934: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e938: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e93c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49E93Cu;
    {
        const bool branch_taken_0x49e93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E93Cu;
        // 0x49e940: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e93c) {
            ctx->pc = 0x49E8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e8f8;
        }
    }
    ctx->pc = 0x49E944u;
    // 0x49e944: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x49E944u;
    {
        const bool branch_taken_0x49e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E944u;
        // 0x49e948: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e944) {
            ctx->pc = 0x49E9BCu;
            goto label_49e9bc;
        }
    }
    ctx->pc = 0x49E94Cu;
label_49e94c:
    // 0x49e94c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e950: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x49e950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49e954: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x49e954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e958: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x49E958u;
    {
        const bool branch_taken_0x49e958 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E958u;
        // 0x49e95c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e958) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E960u;
    // 0x49e960: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x49e960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x49e964: 0x3c0cff00  lui         $t4, 0xFF00
    ctx->pc = 0x49e964u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65280 << 16));
    // 0x49e968: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x49e968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x49e96c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x49e96cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e970:
    // 0x49e970: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x49e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49e974: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49e974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49e978: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x49e978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x49e97c: 0x8c1824  and         $v1, $a0, $t4
    ctx->pc = 0x49e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x49e980: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x49e980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49e984: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x49e984u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x49e988: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x49e988u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49e98c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x49e98cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x49e990: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x49e990u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x49e994: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x49e994u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x49e998: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x49E998u;
    {
        const bool branch_taken_0x49e998 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x49e998) {
            ctx->pc = 0x49E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E998u;
            // 0x49e99c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E9A0u;
            goto label_49e9a0;
        }
    }
    ctx->pc = 0x49E9A0u;
label_49e9a0:
    // 0x49e9a0: 0x1812  mflo        $v1
    ctx->pc = 0x49e9a0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x49e9a4: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x49e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x49e9a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x49e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49e9ac: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x49e9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49e9b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x49E9B0u;
    {
        const bool branch_taken_0x49e9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9B0u;
        // 0x49e9b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9b0) {
            ctx->pc = 0x49E970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e970;
        }
    }
    ctx->pc = 0x49E9B8u;
    // 0x49e9b8: 0x922a0023  lbu         $t2, 0x23($s1)
    ctx->pc = 0x49e9b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_49e9bc:
    // 0x49e9bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49E9BCu;
    {
        const bool branch_taken_0x49e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9BCu;
        // 0x49e9c0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9bc) {
            ctx->pc = 0x49E9CCu;
            goto label_49e9cc;
        }
    }
    ctx->pc = 0x49E9C4u;
label_49e9c4:
    // 0x49e9c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49E9C4u;
    {
        const bool branch_taken_0x49e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9C4u;
        // 0x49e9c8: 0x31420060  andi        $v0, $t2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9c4) {
            ctx->pc = 0x49E9F4u;
            goto label_49e9f4;
        }
    }
    ctx->pc = 0x49E9CCu;
label_49e9cc:
    // 0x49e9cc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x49e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x49e9d0: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x49e9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9d4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x49e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49e9d8: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x49e9d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x49e9dc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x49e9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x49e9e0: 0x1480feed  bnez        $a0, . + 4 + (-0x113 << 2)
    ctx->pc = 0x49E9E0u;
    {
        const bool branch_taken_0x49e9e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9E0u;
        // 0x49e9e4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9e0) {
            ctx->pc = 0x49E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e598;
        }
    }
    ctx->pc = 0x49E9E8u;
    // 0x49e9e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x49E9E8u;
    {
        const bool branch_taken_0x49e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9E8u;
        // 0x49e9ec: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9e8) {
            ctx->pc = 0x49EA28u;
            goto label_49ea28;
        }
    }
    ctx->pc = 0x49E9F0u;
label_49e9f0:
    // 0x49e9f0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_49e9f4:
    // 0x49e9f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49E9F4u;
    {
        const bool branch_taken_0x49e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e9f4) {
            ctx->pc = 0x49EA0Cu;
            goto label_49ea0c;
        }
    }
    ctx->pc = 0x49E9FCu;
label_49e9fc:
    // 0x49e9fc: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E9FCu;
    {
        const bool branch_taken_0x49e9fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e9fc) {
            ctx->pc = 0x49EA0Cu;
            goto label_49ea0c;
        }
    }
    ctx->pc = 0x49EA04u;
    // 0x49ea04: 0xc121930  jal         func_4864C0
    ctx->pc = 0x49EA04u;
    SET_GPR_U32(ctx, 31, 0x49EA0Cu);
    ctx->pc = 0x49EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA04u;
    // 0x49ea08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4864C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4864C0u, 0x49EA04u, 0x49EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA0Cu;
label_49ea0c:
    // 0x49ea0c: 0x16a00012  bnez        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x49EA0Cu;
    {
        const bool branch_taken_0x49ea0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA0Cu;
        // 0x49ea10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea0c) {
            ctx->pc = 0x49EA58u;
            goto label_49ea58;
        }
    }
    ctx->pc = 0x49EA14u;
    // 0x49ea14: 0xc121912  jal         func_486448
    ctx->pc = 0x49EA14u;
    SET_GPR_U32(ctx, 31, 0x49EA1Cu);
    ctx->pc = 0x49EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA14u;
    // 0x49ea18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x49EA14u, 0x49EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA1Cu;
label_49ea1c:
    // 0x49ea1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x49EA1Cu;
    {
        const bool branch_taken_0x49ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA1Cu;
        // 0x49ea20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea1c) {
            ctx->pc = 0x49EA58u;
            goto label_49ea58;
        }
    }
    ctx->pc = 0x49EA24u;
label_49ea24:
    // 0x49ea24: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x49ea24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_49ea28:
    // 0x49ea28: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x49ea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x49ea2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49EA2Cu;
    {
        const bool branch_taken_0x49ea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ea2c) {
            ctx->pc = 0x49EA44u;
            goto label_49ea44;
        }
    }
    ctx->pc = 0x49EA34u;
    // 0x49ea34: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x49EA34u;
    {
        const bool branch_taken_0x49ea34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ea34) {
            ctx->pc = 0x49EA44u;
            goto label_49ea44;
        }
    }
    ctx->pc = 0x49EA3Cu;
    // 0x49ea3c: 0xc121930  jal         func_4864C0
    ctx->pc = 0x49EA3Cu;
    SET_GPR_U32(ctx, 31, 0x49EA44u);
    ctx->pc = 0x49EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA3Cu;
    // 0x49ea40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4864C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4864C0u, 0x49EA3Cu, 0x49EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA44u;
label_49ea44:
    // 0x49ea44: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x49EA44u;
    {
        const bool branch_taken_0x49ea44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA44u;
        // 0x49ea48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea44) {
            ctx->pc = 0x49EA58u;
            goto label_49ea58;
        }
    }
    ctx->pc = 0x49EA4Cu;
    // 0x49ea4c: 0xc121912  jal         func_486448
    ctx->pc = 0x49EA4Cu;
    SET_GPR_U32(ctx, 31, 0x49EA54u);
    ctx->pc = 0x49EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA4Cu;
    // 0x49ea50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x49EA4Cu, 0x49EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EA54u;
label_49ea54:
    // 0x49ea54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ea58:
    // 0x49ea58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x49ea58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49ea5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x49ea5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49ea60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x49ea60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49ea64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49ea64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49ea68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x49ea68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ea6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x49ea6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ea70: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x49ea70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ea74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ea78: 0x3e00008  jr          $ra
    ctx->pc = 0x49EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA78u;
        // 0x49ea7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EA80u;
}

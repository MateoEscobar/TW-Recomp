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

// Function: sub_004D4F78
// Address: 0x4d4f78 - 0x4d5188
void sub_004D4F78_0x4d4f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4F78_0x4d4f78");
#endif

    switch (ctx->pc) {
        case 0x4d4fbcu: goto label_4d4fbc;
        case 0x4d4fecu: goto label_4d4fec;
        case 0x4d5008u: goto label_4d5008;
        case 0x4d5020u: goto label_4d5020;
        case 0x4d5038u: goto label_4d5038;
        case 0x4d5054u: goto label_4d5054;
        case 0x4d506cu: goto label_4d506c;
        case 0x4d5088u: goto label_4d5088;
        case 0x4d50acu: goto label_4d50ac;
        case 0x4d50c4u: goto label_4d50c4;
        case 0x4d50dcu: goto label_4d50dc;
        case 0x4d50f4u: goto label_4d50f4;
        case 0x4d5110u: goto label_4d5110;
        case 0x4d5128u: goto label_4d5128;
        case 0x4d5144u: goto label_4d5144;
        case 0x4d5160u: goto label_4d5160;
        default: break;
    }

    ctx->pc = 0x4d4f78u;

label_4d4f78:
    // 0x4d4f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d4f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d4f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d4f80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d4f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4f88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4d4f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4f8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d4f90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d4f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d4f94: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x4d4f94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x4d4f98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4d4f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4f9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d4f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d4fa0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4d4fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4fa4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d4fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d4fa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d4fac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d4facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d4fb0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4d4fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4d4fb4: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D4FB4u;
    SET_GPR_U32(ctx, 31, 0x4D4FBCu);
    ctx->pc = 0x4D4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4FB4u;
    // 0x4d4fb8: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D4FB4u, 0x4D4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4FBCu;
label_4d4fbc:
    // 0x4d4fbc: 0x2a020201  slti        $v0, $s0, 0x201
    ctx->pc = 0x4d4fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x4d4fc0: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x4D4FC0u;
    {
        const bool branch_taken_0x4d4fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4FC0u;
        // 0x4d4fc4: 0x10a883  sra         $s5, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4fc0) {
            ctx->pc = 0x4D514Cu;
            goto label_4d514c;
        }
    }
    ctx->pc = 0x4D4FC8u;
    // 0x4d4fc8: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x4d4fc8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x4d4fcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d4fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4fd0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x4d4fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4d4fd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d4fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4fd8: 0x2463023  subu        $a2, $s2, $a2
    ctx->pc = 0x4d4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x4d4fdc: 0x2ab60201  slti        $s6, $s5, 0x201
    ctx->pc = 0x4d4fdcu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x4d4fe0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d4fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d4fe4: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D4FE4u;
    SET_GPR_U32(ctx, 31, 0x4D4FECu);
    ctx->pc = 0x4D4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4FE4u;
    // 0x4d4fe8: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D4FE4u, 0x4D4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4FECu;
label_4d4fec:
    // 0x4d4fec: 0x16c0001b  bnez        $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x4D4FECu;
    {
        const bool branch_taken_0x4d4fec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4FECu;
        // 0x4d4ff0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4fec) {
            ctx->pc = 0x4D505Cu;
            goto label_4d505c;
        }
    }
    ctx->pc = 0x4D4FF4u;
    // 0x4d4ff4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d4ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4ffc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d4ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5000: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D5000u;
    SET_GPR_U32(ctx, 31, 0x4D5008u);
    ctx->pc = 0x4D5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5000u;
    // 0x4d5004: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D5000u, 0x4D5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5008u;
label_4d5008:
    // 0x4d5008: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d5008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d500c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5010: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4d5010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4d5014: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5018: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D5018u;
    SET_GPR_U32(ctx, 31, 0x4D5020u);
    ctx->pc = 0x4D501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5018u;
    // 0x4d501c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    goto label_4d4f78;
    ctx->pc = 0x4D5020u;
label_4d5020:
    // 0x4d5020: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x4d5020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d5024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5028: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4d5028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4d502c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d502cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5030: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D5030u;
    SET_GPR_U32(ctx, 31, 0x4D5038u);
    ctx->pc = 0x4D5034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5030u;
    // 0x4d5034: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D5030u, 0x4D5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5038u;
label_4d5038:
    // 0x4d5038: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4d5038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4d503c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5040: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x4d5040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d5044: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5048: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4d5048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d504c: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D504Cu;
    SET_GPR_U32(ctx, 31, 0x4D5054u);
    ctx->pc = 0x4D5050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D504Cu;
    // 0x4d5050: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D504Cu, 0x4D5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5054u;
label_4d5054:
    // 0x4d5054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D5054u;
    {
        const bool branch_taken_0x4d5054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5054u;
        // 0x4d5058: 0x152880  sll         $a1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5054) {
            ctx->pc = 0x4D5070u;
            goto label_4d5070;
        }
    }
    ctx->pc = 0x4D505Cu;
label_4d505c:
    // 0x4d505c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5060: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5064: 0xc135462  jal         func_4D5188
    ctx->pc = 0x4D5064u;
    SET_GPR_U32(ctx, 31, 0x4D506Cu);
    ctx->pc = 0x4D5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5064u;
    // 0x4d5068: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5188u, 0x4D5064u, 0x4D506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D506Cu;
label_4d506c:
    // 0x4d506c: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x4d506cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_4d5070:
    // 0x4d5070: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5074: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d5074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5078: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4d5078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4d507c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4d507cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5080: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D5080u;
    SET_GPR_U32(ctx, 31, 0x4D5088u);
    ctx->pc = 0x4D5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5080u;
    // 0x4d5084: 0x158083  sra         $s0, $s5, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 21), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    goto label_4d4f78;
    ctx->pc = 0x4D5088u;
label_4d5088:
    // 0x4d5088: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x4d5088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4d508c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x4d508cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x4d5090: 0x2463023  subu        $a2, $s2, $a2
    ctx->pc = 0x4d5090u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x4d5094: 0x549821  addu        $s3, $v0, $s4
    ctx->pc = 0x4d5094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4d5098: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d5098u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d509c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50a0: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x4d50a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4d50a4: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D50A4u;
    SET_GPR_U32(ctx, 31, 0x4D50ACu);
    ctx->pc = 0x4D50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D50A4u;
    // 0x4d50a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D50A4u, 0x4D50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D50ACu;
label_4d50ac:
    // 0x4d50ac: 0x16c0001a  bnez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D50ACu;
    {
        const bool branch_taken_0x4d50ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D50ACu;
        // 0x4d50b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d50ac) {
            ctx->pc = 0x4D5118u;
            goto label_4d5118;
        }
    }
    ctx->pc = 0x4D50B4u;
    // 0x4d50b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d50b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d50b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50bc: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D50BCu;
    SET_GPR_U32(ctx, 31, 0x4D50C4u);
    ctx->pc = 0x4D50C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D50BCu;
    // 0x4d50c0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D50BCu, 0x4D50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D50C4u;
label_4d50c4:
    // 0x4d50c4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d50c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d50c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50cc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4d50ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4d50d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d50d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50d4: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D50D4u;
    SET_GPR_U32(ctx, 31, 0x4D50DCu);
    ctx->pc = 0x4D50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D50D4u;
    // 0x4d50d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    goto label_4d4f78;
    ctx->pc = 0x4D50DCu;
label_4d50dc:
    // 0x4d50dc: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x4d50dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d50e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d50e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50e4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4d50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4d50e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d50e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50ec: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D50ECu;
    SET_GPR_U32(ctx, 31, 0x4D50F4u);
    ctx->pc = 0x4D50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D50ECu;
    // 0x4d50f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D50ECu, 0x4D50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D50F4u;
label_4d50f4:
    // 0x4d50f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4d50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4d50f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d50f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50fc: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x4d50fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d5100: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5104: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4d5104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5108: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D5108u;
    SET_GPR_U32(ctx, 31, 0x4D5110u);
    ctx->pc = 0x4D510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5108u;
    // 0x4d510c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D5108u, 0x4D5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5110u;
label_4d5110:
    // 0x4d5110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D5110u;
    {
        const bool branch_taken_0x4d5110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5110u;
        // 0x4d5114: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5110) {
            ctx->pc = 0x4D512Cu;
            goto label_4d512c;
        }
    }
    ctx->pc = 0x4D5118u;
label_4d5118:
    // 0x4d5118: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d511c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d511cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5120: 0xc135462  jal         func_4D5188
    ctx->pc = 0x4D5120u;
    SET_GPR_U32(ctx, 31, 0x4D5128u);
    ctx->pc = 0x4D5124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5120u;
    // 0x4d5124: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5188u, 0x4D5120u, 0x4D5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5128u;
label_4d5128:
    // 0x4d5128: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4d5128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4d512c:
    // 0x4d512c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5130: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x4d5130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d5134: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5138: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4d5138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d513c: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D513Cu;
    SET_GPR_U32(ctx, 31, 0x4D5144u);
    ctx->pc = 0x4D5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D513Cu;
    // 0x4d5140: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    goto label_4d4f78;
    ctx->pc = 0x4D5144u;
label_4d5144:
    // 0x4d5144: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D5144u;
    {
        const bool branch_taken_0x4d5144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5144u;
        // 0x4d5148: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5144) {
            ctx->pc = 0x4D5164u;
            goto label_4d5164;
        }
    }
    ctx->pc = 0x4D514Cu;
label_4d514c:
    // 0x4d514c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5150: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d5150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5154: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d5154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5158: 0xc135528  jal         func_4D54A0
    ctx->pc = 0x4D5158u;
    SET_GPR_U32(ctx, 31, 0x4D5160u);
    ctx->pc = 0x4D515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5158u;
    // 0x4d515c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D54A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D54A0u, 0x4D5158u, 0x4D5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5160u;
label_4d5160:
    // 0x4d5160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5164:
    // 0x4d5164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5168: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d5168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d516c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d516cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d5170: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d5170u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5174: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d5174u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d5178: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d5178u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d517c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d5180: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5180u;
        // 0x4d5184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D5180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D5188u;
}

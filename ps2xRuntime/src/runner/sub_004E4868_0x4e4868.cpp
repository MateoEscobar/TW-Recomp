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

// Function: sub_004E4868
// Address: 0x4e4868 - 0x4e4a08
void sub_004E4868_0x4e4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4868_0x4e4868");
#endif

    switch (ctx->pc) {
        case 0x4e4868u: goto label_4e4868;
        case 0x4e486cu: goto label_4e486c;
        case 0x4e4870u: goto label_4e4870;
        case 0x4e4874u: goto label_4e4874;
        case 0x4e4878u: goto label_4e4878;
        case 0x4e487cu: goto label_4e487c;
        case 0x4e4880u: goto label_4e4880;
        case 0x4e4884u: goto label_4e4884;
        case 0x4e4888u: goto label_4e4888;
        case 0x4e488cu: goto label_4e488c;
        case 0x4e4890u: goto label_4e4890;
        case 0x4e4894u: goto label_4e4894;
        case 0x4e4898u: goto label_4e4898;
        case 0x4e489cu: goto label_4e489c;
        case 0x4e48a0u: goto label_4e48a0;
        case 0x4e48a4u: goto label_4e48a4;
        case 0x4e48a8u: goto label_4e48a8;
        case 0x4e48acu: goto label_4e48ac;
        case 0x4e48b0u: goto label_4e48b0;
        case 0x4e48b4u: goto label_4e48b4;
        case 0x4e48b8u: goto label_4e48b8;
        case 0x4e48bcu: goto label_4e48bc;
        case 0x4e48c0u: goto label_4e48c0;
        case 0x4e48c4u: goto label_4e48c4;
        case 0x4e48c8u: goto label_4e48c8;
        case 0x4e48ccu: goto label_4e48cc;
        case 0x4e48d0u: goto label_4e48d0;
        case 0x4e48d4u: goto label_4e48d4;
        case 0x4e48d8u: goto label_4e48d8;
        case 0x4e48dcu: goto label_4e48dc;
        case 0x4e48e0u: goto label_4e48e0;
        case 0x4e48e4u: goto label_4e48e4;
        case 0x4e48e8u: goto label_4e48e8;
        case 0x4e48ecu: goto label_4e48ec;
        case 0x4e48f0u: goto label_4e48f0;
        case 0x4e48f4u: goto label_4e48f4;
        case 0x4e48f8u: goto label_4e48f8;
        case 0x4e48fcu: goto label_4e48fc;
        case 0x4e4900u: goto label_4e4900;
        case 0x4e4904u: goto label_4e4904;
        case 0x4e4908u: goto label_4e4908;
        case 0x4e490cu: goto label_4e490c;
        case 0x4e4910u: goto label_4e4910;
        case 0x4e4914u: goto label_4e4914;
        case 0x4e4918u: goto label_4e4918;
        case 0x4e491cu: goto label_4e491c;
        case 0x4e4920u: goto label_4e4920;
        case 0x4e4924u: goto label_4e4924;
        case 0x4e4928u: goto label_4e4928;
        case 0x4e492cu: goto label_4e492c;
        case 0x4e4930u: goto label_4e4930;
        case 0x4e4934u: goto label_4e4934;
        case 0x4e4938u: goto label_4e4938;
        case 0x4e493cu: goto label_4e493c;
        case 0x4e4940u: goto label_4e4940;
        case 0x4e4944u: goto label_4e4944;
        case 0x4e4948u: goto label_4e4948;
        case 0x4e494cu: goto label_4e494c;
        case 0x4e4950u: goto label_4e4950;
        case 0x4e4954u: goto label_4e4954;
        case 0x4e4958u: goto label_4e4958;
        case 0x4e495cu: goto label_4e495c;
        case 0x4e4960u: goto label_4e4960;
        case 0x4e4964u: goto label_4e4964;
        case 0x4e4968u: goto label_4e4968;
        case 0x4e496cu: goto label_4e496c;
        case 0x4e4970u: goto label_4e4970;
        case 0x4e4974u: goto label_4e4974;
        case 0x4e4978u: goto label_4e4978;
        case 0x4e497cu: goto label_4e497c;
        case 0x4e4980u: goto label_4e4980;
        case 0x4e4984u: goto label_4e4984;
        case 0x4e4988u: goto label_4e4988;
        case 0x4e498cu: goto label_4e498c;
        case 0x4e4990u: goto label_4e4990;
        case 0x4e4994u: goto label_4e4994;
        case 0x4e4998u: goto label_4e4998;
        case 0x4e499cu: goto label_4e499c;
        case 0x4e49a0u: goto label_4e49a0;
        case 0x4e49a4u: goto label_4e49a4;
        case 0x4e49a8u: goto label_4e49a8;
        case 0x4e49acu: goto label_4e49ac;
        case 0x4e49b0u: goto label_4e49b0;
        case 0x4e49b4u: goto label_4e49b4;
        case 0x4e49b8u: goto label_4e49b8;
        case 0x4e49bcu: goto label_4e49bc;
        case 0x4e49c0u: goto label_4e49c0;
        case 0x4e49c4u: goto label_4e49c4;
        case 0x4e49c8u: goto label_4e49c8;
        case 0x4e49ccu: goto label_4e49cc;
        case 0x4e49d0u: goto label_4e49d0;
        case 0x4e49d4u: goto label_4e49d4;
        case 0x4e49d8u: goto label_4e49d8;
        case 0x4e49dcu: goto label_4e49dc;
        case 0x4e49e0u: goto label_4e49e0;
        case 0x4e49e4u: goto label_4e49e4;
        case 0x4e49e8u: goto label_4e49e8;
        case 0x4e49ecu: goto label_4e49ec;
        case 0x4e49f0u: goto label_4e49f0;
        case 0x4e49f4u: goto label_4e49f4;
        case 0x4e49f8u: goto label_4e49f8;
        case 0x4e49fcu: goto label_4e49fc;
        case 0x4e4a00u: goto label_4e4a00;
        case 0x4e4a04u: goto label_4e4a04;
        default: break;
    }

    ctx->pc = 0x4e4868u;

label_4e4868:
    // 0x4e4868: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e4868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e486c:
    // 0x4e486c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e4870:
    // 0x4e4870: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e4870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e4874:
    // 0x4e4874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4878:
    // 0x4e4878: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e4878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e487c:
    // 0x4e487c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e487cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4880:
    // 0x4e4880: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e4880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e4884:
    // 0x4e4884: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e4888:
    // 0x4e4888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e488c:
    // 0x4e488c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e488cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e4890:
    // 0x4e4890: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e4890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e4894:
    // 0x4e4894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4898:
    // 0x4e4898: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e4898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e489c:
    // 0x4e489c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e48a0:
    // 0x4e48a0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e48a4:
    if (ctx->pc == 0x4E48A4u) {
        ctx->pc = 0x4E48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E48A0u;
        // 0x4e48a4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E48A8u;
        goto label_4e48a8;
    }
    ctx->pc = 0x4E48A0u;
    {
        const bool branch_taken_0x4e48a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E48A0u;
        // 0x4e48a4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e48a0) {
            ctx->pc = 0x4E48ECu;
            goto label_4e48ec;
        }
    }
    ctx->pc = 0x4E48A8u;
label_4e48a8:
    // 0x4e48a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e48ac:
    if (ctx->pc == 0x4E48ACu) {
        ctx->pc = 0x4E48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E48A8u;
        // 0x4e48ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E48B0u;
        goto label_4e48b0;
    }
    ctx->pc = 0x4E48A8u;
    {
        const bool branch_taken_0x4e48a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e48a8) {
            ctx->pc = 0x4E48ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E48A8u;
            // 0x4e48ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E48BCu;
            goto label_4e48bc;
        }
    }
    ctx->pc = 0x4E48B0u;
label_4e48b0:
    // 0x4e48b0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e48b4:
    // 0x4e48b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e48b8:
    // 0x4e48b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e48bc:
    // 0x4e48bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e48bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e48c0:
    // 0x4e48c0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e48c4:
    // 0x4e48c4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e48c8:
    // 0x4e48c8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e48c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e48cc:
    // 0x4e48cc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e48d0:
    // 0x4e48d0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e48d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e48d4:
    // 0x4e48d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e48d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e48d8:
    // 0x4e48d8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e48d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e48dc:
    // 0x4e48dc: 0xc10c1bb  jal         func_4306EC
label_4e48e0:
    if (ctx->pc == 0x4E48E0u) {
        ctx->pc = 0x4E48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E48DCu;
        // 0x4e48e0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E48E4u;
        goto label_4e48e4;
    }
    ctx->pc = 0x4E48DCu;
    SET_GPR_U32(ctx, 31, 0x4E48E4u);
    ctx->pc = 0x4E48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E48DCu;
    // 0x4e48e0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E48DCu, 0x4E48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E48E4u;
label_4e48e4:
    // 0x4e48e4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e48e8:
    if (ctx->pc == 0x4E48E8u) {
        ctx->pc = 0x4E48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E48E4u;
        // 0x4e48e8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E48ECu;
        goto label_4e48ec;
    }
    ctx->pc = 0x4E48E4u;
    {
        const bool branch_taken_0x4e48e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E48E4u;
        // 0x4e48e8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e48e4) {
            ctx->pc = 0x4E49DCu;
            goto label_4e49dc;
        }
    }
    ctx->pc = 0x4E48ECu;
label_4e48ec:
    // 0x4e48ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e48f0:
    // 0x4e48f0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e48f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e48f4:
    // 0x4e48f4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e48f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e48f8:
    // 0x4e48f8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e48fc:
    // 0x4e48fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e4900:
    // 0x4e4900: 0x249644a0  addiu       $s6, $a0, 0x44A0
    ctx->pc = 0x4e4900u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 17568));
label_4e4904:
    // 0x4e4904: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e4904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e4908:
    // 0x4e4908: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e4908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e490c:
    // 0x4e490c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e490cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e4910:
    // 0x4e4910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e4910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4914:
    // 0x4e4914: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e4914u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e4918:
    // 0x4e4918: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e4918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e491c:
    // 0x4e491c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e491cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e4920:
    // 0x4e4920: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e4924:
    // 0x4e4924: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e4928:
    // 0x4e4928: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e4928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e492c:
    // 0x4e492c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e492cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e4930:
    // 0x4e4930: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e4930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e4934:
    // 0x4e4934: 0x24a54510  addiu       $a1, $a1, 0x4510
    ctx->pc = 0x4e4934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17680));
label_4e4938:
    // 0x4e4938: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e4938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e493c:
    // 0x4e493c: 0x254a4518  addiu       $t2, $t2, 0x4518
    ctx->pc = 0x4e493cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 17688));
label_4e4940:
    // 0x4e4940: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e4940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e4944:
    // 0x4e4944: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e4944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e4948:
    // 0x4e4948: 0x40f809  jalr        $v0
label_4e494c:
    if (ctx->pc == 0x4E494Cu) {
        ctx->pc = 0x4E494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4948u;
        // 0x4e494c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4950u;
        goto label_4e4950;
    }
    ctx->pc = 0x4E4948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E4950u);
        ctx->pc = 0x4E494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4948u;
        // 0x4e494c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4948u, 0x4E4950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4950u;
label_4e4950:
    // 0x4e4950: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e4950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4954:
    // 0x4e4954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e4954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4958:
    // 0x4e4958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e495c:
    // 0x4e495c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e495cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e4960:
    // 0x4e4960: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e4960u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e4964:
    // 0x4e4964: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e4964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e4968:
    // 0x4e4968: 0xc10c1bb  jal         func_4306EC
label_4e496c:
    if (ctx->pc == 0x4E496Cu) {
        ctx->pc = 0x4E496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4968u;
        // 0x4e496c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4970u;
        goto label_4e4970;
    }
    ctx->pc = 0x4E4968u;
    SET_GPR_U32(ctx, 31, 0x4E4970u);
    ctx->pc = 0x4E496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4968u;
    // 0x4e496c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4968u, 0x4E4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4970u;
label_4e4970:
    // 0x4e4970: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e4974:
    if (ctx->pc == 0x4E4974u) {
        ctx->pc = 0x4E4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4970u;
        // 0x4e4974: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4978u;
        goto label_4e4978;
    }
    ctx->pc = 0x4E4970u;
    {
        const bool branch_taken_0x4e4970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4970) {
            ctx->pc = 0x4E4974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4970u;
            // 0x4e4974: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4984u;
            goto label_4e4984;
        }
    }
    ctx->pc = 0x4E4978u;
label_4e4978:
    // 0x4e4978: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e497c:
    // 0x4e497c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e497cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e4980:
    // 0x4e4980: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e4980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4984:
    // 0x4e4984: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e4984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e4988:
    // 0x4e4988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e498c:
    // 0x4e498c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e498cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e4990:
    // 0x4e4990: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e4990u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e4994:
    // 0x4e4994: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e4994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e4998:
    // 0x4e4998: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e4998u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e499c:
    // 0x4e499c: 0xc10c1bb  jal         func_4306EC
label_4e49a0:
    if (ctx->pc == 0x4E49A0u) {
        ctx->pc = 0x4E49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E499Cu;
        // 0x4e49a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E49A4u;
        goto label_4e49a4;
    }
    ctx->pc = 0x4E499Cu;
    SET_GPR_U32(ctx, 31, 0x4E49A4u);
    ctx->pc = 0x4E49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E499Cu;
    // 0x4e49a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E499Cu, 0x4E49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E49A4u;
label_4e49a4:
    // 0x4e49a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e49a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e49a8:
    // 0x4e49a8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e49ac:
    if (ctx->pc == 0x4E49ACu) {
        ctx->pc = 0x4E49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E49A8u;
        // 0x4e49ac: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E49B0u;
        goto label_4e49b0;
    }
    ctx->pc = 0x4E49A8u;
    {
        const bool branch_taken_0x4e49a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E49A8u;
        // 0x4e49ac: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e49a8) {
            ctx->pc = 0x4E49CCu;
            goto label_4e49cc;
        }
    }
    ctx->pc = 0x4E49B0u;
label_4e49b0:
    // 0x4e49b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e49b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e49b4:
    // 0x4e49b4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e49b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e49b8:
    // 0x4e49b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e49bc:
    // 0x4e49bc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e49bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e49c0:
    // 0x4e49c0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e49c4:
    // 0x4e49c4: 0x60f809  jalr        $v1
label_4e49c8:
    if (ctx->pc == 0x4E49C8u) {
        ctx->pc = 0x4E49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E49C4u;
        // 0x4e49c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E49CCu;
        goto label_4e49cc;
    }
    ctx->pc = 0x4E49C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E49CCu);
        ctx->pc = 0x4E49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E49C4u;
        // 0x4e49c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E49C4u, 0x4E49CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E49CCu;
label_4e49cc:
    // 0x4e49cc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e49d0:
    // 0x4e49d0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e49d4:
    // 0x4e49d4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e49d8:
    // 0x4e49d8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e49dc:
    // 0x4e49dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e49dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e49e0:
    // 0x4e49e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e49e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e49e4:
    // 0x4e49e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e49e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e49e8:
    // 0x4e49e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e49e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e49ec:
    // 0x4e49ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e49ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e49f0:
    // 0x4e49f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e49f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e49f4:
    // 0x4e49f4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e49f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e49f8:
    // 0x4e49f8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e49f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e49fc:
    // 0x4e49fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e49fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4a00:
    // 0x4e4a00: 0x3e00008  jr          $ra
label_4e4a04:
    if (ctx->pc == 0x4E4A04u) {
        ctx->pc = 0x4E4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4A00u;
        // 0x4e4a04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4A08u;
        goto label_fallthrough_0x4e4a00;
    }
    ctx->pc = 0x4E4A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4A00u;
        // 0x4e4a04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e4a00:
    ctx->pc = 0x4E4A08u;
}

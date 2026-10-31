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

// Function: sub_001EA908
// Address: 0x1ea908 - 0x1ea9e8
void sub_001EA908_0x1ea908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA908_0x1ea908");
#endif

    switch (ctx->pc) {
        case 0x1ea908u: goto label_1ea908;
        case 0x1ea90cu: goto label_1ea90c;
        case 0x1ea910u: goto label_1ea910;
        case 0x1ea914u: goto label_1ea914;
        case 0x1ea918u: goto label_1ea918;
        case 0x1ea91cu: goto label_1ea91c;
        case 0x1ea920u: goto label_1ea920;
        case 0x1ea924u: goto label_1ea924;
        case 0x1ea928u: goto label_1ea928;
        case 0x1ea92cu: goto label_1ea92c;
        case 0x1ea930u: goto label_1ea930;
        case 0x1ea934u: goto label_1ea934;
        case 0x1ea938u: goto label_1ea938;
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea940u: goto label_1ea940;
        case 0x1ea944u: goto label_1ea944;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea94cu: goto label_1ea94c;
        case 0x1ea950u: goto label_1ea950;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea958u: goto label_1ea958;
        case 0x1ea95cu: goto label_1ea95c;
        case 0x1ea960u: goto label_1ea960;
        case 0x1ea964u: goto label_1ea964;
        case 0x1ea968u: goto label_1ea968;
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea970u: goto label_1ea970;
        case 0x1ea974u: goto label_1ea974;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea97cu: goto label_1ea97c;
        case 0x1ea980u: goto label_1ea980;
        case 0x1ea984u: goto label_1ea984;
        case 0x1ea988u: goto label_1ea988;
        case 0x1ea98cu: goto label_1ea98c;
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea994u: goto label_1ea994;
        case 0x1ea998u: goto label_1ea998;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9a0u: goto label_1ea9a0;
        case 0x1ea9a4u: goto label_1ea9a4;
        case 0x1ea9a8u: goto label_1ea9a8;
        case 0x1ea9acu: goto label_1ea9ac;
        case 0x1ea9b0u: goto label_1ea9b0;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9b8u: goto label_1ea9b8;
        case 0x1ea9bcu: goto label_1ea9bc;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9c4u: goto label_1ea9c4;
        case 0x1ea9c8u: goto label_1ea9c8;
        case 0x1ea9ccu: goto label_1ea9cc;
        case 0x1ea9d0u: goto label_1ea9d0;
        case 0x1ea9d4u: goto label_1ea9d4;
        case 0x1ea9d8u: goto label_1ea9d8;
        case 0x1ea9dcu: goto label_1ea9dc;
        case 0x1ea9e0u: goto label_1ea9e0;
        case 0x1ea9e4u: goto label_1ea9e4;
        default: break;
    }

    ctx->pc = 0x1ea908u;

label_1ea908:
    // 0x1ea908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ea908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ea90c:
    // 0x1ea90c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ea910:
    // 0x1ea910: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ea910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ea914:
    // 0x1ea914: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ea914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ea918:
    // 0x1ea918: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1ea91c:
    // 0x1ea91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea920:
    // 0x1ea920: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ea920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ea924:
    // 0x1ea924: 0x2442ccb8  addiu       $v0, $v0, -0x3348
    ctx->pc = 0x1ea924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954168));
label_1ea928:
    // 0x1ea928: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ea928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ea92c:
    // 0x1ea92c: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
label_1ea930:
    // 0x1ea930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ea934:
    // 0x1ea934: 0x24c6cd10  addiu       $a2, $a2, -0x32F0
    ctx->pc = 0x1ea934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954256));
label_1ea938:
    // 0x1ea938: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1ea938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1ea93c:
    // 0x1ea93c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ea93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea940:
    // 0x1ea940: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1ea940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1ea944:
    // 0x1ea944: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1ea944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1ea948:
    // 0x1ea948: 0xc07ae06  jal         func_1EB818
label_1ea94c:
    if (ctx->pc == 0x1EA94Cu) {
        ctx->pc = 0x1EA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA948u;
        // 0x1ea94c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA950u;
        goto label_1ea950;
    }
    ctx->pc = 0x1EA948u;
    SET_GPR_U32(ctx, 31, 0x1EA950u);
    ctx->pc = 0x1EA94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA948u;
    // 0x1ea94c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB818u, 0x1EA948u, 0x1EA950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA950u;
label_1ea950:
    // 0x1ea950: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ea950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ea954:
    // 0x1ea954: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1ea954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1ea958:
    // 0x1ea958: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1ea95c:
    // 0x1ea95c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ea95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea960:
    // 0x1ea960: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ea964:
    if (ctx->pc == 0x1EA964u) {
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA968u;
        goto label_1ea968;
    }
    ctx->pc = 0x1EA960u;
    {
        const bool branch_taken_0x1ea960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea960) {
            ctx->pc = 0x1EA990u;
            goto label_1ea990;
        }
    }
    ctx->pc = 0x1EA968u;
label_1ea968:
    // 0x1ea968: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea96c:
    // 0x1ea96c: 0xc1376d6  jal         func_4DDB58
label_1ea970:
    if (ctx->pc == 0x1EA970u) {
        ctx->pc = 0x1EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA96Cu;
        // 0x1ea970: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA974u;
        goto label_1ea974;
    }
    ctx->pc = 0x1EA96Cu;
    SET_GPR_U32(ctx, 31, 0x1EA974u);
    ctx->pc = 0x1EA970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA96Cu;
    // 0x1ea970: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1EA96Cu, 0x1EA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA974u;
label_1ea974:
    // 0x1ea974: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea978:
    // 0x1ea978: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1ea978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1ea97c:
    // 0x1ea97c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ea97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea980:
    // 0x1ea980: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ea980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ea984:
    // 0x1ea984: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea988:
    // 0x1ea988: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1ea988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1ea98c:
    // 0x1ea98c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ea98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1ea990:
    // 0x1ea990: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ea990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea994:
    // 0x1ea994: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1ea998:
    if (ctx->pc == 0x1EA998u) {
        ctx->pc = 0x1EA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA994u;
        // 0x1ea998: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA99Cu;
        goto label_1ea99c;
    }
    ctx->pc = 0x1EA994u;
    {
        const bool branch_taken_0x1ea994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA994u;
        // 0x1ea998: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea994) {
            ctx->pc = 0x1EA9C0u;
            goto label_1ea9c0;
        }
    }
    ctx->pc = 0x1EA99Cu;
label_1ea99c:
    // 0x1ea99c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ea99cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ea9a0:
    // 0x1ea9a0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1ea9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1ea9a4:
    // 0x1ea9a4: 0x24c66c58  addiu       $a2, $a2, 0x6C58
    ctx->pc = 0x1ea9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27736));
label_1ea9a8:
    // 0x1ea9a8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ea9ac:
    // 0x1ea9ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1ea9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ea9b0:
    // 0x1ea9b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1ea9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1ea9b4:
    // 0x1ea9b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1ea9b8:
    // 0x1ea9b8: 0x60f809  jalr        $v1
label_1ea9bc:
    if (ctx->pc == 0x1EA9BCu) {
        ctx->pc = 0x1EA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9B8u;
        // 0x1ea9bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9C0u;
        goto label_1ea9c0;
    }
    ctx->pc = 0x1EA9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA9C0u);
        ctx->pc = 0x1EA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9B8u;
        // 0x1ea9bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9B8u, 0x1EA9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA9C0u;
label_1ea9c0:
    // 0x1ea9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea9c4:
    // 0x1ea9c4: 0xc06a39e  jal         func_1A8E78
label_1ea9c8:
    if (ctx->pc == 0x1EA9C8u) {
        ctx->pc = 0x1EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9C4u;
        // 0x1ea9c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9CCu;
        goto label_1ea9cc;
    }
    ctx->pc = 0x1EA9C4u;
    SET_GPR_U32(ctx, 31, 0x1EA9CCu);
    ctx->pc = 0x1EA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9C4u;
    // 0x1ea9c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1EA9C4u, 0x1EA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9CCu;
label_1ea9cc:
    // 0x1ea9cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ea9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea9d0:
    // 0x1ea9d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ea9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea9d4:
    // 0x1ea9d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ea9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea9d8:
    // 0x1ea9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea9dc:
    // 0x1ea9dc: 0x3e00008  jr          $ra
label_1ea9e0:
    if (ctx->pc == 0x1EA9E0u) {
        ctx->pc = 0x1EA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9DCu;
        // 0x1ea9e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9E4u;
        goto label_1ea9e4;
    }
    ctx->pc = 0x1EA9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9DCu;
        // 0x1ea9e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA9E4u;
label_1ea9e4:
    // 0x1ea9e4: 0x0  nop
    ctx->pc = 0x1ea9e4u;
    // NOP
    ctx->pc = 0x1ea9e8u;
}

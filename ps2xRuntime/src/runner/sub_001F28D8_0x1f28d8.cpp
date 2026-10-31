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

// Function: sub_001F28D8
// Address: 0x1f28d8 - 0x1f29b8
void sub_001F28D8_0x1f28d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F28D8_0x1f28d8");
#endif

    switch (ctx->pc) {
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28dcu: goto label_1f28dc;
        case 0x1f28e0u: goto label_1f28e0;
        case 0x1f28e4u: goto label_1f28e4;
        case 0x1f28e8u: goto label_1f28e8;
        case 0x1f28ecu: goto label_1f28ec;
        case 0x1f28f0u: goto label_1f28f0;
        case 0x1f28f4u: goto label_1f28f4;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f28fcu: goto label_1f28fc;
        case 0x1f2900u: goto label_1f2900;
        case 0x1f2904u: goto label_1f2904;
        case 0x1f2908u: goto label_1f2908;
        case 0x1f290cu: goto label_1f290c;
        case 0x1f2910u: goto label_1f2910;
        case 0x1f2914u: goto label_1f2914;
        case 0x1f2918u: goto label_1f2918;
        case 0x1f291cu: goto label_1f291c;
        case 0x1f2920u: goto label_1f2920;
        case 0x1f2924u: goto label_1f2924;
        case 0x1f2928u: goto label_1f2928;
        case 0x1f292cu: goto label_1f292c;
        case 0x1f2930u: goto label_1f2930;
        case 0x1f2934u: goto label_1f2934;
        case 0x1f2938u: goto label_1f2938;
        case 0x1f293cu: goto label_1f293c;
        case 0x1f2940u: goto label_1f2940;
        case 0x1f2944u: goto label_1f2944;
        case 0x1f2948u: goto label_1f2948;
        case 0x1f294cu: goto label_1f294c;
        case 0x1f2950u: goto label_1f2950;
        case 0x1f2954u: goto label_1f2954;
        case 0x1f2958u: goto label_1f2958;
        case 0x1f295cu: goto label_1f295c;
        case 0x1f2960u: goto label_1f2960;
        case 0x1f2964u: goto label_1f2964;
        case 0x1f2968u: goto label_1f2968;
        case 0x1f296cu: goto label_1f296c;
        case 0x1f2970u: goto label_1f2970;
        case 0x1f2974u: goto label_1f2974;
        case 0x1f2978u: goto label_1f2978;
        case 0x1f297cu: goto label_1f297c;
        case 0x1f2980u: goto label_1f2980;
        case 0x1f2984u: goto label_1f2984;
        case 0x1f2988u: goto label_1f2988;
        case 0x1f298cu: goto label_1f298c;
        case 0x1f2990u: goto label_1f2990;
        case 0x1f2994u: goto label_1f2994;
        case 0x1f2998u: goto label_1f2998;
        case 0x1f299cu: goto label_1f299c;
        case 0x1f29a0u: goto label_1f29a0;
        case 0x1f29a4u: goto label_1f29a4;
        case 0x1f29a8u: goto label_1f29a8;
        case 0x1f29acu: goto label_1f29ac;
        case 0x1f29b0u: goto label_1f29b0;
        case 0x1f29b4u: goto label_1f29b4;
        default: break;
    }

    ctx->pc = 0x1f28d8u;

label_1f28d8:
    // 0x1f28d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f28d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f28dc:
    // 0x1f28dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f28e0:
    // 0x1f28e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f28e4:
    // 0x1f28e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f28e8:
    // 0x1f28e8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f28e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f28ec:
    // 0x1f28ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f28ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f28f0:
    // 0x1f28f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f28f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f28f4:
    // 0x1f28f4: 0x2442cff8  addiu       $v0, $v0, -0x3008
    ctx->pc = 0x1f28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955000));
label_1f28f8:
    // 0x1f28f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f28f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f28fc:
    // 0x1f28fc: 0x2463d020  addiu       $v1, $v1, -0x2FE0
    ctx->pc = 0x1f28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955040));
label_1f2900:
    // 0x1f2900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f2904:
    // 0x1f2904: 0x24c6d050  addiu       $a2, $a2, -0x2FB0
    ctx->pc = 0x1f2904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955088));
label_1f2908:
    // 0x1f2908: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1f2908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1f290c:
    // 0x1f290c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f290cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2910:
    // 0x1f2910: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1f2910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1f2914:
    // 0x1f2914: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1f2914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1f2918:
    // 0x1f2918: 0xc07cbfe  jal         func_1F2FF8
label_1f291c:
    if (ctx->pc == 0x1F291Cu) {
        ctx->pc = 0x1F291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2918u;
        // 0x1f291c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2920u;
        goto label_1f2920;
    }
    ctx->pc = 0x1F2918u;
    SET_GPR_U32(ctx, 31, 0x1F2920u);
    ctx->pc = 0x1F291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2918u;
    // 0x1f291c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2FF8u, 0x1F2918u, 0x1F2920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2920u;
label_1f2920:
    // 0x1f2920: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f2924:
    // 0x1f2924: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1f2928:
    // 0x1f2928: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1f2928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1f292c:
    // 0x1f292c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f2930:
    // 0x1f2930: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f2934:
    if (ctx->pc == 0x1F2934u) {
        ctx->pc = 0x1F2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2930u;
        // 0x1f2934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2938u;
        goto label_1f2938;
    }
    ctx->pc = 0x1F2930u;
    {
        const bool branch_taken_0x1f2930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2930u;
        // 0x1f2934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2930) {
            ctx->pc = 0x1F2960u;
            goto label_1f2960;
        }
    }
    ctx->pc = 0x1F2938u;
label_1f2938:
    // 0x1f2938: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f293c:
    // 0x1f293c: 0xc1376d6  jal         func_4DDB58
label_1f2940:
    if (ctx->pc == 0x1F2940u) {
        ctx->pc = 0x1F2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F293Cu;
        // 0x1f2940: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2944u;
        goto label_1f2944;
    }
    ctx->pc = 0x1F293Cu;
    SET_GPR_U32(ctx, 31, 0x1F2944u);
    ctx->pc = 0x1F2940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F293Cu;
    // 0x1f2940: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1F293Cu, 0x1F2944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2944u;
label_1f2944:
    // 0x1f2944: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f2948:
    // 0x1f2948: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f2948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f294c:
    // 0x1f294c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f2950:
    // 0x1f2950: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f2950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f2954:
    // 0x1f2954: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f2958:
    // 0x1f2958: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1f2958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1f295c:
    // 0x1f295c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f295cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f2960:
    // 0x1f2960: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f2960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f2964:
    // 0x1f2964: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f2968:
    if (ctx->pc == 0x1F2968u) {
        ctx->pc = 0x1F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2964u;
        // 0x1f2968: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F296Cu;
        goto label_1f296c;
    }
    ctx->pc = 0x1F2964u;
    {
        const bool branch_taken_0x1f2964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2964u;
        // 0x1f2968: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2964) {
            ctx->pc = 0x1F2990u;
            goto label_1f2990;
        }
    }
    ctx->pc = 0x1F296Cu;
label_1f296c:
    // 0x1f296c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1f296cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1f2970:
    // 0x1f2970: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1f2970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f2974:
    // 0x1f2974: 0x24c67320  addiu       $a2, $a2, 0x7320
    ctx->pc = 0x1f2974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29472));
label_1f2978:
    // 0x1f2978: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1f297c:
    // 0x1f297c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f2980:
    // 0x1f2980: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1f2984:
    // 0x1f2984: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1f2984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1f2988:
    // 0x1f2988: 0x60f809  jalr        $v1
label_1f298c:
    if (ctx->pc == 0x1F298Cu) {
        ctx->pc = 0x1F298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2988u;
        // 0x1f298c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2990u;
        goto label_1f2990;
    }
    ctx->pc = 0x1F2988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F2990u);
        ctx->pc = 0x1F298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2988u;
        // 0x1f298c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2988u, 0x1F2990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2990u;
label_1f2990:
    // 0x1f2990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2994:
    // 0x1f2994: 0xc06a39e  jal         func_1A8E78
label_1f2998:
    if (ctx->pc == 0x1F2998u) {
        ctx->pc = 0x1F2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2994u;
        // 0x1f2998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F299Cu;
        goto label_1f299c;
    }
    ctx->pc = 0x1F2994u;
    SET_GPR_U32(ctx, 31, 0x1F299Cu);
    ctx->pc = 0x1F2998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2994u;
    // 0x1f2998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1F2994u, 0x1F299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F299Cu;
label_1f299c:
    // 0x1f299c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f299cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f29a0:
    // 0x1f29a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f29a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f29a4:
    // 0x1f29a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f29a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f29a8:
    // 0x1f29a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f29a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f29ac:
    // 0x1f29ac: 0x3e00008  jr          $ra
label_1f29b0:
    if (ctx->pc == 0x1F29B0u) {
        ctx->pc = 0x1F29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29ACu;
        // 0x1f29b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29B4u;
        goto label_1f29b4;
    }
    ctx->pc = 0x1F29ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29ACu;
        // 0x1f29b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F29ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F29B4u;
label_1f29b4:
    // 0x1f29b4: 0x0  nop
    ctx->pc = 0x1f29b4u;
    // NOP
    ctx->pc = 0x1f29b8u;
}

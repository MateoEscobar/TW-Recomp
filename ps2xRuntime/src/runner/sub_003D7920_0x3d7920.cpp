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

// Function: sub_003D7920
// Address: 0x3d7920 - 0x3d7af0
void sub_003D7920_0x3d7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7920_0x3d7920");
#endif

    switch (ctx->pc) {
        case 0x3d7920u: goto label_3d7920;
        case 0x3d7924u: goto label_3d7924;
        case 0x3d7928u: goto label_3d7928;
        case 0x3d792cu: goto label_3d792c;
        case 0x3d7930u: goto label_3d7930;
        case 0x3d7934u: goto label_3d7934;
        case 0x3d7938u: goto label_3d7938;
        case 0x3d793cu: goto label_3d793c;
        case 0x3d7940u: goto label_3d7940;
        case 0x3d7944u: goto label_3d7944;
        case 0x3d7948u: goto label_3d7948;
        case 0x3d794cu: goto label_3d794c;
        case 0x3d7950u: goto label_3d7950;
        case 0x3d7954u: goto label_3d7954;
        case 0x3d7958u: goto label_3d7958;
        case 0x3d795cu: goto label_3d795c;
        case 0x3d7960u: goto label_3d7960;
        case 0x3d7964u: goto label_3d7964;
        case 0x3d7968u: goto label_3d7968;
        case 0x3d796cu: goto label_3d796c;
        case 0x3d7970u: goto label_3d7970;
        case 0x3d7974u: goto label_3d7974;
        case 0x3d7978u: goto label_3d7978;
        case 0x3d797cu: goto label_3d797c;
        case 0x3d7980u: goto label_3d7980;
        case 0x3d7984u: goto label_3d7984;
        case 0x3d7988u: goto label_3d7988;
        case 0x3d798cu: goto label_3d798c;
        case 0x3d7990u: goto label_3d7990;
        case 0x3d7994u: goto label_3d7994;
        case 0x3d7998u: goto label_3d7998;
        case 0x3d799cu: goto label_3d799c;
        case 0x3d79a0u: goto label_3d79a0;
        case 0x3d79a4u: goto label_3d79a4;
        case 0x3d79a8u: goto label_3d79a8;
        case 0x3d79acu: goto label_3d79ac;
        case 0x3d79b0u: goto label_3d79b0;
        case 0x3d79b4u: goto label_3d79b4;
        case 0x3d79b8u: goto label_3d79b8;
        case 0x3d79bcu: goto label_3d79bc;
        case 0x3d79c0u: goto label_3d79c0;
        case 0x3d79c4u: goto label_3d79c4;
        case 0x3d79c8u: goto label_3d79c8;
        case 0x3d79ccu: goto label_3d79cc;
        case 0x3d79d0u: goto label_3d79d0;
        case 0x3d79d4u: goto label_3d79d4;
        case 0x3d79d8u: goto label_3d79d8;
        case 0x3d79dcu: goto label_3d79dc;
        case 0x3d79e0u: goto label_3d79e0;
        case 0x3d79e4u: goto label_3d79e4;
        case 0x3d79e8u: goto label_3d79e8;
        case 0x3d79ecu: goto label_3d79ec;
        case 0x3d79f0u: goto label_3d79f0;
        case 0x3d79f4u: goto label_3d79f4;
        case 0x3d79f8u: goto label_3d79f8;
        case 0x3d79fcu: goto label_3d79fc;
        case 0x3d7a00u: goto label_3d7a00;
        case 0x3d7a04u: goto label_3d7a04;
        case 0x3d7a08u: goto label_3d7a08;
        case 0x3d7a0cu: goto label_3d7a0c;
        case 0x3d7a10u: goto label_3d7a10;
        case 0x3d7a14u: goto label_3d7a14;
        case 0x3d7a18u: goto label_3d7a18;
        case 0x3d7a1cu: goto label_3d7a1c;
        case 0x3d7a20u: goto label_3d7a20;
        case 0x3d7a24u: goto label_3d7a24;
        case 0x3d7a28u: goto label_3d7a28;
        case 0x3d7a2cu: goto label_3d7a2c;
        case 0x3d7a30u: goto label_3d7a30;
        case 0x3d7a34u: goto label_3d7a34;
        case 0x3d7a38u: goto label_3d7a38;
        case 0x3d7a3cu: goto label_3d7a3c;
        case 0x3d7a40u: goto label_3d7a40;
        case 0x3d7a44u: goto label_3d7a44;
        case 0x3d7a48u: goto label_3d7a48;
        case 0x3d7a4cu: goto label_3d7a4c;
        case 0x3d7a50u: goto label_3d7a50;
        case 0x3d7a54u: goto label_3d7a54;
        case 0x3d7a58u: goto label_3d7a58;
        case 0x3d7a5cu: goto label_3d7a5c;
        case 0x3d7a60u: goto label_3d7a60;
        case 0x3d7a64u: goto label_3d7a64;
        case 0x3d7a68u: goto label_3d7a68;
        case 0x3d7a6cu: goto label_3d7a6c;
        case 0x3d7a70u: goto label_3d7a70;
        case 0x3d7a74u: goto label_3d7a74;
        case 0x3d7a78u: goto label_3d7a78;
        case 0x3d7a7cu: goto label_3d7a7c;
        case 0x3d7a80u: goto label_3d7a80;
        case 0x3d7a84u: goto label_3d7a84;
        case 0x3d7a88u: goto label_3d7a88;
        case 0x3d7a8cu: goto label_3d7a8c;
        case 0x3d7a90u: goto label_3d7a90;
        case 0x3d7a94u: goto label_3d7a94;
        case 0x3d7a98u: goto label_3d7a98;
        case 0x3d7a9cu: goto label_3d7a9c;
        case 0x3d7aa0u: goto label_3d7aa0;
        case 0x3d7aa4u: goto label_3d7aa4;
        case 0x3d7aa8u: goto label_3d7aa8;
        case 0x3d7aacu: goto label_3d7aac;
        case 0x3d7ab0u: goto label_3d7ab0;
        case 0x3d7ab4u: goto label_3d7ab4;
        case 0x3d7ab8u: goto label_3d7ab8;
        case 0x3d7abcu: goto label_3d7abc;
        case 0x3d7ac0u: goto label_3d7ac0;
        case 0x3d7ac4u: goto label_3d7ac4;
        case 0x3d7ac8u: goto label_3d7ac8;
        case 0x3d7accu: goto label_3d7acc;
        case 0x3d7ad0u: goto label_3d7ad0;
        case 0x3d7ad4u: goto label_3d7ad4;
        case 0x3d7ad8u: goto label_3d7ad8;
        case 0x3d7adcu: goto label_3d7adc;
        case 0x3d7ae0u: goto label_3d7ae0;
        case 0x3d7ae4u: goto label_3d7ae4;
        case 0x3d7ae8u: goto label_3d7ae8;
        case 0x3d7aecu: goto label_3d7aec;
        default: break;
    }

    ctx->pc = 0x3d7920u;

label_3d7920:
    // 0x3d7920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d7920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d7924:
    // 0x3d7924: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d7924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d7928:
    // 0x3d7928: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d7928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d792c:
    // 0x3d792c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d792cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7930:
    // 0x3d7930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7934:
    // 0x3d7934: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d7934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d7938:
    // 0x3d7938: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d793c:
    // 0x3d793c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d7940:
    // 0x3d7940: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d7940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7944:
    // 0x3d7944: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d7944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d7948:
    // 0x3d7948: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d794c:
    // 0x3d794c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7950:
    // 0x3d7950: 0x40f809  jalr        $v0
label_3d7954:
    if (ctx->pc == 0x3D7954u) {
        ctx->pc = 0x3D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7950u;
        // 0x3d7954: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7958u;
        goto label_3d7958;
    }
    ctx->pc = 0x3D7950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7958u);
        ctx->pc = 0x3D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7950u;
        // 0x3d7954: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7950u, 0x3D7958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7958u;
label_3d7958:
    // 0x3d7958: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d7958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d795c:
    // 0x3d795c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3d795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3d7960:
    // 0x3d7960: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
label_3d7964:
    if (ctx->pc == 0x3D7964u) {
        ctx->pc = 0x3D7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7960u;
        // 0x3d7964: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7968u;
        goto label_3d7968;
    }
    ctx->pc = 0x3D7960u;
    {
        const bool branch_taken_0x3d7960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7960u;
        // 0x3d7964: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7960) {
            ctx->pc = 0x3D7A14u;
            goto label_3d7a14;
        }
    }
    ctx->pc = 0x3D7968u;
label_3d7968:
    // 0x3d7968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d796c:
    if (ctx->pc == 0x3D796Cu) {
        ctx->pc = 0x3D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7968u;
        // 0x3d796c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7970u;
        goto label_3d7970;
    }
    ctx->pc = 0x3D7968u;
    {
        const bool branch_taken_0x3d7968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7968u;
        // 0x3d796c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7968) {
            ctx->pc = 0x3D7980u;
            goto label_3d7980;
        }
    }
    ctx->pc = 0x3D7970u;
label_3d7970:
    // 0x3d7970: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3d7974:
    if (ctx->pc == 0x3D7974u) {
        ctx->pc = 0x3D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7970u;
        // 0x3d7974: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7978u;
        goto label_3d7978;
    }
    ctx->pc = 0x3D7970u;
    {
        const bool branch_taken_0x3d7970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7970u;
        // 0x3d7974: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7970) {
            ctx->pc = 0x3D7994u;
            goto label_3d7994;
        }
    }
    ctx->pc = 0x3D7978u;
label_3d7978:
    // 0x3d7978: 0x10000058  b           . + 4 + (0x58 << 2)
label_3d797c:
    if (ctx->pc == 0x3D797Cu) {
        ctx->pc = 0x3D797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7978u;
        // 0x3d797c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7980u;
        goto label_3d7980;
    }
    ctx->pc = 0x3D7978u;
    {
        const bool branch_taken_0x3d7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7978u;
        // 0x3d797c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7978) {
            ctx->pc = 0x3D7ADCu;
            goto label_3d7adc;
        }
    }
    ctx->pc = 0x3D7980u;
label_3d7980:
    // 0x3d7980: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3d7980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d7984:
    // 0x3d7984: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
label_3d7988:
    if (ctx->pc == 0x3D7988u) {
        ctx->pc = 0x3D7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7984u;
        // 0x3d7988: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D798Cu;
        goto label_3d798c;
    }
    ctx->pc = 0x3D7984u;
    {
        const bool branch_taken_0x3d7984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7984u;
        // 0x3d7988: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7984) {
            ctx->pc = 0x3D7A84u;
            goto label_3d7a84;
        }
    }
    ctx->pc = 0x3D798Cu;
label_3d798c:
    // 0x3d798c: 0x10000053  b           . + 4 + (0x53 << 2)
label_3d7990:
    if (ctx->pc == 0x3D7990u) {
        ctx->pc = 0x3D7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D798Cu;
        // 0x3d7990: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7994u;
        goto label_3d7994;
    }
    ctx->pc = 0x3D798Cu;
    {
        const bool branch_taken_0x3d798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D798Cu;
        // 0x3d7990: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d798c) {
            ctx->pc = 0x3D7ADCu;
            goto label_3d7adc;
        }
    }
    ctx->pc = 0x3D7994u;
label_3d7994:
    // 0x3d7994: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d7994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d7998:
    // 0x3d7998: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d7998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d799c:
    // 0x3d799c: 0x5462004f  bnel        $v1, $v0, . + 4 + (0x4F << 2)
label_3d79a0:
    if (ctx->pc == 0x3D79A0u) {
        ctx->pc = 0x3D79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D799Cu;
        // 0x3d79a0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79A4u;
        goto label_3d79a4;
    }
    ctx->pc = 0x3D799Cu;
    {
        const bool branch_taken_0x3d799c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d799c) {
            ctx->pc = 0x3D79A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D799Cu;
            // 0x3d79a0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7ADCu;
            goto label_3d7adc;
        }
    }
    ctx->pc = 0x3D79A4u;
label_3d79a4:
    // 0x3d79a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d79a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d79a8:
    // 0x3d79a8: 0xc0ea16a  jal         func_3A85A8
label_3d79ac:
    if (ctx->pc == 0x3D79ACu) {
        ctx->pc = 0x3D79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79A8u;
        // 0x3d79ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79B0u;
        goto label_3d79b0;
    }
    ctx->pc = 0x3D79A8u;
    SET_GPR_U32(ctx, 31, 0x3D79B0u);
    ctx->pc = 0x3D79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D79A8u;
    // 0x3d79ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D79A8u, 0x3D79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79B0u;
label_3d79b0:
    // 0x3d79b0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x3d79b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d79b4:
    // 0x3d79b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d79b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d79b8:
    // 0x3d79b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d79b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d79bc:
    // 0x3d79bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d79c0:
    // 0x3d79c0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d79c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d79c4:
    // 0x3d79c4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d79c8:
    // 0x3d79c8: 0x60f809  jalr        $v1
label_3d79cc:
    if (ctx->pc == 0x3D79CCu) {
        ctx->pc = 0x3D79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79C8u;
        // 0x3d79cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79D0u;
        goto label_3d79d0;
    }
    ctx->pc = 0x3D79C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D79D0u);
        ctx->pc = 0x3D79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79C8u;
        // 0x3d79cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D79C8u, 0x3D79D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D79D0u;
label_3d79d0:
    // 0x3d79d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d79d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d79d4:
    // 0x3d79d4: 0xc0ea16a  jal         func_3A85A8
label_3d79d8:
    if (ctx->pc == 0x3D79D8u) {
        ctx->pc = 0x3D79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79D4u;
        // 0x3d79d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79DCu;
        goto label_3d79dc;
    }
    ctx->pc = 0x3D79D4u;
    SET_GPR_U32(ctx, 31, 0x3D79DCu);
    ctx->pc = 0x3D79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D79D4u;
    // 0x3d79d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D79D4u, 0x3D79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79DCu;
label_3d79dc:
    // 0x3d79dc: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x3d79dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d79e0:
    // 0x3d79e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d79e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d79e4:
    // 0x3d79e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d79e8:
    // 0x3d79e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d79ec:
    // 0x3d79ec: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d79ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d79f0:
    // 0x3d79f0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d79f4:
    // 0x3d79f4: 0x60f809  jalr        $v1
label_3d79f8:
    if (ctx->pc == 0x3D79F8u) {
        ctx->pc = 0x3D79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79F4u;
        // 0x3d79f8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79FCu;
        goto label_3d79fc;
    }
    ctx->pc = 0x3D79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D79FCu);
        ctx->pc = 0x3D79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79F4u;
        // 0x3d79f8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D79F4u, 0x3D79FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D79FCu;
label_3d79fc:
    // 0x3d79fc: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3d79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3d7a00:
    // 0x3d7a00: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d7a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d7a04:
    // 0x3d7a04: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3d7a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3d7a08:
    // 0x3d7a08: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3d7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3d7a0c:
    // 0x3d7a0c: 0x10000031  b           . + 4 + (0x31 << 2)
label_3d7a10:
    if (ctx->pc == 0x3D7A10u) {
        ctx->pc = 0x3D7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A0Cu;
        // 0x3d7a10: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A14u;
        goto label_3d7a14;
    }
    ctx->pc = 0x3D7A0Cu;
    {
        const bool branch_taken_0x3d7a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A0Cu;
        // 0x3d7a10: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a0c) {
            ctx->pc = 0x3D7AD4u;
            goto label_3d7ad4;
        }
    }
    ctx->pc = 0x3D7A14u;
label_3d7a14:
    // 0x3d7a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a18:
    // 0x3d7a18: 0xc0ea16a  jal         func_3A85A8
label_3d7a1c:
    if (ctx->pc == 0x3D7A1Cu) {
        ctx->pc = 0x3D7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A18u;
        // 0x3d7a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A20u;
        goto label_3d7a20;
    }
    ctx->pc = 0x3D7A18u;
    SET_GPR_U32(ctx, 31, 0x3D7A20u);
    ctx->pc = 0x3D7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7A18u;
    // 0x3d7a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D7A18u, 0x3D7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7A20u;
label_3d7a20:
    // 0x3d7a20: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x3d7a20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d7a24:
    // 0x3d7a24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d7a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a28:
    // 0x3d7a28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d7a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d7a2c:
    // 0x3d7a2c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d7a30:
    // 0x3d7a30: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d7a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d7a34:
    // 0x3d7a34: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d7a38:
    // 0x3d7a38: 0x60f809  jalr        $v1
label_3d7a3c:
    if (ctx->pc == 0x3D7A3Cu) {
        ctx->pc = 0x3D7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A38u;
        // 0x3d7a3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A40u;
        goto label_3d7a40;
    }
    ctx->pc = 0x3D7A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7A40u);
        ctx->pc = 0x3D7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A38u;
        // 0x3d7a3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7A38u, 0x3D7A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7A40u;
label_3d7a40:
    // 0x3d7a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a44:
    // 0x3d7a44: 0xc0ea16a  jal         func_3A85A8
label_3d7a48:
    if (ctx->pc == 0x3D7A48u) {
        ctx->pc = 0x3D7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A44u;
        // 0x3d7a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A4Cu;
        goto label_3d7a4c;
    }
    ctx->pc = 0x3D7A44u;
    SET_GPR_U32(ctx, 31, 0x3D7A4Cu);
    ctx->pc = 0x3D7A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7A44u;
    // 0x3d7a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D7A44u, 0x3D7A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7A4Cu;
label_3d7a4c:
    // 0x3d7a4c: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x3d7a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d7a50:
    // 0x3d7a50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d7a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a54:
    // 0x3d7a54: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d7a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d7a58:
    // 0x3d7a58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d7a5c:
    // 0x3d7a5c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d7a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d7a60:
    // 0x3d7a60: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d7a64:
    // 0x3d7a64: 0x60f809  jalr        $v1
label_3d7a68:
    if (ctx->pc == 0x3D7A68u) {
        ctx->pc = 0x3D7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A64u;
        // 0x3d7a68: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A6Cu;
        goto label_3d7a6c;
    }
    ctx->pc = 0x3D7A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7A6Cu);
        ctx->pc = 0x3D7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A64u;
        // 0x3d7a68: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7A64u, 0x3D7A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7A6Cu;
label_3d7a6c:
    // 0x3d7a6c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3d7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3d7a70:
    // 0x3d7a70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7a74:
    // 0x3d7a74: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d7a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d7a78:
    // 0x3d7a78: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3d7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3d7a7c:
    // 0x3d7a7c: 0x10000015  b           . + 4 + (0x15 << 2)
label_3d7a80:
    if (ctx->pc == 0x3D7A80u) {
        ctx->pc = 0x3D7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A7Cu;
        // 0x3d7a80: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A84u;
        goto label_3d7a84;
    }
    ctx->pc = 0x3D7A7Cu;
    {
        const bool branch_taken_0x3d7a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A7Cu;
        // 0x3d7a80: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a7c) {
            ctx->pc = 0x3D7AD4u;
            goto label_3d7ad4;
        }
    }
    ctx->pc = 0x3D7A84u;
label_3d7a84:
    // 0x3d7a84: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x3d7a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3d7a88:
    // 0x3d7a88: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3d7a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d7a8c:
    // 0x3d7a8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d7a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a90:
    // 0x3d7a90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d7a94:
    // 0x3d7a94: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d7a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d7a98:
    // 0x3d7a98: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d7a9c:
    // 0x3d7a9c: 0x60f809  jalr        $v1
label_3d7aa0:
    if (ctx->pc == 0x3D7AA0u) {
        ctx->pc = 0x3D7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A9Cu;
        // 0x3d7aa0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AA4u;
        goto label_3d7aa4;
    }
    ctx->pc = 0x3D7A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7AA4u);
        ctx->pc = 0x3D7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A9Cu;
        // 0x3d7aa0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7A9Cu, 0x3D7AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7AA4u;
label_3d7aa4:
    // 0x3d7aa4: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x3d7aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d7aa8:
    // 0x3d7aa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d7aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7aac:
    // 0x3d7aac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3d7aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d7ab0:
    // 0x3d7ab0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d7ab4:
    // 0x3d7ab4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d7ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d7ab8:
    // 0x3d7ab8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d7abc:
    // 0x3d7abc: 0x60f809  jalr        $v1
label_3d7ac0:
    if (ctx->pc == 0x3D7AC0u) {
        ctx->pc = 0x3D7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7ABCu;
        // 0x3d7ac0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AC4u;
        goto label_3d7ac4;
    }
    ctx->pc = 0x3D7ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7AC4u);
        ctx->pc = 0x3D7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7ABCu;
        // 0x3d7ac0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7ABCu, 0x3D7AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7AC4u;
label_3d7ac4:
    // 0x3d7ac4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3d7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3d7ac8:
    // 0x3d7ac8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d7acc:
    // 0x3d7acc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d7accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d7ad0:
    // 0x3d7ad0: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3d7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3d7ad4:
    // 0x3d7ad4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d7ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7ad8:
    // 0x3d7ad8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d7ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7adc:
    // 0x3d7adc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7ae0:
    // 0x3d7ae0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d7ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7ae4:
    // 0x3d7ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7ae8:
    // 0x3d7ae8: 0x3e00008  jr          $ra
label_3d7aec:
    if (ctx->pc == 0x3D7AECu) {
        ctx->pc = 0x3D7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AE8u;
        // 0x3d7aec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AF0u;
        goto label_fallthrough_0x3d7ae8;
    }
    ctx->pc = 0x3D7AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AE8u;
        // 0x3d7aec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7ae8:
    ctx->pc = 0x3D7AF0u;
}

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

// Function: sub_00269908
// Address: 0x269908 - 0x269ab0
void sub_00269908_0x269908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269908_0x269908");
#endif

    switch (ctx->pc) {
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        case 0x269930u: goto label_269930;
        case 0x269934u: goto label_269934;
        case 0x269938u: goto label_269938;
        case 0x26993cu: goto label_26993c;
        case 0x269940u: goto label_269940;
        case 0x269944u: goto label_269944;
        case 0x269948u: goto label_269948;
        case 0x26994cu: goto label_26994c;
        case 0x269950u: goto label_269950;
        case 0x269954u: goto label_269954;
        case 0x269958u: goto label_269958;
        case 0x26995cu: goto label_26995c;
        case 0x269960u: goto label_269960;
        case 0x269964u: goto label_269964;
        case 0x269968u: goto label_269968;
        case 0x26996cu: goto label_26996c;
        case 0x269970u: goto label_269970;
        case 0x269974u: goto label_269974;
        case 0x269978u: goto label_269978;
        case 0x26997cu: goto label_26997c;
        case 0x269980u: goto label_269980;
        case 0x269984u: goto label_269984;
        case 0x269988u: goto label_269988;
        case 0x26998cu: goto label_26998c;
        case 0x269990u: goto label_269990;
        case 0x269994u: goto label_269994;
        case 0x269998u: goto label_269998;
        case 0x26999cu: goto label_26999c;
        case 0x2699a0u: goto label_2699a0;
        case 0x2699a4u: goto label_2699a4;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699acu: goto label_2699ac;
        case 0x2699b0u: goto label_2699b0;
        case 0x2699b4u: goto label_2699b4;
        case 0x2699b8u: goto label_2699b8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c0u: goto label_2699c0;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ccu: goto label_2699cc;
        case 0x2699d0u: goto label_2699d0;
        case 0x2699d4u: goto label_2699d4;
        case 0x2699d8u: goto label_2699d8;
        case 0x2699dcu: goto label_2699dc;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699e4u: goto label_2699e4;
        case 0x2699e8u: goto label_2699e8;
        case 0x2699ecu: goto label_2699ec;
        case 0x2699f0u: goto label_2699f0;
        case 0x2699f4u: goto label_2699f4;
        case 0x2699f8u: goto label_2699f8;
        case 0x2699fcu: goto label_2699fc;
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        case 0x269a40u: goto label_269a40;
        case 0x269a44u: goto label_269a44;
        case 0x269a48u: goto label_269a48;
        case 0x269a4cu: goto label_269a4c;
        case 0x269a50u: goto label_269a50;
        case 0x269a54u: goto label_269a54;
        case 0x269a58u: goto label_269a58;
        case 0x269a5cu: goto label_269a5c;
        case 0x269a60u: goto label_269a60;
        case 0x269a64u: goto label_269a64;
        case 0x269a68u: goto label_269a68;
        case 0x269a6cu: goto label_269a6c;
        case 0x269a70u: goto label_269a70;
        case 0x269a74u: goto label_269a74;
        case 0x269a78u: goto label_269a78;
        case 0x269a7cu: goto label_269a7c;
        case 0x269a80u: goto label_269a80;
        case 0x269a84u: goto label_269a84;
        case 0x269a88u: goto label_269a88;
        case 0x269a8cu: goto label_269a8c;
        case 0x269a90u: goto label_269a90;
        case 0x269a94u: goto label_269a94;
        case 0x269a98u: goto label_269a98;
        case 0x269a9cu: goto label_269a9c;
        case 0x269aa0u: goto label_269aa0;
        case 0x269aa4u: goto label_269aa4;
        case 0x269aa8u: goto label_269aa8;
        case 0x269aacu: goto label_269aac;
        default: break;
    }

    ctx->pc = 0x269908u;

label_269908:
    // 0x269908: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26990c:
    // 0x26990c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_269910:
    // 0x269910: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x269910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_269914:
    // 0x269914: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x269914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_269918:
    // 0x269918: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x269918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_26991c:
    // 0x26991c: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26991cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_269920:
    // 0x269920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x269920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_269924:
    // 0x269924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269928:
    // 0x269928: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x269928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_26992c:
    // 0x26992c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269930:
    // 0x269930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_269934:
    // 0x269934: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x269934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_269938:
    // 0x269938: 0xc041532  jal         func_1054C8
label_26993c:
    if (ctx->pc == 0x26993Cu) {
        ctx->pc = 0x26993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269938u;
        // 0x26993c: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269940u;
        goto label_269940;
    }
    ctx->pc = 0x269938u;
    SET_GPR_U32(ctx, 31, 0x269940u);
    ctx->pc = 0x26993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269938u;
    // 0x26993c: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269938u, 0x269940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269940u;
label_269940:
    // 0x269940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269944:
    // 0x269944: 0xc041532  jal         func_1054C8
label_269948:
    if (ctx->pc == 0x269948u) {
        ctx->pc = 0x269948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269944u;
        // 0x269948: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26994Cu;
        goto label_26994c;
    }
    ctx->pc = 0x269944u;
    SET_GPR_U32(ctx, 31, 0x26994Cu);
    ctx->pc = 0x269948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269944u;
    // 0x269948: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269944u, 0x26994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26994Cu;
label_26994c:
    // 0x26994c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269950:
    // 0x269950: 0xc041532  jal         func_1054C8
label_269954:
    if (ctx->pc == 0x269954u) {
        ctx->pc = 0x269954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269950u;
        // 0x269954: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269958u;
        goto label_269958;
    }
    ctx->pc = 0x269950u;
    SET_GPR_U32(ctx, 31, 0x269958u);
    ctx->pc = 0x269954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269950u;
    // 0x269954: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269950u, 0x269958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269958u;
label_269958:
    // 0x269958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26995c:
    // 0x26995c: 0xc041532  jal         func_1054C8
label_269960:
    if (ctx->pc == 0x269960u) {
        ctx->pc = 0x269960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26995Cu;
        // 0x269960: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269964u;
        goto label_269964;
    }
    ctx->pc = 0x26995Cu;
    SET_GPR_U32(ctx, 31, 0x269964u);
    ctx->pc = 0x269960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26995Cu;
    // 0x269960: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26995Cu, 0x269964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269964u;
label_269964:
    // 0x269964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269968:
    // 0x269968: 0xc08bcf2  jal         func_22F3C8
label_26996c:
    if (ctx->pc == 0x26996Cu) {
        ctx->pc = 0x26996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269968u;
        // 0x26996c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269970u;
        goto label_269970;
    }
    ctx->pc = 0x269968u;
    SET_GPR_U32(ctx, 31, 0x269970u);
    ctx->pc = 0x26996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269968u;
    // 0x26996c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x269968u, 0x269970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269970u;
label_269970:
    // 0x269970: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_269974:
    if (ctx->pc == 0x269974u) {
        ctx->pc = 0x269974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269970u;
        // 0x269974: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269978u;
        goto label_269978;
    }
    ctx->pc = 0x269970u;
    {
        const bool branch_taken_0x269970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269970u;
        // 0x269974: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269970) {
            ctx->pc = 0x269998u;
            goto label_269998;
        }
    }
    ctx->pc = 0x269978u;
label_269978:
    // 0x269978: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x269978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26997c:
    // 0x26997c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26997cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269980:
    // 0x269980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269984:
    // 0x269984: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_269988:
    // 0x269988: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x269988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26998c:
    // 0x26998c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26998cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269990:
    // 0x269990: 0xc041b20  jal         func_106C80
label_269994:
    if (ctx->pc == 0x269994u) {
        ctx->pc = 0x269994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269990u;
        // 0x269994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269998u;
        goto label_269998;
    }
    ctx->pc = 0x269990u;
    SET_GPR_U32(ctx, 31, 0x269998u);
    ctx->pc = 0x269994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269990u;
    // 0x269994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x269990u, 0x269998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269998u;
label_269998:
    // 0x269998: 0xc05d484  jal         func_175210
label_26999c:
    if (ctx->pc == 0x26999Cu) {
        ctx->pc = 0x26999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269998u;
        // 0x26999c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699A0u;
        goto label_2699a0;
    }
    ctx->pc = 0x269998u;
    SET_GPR_U32(ctx, 31, 0x2699A0u);
    ctx->pc = 0x26999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269998u;
    // 0x26999c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x269998u, 0x2699A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699A0u;
label_2699a0:
    // 0x2699a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2699a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2699a4:
    // 0x2699a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2699a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2699a8:
    // 0x2699a8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2699a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2699ac:
    // 0x2699ac: 0xa0f809  jalr        $a1
label_2699b0:
    if (ctx->pc == 0x2699B0u) {
        ctx->pc = 0x2699B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699ACu;
        // 0x2699b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699B4u;
        goto label_2699b4;
    }
    ctx->pc = 0x2699ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2699B4u);
        ctx->pc = 0x2699B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699ACu;
        // 0x2699b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2699ACu, 0x2699B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2699B4u;
label_2699b4:
    // 0x2699b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2699b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2699b8:
    // 0x2699b8: 0xc087016  jal         func_21C058
label_2699bc:
    if (ctx->pc == 0x2699BCu) {
        ctx->pc = 0x2699BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699B8u;
        // 0x2699bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699C0u;
        goto label_2699c0;
    }
    ctx->pc = 0x2699B8u;
    SET_GPR_U32(ctx, 31, 0x2699C0u);
    ctx->pc = 0x2699BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699B8u;
    // 0x2699bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2699B8u, 0x2699C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699C0u;
label_2699c0:
    // 0x2699c0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2699c4:
    if (ctx->pc == 0x2699C4u) {
        ctx->pc = 0x2699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699C0u;
        // 0x2699c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699C8u;
        goto label_2699c8;
    }
    ctx->pc = 0x2699C0u;
    {
        const bool branch_taken_0x2699c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699C0u;
        // 0x2699c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699c0) {
            ctx->pc = 0x2699E8u;
            goto label_2699e8;
        }
    }
    ctx->pc = 0x2699C8u;
label_2699c8:
    // 0x2699c8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2699cc:
    // 0x2699cc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2699ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2699d0:
    // 0x2699d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2699d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2699d4:
    // 0x2699d4: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2699d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2699d8:
    // 0x2699d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2699d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2699dc:
    // 0x2699dc: 0xc04159e  jal         func_105678
label_2699e0:
    if (ctx->pc == 0x2699E0u) {
        ctx->pc = 0x2699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699DCu;
        // 0x2699e0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699E4u;
        goto label_2699e4;
    }
    ctx->pc = 0x2699DCu;
    SET_GPR_U32(ctx, 31, 0x2699E4u);
    ctx->pc = 0x2699E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699DCu;
    // 0x2699e0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2699DCu, 0x2699E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699E4u;
label_2699e4:
    // 0x2699e4: 0x0  nop
    ctx->pc = 0x2699e4u;
    // NOP
label_2699e8:
    // 0x2699e8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2699e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2699ec:
    // 0x2699ec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2699f0:
    // 0x2699f0: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2699f4:
    if (ctx->pc == 0x2699F4u) {
        ctx->pc = 0x2699F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699F0u;
        // 0x2699f4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699F8u;
        goto label_2699f8;
    }
    ctx->pc = 0x2699F0u;
    {
        const bool branch_taken_0x2699f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699F0u;
        // 0x2699f4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699f0) {
            ctx->pc = 0x269A3Cu;
            goto label_269a3c;
        }
    }
    ctx->pc = 0x2699F8u;
label_2699f8:
    // 0x2699f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2699f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2699fc:
    // 0x2699fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2699fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_269a00:
    // 0x269a00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_269a04:
    // 0x269a04: 0x40f809  jalr        $v0
label_269a08:
    if (ctx->pc == 0x269A08u) {
        ctx->pc = 0x269A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A04u;
        // 0x269a08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A0Cu;
        goto label_269a0c;
    }
    ctx->pc = 0x269A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269A0Cu);
        ctx->pc = 0x269A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A04u;
        // 0x269a08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A04u, 0x269A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269A0Cu;
label_269a0c:
    // 0x269a0c: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x269a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_269a10:
    // 0x269a10: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x269a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_269a14:
    // 0x269a14: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x269a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_269a18:
    // 0x269a18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269a1c:
    // 0x269a1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x269a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269a20:
    // 0x269a20: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x269a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269a24:
    // 0x269a24: 0x254a7870  addiu       $t2, $t2, 0x7870
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30832));
label_269a28:
    // 0x269a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x269a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269a2c:
    // 0x269a2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x269a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269a30:
    // 0x269a30: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x269a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_269a34:
    // 0x269a34: 0xc041664  jal         func_105990
label_269a38:
    if (ctx->pc == 0x269A38u) {
        ctx->pc = 0x269A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A34u;
        // 0x269a38: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A3Cu;
        goto label_269a3c;
    }
    ctx->pc = 0x269A34u;
    SET_GPR_U32(ctx, 31, 0x269A3Cu);
    ctx->pc = 0x269A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A34u;
    // 0x269a38: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x269A34u, 0x269A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A3Cu;
label_269a3c:
    // 0x269a3c: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_269a40:
    if (ctx->pc == 0x269A40u) {
        ctx->pc = 0x269A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A3Cu;
        // 0x269a40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A44u;
        goto label_269a44;
    }
    ctx->pc = 0x269A3Cu;
    {
        const bool branch_taken_0x269a3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A3Cu;
        // 0x269a40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a3c) {
            ctx->pc = 0x269A68u;
            goto label_269a68;
        }
    }
    ctx->pc = 0x269A44u;
label_269a44:
    // 0x269a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x269a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269a48:
    // 0x269a48: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x269a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269a4c:
    // 0x269a4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x269a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269a50:
    // 0x269a50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x269a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_269a54:
    // 0x269a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x269a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269a58:
    // 0x269a58: 0x240600f5  addiu       $a2, $zero, 0xF5
    ctx->pc = 0x269a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_269a5c:
    // 0x269a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x269a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269a60:
    // 0x269a60: 0xc041664  jal         func_105990
label_269a64:
    if (ctx->pc == 0x269A64u) {
        ctx->pc = 0x269A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A60u;
        // 0x269a64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A68u;
        goto label_269a68;
    }
    ctx->pc = 0x269A60u;
    SET_GPR_U32(ctx, 31, 0x269A68u);
    ctx->pc = 0x269A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A60u;
    // 0x269a64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x269A60u, 0x269A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A68u;
label_269a68:
    // 0x269a68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x269a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_269a6c:
    // 0x269a6c: 0xc05d53a  jal         func_1754E8
label_269a70:
    if (ctx->pc == 0x269A70u) {
        ctx->pc = 0x269A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A6Cu;
        // 0x269a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A74u;
        goto label_269a74;
    }
    ctx->pc = 0x269A6Cu;
    SET_GPR_U32(ctx, 31, 0x269A74u);
    ctx->pc = 0x269A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A6Cu;
    // 0x269a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x269A6Cu, 0x269A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A74u;
label_269a74:
    // 0x269a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x269a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269a78:
    // 0x269a78: 0xc05d4f6  jal         func_1753D8
label_269a7c:
    if (ctx->pc == 0x269A7Cu) {
        ctx->pc = 0x269A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A78u;
        // 0x269a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A80u;
        goto label_269a80;
    }
    ctx->pc = 0x269A78u;
    SET_GPR_U32(ctx, 31, 0x269A80u);
    ctx->pc = 0x269A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A78u;
    // 0x269a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x269A78u, 0x269A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A80u;
label_269a80:
    // 0x269a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269a84:
    // 0x269a84: 0xc089990  jal         func_226640
label_269a88:
    if (ctx->pc == 0x269A88u) {
        ctx->pc = 0x269A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A84u;
        // 0x269a88: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A8Cu;
        goto label_269a8c;
    }
    ctx->pc = 0x269A84u;
    SET_GPR_U32(ctx, 31, 0x269A8Cu);
    ctx->pc = 0x269A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A84u;
    // 0x269a88: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x269A84u, 0x269A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A8Cu;
label_269a8c:
    // 0x269a8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x269a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_269a90:
    // 0x269a90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x269a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_269a94:
    // 0x269a94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x269a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269a98:
    // 0x269a98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x269a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269a9c:
    // 0x269a9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x269a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_269aa0:
    // 0x269aa0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x269aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_269aa4:
    // 0x269aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269aa8:
    // 0x269aa8: 0x3e00008  jr          $ra
label_269aac:
    if (ctx->pc == 0x269AACu) {
        ctx->pc = 0x269AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AA8u;
        // 0x269aac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AB0u;
        goto label_fallthrough_0x269aa8;
    }
    ctx->pc = 0x269AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AA8u;
        // 0x269aac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269aa8:
    ctx->pc = 0x269AB0u;
}

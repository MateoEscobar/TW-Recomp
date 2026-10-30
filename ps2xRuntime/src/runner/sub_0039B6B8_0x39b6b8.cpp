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

// Function: sub_0039B6B8
// Address: 0x39b6b8 - 0x39ba30
void sub_0039B6B8_0x39b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B6B8_0x39b6b8");
#endif

    switch (ctx->pc) {
        case 0x39b6b8u: goto label_39b6b8;
        case 0x39b6bcu: goto label_39b6bc;
        case 0x39b6c0u: goto label_39b6c0;
        case 0x39b6c4u: goto label_39b6c4;
        case 0x39b6c8u: goto label_39b6c8;
        case 0x39b6ccu: goto label_39b6cc;
        case 0x39b6d0u: goto label_39b6d0;
        case 0x39b6d4u: goto label_39b6d4;
        case 0x39b6d8u: goto label_39b6d8;
        case 0x39b6dcu: goto label_39b6dc;
        case 0x39b6e0u: goto label_39b6e0;
        case 0x39b6e4u: goto label_39b6e4;
        case 0x39b6e8u: goto label_39b6e8;
        case 0x39b6ecu: goto label_39b6ec;
        case 0x39b6f0u: goto label_39b6f0;
        case 0x39b6f4u: goto label_39b6f4;
        case 0x39b6f8u: goto label_39b6f8;
        case 0x39b6fcu: goto label_39b6fc;
        case 0x39b700u: goto label_39b700;
        case 0x39b704u: goto label_39b704;
        case 0x39b708u: goto label_39b708;
        case 0x39b70cu: goto label_39b70c;
        case 0x39b710u: goto label_39b710;
        case 0x39b714u: goto label_39b714;
        case 0x39b718u: goto label_39b718;
        case 0x39b71cu: goto label_39b71c;
        case 0x39b720u: goto label_39b720;
        case 0x39b724u: goto label_39b724;
        case 0x39b728u: goto label_39b728;
        case 0x39b72cu: goto label_39b72c;
        case 0x39b730u: goto label_39b730;
        case 0x39b734u: goto label_39b734;
        case 0x39b738u: goto label_39b738;
        case 0x39b73cu: goto label_39b73c;
        case 0x39b740u: goto label_39b740;
        case 0x39b744u: goto label_39b744;
        case 0x39b748u: goto label_39b748;
        case 0x39b74cu: goto label_39b74c;
        case 0x39b750u: goto label_39b750;
        case 0x39b754u: goto label_39b754;
        case 0x39b758u: goto label_39b758;
        case 0x39b75cu: goto label_39b75c;
        case 0x39b760u: goto label_39b760;
        case 0x39b764u: goto label_39b764;
        case 0x39b768u: goto label_39b768;
        case 0x39b76cu: goto label_39b76c;
        case 0x39b770u: goto label_39b770;
        case 0x39b774u: goto label_39b774;
        case 0x39b778u: goto label_39b778;
        case 0x39b77cu: goto label_39b77c;
        case 0x39b780u: goto label_39b780;
        case 0x39b784u: goto label_39b784;
        case 0x39b788u: goto label_39b788;
        case 0x39b78cu: goto label_39b78c;
        case 0x39b790u: goto label_39b790;
        case 0x39b794u: goto label_39b794;
        case 0x39b798u: goto label_39b798;
        case 0x39b79cu: goto label_39b79c;
        case 0x39b7a0u: goto label_39b7a0;
        case 0x39b7a4u: goto label_39b7a4;
        case 0x39b7a8u: goto label_39b7a8;
        case 0x39b7acu: goto label_39b7ac;
        case 0x39b7b0u: goto label_39b7b0;
        case 0x39b7b4u: goto label_39b7b4;
        case 0x39b7b8u: goto label_39b7b8;
        case 0x39b7bcu: goto label_39b7bc;
        case 0x39b7c0u: goto label_39b7c0;
        case 0x39b7c4u: goto label_39b7c4;
        case 0x39b7c8u: goto label_39b7c8;
        case 0x39b7ccu: goto label_39b7cc;
        case 0x39b7d0u: goto label_39b7d0;
        case 0x39b7d4u: goto label_39b7d4;
        case 0x39b7d8u: goto label_39b7d8;
        case 0x39b7dcu: goto label_39b7dc;
        case 0x39b7e0u: goto label_39b7e0;
        case 0x39b7e4u: goto label_39b7e4;
        case 0x39b7e8u: goto label_39b7e8;
        case 0x39b7ecu: goto label_39b7ec;
        case 0x39b7f0u: goto label_39b7f0;
        case 0x39b7f4u: goto label_39b7f4;
        case 0x39b7f8u: goto label_39b7f8;
        case 0x39b7fcu: goto label_39b7fc;
        case 0x39b800u: goto label_39b800;
        case 0x39b804u: goto label_39b804;
        case 0x39b808u: goto label_39b808;
        case 0x39b80cu: goto label_39b80c;
        case 0x39b810u: goto label_39b810;
        case 0x39b814u: goto label_39b814;
        case 0x39b818u: goto label_39b818;
        case 0x39b81cu: goto label_39b81c;
        case 0x39b820u: goto label_39b820;
        case 0x39b824u: goto label_39b824;
        case 0x39b828u: goto label_39b828;
        case 0x39b82cu: goto label_39b82c;
        case 0x39b830u: goto label_39b830;
        case 0x39b834u: goto label_39b834;
        case 0x39b838u: goto label_39b838;
        case 0x39b83cu: goto label_39b83c;
        case 0x39b840u: goto label_39b840;
        case 0x39b844u: goto label_39b844;
        case 0x39b848u: goto label_39b848;
        case 0x39b84cu: goto label_39b84c;
        case 0x39b850u: goto label_39b850;
        case 0x39b854u: goto label_39b854;
        case 0x39b858u: goto label_39b858;
        case 0x39b85cu: goto label_39b85c;
        case 0x39b860u: goto label_39b860;
        case 0x39b864u: goto label_39b864;
        case 0x39b868u: goto label_39b868;
        case 0x39b86cu: goto label_39b86c;
        case 0x39b870u: goto label_39b870;
        case 0x39b874u: goto label_39b874;
        case 0x39b878u: goto label_39b878;
        case 0x39b87cu: goto label_39b87c;
        case 0x39b880u: goto label_39b880;
        case 0x39b884u: goto label_39b884;
        case 0x39b888u: goto label_39b888;
        case 0x39b88cu: goto label_39b88c;
        case 0x39b890u: goto label_39b890;
        case 0x39b894u: goto label_39b894;
        case 0x39b898u: goto label_39b898;
        case 0x39b89cu: goto label_39b89c;
        case 0x39b8a0u: goto label_39b8a0;
        case 0x39b8a4u: goto label_39b8a4;
        case 0x39b8a8u: goto label_39b8a8;
        case 0x39b8acu: goto label_39b8ac;
        case 0x39b8b0u: goto label_39b8b0;
        case 0x39b8b4u: goto label_39b8b4;
        case 0x39b8b8u: goto label_39b8b8;
        case 0x39b8bcu: goto label_39b8bc;
        case 0x39b8c0u: goto label_39b8c0;
        case 0x39b8c4u: goto label_39b8c4;
        case 0x39b8c8u: goto label_39b8c8;
        case 0x39b8ccu: goto label_39b8cc;
        case 0x39b8d0u: goto label_39b8d0;
        case 0x39b8d4u: goto label_39b8d4;
        case 0x39b8d8u: goto label_39b8d8;
        case 0x39b8dcu: goto label_39b8dc;
        case 0x39b8e0u: goto label_39b8e0;
        case 0x39b8e4u: goto label_39b8e4;
        case 0x39b8e8u: goto label_39b8e8;
        case 0x39b8ecu: goto label_39b8ec;
        case 0x39b8f0u: goto label_39b8f0;
        case 0x39b8f4u: goto label_39b8f4;
        case 0x39b8f8u: goto label_39b8f8;
        case 0x39b8fcu: goto label_39b8fc;
        case 0x39b900u: goto label_39b900;
        case 0x39b904u: goto label_39b904;
        case 0x39b908u: goto label_39b908;
        case 0x39b90cu: goto label_39b90c;
        case 0x39b910u: goto label_39b910;
        case 0x39b914u: goto label_39b914;
        case 0x39b918u: goto label_39b918;
        case 0x39b91cu: goto label_39b91c;
        case 0x39b920u: goto label_39b920;
        case 0x39b924u: goto label_39b924;
        case 0x39b928u: goto label_39b928;
        case 0x39b92cu: goto label_39b92c;
        case 0x39b930u: goto label_39b930;
        case 0x39b934u: goto label_39b934;
        case 0x39b938u: goto label_39b938;
        case 0x39b93cu: goto label_39b93c;
        case 0x39b940u: goto label_39b940;
        case 0x39b944u: goto label_39b944;
        case 0x39b948u: goto label_39b948;
        case 0x39b94cu: goto label_39b94c;
        case 0x39b950u: goto label_39b950;
        case 0x39b954u: goto label_39b954;
        case 0x39b958u: goto label_39b958;
        case 0x39b95cu: goto label_39b95c;
        case 0x39b960u: goto label_39b960;
        case 0x39b964u: goto label_39b964;
        case 0x39b968u: goto label_39b968;
        case 0x39b96cu: goto label_39b96c;
        case 0x39b970u: goto label_39b970;
        case 0x39b974u: goto label_39b974;
        case 0x39b978u: goto label_39b978;
        case 0x39b97cu: goto label_39b97c;
        case 0x39b980u: goto label_39b980;
        case 0x39b984u: goto label_39b984;
        case 0x39b988u: goto label_39b988;
        case 0x39b98cu: goto label_39b98c;
        case 0x39b990u: goto label_39b990;
        case 0x39b994u: goto label_39b994;
        case 0x39b998u: goto label_39b998;
        case 0x39b99cu: goto label_39b99c;
        case 0x39b9a0u: goto label_39b9a0;
        case 0x39b9a4u: goto label_39b9a4;
        case 0x39b9a8u: goto label_39b9a8;
        case 0x39b9acu: goto label_39b9ac;
        case 0x39b9b0u: goto label_39b9b0;
        case 0x39b9b4u: goto label_39b9b4;
        case 0x39b9b8u: goto label_39b9b8;
        case 0x39b9bcu: goto label_39b9bc;
        case 0x39b9c0u: goto label_39b9c0;
        case 0x39b9c4u: goto label_39b9c4;
        case 0x39b9c8u: goto label_39b9c8;
        case 0x39b9ccu: goto label_39b9cc;
        case 0x39b9d0u: goto label_39b9d0;
        case 0x39b9d4u: goto label_39b9d4;
        case 0x39b9d8u: goto label_39b9d8;
        case 0x39b9dcu: goto label_39b9dc;
        case 0x39b9e0u: goto label_39b9e0;
        case 0x39b9e4u: goto label_39b9e4;
        case 0x39b9e8u: goto label_39b9e8;
        case 0x39b9ecu: goto label_39b9ec;
        case 0x39b9f0u: goto label_39b9f0;
        case 0x39b9f4u: goto label_39b9f4;
        case 0x39b9f8u: goto label_39b9f8;
        case 0x39b9fcu: goto label_39b9fc;
        case 0x39ba00u: goto label_39ba00;
        case 0x39ba04u: goto label_39ba04;
        case 0x39ba08u: goto label_39ba08;
        case 0x39ba0cu: goto label_39ba0c;
        case 0x39ba10u: goto label_39ba10;
        case 0x39ba14u: goto label_39ba14;
        case 0x39ba18u: goto label_39ba18;
        case 0x39ba1cu: goto label_39ba1c;
        case 0x39ba20u: goto label_39ba20;
        case 0x39ba24u: goto label_39ba24;
        case 0x39ba28u: goto label_39ba28;
        case 0x39ba2cu: goto label_39ba2c;
        default: break;
    }

    ctx->pc = 0x39b6b8u;

label_39b6b8:
    // 0x39b6b8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x39b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_39b6bc:
    // 0x39b6bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39b6c0:
    // 0x39b6c0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x39b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_39b6c4:
    // 0x39b6c4: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x39b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_39b6c8:
    // 0x39b6c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39b6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b6cc:
    // 0x39b6cc: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x39b6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_39b6d0:
    // 0x39b6d0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x39b6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_39b6d4:
    // 0x39b6d4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x39b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_39b6d8:
    // 0x39b6d8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x39b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_39b6dc:
    // 0x39b6dc: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x39b6dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_39b6e0:
    // 0x39b6e0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x39b6e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_39b6e4:
    // 0x39b6e4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x39b6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_39b6e8:
    // 0x39b6e8: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x39b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_39b6ec:
    // 0x39b6ec: 0xc0616ac  jal         func_185AB0
label_39b6f0:
    if (ctx->pc == 0x39B6F0u) {
        ctx->pc = 0x39B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6ECu;
        // 0x39b6f0: 0x964500c6  lhu         $a1, 0xC6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B6F4u;
        goto label_39b6f4;
    }
    ctx->pc = 0x39B6ECu;
    SET_GPR_U32(ctx, 31, 0x39B6F4u);
    ctx->pc = 0x39B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B6ECu;
    // 0x39b6f0: 0x964500c6  lhu         $a1, 0xC6($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x39B6ECu, 0x39B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6F4u;
label_39b6f4:
    // 0x39b6f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39b6f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b6f8:
    // 0x39b6f8: 0x126000c3  beqz        $s3, . + 4 + (0xC3 << 2)
label_39b6fc:
    if (ctx->pc == 0x39B6FCu) {
        ctx->pc = 0x39B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6F8u;
        // 0x39b6fc: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B700u;
        goto label_39b700;
    }
    ctx->pc = 0x39B6F8u;
    {
        const bool branch_taken_0x39b6f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6F8u;
        // 0x39b6fc: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b6f8) {
            ctx->pc = 0x39BA08u;
            goto label_39ba08;
        }
    }
    ctx->pc = 0x39B700u;
label_39b700:
    // 0x39b700: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x39b700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_39b704:
    // 0x39b704: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_39b708:
    if (ctx->pc == 0x39B708u) {
        ctx->pc = 0x39B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B704u;
        // 0x39b708: 0x7bb10150  lq          $s1, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B70Cu;
        goto label_39b70c;
    }
    ctx->pc = 0x39B704u;
    {
        const bool branch_taken_0x39b704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B704u;
        // 0x39b708: 0x7bb10150  lq          $s1, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b704) {
            ctx->pc = 0x39BA0Cu;
            goto label_39ba0c;
        }
    }
    ctx->pc = 0x39B70Cu;
label_39b70c:
    // 0x39b70c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x39b70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_39b710:
    // 0x39b710: 0xc060b58  jal         func_182D60
label_39b714:
    if (ctx->pc == 0x39B714u) {
        ctx->pc = 0x39B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B710u;
        // 0x39b714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B718u;
        goto label_39b718;
    }
    ctx->pc = 0x39B710u;
    SET_GPR_U32(ctx, 31, 0x39B718u);
    ctx->pc = 0x39B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B710u;
    // 0x39b714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x39B710u, 0x39B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B718u;
label_39b718:
    // 0x39b718: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x39b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_39b71c:
    // 0x39b71c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39b71cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b720:
    // 0x39b720: 0xc06078e  jal         func_181E38
label_39b724:
    if (ctx->pc == 0x39B724u) {
        ctx->pc = 0x39B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B720u;
        // 0x39b724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B728u;
        goto label_39b728;
    }
    ctx->pc = 0x39B720u;
    SET_GPR_U32(ctx, 31, 0x39B728u);
    ctx->pc = 0x39B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B720u;
    // 0x39b724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x39B720u, 0x39B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B728u;
label_39b728:
    // 0x39b728: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x39b728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39b72c:
    // 0x39b72c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x39b72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_39b730:
    // 0x39b730: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x39b730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_39b734:
    // 0x39b734: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x39b734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_39b738:
    // 0x39b738: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x39b738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b73c:
    // 0x39b73c: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x39b73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b740:
    // 0x39b740: 0xb3a50073  sdl         $a1, 0x73($sp)
    ctx->pc = 0x39b740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b744:
    // 0x39b744: 0xb7a5006c  sdr         $a1, 0x6C($sp)
    ctx->pc = 0x39b744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b748:
    // 0x39b748: 0x27b10104  addiu       $s1, $sp, 0x104
    ctx->pc = 0x39b748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_39b74c:
    // 0x39b74c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x39b74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_39b750:
    // 0x39b750: 0xc0e85a2  jal         func_3A1688
label_39b754:
    if (ctx->pc == 0x39B754u) {
        ctx->pc = 0x39B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B750u;
        // 0x39b754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B758u;
        goto label_39b758;
    }
    ctx->pc = 0x39B750u;
    SET_GPR_U32(ctx, 31, 0x39B758u);
    ctx->pc = 0x39B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B750u;
    // 0x39b754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x39B750u, 0x39B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B758u;
label_39b758:
    // 0x39b758: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x39b758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_39b75c:
    // 0x39b75c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x39b75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b760:
    // 0x39b760: 0xc64d0064  lwc1        $f13, 0x64($s2)
    ctx->pc = 0x39b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39b764:
    // 0x39b764: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x39b764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_39b768:
    // 0x39b768: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x39b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_39b76c:
    // 0x39b76c: 0xc0ce090  jal         func_338240
label_39b770:
    if (ctx->pc == 0x39B770u) {
        ctx->pc = 0x39B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B76Cu;
        // 0x39b770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B774u;
        goto label_39b774;
    }
    ctx->pc = 0x39B76Cu;
    SET_GPR_U32(ctx, 31, 0x39B774u);
    ctx->pc = 0x39B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B76Cu;
    // 0x39b770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x39B76Cu, 0x39B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B774u;
label_39b774:
    // 0x39b774: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x39b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b778:
    // 0x39b778: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x39b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39b77c:
    // 0x39b77c: 0xc64000c0  lwc1        $f0, 0xC0($s2)
    ctx->pc = 0x39b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b780:
    // 0x39b780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39b780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b784:
    // 0x39b784: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x39b784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b788:
    // 0x39b788: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x39b788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b78c:
    // 0x39b78c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x39b78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_39b790:
    // 0x39b790: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x39b790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_39b794:
    // 0x39b794: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x39b794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_39b798:
    // 0x39b798: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39b79c:
    // 0x39b79c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x39b79cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39b7a0:
    // 0x39b7a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x39b7a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_39b7a4:
    // 0x39b7a4: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x39b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_39b7a8:
    // 0x39b7a8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x39b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_39b7ac:
    // 0x39b7ac: 0x60f809  jalr        $v1
label_39b7b0:
    if (ctx->pc == 0x39B7B0u) {
        ctx->pc = 0x39B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7ACu;
        // 0x39b7b0: 0x46010d00  add.s       $f20, $f1, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7B4u;
        goto label_39b7b4;
    }
    ctx->pc = 0x39B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39B7B4u);
        ctx->pc = 0x39B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7ACu;
        // 0x39b7b0: 0x46010d00  add.s       $f20, $f1, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B7ACu, 0x39B7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B7B4u;
label_39b7b4:
    // 0x39b7b4: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x39b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_39b7b8:
    // 0x39b7b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39b7bc:
    // 0x39b7bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x39b7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39b7c0:
    // 0x39b7c0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_39b7c4:
    if (ctx->pc == 0x39B7C4u) {
        ctx->pc = 0x39B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7C0u;
        // 0x39b7c4: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7C8u;
        goto label_39b7c8;
    }
    ctx->pc = 0x39B7C0u;
    {
        const bool branch_taken_0x39b7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7C0u;
        // 0x39b7c4: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b7c0) {
            ctx->pc = 0x39B830u;
            goto label_39b830;
        }
    }
    ctx->pc = 0x39B7C8u;
label_39b7c8:
    // 0x39b7c8: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x39b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b7cc:
    // 0x39b7cc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x39b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b7d0:
    // 0x39b7d0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x39b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b7d4:
    // 0x39b7d4: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x39b7d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_39b7d8:
    // 0x39b7d8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x39b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b7dc:
    // 0x39b7dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x39b7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_39b7e0:
    // 0x39b7e0: 0xc64500c8  lwc1        $f5, 0xC8($s2)
    ctx->pc = 0x39b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39b7e4:
    // 0x39b7e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x39b7e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_39b7e8:
    // 0x39b7e8: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x39b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
label_39b7ec:
    // 0x39b7ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x39b7ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_39b7f0:
    // 0x39b7f0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x39b7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_39b7f4:
    // 0x39b7f4: 0x4604a542  mul.s       $f21, $f20, $f4
    ctx->pc = 0x39b7f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_39b7f8:
    // 0x39b7f8: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x39b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b7fc:
    // 0x39b7fc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x39b7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_39b800:
    // 0x39b800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39b800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39b804:
    // 0x39b804: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x39b804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_39b808:
    // 0x39b808: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x39b808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_39b80c:
    // 0x39b80c: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x39b80cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_39b810:
    // 0x39b810: 0x4605ad42  mul.s       $f21, $f21, $f5
    ctx->pc = 0x39b810u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
label_39b814:
    // 0x39b814: 0x46060d02  mul.s       $f20, $f1, $f6
    ctx->pc = 0x39b814u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_39b818:
    // 0x39b818: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39b818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_39b81c:
    // 0x39b81c: 0x4615b581  sub.s       $f22, $f22, $f21
    ctx->pc = 0x39b81cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_39b820:
    // 0x39b820: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x39b820u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_39b824:
    // 0x39b824: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x39b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_39b828:
    // 0x39b828: 0x1000000d  b           . + 4 + (0xD << 2)
label_39b82c:
    if (ctx->pc == 0x39B82Cu) {
        ctx->pc = 0x39B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B828u;
        // 0x39b82c: 0x4604b582  mul.s       $f22, $f22, $f4 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B830u;
        goto label_39b830;
    }
    ctx->pc = 0x39B828u;
    {
        const bool branch_taken_0x39b828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B828u;
        // 0x39b82c: 0x4604b582  mul.s       $f22, $f22, $f4 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b828) {
            ctx->pc = 0x39B860u;
            goto label_39b860;
        }
    }
    ctx->pc = 0x39B830u;
label_39b830:
    // 0x39b830: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x39b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_39b834:
    // 0x39b834: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39b838:
    if (ctx->pc == 0x39B838u) {
        ctx->pc = 0x39B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B834u;
        // 0x39b838: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B83Cu;
        goto label_39b83c;
    }
    ctx->pc = 0x39B834u;
    {
        const bool branch_taken_0x39b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B834u;
        // 0x39b838: 0xc7a20068  lwc1        $f2, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b834) {
            ctx->pc = 0x39B860u;
            goto label_39b860;
        }
    }
    ctx->pc = 0x39B83Cu;
label_39b83c:
    // 0x39b83c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x39b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b840:
    // 0x39b840: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x39b840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b844:
    // 0x39b844: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x39b844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_39b848:
    // 0x39b848: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x39b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b84c:
    // 0x39b84c: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x39b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b850:
    // 0x39b850: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x39b850u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_39b854:
    // 0x39b854: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x39b854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_39b858:
    // 0x39b858: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x39b858u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_39b85c:
    // 0x39b85c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x39b85cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_39b860:
    // 0x39b860: 0xc060acc  jal         func_182B30
label_39b864:
    if (ctx->pc == 0x39B864u) {
        ctx->pc = 0x39B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B860u;
        // 0x39b864: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B868u;
        goto label_39b868;
    }
    ctx->pc = 0x39B860u;
    SET_GPR_U32(ctx, 31, 0x39B868u);
    ctx->pc = 0x39B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B860u;
    // 0x39b864: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B30u, 0x39B860u, 0x39B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B868u;
label_39b868:
    // 0x39b868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39b86c:
    // 0x39b86c: 0x54430039  bnel        $v0, $v1, . + 4 + (0x39 << 2)
label_39b870:
    if (ctx->pc == 0x39B870u) {
        ctx->pc = 0x39B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B86Cu;
        // 0x39b870: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B874u;
        goto label_39b874;
    }
    ctx->pc = 0x39B86Cu;
    {
        const bool branch_taken_0x39b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39b86c) {
            ctx->pc = 0x39B870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B86Cu;
            // 0x39b870: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B954u;
            goto label_39b954;
        }
    }
    ctx->pc = 0x39B874u;
label_39b874:
    // 0x39b874: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x39b874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39b878:
    // 0x39b878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39b878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b87c:
    // 0x39b87c: 0xc0cda02  jal         func_336808
label_39b880:
    if (ctx->pc == 0x39B880u) {
        ctx->pc = 0x39B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B87Cu;
        // 0x39b880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B884u;
        goto label_39b884;
    }
    ctx->pc = 0x39B87Cu;
    SET_GPR_U32(ctx, 31, 0x39B884u);
    ctx->pc = 0x39B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B87Cu;
    // 0x39b880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x39B87Cu, 0x39B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B884u;
label_39b884:
    // 0x39b884: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x39b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_39b888:
    // 0x39b888: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x39b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_39b88c:
    // 0x39b88c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_39b890:
    if (ctx->pc == 0x39B890u) {
        ctx->pc = 0x39B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B88Cu;
        // 0x39b890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B894u;
        goto label_39b894;
    }
    ctx->pc = 0x39B88Cu;
    {
        const bool branch_taken_0x39b88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B88Cu;
        // 0x39b890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b88c) {
            ctx->pc = 0x39B8C0u;
            goto label_39b8c0;
        }
    }
    ctx->pc = 0x39B894u;
label_39b894:
    // 0x39b894: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39b894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39b898:
    // 0x39b898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39b898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39b89c:
    // 0x39b89c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x39b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b8a0:
    // 0x39b8a0: 0x4601a0c2  mul.s       $f3, $f20, $f1
    ctx->pc = 0x39b8a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_39b8a4:
    // 0x39b8a4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x39b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b8a8:
    // 0x39b8a8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x39b8a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_39b8ac:
    // 0x39b8ac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39b8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_39b8b0:
    // 0x39b8b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x39b8b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_39b8b4:
    // 0x39b8b4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x39b8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_39b8b8:
    // 0x39b8b8: 0x1000000f  b           . + 4 + (0xF << 2)
label_39b8bc:
    if (ctx->pc == 0x39B8BCu) {
        ctx->pc = 0x39B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8B8u;
        // 0x39b8bc: 0xe7a200d0  swc1        $f2, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8C0u;
        goto label_39b8c0;
    }
    ctx->pc = 0x39B8B8u;
    {
        const bool branch_taken_0x39b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8B8u;
        // 0x39b8bc: 0xe7a200d0  swc1        $f2, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b8b8) {
            ctx->pc = 0x39B8F8u;
            goto label_39b8f8;
        }
    }
    ctx->pc = 0x39B8C0u;
label_39b8c0:
    // 0x39b8c0: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x39b8c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b8c4:
    // 0x39b8c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39b8c8:
    // 0x39b8c8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x39b8c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39b8cc:
    // 0x39b8cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39b8ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39b8d0:
    // 0x39b8d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39b8d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39b8d4:
    // 0x39b8d4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x39b8d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b8d8:
    // 0x39b8d8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39b8d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b8dc:
    // 0x39b8dc: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x39b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_39b8e0:
    // 0x39b8e0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x39b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_39b8e4:
    // 0x39b8e4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x39b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_39b8e8:
    // 0x39b8e8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x39b8e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_39b8ec:
    // 0x39b8ec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x39b8ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_39b8f0:
    // 0x39b8f0: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x39b8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39b8f4:
    // 0x39b8f4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x39b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_39b8f8:
    // 0x39b8f8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x39b8f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39b8fc:
    // 0x39b8fc: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x39b8fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_39b900:
    // 0x39b900: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39b900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39b904:
    // 0x39b904: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x39b904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39b908:
    // 0x39b908: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x39b908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b90c:
    // 0x39b90c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39b90cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b910:
    // 0x39b910: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x39b910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39b914:
    // 0x39b914: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x39b914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_39b918:
    // 0x39b918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39b91c:
    // 0x39b91c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39b91cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39b920:
    // 0x39b920: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x39b920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_39b924:
    // 0x39b924: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x39b924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b928:
    // 0x39b928: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x39b928u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b92c:
    // 0x39b92c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x39b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_39b930:
    // 0x39b930: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x39b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_39b934:
    // 0x39b934: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x39b934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_39b938:
    // 0x39b938: 0xc0cda36  jal         func_3368D8
label_39b93c:
    if (ctx->pc == 0x39B93Cu) {
        ctx->pc = 0x39B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B938u;
        // 0x39b93c: 0x7fa300e0  sq          $v1, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B940u;
        goto label_39b940;
    }
    ctx->pc = 0x39B938u;
    SET_GPR_U32(ctx, 31, 0x39B940u);
    ctx->pc = 0x39B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B938u;
    // 0x39b93c: 0x7fa300e0  sq          $v1, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x39B938u, 0x39B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B940u;
label_39b940:
    // 0x39b940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b944:
    // 0x39b944: 0xc060c70  jal         func_1831C0
label_39b948:
    if (ctx->pc == 0x39B948u) {
        ctx->pc = 0x39B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B944u;
        // 0x39b948: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B94Cu;
        goto label_39b94c;
    }
    ctx->pc = 0x39B944u;
    SET_GPR_U32(ctx, 31, 0x39B94Cu);
    ctx->pc = 0x39B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B944u;
    // 0x39b948: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1831C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1831C0u, 0x39B944u, 0x39B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B94Cu;
label_39b94c:
    // 0x39b94c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_39b950:
    if (ctx->pc == 0x39B950u) {
        ctx->pc = 0x39B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B94Cu;
        // 0x39b950: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B954u;
        goto label_39b954;
    }
    ctx->pc = 0x39B94Cu;
    {
        const bool branch_taken_0x39b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B94Cu;
        // 0x39b950: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b94c) {
            ctx->pc = 0x39BA08u;
            goto label_39ba08;
        }
    }
    ctx->pc = 0x39B954u;
label_39b954:
    // 0x39b954: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x39b954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_39b958:
    // 0x39b958: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_39b95c:
    if (ctx->pc == 0x39B95Cu) {
        ctx->pc = 0x39B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B958u;
        // 0x39b95c: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B960u;
        goto label_39b960;
    }
    ctx->pc = 0x39B958u;
    {
        const bool branch_taken_0x39b958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B958u;
        // 0x39b95c: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b958) {
            ctx->pc = 0x39B988u;
            goto label_39b988;
        }
    }
    ctx->pc = 0x39B960u;
label_39b960:
    // 0x39b960: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39b960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39b964:
    // 0x39b964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39b964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39b968:
    // 0x39b968: 0x0  nop
    ctx->pc = 0x39b968u;
    // NOP
label_39b96c:
    // 0x39b96c: 0x4601a0c2  mul.s       $f3, $f20, $f1
    ctx->pc = 0x39b96cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_39b970:
    // 0x39b970: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x39b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b974:
    // 0x39b974: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x39b974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_39b978:
    // 0x39b978: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39b978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_39b97c:
    // 0x39b97c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x39b97cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_39b980:
    // 0x39b980: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x39b980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_39b984:
    // 0x39b984: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x39b984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_39b988:
    // 0x39b988: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x39b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b98c:
    // 0x39b98c: 0x4600a907  neg.s       $f4, $f21
    ctx->pc = 0x39b98cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[21]);
label_39b990:
    // 0x39b990: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x39b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b994:
    // 0x39b994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b998:
    // 0x39b998: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x39b998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_39b99c:
    // 0x39b99c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x39b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b9a0:
    // 0x39b9a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x39b9a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_39b9a4:
    // 0x39b9a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39b9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39b9a8:
    // 0x39b9a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x39b9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39b9ac:
    // 0x39b9ac: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x39b9acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_39b9b0:
    // 0x39b9b0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x39b9b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39b9b4:
    // 0x39b9b4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x39b9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_39b9b8:
    // 0x39b9b8: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x39b9b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_39b9bc:
    // 0x39b9bc: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x39b9bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_39b9c0:
    // 0x39b9c0: 0xc060acc  jal         func_182B30
label_39b9c4:
    if (ctx->pc == 0x39B9C4u) {
        ctx->pc = 0x39B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9C0u;
        // 0x39b9c4: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B9C8u;
        goto label_39b9c8;
    }
    ctx->pc = 0x39B9C0u;
    SET_GPR_U32(ctx, 31, 0x39B9C8u);
    ctx->pc = 0x39B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9C0u;
    // 0x39b9c4: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B30u, 0x39B9C0u, 0x39B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9C8u;
label_39b9c8:
    // 0x39b9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b9cc:
    // 0x39b9cc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_39b9d0:
    if (ctx->pc == 0x39B9D0u) {
        ctx->pc = 0x39B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9CCu;
        // 0x39b9d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B9D4u;
        goto label_39b9d4;
    }
    ctx->pc = 0x39B9CCu;
    {
        const bool branch_taken_0x39b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9CCu;
        // 0x39b9d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b9cc) {
            ctx->pc = 0x39B9FCu;
            goto label_39b9fc;
        }
    }
    ctx->pc = 0x39B9D4u;
label_39b9d4:
    // 0x39b9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39b9d8:
    // 0x39b9d8: 0xc0e85a2  jal         func_3A1688
label_39b9dc:
    if (ctx->pc == 0x39B9DCu) {
        ctx->pc = 0x39B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9D8u;
        // 0x39b9dc: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B9E0u;
        goto label_39b9e0;
    }
    ctx->pc = 0x39B9D8u;
    SET_GPR_U32(ctx, 31, 0x39B9E0u);
    ctx->pc = 0x39B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9D8u;
    // 0x39b9dc: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x39B9D8u, 0x39B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9E0u;
label_39b9e0:
    // 0x39b9e0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x39b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b9e4:
    // 0x39b9e4: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x39b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_39b9e8:
    // 0x39b9e8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x39b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b9ec:
    // 0x39b9ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39b9ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39b9f0:
    // 0x39b9f0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x39b9f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_39b9f4:
    // 0x39b9f4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x39b9f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_39b9f8:
    // 0x39b9f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b9fc:
    // 0x39b9fc: 0xc060c70  jal         func_1831C0
label_39ba00:
    if (ctx->pc == 0x39BA00u) {
        ctx->pc = 0x39BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9FCu;
        // 0x39ba00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA04u;
        goto label_39ba04;
    }
    ctx->pc = 0x39B9FCu;
    SET_GPR_U32(ctx, 31, 0x39BA04u);
    ctx->pc = 0x39BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9FCu;
    // 0x39ba00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1831C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1831C0u, 0x39B9FCu, 0x39BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA04u;
label_39ba04:
    // 0x39ba04: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x39ba04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_39ba08:
    // 0x39ba08: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x39ba08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_39ba0c:
    // 0x39ba0c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x39ba0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_39ba10:
    // 0x39ba10: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x39ba10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_39ba14:
    // 0x39ba14: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x39ba14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_39ba18:
    // 0x39ba18: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x39ba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_39ba1c:
    // 0x39ba1c: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x39ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_39ba20:
    // 0x39ba20: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x39ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39ba24:
    // 0x39ba24: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x39ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39ba28:
    // 0x39ba28: 0x3e00008  jr          $ra
label_39ba2c:
    if (ctx->pc == 0x39BA2Cu) {
        ctx->pc = 0x39BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA28u;
        // 0x39ba2c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA30u;
        goto label_fallthrough_0x39ba28;
    }
    ctx->pc = 0x39BA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA28u;
        // 0x39ba2c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39ba28:
    ctx->pc = 0x39BA30u;
}

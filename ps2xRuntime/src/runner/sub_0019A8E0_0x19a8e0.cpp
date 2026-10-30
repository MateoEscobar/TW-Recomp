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

// Function: sub_0019A8E0
// Address: 0x19a8e0 - 0x19ac48
void sub_0019A8E0_0x19a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A8E0_0x19a8e0");
#endif

    switch (ctx->pc) {
        case 0x19a8e0u: goto label_19a8e0;
        case 0x19a8e4u: goto label_19a8e4;
        case 0x19a8e8u: goto label_19a8e8;
        case 0x19a8ecu: goto label_19a8ec;
        case 0x19a8f0u: goto label_19a8f0;
        case 0x19a8f4u: goto label_19a8f4;
        case 0x19a8f8u: goto label_19a8f8;
        case 0x19a8fcu: goto label_19a8fc;
        case 0x19a900u: goto label_19a900;
        case 0x19a904u: goto label_19a904;
        case 0x19a908u: goto label_19a908;
        case 0x19a90cu: goto label_19a90c;
        case 0x19a910u: goto label_19a910;
        case 0x19a914u: goto label_19a914;
        case 0x19a918u: goto label_19a918;
        case 0x19a91cu: goto label_19a91c;
        case 0x19a920u: goto label_19a920;
        case 0x19a924u: goto label_19a924;
        case 0x19a928u: goto label_19a928;
        case 0x19a92cu: goto label_19a92c;
        case 0x19a930u: goto label_19a930;
        case 0x19a934u: goto label_19a934;
        case 0x19a938u: goto label_19a938;
        case 0x19a93cu: goto label_19a93c;
        case 0x19a940u: goto label_19a940;
        case 0x19a944u: goto label_19a944;
        case 0x19a948u: goto label_19a948;
        case 0x19a94cu: goto label_19a94c;
        case 0x19a950u: goto label_19a950;
        case 0x19a954u: goto label_19a954;
        case 0x19a958u: goto label_19a958;
        case 0x19a95cu: goto label_19a95c;
        case 0x19a960u: goto label_19a960;
        case 0x19a964u: goto label_19a964;
        case 0x19a968u: goto label_19a968;
        case 0x19a96cu: goto label_19a96c;
        case 0x19a970u: goto label_19a970;
        case 0x19a974u: goto label_19a974;
        case 0x19a978u: goto label_19a978;
        case 0x19a97cu: goto label_19a97c;
        case 0x19a980u: goto label_19a980;
        case 0x19a984u: goto label_19a984;
        case 0x19a988u: goto label_19a988;
        case 0x19a98cu: goto label_19a98c;
        case 0x19a990u: goto label_19a990;
        case 0x19a994u: goto label_19a994;
        case 0x19a998u: goto label_19a998;
        case 0x19a99cu: goto label_19a99c;
        case 0x19a9a0u: goto label_19a9a0;
        case 0x19a9a4u: goto label_19a9a4;
        case 0x19a9a8u: goto label_19a9a8;
        case 0x19a9acu: goto label_19a9ac;
        case 0x19a9b0u: goto label_19a9b0;
        case 0x19a9b4u: goto label_19a9b4;
        case 0x19a9b8u: goto label_19a9b8;
        case 0x19a9bcu: goto label_19a9bc;
        case 0x19a9c0u: goto label_19a9c0;
        case 0x19a9c4u: goto label_19a9c4;
        case 0x19a9c8u: goto label_19a9c8;
        case 0x19a9ccu: goto label_19a9cc;
        case 0x19a9d0u: goto label_19a9d0;
        case 0x19a9d4u: goto label_19a9d4;
        case 0x19a9d8u: goto label_19a9d8;
        case 0x19a9dcu: goto label_19a9dc;
        case 0x19a9e0u: goto label_19a9e0;
        case 0x19a9e4u: goto label_19a9e4;
        case 0x19a9e8u: goto label_19a9e8;
        case 0x19a9ecu: goto label_19a9ec;
        case 0x19a9f0u: goto label_19a9f0;
        case 0x19a9f4u: goto label_19a9f4;
        case 0x19a9f8u: goto label_19a9f8;
        case 0x19a9fcu: goto label_19a9fc;
        case 0x19aa00u: goto label_19aa00;
        case 0x19aa04u: goto label_19aa04;
        case 0x19aa08u: goto label_19aa08;
        case 0x19aa0cu: goto label_19aa0c;
        case 0x19aa10u: goto label_19aa10;
        case 0x19aa14u: goto label_19aa14;
        case 0x19aa18u: goto label_19aa18;
        case 0x19aa1cu: goto label_19aa1c;
        case 0x19aa20u: goto label_19aa20;
        case 0x19aa24u: goto label_19aa24;
        case 0x19aa28u: goto label_19aa28;
        case 0x19aa2cu: goto label_19aa2c;
        case 0x19aa30u: goto label_19aa30;
        case 0x19aa34u: goto label_19aa34;
        case 0x19aa38u: goto label_19aa38;
        case 0x19aa3cu: goto label_19aa3c;
        case 0x19aa40u: goto label_19aa40;
        case 0x19aa44u: goto label_19aa44;
        case 0x19aa48u: goto label_19aa48;
        case 0x19aa4cu: goto label_19aa4c;
        case 0x19aa50u: goto label_19aa50;
        case 0x19aa54u: goto label_19aa54;
        case 0x19aa58u: goto label_19aa58;
        case 0x19aa5cu: goto label_19aa5c;
        case 0x19aa60u: goto label_19aa60;
        case 0x19aa64u: goto label_19aa64;
        case 0x19aa68u: goto label_19aa68;
        case 0x19aa6cu: goto label_19aa6c;
        case 0x19aa70u: goto label_19aa70;
        case 0x19aa74u: goto label_19aa74;
        case 0x19aa78u: goto label_19aa78;
        case 0x19aa7cu: goto label_19aa7c;
        case 0x19aa80u: goto label_19aa80;
        case 0x19aa84u: goto label_19aa84;
        case 0x19aa88u: goto label_19aa88;
        case 0x19aa8cu: goto label_19aa8c;
        case 0x19aa90u: goto label_19aa90;
        case 0x19aa94u: goto label_19aa94;
        case 0x19aa98u: goto label_19aa98;
        case 0x19aa9cu: goto label_19aa9c;
        case 0x19aaa0u: goto label_19aaa0;
        case 0x19aaa4u: goto label_19aaa4;
        case 0x19aaa8u: goto label_19aaa8;
        case 0x19aaacu: goto label_19aaac;
        case 0x19aab0u: goto label_19aab0;
        case 0x19aab4u: goto label_19aab4;
        case 0x19aab8u: goto label_19aab8;
        case 0x19aabcu: goto label_19aabc;
        case 0x19aac0u: goto label_19aac0;
        case 0x19aac4u: goto label_19aac4;
        case 0x19aac8u: goto label_19aac8;
        case 0x19aaccu: goto label_19aacc;
        case 0x19aad0u: goto label_19aad0;
        case 0x19aad4u: goto label_19aad4;
        case 0x19aad8u: goto label_19aad8;
        case 0x19aadcu: goto label_19aadc;
        case 0x19aae0u: goto label_19aae0;
        case 0x19aae4u: goto label_19aae4;
        case 0x19aae8u: goto label_19aae8;
        case 0x19aaecu: goto label_19aaec;
        case 0x19aaf0u: goto label_19aaf0;
        case 0x19aaf4u: goto label_19aaf4;
        case 0x19aaf8u: goto label_19aaf8;
        case 0x19aafcu: goto label_19aafc;
        case 0x19ab00u: goto label_19ab00;
        case 0x19ab04u: goto label_19ab04;
        case 0x19ab08u: goto label_19ab08;
        case 0x19ab0cu: goto label_19ab0c;
        case 0x19ab10u: goto label_19ab10;
        case 0x19ab14u: goto label_19ab14;
        case 0x19ab18u: goto label_19ab18;
        case 0x19ab1cu: goto label_19ab1c;
        case 0x19ab20u: goto label_19ab20;
        case 0x19ab24u: goto label_19ab24;
        case 0x19ab28u: goto label_19ab28;
        case 0x19ab2cu: goto label_19ab2c;
        case 0x19ab30u: goto label_19ab30;
        case 0x19ab34u: goto label_19ab34;
        case 0x19ab38u: goto label_19ab38;
        case 0x19ab3cu: goto label_19ab3c;
        case 0x19ab40u: goto label_19ab40;
        case 0x19ab44u: goto label_19ab44;
        case 0x19ab48u: goto label_19ab48;
        case 0x19ab4cu: goto label_19ab4c;
        case 0x19ab50u: goto label_19ab50;
        case 0x19ab54u: goto label_19ab54;
        case 0x19ab58u: goto label_19ab58;
        case 0x19ab5cu: goto label_19ab5c;
        case 0x19ab60u: goto label_19ab60;
        case 0x19ab64u: goto label_19ab64;
        case 0x19ab68u: goto label_19ab68;
        case 0x19ab6cu: goto label_19ab6c;
        case 0x19ab70u: goto label_19ab70;
        case 0x19ab74u: goto label_19ab74;
        case 0x19ab78u: goto label_19ab78;
        case 0x19ab7cu: goto label_19ab7c;
        case 0x19ab80u: goto label_19ab80;
        case 0x19ab84u: goto label_19ab84;
        case 0x19ab88u: goto label_19ab88;
        case 0x19ab8cu: goto label_19ab8c;
        case 0x19ab90u: goto label_19ab90;
        case 0x19ab94u: goto label_19ab94;
        case 0x19ab98u: goto label_19ab98;
        case 0x19ab9cu: goto label_19ab9c;
        case 0x19aba0u: goto label_19aba0;
        case 0x19aba4u: goto label_19aba4;
        case 0x19aba8u: goto label_19aba8;
        case 0x19abacu: goto label_19abac;
        case 0x19abb0u: goto label_19abb0;
        case 0x19abb4u: goto label_19abb4;
        case 0x19abb8u: goto label_19abb8;
        case 0x19abbcu: goto label_19abbc;
        case 0x19abc0u: goto label_19abc0;
        case 0x19abc4u: goto label_19abc4;
        case 0x19abc8u: goto label_19abc8;
        case 0x19abccu: goto label_19abcc;
        case 0x19abd0u: goto label_19abd0;
        case 0x19abd4u: goto label_19abd4;
        case 0x19abd8u: goto label_19abd8;
        case 0x19abdcu: goto label_19abdc;
        case 0x19abe0u: goto label_19abe0;
        case 0x19abe4u: goto label_19abe4;
        case 0x19abe8u: goto label_19abe8;
        case 0x19abecu: goto label_19abec;
        case 0x19abf0u: goto label_19abf0;
        case 0x19abf4u: goto label_19abf4;
        case 0x19abf8u: goto label_19abf8;
        case 0x19abfcu: goto label_19abfc;
        case 0x19ac00u: goto label_19ac00;
        case 0x19ac04u: goto label_19ac04;
        case 0x19ac08u: goto label_19ac08;
        case 0x19ac0cu: goto label_19ac0c;
        case 0x19ac10u: goto label_19ac10;
        case 0x19ac14u: goto label_19ac14;
        case 0x19ac18u: goto label_19ac18;
        case 0x19ac1cu: goto label_19ac1c;
        case 0x19ac20u: goto label_19ac20;
        case 0x19ac24u: goto label_19ac24;
        case 0x19ac28u: goto label_19ac28;
        case 0x19ac2cu: goto label_19ac2c;
        case 0x19ac30u: goto label_19ac30;
        case 0x19ac34u: goto label_19ac34;
        case 0x19ac38u: goto label_19ac38;
        case 0x19ac3cu: goto label_19ac3c;
        case 0x19ac40u: goto label_19ac40;
        case 0x19ac44u: goto label_19ac44;
        default: break;
    }

    ctx->pc = 0x19a8e0u;

label_19a8e0:
    // 0x19a8e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_19a8e4:
    // 0x19a8e4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x19a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_19a8e8:
    // 0x19a8e8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x19a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_19a8ec:
    // 0x19a8ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19a8ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a8f0:
    // 0x19a8f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x19a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_19a8f4:
    // 0x19a8f4: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x19a8f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19a8f8:
    // 0x19a8f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_19a8fc:
    // 0x19a8fc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x19a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_19a900:
    // 0x19a900: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19a900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19a904:
    // 0x19a904: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x19a904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19a908:
    // 0x19a908: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x19a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_19a90c:
    // 0x19a90c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x19a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_19a910:
    // 0x19a910: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x19a910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_19a914:
    // 0x19a914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19a918:
    // 0x19a918: 0xc066efe  jal         func_19BBF8
label_19a91c:
    if (ctx->pc == 0x19A91Cu) {
        ctx->pc = 0x19A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A918u;
        // 0x19a91c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A920u;
        goto label_19a920;
    }
    ctx->pc = 0x19A918u;
    SET_GPR_U32(ctx, 31, 0x19A920u);
    ctx->pc = 0x19A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A918u;
    // 0x19a91c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x19A918u, 0x19A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A920u;
label_19a920:
    // 0x19a920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19a920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a924:
    // 0x19a924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a928:
    // 0x19a928: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19a92c:
    // 0x19a92c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19a92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_19a930:
    // 0x19a930: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_19a934:
    // 0x19a934: 0x60f809  jalr        $v1
label_19a938:
    if (ctx->pc == 0x19A938u) {
        ctx->pc = 0x19A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A934u;
        // 0x19a938: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A93Cu;
        goto label_19a93c;
    }
    ctx->pc = 0x19A934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A93Cu);
        ctx->pc = 0x19A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A934u;
        // 0x19a938: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A934u, 0x19A93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A93Cu;
label_19a93c:
    // 0x19a93c: 0x16a00073  bnez        $s5, . + 4 + (0x73 << 2)
label_19a940:
    if (ctx->pc == 0x19A940u) {
        ctx->pc = 0x19A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A93Cu;
        // 0x19a940: 0x32e50001  andi        $a1, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A944u;
        goto label_19a944;
    }
    ctx->pc = 0x19A93Cu;
    {
        const bool branch_taken_0x19a93c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A93Cu;
        // 0x19a940: 0x32e50001  andi        $a1, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a93c) {
            ctx->pc = 0x19AB0Cu;
            goto label_19ab0c;
        }
    }
    ctx->pc = 0x19A944u;
label_19a944:
    // 0x19a944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19a948:
    // 0x19a948: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x19a948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_19a94c:
    // 0x19a94c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a950:
    // 0x19a950: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x19a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_19a954:
    // 0x19a954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19a958:
    if (ctx->pc == 0x19A958u) {
        ctx->pc = 0x19A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A954u;
        // 0x19a958: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A95Cu;
        goto label_19a95c;
    }
    ctx->pc = 0x19A954u;
    {
        const bool branch_taken_0x19a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A954u;
        // 0x19a958: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a954) {
            ctx->pc = 0x19A968u;
            goto label_19a968;
        }
    }
    ctx->pc = 0x19A95Cu;
label_19a95c:
    // 0x19a95c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x19a95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_19a960:
    // 0x19a960: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19a964:
    if (ctx->pc == 0x19A964u) {
        ctx->pc = 0x19A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A960u;
        // 0x19a964: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A968u;
        goto label_19a968;
    }
    ctx->pc = 0x19A960u;
    {
        const bool branch_taken_0x19a960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A960u;
        // 0x19a964: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a960) {
            ctx->pc = 0x19A998u;
            goto label_19a998;
        }
    }
    ctx->pc = 0x19A968u;
label_19a968:
    // 0x19a968: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x19a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_19a96c:
    // 0x19a96c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19a96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19a970:
    // 0x19a970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a974:
    // 0x19a974: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19a978:
    // 0x19a978: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_19a97c:
    // 0x19a97c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a980:
    // 0x19a980: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19a980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19a984:
    // 0x19a984: 0xe440ceec  swc1        $f0, -0x3114($v0)
    ctx->pc = 0x19a984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954732), bits); }
label_19a988:
    // 0x19a988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a98c:
    // 0x19a98c: 0xe461cef0  swc1        $f1, -0x3110($v1)
    ctx->pc = 0x19a98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954736), bits); }
label_19a990:
    // 0x19a990: 0x1000000b  b           . + 4 + (0xB << 2)
label_19a994:
    if (ctx->pc == 0x19A994u) {
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A998u;
        goto label_19a998;
    }
    ctx->pc = 0x19A990u;
    {
        const bool branch_taken_0x19a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a990) {
            ctx->pc = 0x19A9C0u;
            goto label_19a9c0;
        }
    }
    ctx->pc = 0x19A998u;
label_19a998:
    // 0x19a998: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_19a99c:
    // 0x19a99c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19a99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19a9a0:
    // 0x19a9a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a9a4:
    // 0x19a9a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19a9a8:
    if (ctx->pc == 0x19A9A8u) {
        ctx->pc = 0x19A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9A4u;
        // 0x19a9a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9ACu;
        goto label_19a9ac;
    }
    ctx->pc = 0x19A9A4u;
    {
        const bool branch_taken_0x19a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9A4u;
        // 0x19a9a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9a4) {
            ctx->pc = 0x19A9B4u;
            goto label_19a9b4;
        }
    }
    ctx->pc = 0x19A9ACu;
label_19a9ac:
    // 0x19a9ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_19a9b0:
    // 0x19a9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a9b4:
    // 0x19a9b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a9b8:
    // 0x19a9b8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_19a9bc:
    // 0x19a9bc: 0xe440ceec  swc1        $f0, -0x3114($v0)
    ctx->pc = 0x19a9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954732), bits); }
label_19a9c0:
    // 0x19a9c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19a9c4:
    // 0x19a9c4: 0xc107444  jal         func_41D110
label_19a9c8:
    if (ctx->pc == 0x19A9C8u) {
        ctx->pc = 0x19A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9C4u;
        // 0x19a9c8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9CCu;
        goto label_19a9cc;
    }
    ctx->pc = 0x19A9C4u;
    SET_GPR_U32(ctx, 31, 0x19A9CCu);
    ctx->pc = 0x19A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9C4u;
    // 0x19a9c8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x19A9C4u, 0x19A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9CCu;
label_19a9cc:
    // 0x19a9cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19a9d0:
    if (ctx->pc == 0x19A9D0u) {
        ctx->pc = 0x19A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9CCu;
        // 0x19a9d0: 0xc600ceec  lwc1        $f0, -0x3114($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9D4u;
        goto label_19a9d4;
    }
    ctx->pc = 0x19A9CCu;
    {
        const bool branch_taken_0x19a9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9CCu;
        // 0x19a9d0: 0xc600ceec  lwc1        $f0, -0x3114($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9cc) {
            ctx->pc = 0x19A9ECu;
            goto label_19a9ec;
        }
    }
    ctx->pc = 0x19A9D4u;
label_19a9d4:
    // 0x19a9d4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_19a9d8:
    // 0x19a9d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19a9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_19a9dc:
    // 0x19a9dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a9e0:
    // 0x19a9e0: 0x0  nop
    ctx->pc = 0x19a9e0u;
    // NOP
label_19a9e4:
    // 0x19a9e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19a9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19a9e8:
    // 0x19a9e8: 0xe600ceec  swc1        $f0, -0x3114($s0)
    ctx->pc = 0x19a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954732), bits); }
label_19a9ec:
    // 0x19a9ec: 0xc62dcef0  lwc1        $f13, -0x3110($s1)
    ctx->pc = 0x19a9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294954736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19a9f0:
    // 0x19a9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a9f4:
    // 0x19a9f4: 0xc60cceec  lwc1        $f12, -0x3114($s0)
    ctx->pc = 0x19a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19a9f8:
    // 0x19a9f8: 0xc068848  jal         func_1A2120
label_19a9fc:
    if (ctx->pc == 0x19A9FCu) {
        ctx->pc = 0x19A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9F8u;
        // 0x19a9fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA00u;
        goto label_19aa00;
    }
    ctx->pc = 0x19A9F8u;
    SET_GPR_U32(ctx, 31, 0x19AA00u);
    ctx->pc = 0x19A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9F8u;
    // 0x19a9fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19A9F8u, 0x19AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA00u;
label_19aa00:
    // 0x19aa00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x19aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19aa04:
    // 0x19aa04: 0xc6c000d4  lwc1        $f0, 0xD4($s6)
    ctx->pc = 0x19aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19aa08:
    // 0x19aa08: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x19aa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_19aa0c:
    // 0x19aa0c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x19aa0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_19aa10:
    // 0x19aa10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19aa10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19aa14:
    // 0x19aa14: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x19aa14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_19aa18:
    // 0x19aa18: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x19aa18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_19aa1c:
    // 0x19aa1c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x19aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_19aa20:
    // 0x19aa20: 0x40f809  jalr        $v0
label_19aa24:
    if (ctx->pc == 0x19AA24u) {
        ctx->pc = 0x19AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA20u;
        // 0x19aa24: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA28u;
        goto label_19aa28;
    }
    ctx->pc = 0x19AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AA28u);
        ctx->pc = 0x19AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA20u;
        // 0x19aa24: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA20u, 0x19AA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AA28u;
label_19aa28:
    // 0x19aa28: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x19aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19aa2c:
    // 0x19aa2c: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_19aa30:
    // 0x19aa30: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x19aa30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_19aa34:
    // 0x19aa34: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x19aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_19aa38:
    // 0x19aa38: 0x40f809  jalr        $v0
label_19aa3c:
    if (ctx->pc == 0x19AA3Cu) {
        ctx->pc = 0x19AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA38u;
        // 0x19aa3c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA40u;
        goto label_19aa40;
    }
    ctx->pc = 0x19AA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AA40u);
        ctx->pc = 0x19AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA38u;
        // 0x19aa3c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA38u, 0x19AA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AA40u;
label_19aa40:
    // 0x19aa40: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x19aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19aa44:
    // 0x19aa44: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x19aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19aa48:
    // 0x19aa48: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x19aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19aa4c:
    // 0x19aa4c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x19aa4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_19aa50:
    // 0x19aa50: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x19aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19aa54:
    // 0x19aa54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19aa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19aa58:
    // 0x19aa58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19aa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_19aa5c:
    // 0x19aa5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19aa5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19aa60:
    // 0x19aa60: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x19aa60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19aa64:
    // 0x19aa64: 0xe6630014  swc1        $f3, 0x14($s3)
    ctx->pc = 0x19aa64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_19aa68:
    // 0x19aa68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_19aa6c:
    if (ctx->pc == 0x19AA6Cu) {
        ctx->pc = 0x19AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA68u;
        // 0x19aa6c: 0xe6610018  swc1        $f1, 0x18($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA70u;
        goto label_19aa70;
    }
    ctx->pc = 0x19AA68u;
    {
        const bool branch_taken_0x19aa68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA68u;
        // 0x19aa6c: 0xe6610018  swc1        $f1, 0x18($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa68) {
            ctx->pc = 0x19AA78u;
            goto label_19aa78;
        }
    }
    ctx->pc = 0x19AA70u;
label_19aa70:
    // 0x19aa70: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x19aa70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_19aa74:
    // 0x19aa74: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x19aa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_19aa78:
    // 0x19aa78: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x19aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19aa7c:
    // 0x19aa7c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x19aa7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19aa80:
    // 0x19aa80: 0x0  nop
    ctx->pc = 0x19aa80u;
    // NOP
label_19aa84:
    // 0x19aa84: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_19aa88:
    if (ctx->pc == 0x19AA88u) {
        ctx->pc = 0x19AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA84u;
        // 0x19aa88: 0x92630008  lbu         $v1, 0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA8Cu;
        goto label_19aa8c;
    }
    ctx->pc = 0x19AA84u;
    {
        const bool branch_taken_0x19aa84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aa84) {
            ctx->pc = 0x19AA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AA84u;
            // 0x19aa88: 0x92630008  lbu         $v1, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AA98u;
            goto label_19aa98;
        }
    }
    ctx->pc = 0x19AA8Cu;
label_19aa8c:
    // 0x19aa8c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x19aa8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_19aa90:
    // 0x19aa90: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x19aa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_19aa94:
    // 0x19aa94: 0x92630008  lbu         $v1, 0x8($s3)
    ctx->pc = 0x19aa94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_19aa98:
    // 0x19aa98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19aa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19aa9c:
    // 0x19aa9c: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x19aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19aaa0:
    // 0x19aaa0: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x19aaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_19aaa4:
    // 0x19aaa4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19aaa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19aaa8:
    // 0x19aaa8: 0x0  nop
    ctx->pc = 0x19aaa8u;
    // NOP
label_19aaac:
    // 0x19aaac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19aaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19aab0:
    // 0x19aab0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x19aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19aab4:
    // 0x19aab4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x19aab4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_19aab8:
    // 0x19aab8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19aab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19aabc:
    // 0x19aabc: 0x0  nop
    ctx->pc = 0x19aabcu;
    // NOP
label_19aac0:
    // 0x19aac0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19aac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_19aac4:
    // 0x19aac4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19aac8:
    // 0x19aac8: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x19aac8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19aacc:
    // 0x19aacc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19aaccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19aad0:
    // 0x19aad0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x19aad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_19aad4:
    // 0x19aad4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x19aad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_19aad8:
    // 0x19aad8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_19aadc:
    // 0x19aadc: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x19aadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19aae0:
    // 0x19aae0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x19aae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19aae4:
    // 0x19aae4: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x19aae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19aae8:
    // 0x19aae8: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x19aae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19aaec:
    // 0x19aaec: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x19aaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19aaf0:
    // 0x19aaf0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x19aaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19aaf4:
    // 0x19aaf4: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x19aaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19aaf8:
    // 0x19aaf8: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x19aaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19aafc:
    // 0x19aafc: 0xc068864  jal         func_1A2190
label_19ab00:
    if (ctx->pc == 0x19AB00u) {
        ctx->pc = 0x19AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAFCu;
        // 0x19ab00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB04u;
        goto label_19ab04;
    }
    ctx->pc = 0x19AAFCu;
    SET_GPR_U32(ctx, 31, 0x19AB04u);
    ctx->pc = 0x19AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAFCu;
    // 0x19ab00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x19AAFCu, 0x19AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB04u;
label_19ab04:
    // 0x19ab04: 0x1000003b  b           . + 4 + (0x3B << 2)
label_19ab08:
    if (ctx->pc == 0x19AB08u) {
        ctx->pc = 0x19AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB04u;
        // 0x19ab08: 0x2ee20002  sltiu       $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB0Cu;
        goto label_19ab0c;
    }
    ctx->pc = 0x19AB04u;
    {
        const bool branch_taken_0x19ab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB04u;
        // 0x19ab08: 0x2ee20002  sltiu       $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab04) {
            ctx->pc = 0x19ABF4u;
            goto label_19abf4;
        }
    }
    ctx->pc = 0x19AB0Cu;
label_19ab0c:
    // 0x19ab0c: 0xc066efe  jal         func_19BBF8
label_19ab10:
    if (ctx->pc == 0x19AB10u) {
        ctx->pc = 0x19AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB0Cu;
        // 0x19ab10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB14u;
        goto label_19ab14;
    }
    ctx->pc = 0x19AB0Cu;
    SET_GPR_U32(ctx, 31, 0x19AB14u);
    ctx->pc = 0x19AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB0Cu;
    // 0x19ab10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x19AB0Cu, 0x19AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB14u;
label_19ab14:
    // 0x19ab14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19ab14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ab18:
    // 0x19ab18: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19ab1c:
    // 0x19ab1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ab20:
    // 0x19ab20: 0x86300020  lh          $s0, 0x20($s1)
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_19ab24:
    // 0x19ab24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x19ab24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_19ab28:
    // 0x19ab28: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x19ab28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_19ab2c:
    // 0x19ab2c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x19ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19ab30:
    // 0x19ab30: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_19ab34:
    // 0x19ab34: 0x40f809  jalr        $v0
label_19ab38:
    if (ctx->pc == 0x19AB38u) {
        ctx->pc = 0x19AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB34u;
        // 0x19ab38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB3Cu;
        goto label_19ab3c;
    }
    ctx->pc = 0x19AB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AB3Cu);
        ctx->pc = 0x19AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB34u;
        // 0x19ab38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AB34u, 0x19AB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AB3Cu;
label_19ab3c:
    // 0x19ab3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_19ab40:
    // 0x19ab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ab44:
    // 0x19ab44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19ab48:
    // 0x19ab48: 0x40f809  jalr        $v0
label_19ab4c:
    if (ctx->pc == 0x19AB4Cu) {
        ctx->pc = 0x19AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB48u;
        // 0x19ab4c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB50u;
        goto label_19ab50;
    }
    ctx->pc = 0x19AB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AB50u);
        ctx->pc = 0x19AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB48u;
        // 0x19ab4c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AB48u, 0x19AB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AB50u;
label_19ab50:
    // 0x19ab50: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x19ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ab54:
    // 0x19ab54: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_19ab58:
    // 0x19ab58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ab58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ab5c:
    // 0x19ab5c: 0x0  nop
    ctx->pc = 0x19ab5cu;
    // NOP
label_19ab60:
    // 0x19ab60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ab60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19ab64:
    // 0x19ab64: 0x0  nop
    ctx->pc = 0x19ab64u;
    // NOP
label_19ab68:
    // 0x19ab68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_19ab6c:
    if (ctx->pc == 0x19AB6Cu) {
        ctx->pc = 0x19AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB68u;
        // 0x19ab6c: 0x264500a4  addiu       $a1, $s2, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB70u;
        goto label_19ab70;
    }
    ctx->pc = 0x19AB68u;
    {
        const bool branch_taken_0x19ab68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB68u;
        // 0x19ab6c: 0x264500a4  addiu       $a1, $s2, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab68) {
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19AB70u;
label_19ab70:
    // 0x19ab70: 0xc068864  jal         func_1A2190
label_19ab74:
    if (ctx->pc == 0x19AB74u) {
        ctx->pc = 0x19AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB70u;
        // 0x19ab74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB78u;
        goto label_19ab78;
    }
    ctx->pc = 0x19AB70u;
    SET_GPR_U32(ctx, 31, 0x19AB78u);
    ctx->pc = 0x19AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB70u;
    // 0x19ab74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x19AB70u, 0x19AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB78u;
label_19ab78:
    // 0x19ab78: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19ab7c:
    if (ctx->pc == 0x19AB7Cu) {
        ctx->pc = 0x19AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB78u;
        // 0x19ab7c: 0x2ee20002  sltiu       $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB80u;
        goto label_19ab80;
    }
    ctx->pc = 0x19AB78u;
    {
        const bool branch_taken_0x19ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB78u;
        // 0x19ab7c: 0x2ee20002  sltiu       $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab78) {
            ctx->pc = 0x19ABF4u;
            goto label_19abf4;
        }
    }
    ctx->pc = 0x19AB80u;
label_19ab80:
    // 0x19ab80: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x19ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ab84:
    // 0x19ab84: 0x264300a4  addiu       $v1, $s2, 0xA4
    ctx->pc = 0x19ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
label_19ab88:
    // 0x19ab88: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x19ab88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_19ab8c:
    // 0x19ab8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ab90:
    // 0x19ab90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19ab94:
    // 0x19ab94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19ab98:
    // 0x19ab98: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x19ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19ab9c:
    // 0x19ab9c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19aba0:
    // 0x19aba0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19aba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19aba4:
    // 0x19aba4: 0x0  nop
    ctx->pc = 0x19aba4u;
    // NOP
label_19aba8:
    // 0x19aba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19aba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19abac:
    // 0x19abac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19abacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19abb0:
    // 0x19abb0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x19abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19abb4:
    // 0x19abb4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_19abb8:
    // 0x19abb8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x19abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19abbc:
    // 0x19abbc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x19abbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_19abc0:
    // 0x19abc0: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x19abc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_19abc4:
    // 0x19abc4: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x19abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_19abc8:
    // 0x19abc8: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x19abc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19abcc:
    // 0x19abcc: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x19abccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19abd0:
    // 0x19abd0: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x19abd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19abd4:
    // 0x19abd4: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x19abd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19abd8:
    // 0x19abd8: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x19abd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19abdc:
    // 0x19abdc: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x19abdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19abe0:
    // 0x19abe0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x19abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19abe4:
    // 0x19abe4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19abe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_19abe8:
    // 0x19abe8: 0xc068864  jal         func_1A2190
label_19abec:
    if (ctx->pc == 0x19ABECu) {
        ctx->pc = 0x19ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABE8u;
        // 0x19abec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABF0u;
        goto label_19abf0;
    }
    ctx->pc = 0x19ABE8u;
    SET_GPR_U32(ctx, 31, 0x19ABF0u);
    ctx->pc = 0x19ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABE8u;
    // 0x19abec: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x19ABE8u, 0x19ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABF0u;
label_19abf0:
    // 0x19abf0: 0x2ee20002  sltiu       $v0, $s7, 0x2
    ctx->pc = 0x19abf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19abf4:
    // 0x19abf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19abf8:
    if (ctx->pc == 0x19ABF8u) {
        ctx->pc = 0x19ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABF4u;
        // 0x19abf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABFCu;
        goto label_19abfc;
    }
    ctx->pc = 0x19ABF4u;
    {
        const bool branch_taken_0x19abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABF4u;
        // 0x19abf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abf4) {
            ctx->pc = 0x19AC1Cu;
            goto label_19ac1c;
        }
    }
    ctx->pc = 0x19ABFCu;
label_19abfc:
    // 0x19abfc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19ac00:
    // 0x19ac00: 0x8ec50090  lw          $a1, 0x90($s6)
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_19ac04:
    // 0x19ac04: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19ac04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_19ac08:
    // 0x19ac08: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x19ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_19ac0c:
    // 0x19ac0c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x19ac0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_19ac10:
    // 0x19ac10: 0x60f809  jalr        $v1
label_19ac14:
    if (ctx->pc == 0x19AC14u) {
        ctx->pc = 0x19AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC10u;
        // 0x19ac14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC18u;
        goto label_19ac18;
    }
    ctx->pc = 0x19AC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19AC18u);
        ctx->pc = 0x19AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC10u;
        // 0x19ac14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC10u, 0x19AC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AC18u;
label_19ac18:
    // 0x19ac18: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x19ac18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19ac1c:
    // 0x19ac1c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x19ac1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19ac20:
    // 0x19ac20: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x19ac20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19ac24:
    // 0x19ac24: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x19ac24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19ac28:
    // 0x19ac28: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x19ac28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19ac2c:
    // 0x19ac2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19ac2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19ac30:
    // 0x19ac30: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x19ac30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19ac34:
    // 0x19ac34: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x19ac34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19ac38:
    // 0x19ac38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ac38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ac3c:
    // 0x19ac3c: 0x3e00008  jr          $ra
label_19ac40:
    if (ctx->pc == 0x19AC40u) {
        ctx->pc = 0x19AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC3Cu;
        // 0x19ac40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC44u;
        goto label_19ac44;
    }
    ctx->pc = 0x19AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC3Cu;
        // 0x19ac40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC44u;
label_19ac44:
    // 0x19ac44: 0x0  nop
    ctx->pc = 0x19ac44u;
    // NOP
    ctx->pc = 0x19ac48u;
}
